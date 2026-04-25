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

#ifndef _MP_DOT_11_H

#define _MP_DOT_11_H

#if USE_SAMPLE_PACKET_BUFFERING_IMPLEMENTATION
#include "Mp_PSPacketsManager.h"
#endif  // USE_SAMPLE_PACKET_BUFFERING_IMPLEMENTATION


#define MP_MAJOR_NDIS_VERSION       5
#define MP_MINOR_NDIS_VERSION       1

/** Defines Major version for the OID_DOT11_OPERATION_MODE_CAPABILITY */
#define MP_OPERATION_MODE_CAPABILITY_MAJOR_VERSION              1

/** Defines Minor version for the OID_DOT11_OPERATION_MODE_CAPABILITY */
#define MP_OPERATION_MODE_CAPABILITY_MINOR_VERSION              0

/**
 * This OID specifies the NDIS version in use by the miniport driver. 
 * The high byte is the major version. The low byte is the minor version.
 */
#define MP_NDIS_DRIVER_VERSION            ((MP_MAJOR_NDIS_VERSION << 8) + (MP_MINOR_NDIS_VERSION))

/** NDIS_MEDIUM of the driver */
#ifndef UNDER_CE
#define MP_MEDIA_TYPE                NdisMediumNative802_11
#else
//
//  [TBD] check with desktop why this medium has changed since McKendric's agreement!
//
#define MP_MEDIA_TYPE                   NdisMedium802_11
#endif

/** Physical medium of the driver */
#define MP_PHYSICAL_MEDIA_TYPE      NdisPhysicalMediumNative802_11

/**
 * The name of the company or any appropriate Vendor Description
 */
#define MP_VENDOR_DESC                          "XXX"

/**
 * Highest byte is the NIC byte plus three vendor bytes, they are normally
 * obtained from the NIC
 */
#define MP_VENDOR_ID                 0x00FFFFFF

/**
 * This tag identifies the driver uniquely to the OS. Helps track memory owner and
 * leaks when going through the memory pools
 */
#define MP_MEMORY_TAG                'MltR'

#define MP_802_11_MAX_FRAME_SIZE                DOT11_MAX_PDU_SIZE
#define MP_802_11_MIN_FRAME_SIZE                DOT11_MIN_PDU_SIZE
#define MP_802_11_SHORT_HEADER_SIZE             sizeof(DOT11_FRAGMENT_MAC_HEADER)
#define MP_802_11_LONG_HEADER_SIZE              sizeof(DOT11_DATA_LONG_HEADER)
#define MP_802_11_MAX_FRAGMENTS_PER_PACKET     DOT11_MAX_NUM_OF_FRAGMENTS
#define MP_802_11_MAXIMUM_LOOKAHEAD                                             \
                (DOT11_MIN_PDU_SIZE - (                                     \
                            sizeof(DOT11_DATA_LONG_HEADER) + 12))

/** The maximum number of packets we will attempt to reassemble in 
  * parallel before dropping the oldest one */
#define MP_MAX_REASSEMBLY_LINE_SIZE              32

/*
 * The number of Reassembly Rfd's that are currently in use before
 * we start expiring old receive Rfd's if they have exceeded the
 * RxLifeTime set by the OS.
 */ 
#define MP_REASSEMBLY_LINE_LOW_RESOURCES_THRESHOLD   30

/** Countdown before which the Reassembly Cleanup algorithm to kick in */
#define MP_REASSEMBLY_CLEANUP_COUNTDOWN_VALUE         250

/*
 * The Check for Hang interval in seconds. NDIS will call into the driver every time
 * this interval expires. Specifying it as zero makes NDIS default to a two second
 * interval. Think your reasons carefully before specifying any interval except default.
 */
#define MP_CHECK_FOR_HANG_INTERVAL      0

/*
 * The amount of time in units of MP_CHECK_FOR_HANG_INTERVAL for which we will sample
 * the Rfd list to discover if it has been underutilized and needs to be shrunk
 */
#define MP_RFD_LIST_SAMPLING_PERIOD     5


/*
 * If the under utilization of the Rfd list exceeds this threshold, we will shrink the
 * Rfd list. This threshold is described in percentage of the current List Size. Note that
 * the Rfd List size will not shrink beyond the initial Rfd list size we started with.
 */ 
#define MP_RFD_LIST_UNDER_UTILIZATION_THRESHOLD     40

/*
 * The number of tick intervals in unit of CheckForHang Interval for which the sends have
 * to be stalled before we will ask Ndis to reset the NIC. Since the algorithm is an approximate
 * one, and not synchronized, the actual period might take an extra tick. This, however, should
 * not cause any issues as long as the value is not too big.
 */
#define MP_SENDS_HAVE_STALLED_PERIOD                  5


/*
 * The maximum number of attempts that will be made to reset a NIC that is not
 * functioning properly. After this threshold of attempts is exceeded, a removal
 * of the miniport is requested from NDIS
 */
#define MP_RESET_ATTEMPTS_THRESHOLD                   5

typedef enum _MP_DOT11_STATE {
    INIT_STATE = 1,
    OP_STATE
} MP_DOT11_STATE, *PMP_DOT11_STATE;


