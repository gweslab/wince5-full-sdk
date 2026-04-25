//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft end-user
// license agreement (EULA) under which you licensed this SOFTWARE PRODUCT.
// If you did not accept the terms of the EULA, you are not authorized to use
// this source code. For a copy of the EULA, please see the LICENSE.RTF on your
// install media.
//
#ifndef _MP_PS_PACKETS_MANAGER_H_

#define _MP_PS_PACKETS_MANAGER_H_

//
//  Misc definitions required by nativemp & the hw components.
//


typedef struct DOT11_TIM_ELEMENT {
    DOT11_INFO_ELEMENT;
    UCHAR       DTIMCount;
    UCHAR       DTIMPeriod;
    UCHAR       BitmapControl;
    UCHAR       VirtualBitmap[251];
} DOT11_TIM_ELEMENT, *PDOT11_TIM_ELEMENT;

#ifndef UNDER_CE
#include "Mp_PacketQueue.h"
#else
//
//  Mp_PacketQueue.h is merged into this file.
//
typedef struct _QUEUE_ENTRY
{
    struct _QUEUE_ENTRY *Next;
} QUEUE_ENTRY, *PQUEUE_ENTRY;

typedef struct _MP_PACKET_QUEUE
{
    PQUEUE_ENTRY        Head;
    PQUEUE_ENTRY        Tail;
    ULONG               Count;
} MP_PACKET_QUEUE, *PMP_PACKET_QUEUE;

#define MP_GET_NDIS_PACKET_FROM_QUEUE_ENTRY(_QueueEntry)    \
    (PNDIS_PACKET) CONTAINING_RECORD(_QueueEntry, NDIS_PACKET, MiniportReserved)



VOID
MpInitPacketQueue(
    PMP_PACKET_QUEUE pMpPacketQueue
    );

VOID
MpDeinitPacketQueue(
    PMP_PACKET_QUEUE pMpPacketQueue
    );

VOID
MpPacketQueueEnqueue(
    PMP_PACKET_QUEUE pMpPacketQueue,
    PNDIS_PACKET pNdisPacket
    );

VOID
MpPacketQueuePriority(
    PMP_PACKET_QUEUE    pPacketQueue,
    PNDIS_PACKET        pPacket
    );

PNDIS_PACKET
MpPacketQueueDequeue(
    PMP_PACKET_QUEUE pMpPacketQueue
    );

BOOL
MpPacketQueueIsEmpty(
    PMP_PACKET_QUEUE pMpPacketQueue
    );

ULONG
MpPacketQueueDepth(
    PMP_PACKET_QUEUE    pMpPacketQueue
    );

#endif

/*
 * The number of ticks, in units of CheckForHang ticks, after which
 * we assume that the PS queue will not receive any any packets (most
 * likely because disassociation or station having moved away).
 */
#define MP_PS_QUEUE_INACTIVITY_THRESHOLD        30

//
// Forward declaration
//
typedef struct _MP_PS_PACKET_QUEUE      MP_PS_PACKET_QUEUE, *PMP_PS_PACKET_QUEUE;


typedef struct _MP_ATIM_TCB
{
    /** Pointer to the next ATIM Tcb in the list */
    LIST_ENTRY                  Next;

    /** The PS Queue this Tcb is associated with */
    PMP_PS_PACKET_QUEUE         PSPacketQueue;
    
} MP_ATIM_TCB, *PMP_ATIM_TCB;


typedef struct _MP_PS_PACKET_QUEUE
{
    /** Pointer to the next PS packet queue in the chain */
    LIST_ENTRY                      Next;

    /** The PACKET_QUEUE to hold the packets in */
    MP_PACKET_QUEUE                 PacketQueue;

    /** The spin lock to synchronize operations on PacketQueue */
    NDIS_SPIN_LOCK                  QueueLock;

    /*
     * The number of packets that have been sent but not yet completed.
     * Packets buffered for sleeping stations cannot be removed
     * from the queue until we have been send completed.
     */
    ULONG                           PendingSendsCount;

    /** MAC address of the destination for which this queue buffers packets */
    DOT11_MAC_ADDRESS               PeerMacAddress;

    /** The Tcb that is handed to the hardware when we want an ATIM transmitted */
    MP_ATIM_TCB                     ATIMTcb;

    /** The number of ticks for which this queue has seen no activity */
    LONG                            InactivityTickCount;

    /** Set if an ATIM packet has been sent out for this queue */
    BOOLEAN                         ATIMTransmitted;

    /** The association ID for which this queue holds packets */
    USHORT                          AssociationID;
} MP_PS_PACKET_QUEUE, *PMP_PS_PACKET_QUEUE;