typedef enum _MP_DOT11_RUNNING_MODE {
    RUNNING_MODE_STA_INFRASTRUCTURE = 1,
    RUNNING_MODE_STA_ADHOC,
    RUNNING_MODE_AP
} MP_DOT11_RUNNING_MODE, *PMP_DOT11_RUNNING_MODE;


/**
 * This is list of all the OIDS (NDIS and DOT11) supported by this driver
 * {VENDOR} Add and remove from Oids from this list based on your drivers capabilities.
 */
extern NDIS_OID MPSupportedOids[];

#ifndef UNDER_CE
#include "Mp_PacketQueue.h"
#endif

/**
 * This structure keeps track of various statistics for the NIC.
 * Add any statistics that you are interested in keep here.
 * Please note that not all statistics are being tracked today.
 * This Data structure is easily extended and vendor should track
 * only the statistics it needs.
 * \warning Make sure that adding of new members to this 
 * data structure does not unalign it. This DS is embedded in
 * the ADAPTER and may cause alignment issue there.
 *
 */
typedef struct _MP_STATS
{
    /** The number of packets the miniport has transmitted. Retry not included */
    ULONG64                     TotalTransmits;
    
    /** The number of frames successfully transmitted */
    ULONG64                     TotalGoodTransmits;

    /** The number of frames successfully received */
    ULONG64                     TotalGoodReceives;

    /** The total number of packets dropped because of reassembly failure */
    ULONG64                     ReassemblyFailedReceives;

    /** The total number of data packets that failed transmission */
    ULONG                       TotalBadTransmits;

    /** The total number of packets that failed recevie */
    ULONG                       TotalBadReceives;

    /** The total number of packets not delivered as their lifetime expired */
    ULONG                       ExpiredPSLifeTimeCount;

    /** The number of duplicate packets received by the driver */
    ULONG                       DuplicatesReceivedCount;    
} MP_STATS, *PMP_STATS;


/**
 * This structure describes a Transmit Control Block (TCB) that is used
 * to send a packet out on the wire. MPTCB refers to the miniport specific
 * structure that setups the packet for the hardware to DMA and send.
 * 
 * \sa MP_COALESCE_BUFFER
 */
typedef struct _MPTCB
{
    /** Pointer to the next TCB in the circular list */
    struct _MPTCB*             Next;

    /** Special send/ownership flags. Careful when messing with these */
    USHORT                      SendFlags;
    
    /** Some status information like TCB is in use etc. */
    USHORT                      Flags;
    
    /** The associated TCB that contains hardware specific information */
    PNICTCB                     NicTcb;

    /** The Packet that this Tcb is being used to send */
    PNDIS_PACKET                Packet;

    /** The list of scatter gather elements needed by the hardware for DMA */
    PSCATTER_GATHER_LIST        SGList;

    /** The count of number of Physical Buffers this packet is mapped over */
    UINT                        PhysicalBufCount;

    /** The number of NDIS_BUFFERs this packet is mapped over */
    UINT                        BufferCount;

    /** Pointer to the first buffer in this packet */
    PNDIS_BUFFER                FirstBuffer;

    /** Total length of the packet in bytes */
    UINT                        PacketLength;

#ifdef  USE_SAMPLE_PACKET_BUFFERING_IMPLEMENTATION

    /** The PSPacketQueue this packet came from. Needed for 802.11 Power Mgmt */
    PMP_PS_PACKET_QUEUE         PSPacketQueue;

#endif  // USE_SAMPLE_PACKET_BUFFERING_IMPLEMENTATION

    /** The 802.11 specific Send Information */
    PDOT11_SEND_EXTENSION_INFO  Dot11SendExtensionInfo;

    /** Length in bytes of the Dot11SendExtensionInfo data structure */
    UINT                        SendExtensionInfoSize;
} MPTCB, *PMPTCB;


typedef struct _MPRFD
{
    union _Link
    {
        /** Link to place the Rfd in an SList */
        SLIST_ENTRY                 SListLink;

        /** Link to place the Rfd in an LIST_ENTRY */
        LIST_ENTRY                  ListEntryLink;
    } Link;

    /** The NDIS_PACKET that will be indicated up for an 802.11 frame received */
    PNDIS_PACKET                NdisPacket;

    /*
     * Flags describing different state values of this RFD 
     * \warning Any fields that should be zeroed out when a packet is returned
     * should be placed after this field. The two fields above remain unchanged.
     * All the rest of the fields are zeroed out in MpReInitializeRfd.
     */
    ULONG                       Flags;

    /** The timestamp at which reassembly started */
    ULONGLONG                   TimeStamp;

    /** Index in the Reassembly line where this Rfd is present */
    USHORT                      ReassemblyLinePosition;

    /** The sequence number for this 802.11 frame */
    USHORT                      SequenceNumber;

    /** The total number of fragments that should be in this packet */
    USHORT                      TotalFragmentCount;

    /** The number of fragments currently received for this Rfd */
    USHORT                      FragmentCount;

    /** The NIC_FRAGMENTs to hold each fragment for this Rfd in */
    PNIC_FRAGMENT               Fragments[MP_802_11_MAX_FRAGMENTS_PER_PACKET];

    /*
     * The Recv Extension Info Data Structure. This is a variable
     * sized field so it MUST be the last in this structure 
     */
    DOT11_RECV_EXTENSION_INFO  Dot11RecvExtensionInfo;
} MPRFD, *PMPRFD;


/**
 * MP_FRAGMENT represents a single fragment that can be received by the NIC
 */
typedef NDIS_BUFFER _MP_FRAGMENT, MP_FRAGMENT, *PMP_FRAGMENT;


/**
 * This structure describes an Adapter that the miniport driver is working with
 * 
 */
typedef struct _ADAPTER
{
    /** Link multiple adapters using this Entry */
    LIST_ENTRY                          Link;

    /** 
     * The handle by which NDIS recognizes this adapter
     * This handle needs to be passed in for many of the calls made to NDIS
     */
    NDIS_HANDLE                         MiniportAdapterHandle;

    /** 
     * This is the hardware specific data structure.
     * Vendors should implement this to work with their proprietary hardware
     */
    PNIC                                pNic;

    /** 
     * Miscellaneous flags used for a variety of purposes.
     * \sa AdapterFlags
     */
    ULONG                               Flags;

    /**
     * Flags that contain the current status of the adapter 
     * \sa AdapterStatusFlags
     */
    ULONG                               Status;
    
    /** Reference count of operations currently executing on the miniport */
    ULONG                               RefCount;

    /** This event is set when miniport halt can take place */
    NDIS_EVENT                          HaltWaitEvent;
    
    /** The number of ticks that occurs for this machine before a TU expires. */
    ULONG                               NumTicksPer100TU;
    
    /** The current Operational mode of the miniport */
    ULONG                               OperationMode;
    
    /** The current state of the miniport (INIT or OPERATIONAL) */
    MP_DOT11_STATE                      State;

    /** The 802.11 mode the miniport is operating under (AP, STA INFRA, STA ADHOC) */
    MP_DOT11_RUNNING_MODE               Dot11RunningMode;
    
    /** Contains various statistics for the adapter */
    MP_STATS;

    /** This value is set when StartRequest is called */
    BOOL                                StartRequestCalled;
    
    /** The Power State the device is currently in */
    NDIS_DEVICE_POWER_STATE             DevicePowerState;  

    /** The current link speed of the adapter */
    ULONG                               LinkSpeed;

    /** The current look ahead for the adapter */
    ULONG                               LookAhead;

    /** The current packet filter set on the miniport */
    ULONG                               PacketFilter;

    /** The Permanent MAC address of the adapter */
    UCHAR                               PermanentAddress[ETH_LENGTH_OF_ADDRESS];

    /** The current MAC address of the adapter */
    UCHAR                               CurrentAddress[ETH_LENGTH_OF_ADDRESS];

    /** Spin lock to synchronise access to the TCBs */
    NDIS_SPIN_LOCK                      SendLock;

    /** Total number of TCB that have been allocated */
    ULONG                               TotalTcb;

    /** The number of TCB currently available for sending */
    ULONG                               NumAvailableTcb;

    /** The list of TCB preallocated for this adapter */
    PMPTCB                              TcbList;

    /** Pointer to a free TCB that is free and can be used for a send */
    PMPTCB                              FreeTcb;

    /** Pointer to the next TCB to be sent to the hardware. Needed to maintain Tx order */
    PMPTCB                              NextTcbToSend;

    /** Pointer to the next TCB we expect to be SendCompleted. It is protected by the SendLock */
    PMPTCB                              NextTcbToComplete;

    /** Data structure to queue packets to be transmitted in. We will queue packets
        when we are running low on TCBs */
    struct _MP_PACKET_QUEUE            TxQueue;

    /** Number of thread currently active in the send path */
    ULONG                               NumActiveSenders;

#ifdef  USE_SAMPLE_PACKET_BUFFERING_IMPLEMENTATION

    /** Queues to hold packets for associated stations in PS mode */
    struct _MP_PS_PACKETS_MANAGER       PSPacketManager;

    /*
     * Hold the TIM element information. TIM element contained in beacon
     * is extracted from this data structure
     */
    DOT11_TIM_ELEMENT                   ElementTIM;

    /** Set if we have to handle the DTIM packet delivery in the InterruptHandle routine */
    BOOL                                HandleDTIMDeferred;

    /** The highest Association ID for which a bit is set in the virtual bitmap */
    USHORT                              HighestElementTIMAssocationID;

    /** The lowest Association ID for which a bit is set in the virtual bitmap */
    USHORT                              LowestElementTIMAssocationID;
    
#endif  // USE_SAMPLE_PACKET_BUFFERING_IMPLEMENTATION
    /*
     * The total number of Rfd that should be allocated by this miniport.
     * This is the value obtained from Registry
     */
    ULONG                               TotalRfd;

    /** The maximum number of Rfd we should allow the pools to grow to */
    ULONG                               MaxRfd;

    /** The minimum number of Rfd we should allow the pools to grow to */
    ULONG                               MinRfd;    

    /**
     * The count of Rfd's that have actually been allocated by the miniport.
     * When the Rfd pool grows, this number will reflect that. However, this
     * number will never exceed MaxRfd 
     */
    ULONG                               TotalRfdAllocated;

    /** The Number of Rfd currently available for indicating packets */
    ULONG                               NumAvailableRfd;

    /** The list in which free Rfd's are maintained */
    SLIST_HEADER                        RfdFreeList;
    
    /** The lookaside list from which Receive Rfd will be allocated. Allocation
    can be made on the fly from this list if load is heavy */
    PNPAGED_LOOKASIDE_LIST              RfdLookAsideList;
    
    /** The Pool for allocating NDIS_PACKET to be receive indicated */
    NDIS_HANDLE                         ReceivePacketPool;
    
    /** The Pool for allocating NDIS_BUFFER to be placed in the NDIS_PACKET receive indicated */
    NDIS_HANDLE                         ReceiveBufferPool;

    /** The total number of Rfd's in the Reassembly line */
    ULONG                               TotalRfdInReassembly;

    /** An array to hold Rfd's that are currently in Reassembly */
    PMPRFD                              ReassemblyLine[MP_MAX_REASSEMBLY_LINE_SIZE];

    /** This is the Reassembly Rfd for which we most recently received a fragment */
    PMPRFD                              MRUReassemblyRfd;
    
    /*
     * Count down to when we will run through the ReassemblyLine and clear
     * out any expired Rfd's. This is a periodic cleanup mechanism. The
     * unit is the number of interrupts in which we have indicated up
     * frame(s) to the OS
     */
    ULONG                               ReassemblyLineCleanupCountdown;
    
    /** The max amount of time in TUs after which reassembly is abandoned */
    ULONG                               MaxRxLifeTime;
    
    /** This event is set when all packets received and indicated have returned */
    NDIS_EVENT                          AllReceivesHaveReturnedEvent;
    
    /** The number of 2 second intervals that have passed since sampling of Rfd list started */
    ULONG                               RfdListSampleTicks;

    /** The sum of number of Rfd that have been found free in each sampling */
    ULONG                               NumRfdNotUtilized;

    /** The number of packets submitted to hardware but not yet completed. */
    ULONG                               PendingSends;

    /** The number of packets recevied that have not yet been indicated to NDIS */
    ULONG                               PendingReceives;

    /** The number of Good Transmits that Check For Hang uses to determine if send has stalled */
    ULONG64                             TotalTransmitsSnapShot;

    /** The number of Check For Hang intervals that have passed with send stalled */
    ULONG                               NumStalledSendTicks;

    /** When a reset operation pends, this work item will be used to complete it asynchrously */
    NDIS_WORK_ITEM                      ResetWorkItem;

    /** The number of attempts that have been made to reset this NIC */
    ULONG                               NumResetAttempts;

    /** The Reset type requested. Needs to be saved when reset operation pends */
    DOT11_RESET_TYPE                    ResetType;

    /** The OID that has been pended */
    NDIS_OID                            PendedOid;

    /** Data buffer for any OID that may be pended by the driver */
    PVOID                               PendedOidBuffer;

    ULONG                               PendedOidBufferLength;

    /** Interrupt context registered with NDIS */
    NDIS_MINIPORT_INTERRUPT             Interrupt;

    /** The Max MPDU length cached for quick access */
    ULONG                               uMPDUMaxLength;
} ADAPTER, *PADAPTER;