typedef struct _MP_PS_PACKETS_MANAGER
{
    /** The list head for the PS Packet Queue list */
    LIST_ENTRY                      PacketQueueListHead;

    /*
     * The total number of Packet Queues we are maintaining for sleeping stations.
     * This number will be atleast one always, since there is always a default
     * queue for multicast and broadcast packets.
     */
    ULONG                           PacketsManagerDepth;

    /*
     * The Packet Queue to store multicast and broadcast packets.
     * The Association ID of such a queue is zero
     */
    PMP_PS_PACKET_QUEUE             AssociationZeroPacketQueue;
    

    /** Pointer to the adapter object for this miniport */
    PADAPTER                        Adapter;

    /** A read/write lock to synchronize access to list of queues */
    NDIS_RW_LOCK                    PacketQueuesListLock;

    /*
     * The total number of packets currently buffered by the PSPacketsManager 
     * This does NOT include multicast or broadcast traffic
     */
    ULONG                           TotalBufferedUnicastPackets;
    
    /*
     * The list of ATIM packets that have been submitted to the hardware
     * but have not been completed as yet
     */
    LIST_ENTRY                      AtimTcbList;

    /** Spin Lock to synchronize insert/delete from AtimTcbList */
    NDIS_SPIN_LOCK                  AtimTcbListLock;
} MP_PS_PACKETS_MANAGER, *PMP_PS_PACKETS_MANAGER;


#define     MP_ACQUIRE_ATIM_TCB_LIST_LOCK(_PSPacketsManager, _DispatchLevel)    \
    MP_ACQUIRE_SPIN_LOCK(&_PSPacketsManager->AtimTcbListLock, _DispatchLevel)
#define     MP_RELEASE_ATIM_TCB_LIST_LOCK(_PSPacketsManager, _DispatchLevel)    \
    MP_RELEASE_SPIN_LOCK(&_PSPacketsManager->AtimTcbListLock, _DispatchLevel)    


#define MP_INCREMENT_BUFFERED_UNICAST_PACKETS_COUNT(_PSPacketsManager)      \
    NdisInterlockedIncrement((PLONG)&(_PSPacketsManager)->TotalBufferedUnicastPackets)
#define MP_DECREMENT_BUFFERED_UNICAST_PACKETS_COUNT(_PSPacketsManager)      \
    NdisInterlockedDecrement((PLONG)&(_PSPacketsManager)->TotalBufferedUnicastPackets)
#define MP_SUBRTRACT_BUFFERED_UNICAST_PACKETS_COUNT(_PSPacketsManager, _Val)      \
    InterlockedExchangeAdd((PLONG)&(_PSPacketsManager)->TotalBufferedUnicastPackets, (((LONG)_Val) * -1))


NDIS_STATUS
MpPSPacketsManagerInitialize(
    IN  PMP_PS_PACKETS_MANAGER          pPSPacketManager,
    IN  PADAPTER                        pAdapter
    );

VOID
MpPSPacketsManagerTerminate(
    IN  PMP_PS_PACKETS_MANAGER          pPSPacketManager
    );

PMP_PS_PACKET_QUEUE
MpPSPMAllocatePSPacketsQueue(
    IN  PMP_PS_PACKETS_MANAGER  pPSPacketManager,
    IN  USHORT                  uAssociationId
    );

VOID
MpPSPMFreePSPacketsQueue(
    IN  PMP_PS_PACKET_QUEUE     pPSPacketQueue
    );

NDIS_STATUS
MpPSPacketsManagerAddQueue(
    IN  PMP_PS_PACKETS_MANAGER          pPSPacketManager,
    IN  USHORT                          uAssociationId,
    OUT PMP_PS_PACKET_QUEUE*            ppPSPacketQueue
    );