#define MP_OFFSET(field)   ((UINT)FIELD_OFFSET(ADAPTER,field))
#define MP_SIZE(field)     sizeof(((PADAPTER)0)->field)

typedef struct _MP_REG_ENTRY
{
    NDIS_STRING RegName;                // variable name text
    UINT        FieldOffset;            // offset to MP_ADAPTER field
    UINT        FieldSize;              // size (in bytes) of the field
    UINT        Default;                // default value to use
    UINT        Min;                    // minimum value allowed
    UINT        Max;                    // maximum value allowed
} MP_REG_ENTRY, *PMP_REG_ENTRY;


ULONG
FASTCALL
MpInterlockedSetClearBits (
    IN OUT PULONG Flags,
    IN ULONG sFlag,
    IN ULONG cFlag
    );


LONG
FASTCALL
MpInterlockedMod (
    IN PLONG    Value,
    IN LONG     Divisor
    );


#define MP_RUNNING_IN_STA_INFRA_MODE(_Adapter)   \
    (_Adapter->Dot11RunningMode == RUNNING_MODE_STA_INFRASTRUCTURE)

#define MP_RUNNING_IN_STA_ADHOC_MODE(_Adapter)   \
    (_Adapter->Dot11RunningMode == RUNNING_MODE_STA_ADHOC)

#define MP_RUNNING_IN_AP_MODE(_Adapter)   \
    (_Adapter->Dot11RunningMode == RUNNING_MODE_AP)


//
// These macros verifies the operational mode and current state of the miniport.
//
#define MP_VERIFY_MODE_AND_STATE(_Adapter, _Mode, _State)     \
    ((_Adapter->OperationMode == _Mode) && (_Adapter->State == _State))

#define MP_VERIFY_MODE(_Adapter, _Mode)     \
    ((_Adapter->OperationMode == _Mode))

#define MP_VERIFY_STATE(_Adapter, _State)     \
    ((_Adapter->State == _State))



/**
 * \defgroup TCB_Macros Various macros to access information within MPTCB.
 */
/*@{*/   // TCB_Macros

/** The List of Scatter Gather Elements of the packet described by MpTcb */
#define     MP_TCB_SCATTER_GATHER_LIST(MpTcb)       (MpTcb)->SGList

/** The number of Physical Buffers in the packet described by MpTcb */
#define     MP_TCB_PHYSICAL_BUFFER_COUNT(MpTcb)     (MpTcb)->PhysicalBufCount

/** The number of NDIS_BUFFERs in the packet described by MpTcb */
#define     MP_TCB_BUFFER_COUNT(MpTcb)                (MpTcb)->BufferCount

/** Pointer to the first buffer in the packet described by MpTcb */
#define     MP_TCB_FIRST_BUFFER(MpTcb)                (MpTcb)->FirstBuffer

/** Total length in bytes of the packet described by MpTcb */
#define     MP_TCB_LENGTH(MpTcb)                       (MpTcb)->PacketLength

/** The 802.11 specific Send Information for this packet placed by Native WiFi IM driver */
#define     MP_TCB_SEND_EXTENSION_INFO(MpTcb)        (MpTcb)->Dot11SendExtensionInfo

/** Length in bytes of the Dot11SendExtensionInfo data structure returned by MP_TCB_SEND_EXTENSION_INFO macro*/
#define     MP_TCB_SEND_EXTENSION_INFO_SIZE(MpTcb)   (MpTcb)->SendExtensionInfoSize

/*@}*/   // TCB_Macros


//
// Various flags used by the miniport
//

/** The Tcb is free and can used to transmit a packet */
#define     MP_TCB_IS_FREE                  0x00000000
/** This Tcb is reserved for a packet and should not be used for any other packet */
#define     MP_TCB_IS_RESERVED              0x00000001
/** The Tcb is ready for sending. All required info like Scatter Gather etc. is done */
#define     MP_TCB_IS_READY_FOR_SEND       0x00000002
/** This Tcb has been passed to the hardware for transmission */
#define     MP_TCB_IS_IN_SEND               0x00000004
/** This Tcb has a thread owner that will transmit it when the turn comes */
#define     MP_TCB_HAS_SENDER               0x00000005

/** This Tcb was buffered by an AP for a sleeping station */
#define     MP_TCB_AP_BUFFERED_PACKET      0x00000001
/** This Tcb was buffered by a STA for another sleeping STA */
#define     MP_TCB_STA_BUFFERED_PACKET     0x00000002


/**
 * \defgroup RFD_Macros Various macros to access information within an RFD.
 */
/*@{*/   // RFD_Macros

/** Maximum size of the DOT11_RECV_EXTENSION_INFO */
#define MP_RECV_EXTENSION_MAX_SIZE           \
    (sizeof(DOT11_RECV_EXTENSION_INFO) + ((MP_802_11_MAX_FRAGMENTS_PER_PACKET - 1) * sizeof(PNDIS_PACKET)))

/** Maximum size that an RFD structure can be */
#define MP_RFD_MAX_SIZE  (sizeof(MPRFD) + ((MP_802_11_MAX_FRAGMENTS_PER_PACKET - 1) * sizeof(PNDIS_PACKET)))

/** Provides access to the Receive Extension Info for this Rfd */
#define MP_RFD_RECV_EXTENSION_INFO(_Rfd)        (&_Rfd->Dot11RecvExtensionInfo)

/**
 * This macro will add a fragment to the top-level NDIS_PACKET which will be
 * indicated to NDIS. This macro should only be called when there is only one
 * fragment in the frame or the NIC has reassembled the fragments into a single
 * fragment
 * \param _Rfd      The Rfd to which this fragment is to be added
 * \param _Frag     The Fragment to be set
 * \sa MP_ADD_FRAGMENT
 */
#define MP_SET_SINGLE_FRAGMENT(_Rfd, _Frag)       (NdisChainBufferAtBack(_Rfd->NdisPacket, _Frag))

/**
 * This macro is called to add a fragment to an RFD. Please note that this macro
 * should only be used for the case when there are more than one fragments in the
 * frame. This fragment will be added to the DOT11_RECV_EXTENSION_INFO embedded in
 * the RFD.
 * \param _Rfd      The Rfd to which this fragment is to be added
 * \param _Frag     The Fragment to be added
 * \sa MP_SET_FRAGMENT
 */
#define MP_ADD_FRAGMENT(_Rfd, _Frag)                MpAddFragmentToRecvExtension(_Rfd, _Frag)



/*@}*/   // RFD_Macros

/**
 * \defgroup RfdFlags These are the various values that the Flags field in MPRFD can take.
 */
/*@{*/   // RfdFlags

/** The Rfd is free and unused. It is available for indication of packets */
#define     MP_RFD_IS_FREE                  0x00000000
/** This Packet associated with this Rfd has been marked with NDIS_STATUS_RESOURCES */
#define     MP_RFD_LOW_RESOURCES           0x00000001
/** The Packet associated with this Rfd has been indicated to NDIS */
#define     MP_RFD_PACKET_INDICATED        0x00000002

/*@}*/   // RfdFlags

/*
 * When the number of Rfd available to the miniport falls below this
 * value, the miniport starts indicating low resources with packets indicated
 * to NDIS. At this point, the upper layer driver will copy the NdisPacket
 * indicated and return it immediately so that the next received packets can
 * be indicated using this Rfd. This helps avoid packet loss due to lack of
 * resources to indicate packets up in.
 */
#define     MP_RFD_LOW_RESOURCE_THRESHOLD       4

#define     MP_RFD_GROW_POOL_SIZE                1

/*
 * The maximum number of Rfd we will indicate to NDIS while handling
 * an interrupt. This prevents us from staying within a DPC for too
 * long and also helps avoid the need for dynamically allocating an array 
 */