VOID
MpPSPacketsManagerRemoveQueueByAid(
    IN  PMP_PS_PACKETS_MANAGER          pPSPacketManager,
    IN  USHORT                          uAssociationId
    );

VOID
MpPSPacketsManagerRemoveQueueByMacAddress(
    IN  PMP_PS_PACKETS_MANAGER          pPSPacketManager,
    IN  PDOT11_MAC_ADDRESS              pDot11MacAddress
    );

NDIS_STATUS
MpPSPacketsManagerBufferPacket(
    IN  PMP_PS_PACKETS_MANAGER          pPSPacketManager,
    IN  PNDIS_PACKET                    pNdisPacket,
    IN  PDOT11_SEND_EXTENSION_INFO      pDot11SendExtensionInfo,
    IN  ULONG                           uPSLifetime 
    );

VOID
MpPSPMBufferPacketInQueue(
    IN  PMP_PS_PACKETS_MANAGER          pPSPacketManager,
    IN  PMP_PS_PACKET_QUEUE             pPSPacketQueue,
    IN  PNDIS_PACKET                    pNdisPacket,
    IN  ULONG                           uPSLifeTime
    );

VOID
MpPSPMFlushQueue(
    IN  PMP_PS_PACKETS_MANAGER          pPSPacketManager,
    IN  PMP_PS_PACKET_QUEUE             pPSPacketQueue
    );

VOID
MpPSPacketsManagerFlushAllQueues(
    PMP_PS_PACKETS_MANAGER      pPSPacketsManager
    );

PMP_PS_PACKET_QUEUE
MpPSPMGetPacketQueueByAid(
    IN  PMP_PS_PACKETS_MANAGER          pPSPacketManager,
    IN  USHORT                          uAssociationId
    );

PMP_PS_PACKET_QUEUE
MpPSPMGetPacketQueueByMacAddress(
    IN  PMP_PS_PACKETS_MANAGER          pPSPacketManager,
    IN  DOT11_MAC_ADDRESS               Dot11MacAddress
    );

VOID
MpPSPacketsManagerDropExpiredPackets(
    IN  PMP_PS_PACKETS_MANAGER      pPSPacketsManager,
    IN  BOOLEAN                     DispatchLevel
    );

NDIS_STATUS
MpPSPacketsManagerHandlePSPollPacket(
    IN  PADAPTER                        pAdapter,
    IN  PDOT11_FRAGMENT_MAC_HEADER      pFragmentHdr,
    IN  USHORT                          AssociationId,
    IN  BOOLEAN                         DispatchLevel
    );

VOID
MpPSPacketsManagerSendComplete(
    IN  PADAPTER        pAdapter,
    IN  PMPTCB          pTcb,
    IN  NDIS_STATUS     PacketCompletionStatus,
    IN  BOOLEAN         DispatchLevel
    );

VOID
MpPSPacketsManagerSTASendComplete(
    IN  PADAPTER        pAdapter,
    IN  PMPTCB          pTcb,
    IN  NDIS_STATUS     PacketCompletionStatus
    );

UCHAR
MpGetTimElement(
    IN  PADAPTER                    pAdapter,
    OUT PDOT11_TIM_ELEMENT          pDot11InfoElement
    );

VOID
MpDTIMCounterExpired(
    IN  PADAPTER                    pAdapter,
    IN  BOOL                        bProcessDeffered
    );

VOID
MpATIMPacketSendComplete(
    IN  PADAPTER        pAdapter,
    IN  NDIS_STATUS     PacketCompletionStatus,
    IN  BOOLEAN         bDispatchLevel
    );

VOID
MpCheckForPSStateChange(
    IN  PADAPTER    pAdapter,
    IN  PMPRFD      pMpRfd,
    IN  PDOT11_FRAGMENT_MAC_HEADER  pFragmentHdr
    );

ULONG
MpGetBufferedPSPacketCount(
    IN  PADAPTER    pAdapter
    );

    
#endif  // _MP_PS_PACKETS_MANAGER_H_