#define     MP_MAX_RFD_TO_INDICATE_DURING_INTERRUPT_HANDLING     5


/*
 * Time in millisecond that MpResetWorkItem will wait for active senders to
 * finish in a loop. Tweak this sleep delay to suit the hardware. Example,
 * hardware with small latency for submitting a packet to the send unit should
 * try a smaller sleep delay
 */
#define     MP_RESET_WAIT_FOR_SENDERS_TO_COMPLETE               10

/*
 * Time in millisecond that MpResetWorkItem will wait for active senders to
 * finish in a loop before timing out. This is a checked version only feature
 * and when a time out occurs, the driver will break into the debugger
 */
#define     MP_RESET_WAIT_FOR_SENDERS_TO_COMPLETE_TIMEOUT      5000

/** Macro to test if the miniport is in low power state */
#define MP_IS_LOW_POWER_STATE(_PwrState)                       \
            ((_PwrState) > NdisDeviceStateD0)

/** Access the timestamp field of the packet in the MiniportReservedEx */
#define MP_TIMESTAMP_FIELD(_Packet)             \
    ((PLARGE_INTEGER) &((_Packet)->MiniportReservedEx[sizeof(PVOID)]))

/** Placed the time when packet will expire in the MiniportReservedEx field */
#define MP_TIMESTAMP_PACKET(_Packet, _LifeTime)         \
{                                                                           \
    DEBUGMSG (0,(TEXT("TimeStamp Packet[0x%x]\r\n"), _Packet));            \
    KeQueryTickCount(MP_TIMESTAMP_FIELD(_Packet));     \
    MP_TIMESTAMP_FIELD(_Packet)->QuadPart += _LifeTime;  \
}


/**
 * \defgroup AdapterStatusFlags These are the various states that the Adapter
 * can be in. These states are kept in the Adapter->Status field.
 */ 
/*@{*/   // AdapterStatusFlags

#define     MP_ADAPTER_RESET_IN_PROGRESS        0x00000001
#define     MP_ADAPTER_NO_CABLE                  0x00000002
#define     MP_ADAPTER_HARDWARE_ERROR           0x00000004
#define     MP_ADAPTER_REMOVE_IN_PROGRESS       0x00000008
#define     MP_ADAPTER_HALT_IN_PROGRESS         0x00000010
#define     MP_ADAPTER_NON_RECOVER_ERROR        0x00000020
#define     MP_ADAPTER_DOT11_RESET_IN_PROGRESS 0x00000040
#define     MP_ADAPTER_DOT11_SCAN_IN_PROGRESS  0x00000080
#define     MP_ADAPTER_SURPRISE_REMOVED         0x00000100
#define     MP_ADAPTER_PAUSE_SENDS               0x00000200

#define     MP_ADAPTER_CANNOT_SEND_MASK                 \
    (MP_ADAPTER_RESET_IN_PROGRESS | MP_ADAPTER_NO_CABLE | MP_ADAPTER_HARDWARE_ERROR |    \
     MP_ADAPTER_REMOVE_IN_PROGRESS | MP_ADAPTER_HALT_IN_PROGRESS | MP_ADAPTER_SURPRISE_REMOVED |  \
     MP_ADAPTER_NON_RECOVER_ERROR | MP_ADAPTER_DOT11_RESET_IN_PROGRESS)
     
/*@}*/   // AdapterStatusFlags

#define     MP_SET_STATUS_FLAG(_M, _F)                  RtlInterlockedSetBits(&((_M)->Status), (_F))
#define     MP_CLEAR_STATUS_FLAG(_M, _F)                RtlInterlockedClearBits(&((_M)->Status), (_F))
#define     MP_SET_CLEAR_STATUS_FLAG(_M, _SF, _CF)     MpInterlockedSetClearBits(&((_M)->Status), (_SF), (_CF))
#define     MP_TEST_STATUS_FLAG(_M, _F)                 (((_M)->Status & (_F)) != 0)
#define     MP_ADAPTER_CANNOT_SEND_PACKETS(_Adapter)  (_Adapter->Status & MP_ADAPTER_CANNOT_SEND_MASK)
#define     MP_ADAPTER_CAN_SEND_PACKETS(_Adapter)      !(MP_ADAPTER_CANNOT_SEND_PACKETS(_Adapter))

//
// Some helper MACROS for the Adapter
//
#define     MP_INCREMENT_REF(_pAdapter)                     NdisInterlockedIncrement((PLONG)&_pAdapter->RefCount)
#define     MP_DECREMENT_REF(_pAdapter)     \
{                                               \
    if (NdisInterlockedDecrement((PLONG)&_pAdapter->RefCount) == 0)       \
        NdisSetEvent(&_pAdapter->HaltWaitEvent);                            \
}    

#define     MP_INCREMENT_AVAILABLE_TCB(_pAdapter)          NdisInterlockedIncrement((PLONG)&_pAdapter->NumAvailableTcb)
#define     MP_DECREMENT_AVAILABLE_TCB(_pAdapter)          NdisInterlockedDecrement((PLONG)&_pAdapter->NumAvailableTcb)
#define     MP_INCREMENT_ACTIVE_SENDERS(_Adapter)        NdisInterlockedIncrement((PLONG)&_Adapter->NumActiveSenders)
#define     MP_DECREMENT_ACTIVE_SENDERS(_Adapter)        NdisInterlockedDecrement((PLONG)&_Adapter->NumActiveSenders)
#ifndef UNDER_CE
#define     MP_SEND_COMPLETE_PACKET(_Adapter, _NdisPacket, _NdisStatus) NdisMSendComplete(_Adapter->MiniportAdapterHandle, _NdisPacket, _NdisStatus)
#else
//  
//  CE version allows post-process of the packet before Nativemp calls NdisMSendComplete().
//
#define     MP_SEND_COMPLETE_PACKET(_Adapter, _NdisPacket, _NdisStatus)                         \
                Hw11PostProcessTxPacket(_NdisPacket);                                           \
                NdisMSendComplete(_Adapter->MiniportAdapterHandle, _NdisPacket, _NdisStatus);
#endif

#define     MP_INCREMENT_AVAILABLE_RFD(_pAdapter)          NdisInterlockedIncrement((PLONG)&_pAdapter->NumAvailableRfd)
#define     MP_DECREMENT_AVAILABLE_RFD(_pAdapter)          NdisInterlockedDecrement((PLONG)&_pAdapter->NumAvailableRfd)
#define     MP_ADD_TO_AVAILABLE_RFD(_pAdapter, NumToAdd)  InterlockedExchangeAdd((PLONG)&_pAdapter->NumAvailableRfd, NumToAdd);
#define     MP_INCREMENT_TOTAL_RFD_ALLOCATED(_pAdapter)   NdisInterlockedIncrement((PLONG)&_pAdapter->TotalRfdAllocated)
#define     MP_DECREMENT_TOTAL_RFD_ALLOCATED(_pAdapter)   NdisInterlockedDecrement((PLONG)&_pAdapter->TotalRfdAllocated)
#define     MP_ADD_TO_TOTAL_RFD_ALLOCATED(_pAdapter, NumToAdd)      InterlockedExchangeAdd((PLONG)&_pAdapter->TotalRfdAllocated, NumToAdd);

#define     MP_INCREMENT_PENDING_SENDS(_pAdapter)          NdisInterlockedIncrement((PLONG)&_pAdapter->PendingSends)
#define     MP_DECREMENT_PENDING_SENDS(_pAdapter)          NdisInterlockedDecrement((PLONG)&_pAdapter->PendingSends)

#define     MP_INCREMENT_PENDING_RECEIVES(_pAdapter)       NdisInterlockedIncrement((PLONG)&_pAdapter->PendingReceives)
#define     MP_DECREMENT_PENDING_RECEIVES(_pAdapter)       NdisInterlockedDecrement((PLONG)&_pAdapter->PendingReceives)
#define     MP_ADD_TO_PENDING_RECEIVES(_pAdapter, _Val)    InterlockedExchangeAdd((PLONG)&_pAdapter->PendingReceives, _Val)
#define     MP_SUBTRACT_FROM_PENDING_RECEIVES(_pAdapter, _Val)    InterlockedExchangeAdd((PLONG)&_pAdapter->PendingReceives, (_Val * -1))

#define     MP_INCREMENT_TOTAL_TRANSMITS(_Adapter)                _Adapter->TotalTransmits++
#define     MP_INCREMENT_TOTAL_GOOD_TRANSMITS(_Adapter)          _Adapter->TotalGoodTransmits++
#define     MP_INCREMENT_TOTAL_GOOD_RECEIVES(_Adapter)           _Adapter->TotalGoodReceives++
#define     MP_INCREMENT_DUPLICATE_PACKET_COUNT(_Adapter)       _Adapter->DuplicatesReceivedCount++
#define     MP_INCREMENT_REASSEMBLY_FAILED_COUNT(_Adapter)      _Adapter->ReassemblyFailedReceives++
#define     MP_INCREMENT_EXPIRED_PS_LIFETIME_COUNT(_Adapter)    _Adapter->ExpiredPSLifeTimeCount++
#define     MP_INCREMENT_TOTAL_BAD_TRANSMITS(_Adapter)           _Adapter->TotalBadTransmits++
#define     MP_INCREMENT_TOTAL_BAD_RECEIVES(_Adapter)            _Adapter->TotalBadReceives++
/*
#define     MP_INCREMENT_REASSEMBLY_FAILED_RECEIVES(_Adapter)   _Adapter->ReassemblyFailedReceives++;
*/

#define     MP_INTERLOCKED_INCREMENT_STATISTICS(_pUlongVal)      NdisInterlockedIncrement((PLONG)_pUlongVal)
#define     MP_INTERLOCKED_ADD_TO_STATISTICS(_pUlongVal, _Val)   InterlockedExchangeAdd((PLONG)_pUlongVal, _Val)
#define     MP_INTERLOCKED_INCREMENT_STATISTICS64(_pUlong64Val)     \
{                                                               \
    PLARGE_INTEGER      _pLargeInt = (PLARGE_INTEGER)_pUlong64Val; \
    if (NdisInterlockedIncrement(&_pLargeInt->LowPart) == 0)    \
    {                                                           \
        NdisInterlockedIncrement(&_pLargeInt->HighPart);        \
    }                                                           \
}

//
// MACROS to make code more readable
//
#define MP_ACQUIRE_SPIN_LOCK(_Lock, _bDispatchLevel)        \
{                                                           \
    if (_bDispatchLevel)            \
    {                                   \
        NdisDprAcquireSpinLock(_Lock);      \
    }                                       \
    else                                    \
    {                                        \
        NdisAcquireSpinLock(_Lock);         \
    }                                       \
}

#define MP_RELEASE_SPIN_LOCK(_Lock, _bDispatchLevel)        \
{                                                           \
    if (_bDispatchLevel)            \
        NdisDprReleaseSpinLock(_Lock);      \
    else                                    \
        NdisReleaseSpinLock(_Lock);         \
}

#define MP_ACQUIRE_SEND_LOCK(_Adapter)                   NdisAcquireSpinLock(&(_Adapter->SendLock))
#define MP_RELEASE_SEND_LOCK(_Adapter)                   NdisReleaseSpinLock(&(_Adapter->SendLock))
#define MP_ACQUIRE_SEND_LOCK_AT_DISPATCH(_Adapter)      NdisDprAcquireSpinLock(&(_Adapter->SendLock))
#define MP_RELEASE_SEND_LOCK_AT_DISPATCH(_Adapter)      NdisDprReleaseSpinLock(&(_Adapter->SendLock))

#define MP_NIC_POWER_STATE_IS_OFF(_Adapter)  (!Hw11QueryNicPowerState(_Adapter->pNic))
#define MP_DOT11_SCAN_IN_PROGRESS(_Adapter) (MP_TEST_STATUS_FLAG(_Adapter, MP_ADAPTER_DOT11_SCAN_IN_PROGRESS))

#ifndef UNDER_CE
/** Returns success of the MAC addresses are equal, else failure */
#define MP_COMPARE_MAC_ADDRESS(_MacAddr1, _MacAddr2)    \
    (RtlCompareMemory(_MacAddr1, _MacAddr2, sizeof(DOT11_MAC_ADDRESS)) == sizeof(DOT11_MAC_ADDRESS))
#else

#define MP_COMPARE_MAC_ADDRESS(_MacAddr1, _MacAddr2)    \
    (NdisEqualMemory(_MacAddr1, _MacAddr2, sizeof(DOT11_MAC_ADDRESS)))
#endif

#define MP_SET_FLAG(_M, _F)         ((_M)->Flags |= (_F))   
#define MP_CLEAR_FLAG(_M, _F)       ((_M)->Flags &= ~(_F))
#define MP_CLEAR_ALL_FLAGS(_M)      ((_M)->Flags = 0)
#define MP_TEST_FLAG(_M, _F)        (((_M)->Flags & (_F)) != 0)
#define MP_TEST_FLAGS(_M, _F)       (((_M)->Flags & (_F)) == (_F))

#ifndef MIN
    #define MIN(a, b)                  ((a) < (b)? a : b)
#endif  // MIN
#ifndef MAX
    #define MAX(a, b)                  ((a) > (b)? a : b)
#endif  // MAX

#define MP_ADDRESS_IS_MULTICAST(_Dot11MacAddress)       (_Dot11MacAddress[0] & 0x1)


#ifdef UNDER_CE
//
//  This is from mp_element.h
//

//
// Dot11ValidateInfoBlob and Dot11ValidatePacketInfoBlob
//  Validate the information blob. Dot11ValidateInfoBlob works
//  on a contiguous buffer while Dot11ValidatePacketInfoBlob
//  works on a MDL chain.
//
NDIS_STATUS
Dot11ValidateInfoBlob(
    IN PUCHAR pucInfoBlob,
    IN ULONG uOffsetOfInfoEleBlob
    );

NDIS_STATUS
Dot11ValidatePacketInfoBlob(
    IN PNDIS_BUFFER pMdlHead,
    IN ULONG uOffsetOfInfoEleBlob
    );

//
// Dot11GetInfoEle and Dot11GetInfoEleFromPacket
//      Look up a particular information element in the
//      information blob.
//
// Dot11GetInfoEle works on a contiguous buffer while
// Dot11GetInfoEleFromPacket works on a MDL chain
//
NDIS_STATUS
Dot11GetInfoEle(
    IN PUCHAR pucInfoBlob,
    IN ULONG uSizeOfBlob,
    IN UCHAR ucInfoId,
    OUT PUCHAR pucLength,
    IN OUT PVOID * ppvInfoEle
    );

NDIS_STATUS
Dot11GetInfoEleFromPacket(
    IN PNDIS_BUFFER pMdlHead,
    IN ULONG uOffsetOfInfoEleBlob,
    IN UCHAR ucInfoId,
    IN UCHAR ucMaxLength,
    OUT PUCHAR pucLength,
    IN OUT PVOID * ppvInfoEle
    );

NDIS_STATUS
Dot11CopySSIDFromPacket(
    IN PNDIS_BUFFER pMdlHead,
    IN ULONG uOffsetOfInfoEleBlob,
    IN PDOT11_SSID pDot11SSID
    );

NDIS_STATUS
Dot11GetChannelForDSPhy(
    IN PUCHAR pucInfoBlob,
    IN ULONG uSizeOfBlob,
    IN PUCHAR pucChannel
    );

NDIS_STATUS
Dot11CopySSIDFromMemoryBlob(
    IN PUCHAR pucInfoBlob,
    IN ULONG uSizeOfBlob,
    IN PDOT11_SSID pDot11SSID
    );


#endif  //  UNDER_CE

#endif  // _MP_DOT_11_H
