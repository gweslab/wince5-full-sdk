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
/*++


Module Name:

    mp_hw_interface.h

Abstract:


    Defines common constants and interfaces between NativeMP and the hardware library.

Environment:

    

--*/


#ifndef _HW_DOT_11_H

#define _HW_DOT_11_H


//
// Some definitions that will be used by the miniport portion
// Many of them are static values reflecting various capabilities
// of the hardware and should be set appropriately
//

#ifndef UNDER_CE

/**
 * Please enter the name of e-mail of the person who is responsible for debugging
 * issues in this driver. This variable is used only for debug versions of the driver
 * and helps testers out there quickly locate the troubleshooter.
 */
#define MP_OWNER_EMAIL      "owner_alias@company_name.com"

#else

#define MP_OWNER_EMAIL      "Microsoft Windows CE"

#define SLIST_ENTRY     LIST_ENTRY
#define SLIST_HEADER    CE_SLIST_HEADER

typedef struct _CE_SLIST_HEADER
{
    LIST_ENTRY  Header;
    ULONG       Depth;
    
} CE_SLIST_HEADER,*PCE_SLIST_HEADER;

#endif



//
//  In CE all these constans are obtained through Hwxxx() API.
//

#ifndef UNDER_CE

/** The minimum channel number supported by the hardware */
#define HW11_MIN_CHANNEL_NUMBER     1

/** The maximum channel number supported by the hardware */
#define HW11_MAX_CHANNEL_NUMBER     14

/** The default channel that the NIC will initialize itself with */
#define HW11_DEFAULT_CHANNEL        11

/** 
 * Specifies the type of interrupt that the NIC generates as one of the following values: 
 * NdisInterruptLatched          Interrupts are triggered by a transition from low to high on the interrupt line.
 * NdisInterruptLevelSensitive   Interrupts are active as long as the interrupt line is asserted. 
 */
#define HW11_INTERRUPT_MODE                                    NdisInterruptLevelSensitive

/** The interrupt for this miniport is sharable with other devices */
#define HW11_INTERRUPT_SHARABLE                               TRUE

/** The time interval in which NDIS should call MiniportCheckForHang handler. See NdisMSetAttributesEx for details */
#define HW11_CHECK_FOR_HANG_TIME_IN_SECONDS   0

/** Specifies the miniport attributes that are passed to NDIS */
#define HW11_NDIS_MINIPORT_ATTRIBUTES           HW_MINIPORT_NDIS_ATTRIBUTES
    

/** Specifies the I/O bus interface type of the NIC, which usually is the type of I/O bus on which the NIC is connected */
#define HW11_INTERFACE_TYPE                                     NdisInterfacePci

/** 
 * This macro defines the size of buffer that will be passed to NdisReadPciSlotInformation
 * By default this size is assumed to be PCI_COMMON_HDR_LENGTH which implies that there is
 * no DeviceSpecific information to be read. If the vendor has some device specific info
 * that is needed, please increase the size of this macro by that length. The function
 * Hw11ParsePciConfiguration function will always be called with the buffer returned by
 * NdisReadPciSlotInformation.
 */
#define HW11_PCI_CONFIG_BUFFER_LENGTH       PCI_COMMON_HDR_LENGTH

/** the manufacturer of the device. This must be a value allocated by the PCI SIG */
#define     HW11_PCI_VENDOR_ID                  0x10EC

/** Identifies the particular device. This value is assigned by the manufacturer */
#define     HW11_PCI_DEVICE_ID                  0x8180

#define     HW11_RESOURCE_BUFFER_SIZE          (sizeof(NDIS_RESOURCE_LIST) \
                                                    + (10 * sizeof(CM_PARTIAL_RESOURCE_DESCRIPTOR)))

/** Minimum number of Rfds that we can allocate or shrink to */
#define     HW11_MIN_RFDS                   64
/** Maximum number of Rfds that we will ever allocate or grow to */
#define     HW11_MAX_RFDS                   128
/** Default number of Rfd's to start with */
#define     HW11_DEF_RFDS                   64

#if (HW11_DEF_RFDS < HW11_MIN_RFDS)
    #error The default number of RFDs can never be less than the minimum
#endif
#if (HW11_DEF_RFDS > HW11_MAX_RFDS)
    #error The default number of RFDs can never be greater than the maximum
#endif


/** Minimum number of Tcbs that need to be initialized with */
#define     HW11_MIN_TCBS                   1
/** Maximum number of Rfds that we can allocate */
#define     HW11_MAX_TCBS                   64
/** Default number of Tcbs to allocate and initialize miniport with */
#define     HW11_DEF_TCBS                   64

#if (HW11_DEF_TCBS < HW11_MIN_TCBS)
    #error The default number of TCBs can never be less than the minimum
#endif
#if (HW11_DEF_TCBS > HW11_MAX_TCBS)
    #error The default number of TCBs can never be greater than the maximum
#endif

/**
 * This enumeration type lists all the possible error entries that can be placed
 * in the Event log by the miniport. Vendors should add any new error entries to this
 * enumeration type before using it.
 */
typedef enum _HW11_ERROR_LOG_ENTRY{
    ERRLOG_READ_PCI_SLOT_FAILED = 101,
    ERRLOG_WRITE_PCI_SLOT_FAILED,
    ERRLOG_VENDOR_DEVICE_MISMATCH,
    ERRLOG_BUS_MASTER_DISABLED = 201,
    ERRLOG_QUERY_ADAPTER_RESOURCES_FAILED = 602,
    ERRLOG_NO_IO_RESOURCE,
    ERRLOG_NO_INTERRUPT_RESOURCE,
    ERRLOG_NO_MEMORY_RESOURCE,
    ERRLOG_OUT_OF_SG_RESOURCES,
    ERRLOG_REGISTER_INTERRUPT_FAILED,
    ERRLOG_REGISTER_IO_PORT_RANGE_FAILED,
    ERRLOG_MAP_IO_SPACE_FAILED,
    ERRLOG_REMOVE_MINIPORT
} HW11_ERROR_LOG_ENTRY;


/** Maximum number of on-NIC multicast address entries */
#define HW11_MAX_MCAST_LIST_SIZE    32

/** The backfill size this miniport driver needs */
#define HW11_REQUIRED_BACKFILL_SIZE         0

/*
 * The PS Lifetime that should be provided to each packet.
 * This value has to be derived from the PSLifetime that
 * has been passed in from the OS
 */
#define HW11_PS_PACKET_LIFETIME(_uPSLifetime)     (_uPSLifetime * 2)


#endif  //  UNDER_CE

//
// Forward declaration
//
typedef struct _ADAPTER     ADAPTER, *PADAPTER;
typedef struct _MPTCB       MPTCB, *PMPTCB;
typedef struct _MPRFD       MPRFD, *PMPRFD;
typedef NDIS_BUFFER _MP_FRAGMENT, MP_FRAGMENT, *PMP_FRAGMENT;


typedef struct _NICTCB          NICTCB, *PNICTCB;
typedef struct _NICRFD          NICRFD, *PNICRFD;
typedef struct _NIC_FRAGMENT    NIC_FRAGMENT, *PNIC_FRAGMENT;
typedef struct _NIC             NIC, *PNIC;

/**
 * This function is called from Miniport Initialize and NIC are
 * required to allocate resources needed for operation in this function.
 * If any error occurs, this function must add an Entry in the Event Log
 * using NdisWriteErrorLogEntry function.
 * 
 * \param MiniportAdapterHandle     The handle that can be passed to NDIS when
 *                                  calling NDIS API.
 * \param pNic                      The context for this NIC
 * \param pAdapter                  Pointer to the associated adapter context. This
 *                                  will be needed when calling Mp11 functions.
 * \return NDIS_STATUS_SUCCESS on success, else the appropriate failure.
 * \sa Hw11FreeNic, Hw11InitializeNic
 */
NDIS_STATUS
Hw11AllocateNic(
    IN  NDIS_HANDLE     MiniportAdapterHandle,
    OUT PNIC*           ppNic,
    IN  PADAPTER        pAdapter
    );

/**
 * This function is called when all the resources allocated for the operation of
 * the NIC have to be released. Typically, this function will be called when
 * Miniport is being halted.
 * 
 * \param pNic          The context for this NIC
 * \sa Hw11AllocateNic, Hw11InitializeNic
 */
VOID
Hw11FreeNic(
    IN PNIC         pNic
    );

/**
 * This function is called when MiniportInitialize is running. This function is called
 * immediately after Hw11AllocateNic returns successfully. Initialize all members of the
 * NIC data structure within this function. If an error occurs during the initialization
 * that will cause the MiniportInitialize to fail, please log an entry in the Event Log.
 * 
 * \param pNic          The context for this NIC
 * \return NDIS_STATUS_SUCCESS if all initializations occurs successfully, else failure
 * \sa Hw11AllocateNic, Hw11TerminateNic, Hw11FreeNic, Hw11StartNic
 */
NDIS_STATUS
Hw11InitializeNic(
    IN PNIC         pNic
    );

/**
 * This function is called to uninitialize any variables that were initialized during the
 * call to Hw11InitializeNic or some other function. This function will typically be called
 * when Miniport is being halted.
 * 
 * \param pNic          The context for this NIC
 * \sa Hw11InitializeNic
 */
VOID
Hw11TerminateNic(
    IN PNIC         pNic
);


/**
 * This API is called when all initialization have been done for the miniport, interrupts
 * are regsitered and we expect the NIC to resume operational behavior. Starting up
 * Send and receive units would be one example of operations to be executed here.
 * 
 * \param pNic      The context for this NIC
 * \return NDIS_STATUS_SUCCESS on success else appropriate failure
 * \sa Hw11InitializeNic, Hw11HaltNic
 */
NDIS_STATUS
Hw11StartNic(
    IN  PNIC        pNic
    );

/**
 * This function is called from MiniportHalt. The NIC should put the
 * hardware in a known state as MiniportHalt is usually followed by
 * a warm boot. If there is any cleanup other than allocations that 
 * need to be done, it can be handled here. Typically, we should expect
 * Hw11HaltNic to undo operations done by Hw11StartNic
 * 
 * \warning Please do not try to write to any ports if the Hw has been
 * surprise removed.
 *
 * This function is invoked at IRQL = DISPATCH
 * 
 * \param pNic      The context for this NIC
 * \sa Hw11StartNic, Hw11Shutdown, MiniportHalt from DDK
 */
VOID
Hw11HaltNic(
    PNIC        pNic
    );


/**
 * This function is called during MiniportInitialize after the NdisReadPciSlotInformation
 * function has been called. MiniportInitialize verifies some configuration like vendor ID
 * and device ID and then calls this function so the hardware can look at the PCI configuration
 * and any device specific configuration information needed.
 *
 * Vendor must add an entry in the event log if this function fails for any reason.
 * 
 * \param pNic          The context for this NIC
 * \param pucBuffer     The buffer returned by NdisReadPciSlotInformation. This is of type
 *                      PCI_COMMON_CONFIG. See DDK for this data structure.
 * \param ulBufferSize  The size of this buffer in bytes. Should equal HW11_PCI_CONFIG_BUFFER_LENGTH.
 * \return NDIS_STATUS_SUCCESS if the config information looks good else appropriate failure.
 * \sa HW11_PCI_CONFIG_BUFFER_LENGTH, HW11_PCI_VENDOR_ID, HW11_PCI_DEVICE_ID,
 * MpInitialize, Hw11InitializeNic, Hw11AddAdapterResource
 */
NDIS_STATUS
Hw11ParsePciConfiguration(
    IN PNIC         pNic,
    IN PUCHAR       pucBuffer,
    IN ULONG        ulBufferSize
    );

/**
 * This function is called to notify Hw11 about resources that have been found for
 * this adapter. These resources are located using NdisMQueryAdapterResources API.
 * Hw11 should look at the resource type and keep information about it stored with
 * itself so that it can utilize these resources at a later time. Typical resources
 * used by adapters include Ports, Interrupt and memory.
 * 
 * \param pNic      The context for this NIC
 * \prarm pResource The resource that has been discovered
 * \return NDIS_STATUS_SUCCESS if the resource was good and utilized. Return 
 * NDIS_STATUS_NOT_ACCEPTED if the resource is not utilized. Otherwise appropriate
 * failure code.
 * \sa MpInitialize, Hw11InitializeNic, Hw11ParsePciConfiguration
 */
NDIS_STATUS
Hw11AddAdapterResource(
    IN PNIC    pNic,
    IN PCM_PARTIAL_RESOURCE_DESCRIPTOR  pResource
    );

/**
 * This function is called when MiniportInitialize is running. The NIC is supposed to
 * allocate and initialize all data it needs for a normal send operation. This preallocation
 * is important since we do not want allocations to be occuring during sends to avoid a
 * performace penalty. Any errors that occur during initialization must be placed in the
 * Event Log.
 * 
 * \param pNic      The context for this NIC
 * \param NumTcb    The number of TCB's that the NIC needs to allocate
 * \return NDIS_STATUS_SUCCESS if the allocation and initializations succeed, else 
 * appropriate failure code
 * \sa Hw11TerminateSend, MPTCB
 */
NDIS_STATUS
Hw11InitializeSend(
    IN PNIC         pNic,
    IN ULONG        NumTcb
    );

/**
 * This function will uninitalize and release all resources that were previously allocated
 * for send operations. Typically, this function will be called when miniport is being halted.
 * 
 * \param pNic          The context for this NIC
 * \sa Hw11InitializeSend, MPTCB
 */
VOID
Hw11TerminateSend(
    IN PNIC         pNic
    );

/**
 * This function should allocate and Initialize data that is needed for receiving packets.
 * This function is called while MiniportInitialize is running.
 *
 * When this function is done allocating resources (typically shared memory) for receiving
 * data, it should call Mp11InitializeReceiveEngine. This will allow the Mp portion of the
 * driver to make allocations and initialization for receiving packets. Following this
 * initialization, this function should call Mp11AssociateRfd for each HWRFD that has been
 * allocated. This allows the Mp portion to create a static association between a MPRFD and
 * a HWRFD. This association is vital for the receive process to work correctly. The HwRfd
 * allocated should be kept in a simple linked list.
 *
 * Any errors that occur during allocations and initializations must be recorded in the
 * event log.
 * 
 * \param pNic          The context for this NIC
 * \param TotalRfd      The number of Rfds that this NIC should be allocating
 * \return NDIS_STATUS_SUCCESS on success, else the appropriate failure code
 * \sa Hw11TerminateReceive, MPRFD, Mp11InitializeReceiveEngine
 */
NDIS_STATUS
Hw11InitializeReceive(
    IN PNIC         pNic,
    IN ULONG        TotalRfd
    );

/**
 * This function is called to release all resources that were allocated for receiving
 * packets by the NIC. This function will typically be called when Miniport is being halted.
 * 
 * Before NIC releases all its resources, the NIC should call Mp11DisassociateRfd for
 * each HWRFD that was previously associated, This gives the Mp portion a chance to clean
 * up associations between MPRFD and HWRFD. Once all associations are broken, this function
 * should call Mp11TerminateReceiveEngine to allow the Mp portion of the driver to clean 
 * up all the allocations made. After that is done, NIC can releases its own resources 
 * (typically HWRFD allocated in shared memory) safely.
 * 
 * \param pNic          The context for this NIC
 * \sa Hw11InitializeReceive, MPRFD
 */
VOID
Hw11TerminateReceive(
    IN PNIC         pNic
    );

/**
 * This function is called when the miniport driver starts to run low on
 * the available Receive Buffers for receiving packets. The hardware should
 * allocate NicFragment and call Mp11AssociateFragment so that the corresponding
 * MpFragment can be setup. As usual, the Hw11 function should add the frag into the
 * existing pool of fragments appropriately. This function would require shared
 * memory to be allocated via Mp11AllocateSharedMemoryAsync so it should return
 * NDIS_STATUS_PENDING when the allocation request pends.
 * 
 * \param pNic                      The context for the NIC
 * \param NumFragmentsToAllocate    This is the number of fragments NIC should grow the Pool
 *                                  by. This number can be overridden, The Nic can choose
 *                                  to allocate a different number of fragments as long as it
 *                                  does not exceed MaxFragmentsToAllocate
 * \param MaxFragmentsToAllocate    The maximum number of frags the hardware is allowed to
 *                                  grow the pool by. This number MUST NOT be exceeded.
 * \return NDIS_STATUS_PENDING if request to grow the pool pended else NDIS_STATUS_FAILURE
 * \sa Mp11AllocateSharedMemoryAsync, Mp11AssociateFragment
 */
NDIS_STATUS
Hw11GrowFragmentPool(
    IN PNIC         pNic,
    IN ULONG        NumFragmentsToAllocate,
    IN ULONG        MaxFragmentsToAllocate
    );


#if     NDIS60_MINIPORT
/**
 * This function is called before a packet is prepared and submitted to hardware
 * for transmission. If the return value is false, the packet will be queued up
 * and we will try to send it again when a send complete occurs.
 *
 * This function will not be called if a scan operation is outstanding on the
 * hardware.
 *
 * Some hardware that do not support IndicateAssociatedAck feature can use this
 * function to implement it in software. If the packet passed in requires an ack,
 * the driver will return false even if this packet can be transmitted. This will
 * cause the Mp portion to buffer the packet up in TxQueue. One each send completion,
 * this function will be called again with the same packet and the the driver should
 * steadfastly return FALSE until all packets currently in the Hw queue have been
 * send completed to the OS. When the last packet is being send completed,  Hw Send 
 * queue is empty the next packet requires the associated ACK to be indicated up.
 * The driver can now internally turn on the packet filter to accept ACKs (Control 
 * frames) and return TRUE when Hw11ReserveTxResources is next called (after last send
 * complete occurs). The next ACK received by the hardware will be for the only packet 
 * sent out by the hardware and and must be indicated up. As soon as the ACK goes to
 * the OS, turn off the ACK filter and make sure no more ACK's are indicated unless 
 * requested by the OS. Normal sends can then be resumed.
 *
 * \param pNic              The NIC context for this miniport
 * \param NetBufferList     The NET_BUFFER_LISt that needs to be transmitted.
 */
BOOL
Hw11CanTransmitNBL(
    IN PNIC                     pNic,
    IN PNET_BUFFER_LIST         NetBufferList,
    IN PDOT11_SEND_CONTEXT      Dot11SendContext
    );

#else   // NDIS60_MINIPORT

/**
 * This function is called before a packet is prepared and submitted to hardware
 * for transmission. If the return value is false, the packet will be queued up
 * and we will try to send it again when a send complete occurs. An example of
 * Hw11 returning false would be if the Hw11 does not have enough descriptors to
 * send this packet.
 *
 * This function will not be called if a scan operation is outstanding on the
 * hardware.
 *
 * Some hardware that do not support IndicateAssociatedAck feature can use this
 * function to implement it in software. If the packet passed in requires an ack,
 * the driver will return false even if this packet can be transmitted. This will
 * cause the Mp portion to buffer the packet up in TxQueue. One each send completion,
 * this function will be called again with the same packet and the the driver should
 * steadfastly return FALSE until all packets currently in the Hw queue have been
 * send completed to the OS. When the last packet is being send completed,  Hw Send 
 * queue is empty the next packet requires the associated ACK to be indicated up.
 * The driver can now internally turn on the packet filter to accept ACKs (Control 
 * frames) and return TRUE when Hw11ReserveTxResources is next called (after last send
 * complete occurs). The next ACK received by the hardware will be for the only packet 
 * sent out by the hardware and and must be indicated up. As soon as the ACK goes to
 * the OS, turn off the ACK filter and make sure no more ACK's are indicated unless 
 * requested by the OS. Normal sends can then be resumed.
 *
 * \param pNic      The NIC context for this miniport
 * \param Packet    The NDIS_PACKET that needs to be transmitted.
 */
BOOL
Hw11ReserveTxResources(
    IN PNIC             pNic,
    IN PNDIS_PACKET     Packet
    );

#endif  // NDIS60_MINIPORT


/**
 * This function is called when an assoication has to be created between a
 * MPTCB and a NICTCB. This association is vital for the send to work correctly.
 * 
 * \param pNic      The context for this NIC
 * \param pMpTcb    The Miniport TCB for which an association is to be created
 * \param ppNicTcb  This variable will contain a pointer to the NICTCB with which
 *                  pMpTcb has been associated. This variable will be used only if
 *                  the function succeeds (i.e. returns NDIS_STATUS_SUCCESS)
 * \return NDIS_STATUS_SUCCESS on successful initialization and association
 * of the miniport TCB with Nic TCB, else the appropriate error.
 * \sa Hw11DisassociateTcb, Hw11InitializeSend
 */
NDIS_STATUS
Hw11AssociateTcb(
    IN PNIC         pNic,
    IN PMPTCB       pMpTcb,
    OUT PNICTCB*    ppNicTcb
    );

/**
 * This function is called to disassociate a previously associated Tcb. This will
 * typically happen only during MiniportHalt.
 * 
 * \param pNic      The NIC context for this miniport
 * \param pNicTcb   The NICTCB to be disassocaited
 * \sa Hw11AssociateTcb, Hw11TerminateSend
 */
VOID
Hw11DisassociateTcb(
    IN PNIC         pNic,
    IN PNICTCB      pNicTcb
    );

/**
 * The function will return a pointer to the base virtual address of
 * previously allocated system-space memory that is being mapped by this Rfd.
 * The virtual memory should have already been preallocated by the Hw11 and, 
 * therefore, this function cannot fail.
 * 
 * \param pNicRfd       Pointer to the NIC Rfd whose system virtual address is needed
 * \return Pointer to the system virtual address this Rfd will be mapping
 * \sa Hw11AssociateRfd, Hw11InitializeReceive
 */
PVOID
Hw11GetVirtualAddress(
    IN PNIC_FRAGMENT      pNicFragment
    );

/**
 * This function will check if the TCB in question has been completely sent.
 * 
 * \param pNicTcb       The NICTCB to be checked for completion status.
 * \return TRUE if the TCB has been transmitted successfully, else false
 * \sa Hw11TransmitPacket
 */
BOOL
Hw11TcbIsComplete(
    IN PNIC             pNic,
    IN PNICTCB          pNicTcb
    );

//4 Documentation
NDIS_STATUS
Hw11TcbTransmissionStatus(
    IN  PNIC            pNic,
    IN  PNICTCB         pNicTcb
    );

/**
 * If the packet passed to the Hw11 should be coalesced because it is too
 * fragmented, return a true. Else return false. Packets that are coalesced
 * are copied into Preallocated coalesced buffers. This is an expensive operation
 * and also depends on availability of coalesce buffers.
 * 
 * \param Packet    The packet to check for potential coalescing
 * \return TRUE if the packet should be coalesced, else false.
 * \sa Hw11TransmitPacket
 */
/*BOOLEAN
Hw11PacketNeedsCoalescing(
    PNDIS_PACKET    Packet
    );
*/

/**
 * This function is called to release a NIC Rfd. After this call, the Hw11 can 
 * reclaim the NIC for indicating received frames to NDIS. Calls to this function
 * are not synchronized. More than one thread can be calling this function at the
 * same time. This function must provide any required synchronization.
 *
 * \param pNic              The context for this Nic.
 * \param pNicRfd           The Rfd being returned to the NIC
 * \param DispatchLevel     True if we are at IRQL DISPATCH
 * \sa Hw11GetNextReceivedRfd, Hw11FreeFragment
 */
VOID
Hw11ReturnFragment(
    IN PNIC             pNic,
    IN PNIC_FRAGMENT    pNicFragment,
    IN BOOLEAN          DispatchLevel
    );

/**
 * This function is called to free a NIC_FRAGMENT. After this call, the Hw11 can
 * reuse the associated Receive Descriptor for receiving 802.11 packets. Any
 * shared memory that was allocated for this fragment can be freed however.
 * This function is called to free any fragments that were allocated on the fly
 * because the miniport was running low on Receive Descriptors.
 *
 * This function is always called at IRDL = DISPATCH. Hw11 functions should use
 * NdisDrpAcquire/ReleaseSpinLock function if they need to use a lock for
 * synchronization.
 * 
 * \param pNic      The context for this Nic.
 * \param pNicRfd   The Rfd being returned to the NIC
 * \sa Hw11GetNextReceivedRfd, Hw11ReturnFragment
 */
VOID
Hw11FreeFragment(
    IN PNIC             pNic,
    IN PNIC_FRAGMENT    pNicFragment
    );

/**
 * This function will release all resources associated with a NICRFD. This function is
 * called when miniport is being halted or when the Rfd pool is being shrinked.
 *
 * Before the Rfd resources are returned to the OS, the NIC must call Mp11DisassociateRfd
 * to allow the Mp portion to release resources for the associated MPRFD.
 * 
 * \param pNic          The context for this NIC
 * \param pNicRfd       The Rfd that is to be freed
 * \sa Mp11DisassociateRfd
 */
VOID
Hw11FreeRfd(
    IN PNIC             pNic,
    IN PNICRFD          pNicRfd
    );

/**
 * This function checks to see if the received packet is a good frame that can be
 * indicated up to NDIS. The reason for frame being bad is data corruption only.
 * Do not overload this function to drop packets for any other reason. This would
 * cause counters to become inaccurate. For dropping fragments for reasons such as
 * software filtering etc. use Hw11FilterFragment
 * 
 * \param pNicRfd       The NICRFD to be checked for validity
 * \return TRUE if the frame is good and should be indicated up to NDIS else false
 * \sa Hw11GetNextReceivedRfd, Hw11FilterFragment
 */
BOOL
Hw11FragmentIsGood(
    IN PNIC             pNic,
    IN PNIC_FRAGMENT    pNicFragment
    );


/**
 * If the fragment should be dropped for any reason specific to hardware (software
 * filtering) etc, then this function should return a false.
 * 
 * \param pNicRfd       The NICRFD to be checked for validity
 * \return TRUE if the frame is should be indicated up to NDIS else false
 * \sa Hw11GetNextReceivedRfd, Hw11FragmentIsGood
 */
BOOL
Hw11FilterFragment(
    IN PNIC             pNic,
    IN PNIC_FRAGMENT    pNicFragment
    );

/**
 * Returns the size in bytes of the received Rfd. This is the size of data that will
 * be stored in the NDIS_PACKET that will be indicated to NDIS above
 * 
 * \param pNicRfd       The RFD whose size is to be computed
 * \return The size of the Rfd
 * \sa Hw11GetFragment
 */
ULONG
Hw11GetRfdDataSize(
    IN PNICRFD          pNicRfd
    );

/**
 * Given a NIC Rfd this function returns the number of fragments present in the
 * Rfd.
 * \param pNicRfd   The Rfd whose fragment count is being queried
 * \return The number of fragments in this Rfd.
 * \sa Hw11GetFragmentDataSize, Hw11GetFragment, Hw11GetMpFragment
 */
USHORT
Hw11GetFragmentCount(
    IN PNICRFD          pNicRfd
    );

/**
 * Given the FragIndex (zero based), this function will returned the fragment
 * corresponding to that Index. For example, FragIndex 0 should return the first
 * fragment in the Rfd.
 * \param pNicRfd       The NICRFD which contains the fragments
 * \param FragIndex     The index of the fragment being queried for.
 * \return The NIC_FRAGMENT associated with the fragment at FragIndex
 * \sa Hw11GetFragmentDataSize, Hw11GetFragmentCount, Hw11GetMpFragment
 */
PNIC_FRAGMENT
Hw11GetFragment(
    PNICRFD             pNicRfd,
    ULONG               FragIndex
    );

/**
 * Returns the MP_FRAGMENT associated with a NIC_FRAGMENT.
 * \param pNicFragment      The fragment whose MP_FRAGMENT is needed.
 * \return The MP_FRAGMENT associated with this NIC_FRAGMENT.
 * \sa Mp11AssociateFragment, Hw11GetFragment
 */
PMP_FRAGMENT
Hw11GetMpFragment(
    IN PNIC_FRAGMENT    pNicFragment
    );

/**
 * Returns the size in bytes of the fragment. This includes the header size but
 * excludes the CRC of the fragment. The size must not exceed the MAX_FRAME_SIZE.
 *
 * \param pNicFragment      The fragment whose size is being queried.
 * \return The size in bytes.
 * \sa Hw11GetFragmentCount, Hw11GetFragment, Hw11GetMpFragment
 */
USHORT
Hw11GetFragmentDataSize(
    IN PNIC_FRAGMENT    pNicFragment
    );

/**
 * Called when allocation of shared memory completes asynchronously
 * \sa Mp11SharedMemoryAsync, Hw11GrowRfdPool
 */
VOID
Hw11SharedMemoryAllocateComplete(
    IN  PNIC                    pNic,
    IN  PVOID                   VirtualAddress,
    IN  PNDIS_PHYSICAL_ADDRESS  PhysicalAddress,
    IN  ULONG                   Length,
    IN  PVOID                   Context
    );

/**
 * Perform any test on the hardware to ensure it is working correctly.
 * 
 * \param pNic          The context for this NIC
 * \return NDIS_STATUS_SUCCESS if the hardware is working correctly, else
 * failure
 */
NDIS_STATUS
Hw11SelfTest(
    IN PNIC    pNic
    );

/**
 * If the NIC needs to read any configuration values from the registry and store
 * them, it can be done in this function. This function is called during MiniportInitialize.
 * The configuration handle passed in will NOT remain alive after this function ends so
 * do not try to use it later.
 *
 * \warning This function must NEVER fail. NIC should always be able to use default
 * values. Initialization of the NIC failing due to registry values being incorrect
 * is a security problem.
 * 
 * \param pNic                  The context for this NIC
 * \param hConfigurationHandle  The handle to Configuration object returned by
 * NdisOpenConfiguration
 * \sa MpReadRegistryConfiguration
 */
VOID
Hw11ReadRegistryConfiguration(
    IN PNIC         pNic,
    IN NDIS_HANDLE  hConfigurationHandle
    );




/**
 * While handling Interrupt for receive, the Mp functions will query and ask
 * the Hw11 if there are any Rfd that are ready to be indicated to NDIS. If
 * such an Rfd is ready (implying all fragments have been received etc.), this
 * function should return true. Immediately after that, a call will be made to
 * Hw11GetNextRfdToIndicate in which the Rfd that is ready will be provided to
 * the miniport and then indicated up to NDIS.
 * 
 * \param pNic      The NIC context for this miniport.
 * \return TRUE if an Rfd is ready to be indicated to NDIS, else false
 * \sa Hw11GetNextRfdToIndicate, Hw11RfdIsGood
 */
BOOL
Hw11ReceiveIsAvailable(
    PNIC        pNic
    );

/**
 * This function returns the next Rfd that has been received but not yet indicated
 * to NDIS. Before this function is called, a call will be made to Hw11ReceiveIsAvailable
 * to ensure that there is an Rfd that has been received but not yet indicated. Therefore,
 * the the return value of this function is always expected to be a valid Rfd.
 *
 * \param pNic          The context for this NIC
 * \return 
 * \sa Hw11ReceiveIsAvailable, Hw11RfdIsGood
 */
PMPRFD
Hw11GetNextRfdToIndicate(
    PNIC        pNic
    );


PNIC_FRAGMENT
Hw11GetReceivedFragment(
    PNIC        pNic
    );

/**
 * This function is called from MiniportShutdown. During shutdown, NIC should put itself
 * in a known state. Power to the antenna needs to be turned off as well.
 *
 * The interrupts will already have been disabled by MiniportShutdown and need not be done
 * in Hw11Shutdown. This function will -NOT- be called if the device has been surprise
 * removed.
 * 
 * \param pNic      The context for this NIC
 * \sa Hw11InitializeNic, Hw11HaltNic, Hw11DevicePnPEvent, MiniportShutdown from DDK
 */
VOID
Hw11Shutdown(
    PNIC        pNic
    );

/**
 * This function is called when NDIS issues a reset to the miniport.
 * The hardware should stop its transmit and receive units and any
 * other hardware that needs to be reset.
 * 
 * \param pNic      The context for this NIC
 * \sa Hw11ResetEnd, Hw11Shutdown, Hw11HaltNic, MiniportReset from DDK.
 * \return See MiniportReset in DDK for return values.
 */
NDIS_STATUS
Hw11ResetStart(
    PNIC        pNic
    );

/**
 * This function is called when a reset that was previously issued is
 * completing. Typically, a NIC should reverse the actions that it took
 * in Hw11ResetStart i.e. start its transmit and receive units and any
 * other hardware that had been stopped. This function would also need
 * to make sure that the data structure in which Rfd's are maintained is
 * reinitialzied. Due to the receive unit having been restarted, the Rfd
 * list would need to be put in a valid state as well. THe goal is that
 * after the reset, the NIC should be in its initialized state.
 * 
 * \param pNic      The context for this NIC
 * \sa Hw11ResetStart, Hw11Shutdown, Hw11HaltNic, MiniportReset from DDK.
 * \return See MiniportReset in DDK for return values.
 */
NDIS_STATUS
Hw11ResetEnd(
    PNIC        pNic
    );

/**
 * This function is called from MiniportReset. This function is called to
 * reinitialize the TCB. During the reset, all pended sends are completed,
 * the send and receive unit on the NIC is reset and as the entire TCB and
 * Rfd list is reinitialized. This way, the NIC is brough back to Initialize
 * state and can continue to function.
 * 
 * \param pNicTcb   The NICTCB to be reinitialized
 * \sa Hw11ResetStart, Hw11ResetEnd
 */
VOID
Hw11ReinitializeTcb(
    PNICTCB     pNicTcb
    );


/**
 * This function is invoked when the driver receives a PnP event notification
 * from the OS. A useful example of one such notification for 802.11 drivers
 * would be NdisDevicePnPEventSurpriseRemoved. Other notifications could also
 * be useful.
 * 
 * \param pNic                  The context for this NIC
 * \param DevicePnPEvent        The PnP event that has occurred
 * \param InformationBuffer     Extra data about the PnP event
 * \param InformationBufferLength   Length of Information buffer
 * \sa Hw11HaltNic, Hw11Shutdown
 */
VOID
Hw11DevicePnPEvent(
    IN PNIC                         pNic,
    IN NDIS_DEVICE_PNP_EVENT        DevicePnPEvent,
    IN PVOID                        InformationBuffer,
    IN ULONG                        InformationBufferLength
    );

#if     NDIS60_MINIPORT


NDIS_STATUS
Hw11StartScan(
    PNIC                        pNic,
    PDOT11_SCAN_REQUEST_V2      pDot11ScanRequest,
    ULONG                       ScanRequestBufferLength
    );



/**
 * This function is called to hand a packet to the Hw11 for transmission.
 * The packet is formatted as a MPTCB which contains various important
 * information for the Hw11. This function can be called at IRQL >= PASSIVE.
 * Calls to this function are serialized by the Mp functions.
 *
 * Irrespective of whether this packet gets transmitted or queued for transmission,
 * the NIC must generate an interrupt for the packets handed to this function.
 * NIC must not try to allocate any memory during this data path or attempt other
 * operations that could fail. All allocations etc. must be done before hand during
 * MiniportInitialize and its associated functions. The only reason this function can
 * ever fail is if there are not enough resources presently currently to send this Tcb.
 * In this situation, NIC should return NDIS_STATUS_RESOURCES. After a send complete,
 * when some resources have freed up, this function will be invoked again with the same
 * Tcb that had previously failed. The miniport will keep trying the same Tcb forever
 * till it gets sent. If the Tcb is so fragmented that NIC will never be able to send
 * it, then packet coalescing should be used to resolve this issue.
 * 
 * \param pNic      The NIC context for the miniport
 * \param pMpTcb    The TCB to be transmitted
 * \return  NDIS_STATUS_SUCCESS if all goes well else NDIS_STATUS_RESOURCES if there
 * are not enough resources for sending this packet right now. NO OTHER ERROR STATUS
 * SHOULD BE RETURNED.
 * \sa Mp11PollForTransmission, Hw11TcbIsComplete
 */
NDIS_STATUS
Hw11TransmitTcb(
    IN PNIC                     pNic,
    IN PMPTCB                   pMpTcb,
    IN BOOLEAN                  DispatchLevel
    );

 /**
  * Has choice of retyring scatter gather or failing this tcb
  * Must not retry if SG failed due to a reset operation
  * 
  * \param 
  * \param 
  * \param 
  * \param 
  * \return 
  * \sa 
  */
VOID
Hw11TcbScatterGatherComplete(
    IN  PNIC                    pNic,
    IN  PMPTCB                  pMpTcb,
    IN  NDIS_STATUS             ndisStatus,
    IN BOOLEAN                  DispatchLevel
    );

#else


NDIS_STATUS
Hw11StartScan(
    PNIC pNic,
    PDOT11_SCAN_REQUEST pDot11ScanRequest,
    ULONG   ScanRequestBufferLength
    );


/**
 * This function is called to hand a packet to the Hw11 for transmission.
 * The packet is formatted as a MPTCB which contains various important
 * information for the Hw11. This function can be called at IRQL >= PASSIVE.
 * Calls to this function are serialized by the Mp functions.
 *
 * Irrespective of whether this packet gets transmitted or queued for transmission,
 * the NIC must generate an interrupt for the packets handed to this function.
 * NIC must not try to allocate any code during this data path or attempt other
 * operations that could fail. All allocations etc. must be done before hand during
 * MiniportInitialize and its associated functions.
 * 
 * \param pNic      The NIC context for the miniport
 * \param pMpTcb    The TCB to be transmitted
 * \sa Hw11TcbIsComplete
 */
VOID
Hw11TransmitTcb(
    IN PNIC                     pNic,
    IN PMPTCB                   pMpTcb
    );

#endif  // NDIS60_MINIPORT

/** sa Hw11TransmitATIMPacket, Mp11ATIMPacketTransmissionComplete */
BOOLEAN
Hw11CanTransmitATIMPacket(
    IN PNIC     pNic
    );

/*
 * This function must complete asynchronously today!
 * \sa Mp11ATIMPacketTransmissionComplete, Hw11CanTransmitATIMPacket 
 */
VOID
Hw11TransmitATIMPacket(
    IN PNIC                     pNic,
    IN PDOT11_MAC_ADDRESS       pDestinationMacAddress
    );

/**
 * Returns the link speed for the underlying hardware. Please do not return a link
 * speed of zero. Even if there is no association or RF link, driver should report 
 * useful default values.
 * 
 * \param pNic      The NIC context for the adapter
 * \return The link speed in units of 100 bps
 * \sa OID_GEN_LINK_SPEED
 */
ULONG
Hw11GetLinkSpeed(
    PNIC pNic
    );

/**
 * Returns the Interrupt level for this NIC. The expected values are
 * NdisInterruptLatched  or NdisInterruptLevelSensitive .
 * 
 * \param pNic      The NIC context for this miniport
 * \return The Interrupt level for this NIC
 * \sa NdisMRegisterInterrupt, MPInitialize
 */
ULONG
Hw11GetInterruptLevel(
    PNIC    pNic
    );

/**
 * Enable the interrupts of the hardware.
 *
 * \param pNic      The NIC context for this miniport
 * \sa Hw11EnableInterrupt, Hw11DisableInterrupt, Hw11InterruptEnabled,
 *     Hw11InterruptRecognized, Hw11ClearInterrupt
 */
VOID
Hw11EnableInterrupt(
    PNIC pNic
    );


/**
 * Disable the interrupts of the hardware. This function will -NOT- be 
 * called if the device has been surprise removed.
 * 
 * \param pNic      The NIC context for this miniport
 * \sa Hw11EnableInterrupt, Hw11DisableInterrupt, Hw11InterruptEnabled,
 *     Hw11InterruptRecognized, Hw11ClearInterrupt, Hw11HaltNic */
VOID
Hw11DisableInterrupt(
    PNIC pNic
    );

/**
 * Check if the interrupt on the hardware are enabled
 * 
 * \param pNic      The NIC context for this miniport
 * \return True if the interrupts are enabled else false
 * \sa Hw11EnableInterrupt, Hw11DisableInterrupt, Hw11InterruptEnabled,
 *     Hw11InterruptRecognized, Hw11ClearInterrupt
 */
BOOL
Hw11InterruptEnabled(
    PNIC pNic
    );

/**
 * Check if the hardware has interrupted the system. If the NIC
 * claims the interrupt, it should return true.
 * 
 * \param pNic                              The NIC context for this miniport
 * \param pbQueueMiniportHandleInterrupt    Set this to true if miniport needs the
 * the interrupt handling DPC to be queued.
 * \return TRUE if the hardware had interrupted the system, else FALSE.
 * \warning Please set the values to TRUE and FALSE and do not try to use any
 * non zero value as TRUE. The OS requires tradition 0 or 1 values
 * \sa Hw11EnableInterrupt, Hw11DisableInterrupt, Hw11InterruptEnabled,
 *     Hw11InterruptRecognized, Hw11ClearInterrupt
 */
BOOLEAN
Hw11InterruptRecognized(
    IN  PNIC            pNic,
    OUT PBOOLEAN        pbQueueMiniportHandleInterrupt
    );

/**
 * If the hardware had previously interrupted the system, this
 * call will clear the state claiming that interrupt. A subsequent call
 * to Hw11InterruptRecognized should not return true unless a new
 * interrupt was generated by the hardware between the two calls.
 * 
 * \param pNic      The NIC context for this miniport
 * \sa Hw11EnableInterrupt, Hw11DisableInterrupt, Hw11InterruptEnabled,
 *     Hw11InterruptRecognized, Hw11ClearInterrupt
 */
VOID
Hw11ClearInterrupt(
    PNIC pNic
    );

NDIS_STATUS
Hw11WepOffload(
    PNIC pNic,
    PDOT11_WEP_OFFLOAD pDot11WepOffload
    );

NDIS_STATUS
Hw11WepUpload(
    PNIC pNic,
    PDOT11_WEP_UPLOAD pDot11WepUpload
    );

NDIS_STATUS
Hw11DefaultWepOffload(
    PNIC pNic,
    PDOT11_DEFAULT_WEP_OFFLOAD pDot11DefaultWepOffload
    );

NDIS_STATUS
Hw11DefaultWepUpload(
    PNIC pNic,
    PDOT11_DEFAULT_WEP_UPLOAD pDot11DefaultWepUpload
    );

// This is a good place to differentiate b/w the initialization of
// STA and AP mode. Using some smart function pointer can avoid
// the cost of extra if conditions that check for current mode before
// deciding what action to take.
NDIS_STATUS
Hw11SetOperationMode(
    PNIC pNic,
    PDOT11_CURRENT_OPERATION_MODE pDot11CurrentOperationMode
    );

VOID
Hw11QueryCurrentOperationMode(
    PNIC pNic,
    PDOT11_CURRENT_OPERATION_MODE pDot11CurrentOperationMode
    );

/**
 * This function is called when an Oustanding Scan operation is to be
 * cancelled. This function should return only when the Scan Operation
 * has been completed. This function will always be called at Passive
 * IRQL.
 *
 */
VOID
Hw11CancelScan(
    PNIC    pNic
    );
    

NDIS_STATUS
Hw11SetMCastList(
    PNIC pNic,
    PVOID pvInformationBuffer,
    ULONG uInformationBufferLength
    );

PDOT11_MAC_ADDRESS
Hw11GetMACAddress(
    PNIC pNic
    );

VOID
Hw11SetMACAddress(
    IN  PNIC                    pNic,
    IN  DOT11_MAC_ADDRESS       MacAddress
    );

NDIS_STATUS
Hw11SetChannel(
    PNIC pNic,
    UCHAR ucChannel
    );

UCHAR
Hw11GetChannel(
    PNIC pNic
    );

NDIS_STATUS
Hw11SetPacketFilter(
    PNIC pNic,
    ULONG PacketFilter
    );

ULONG
Hw11QueryPacketFilter(
    PNIC pNic
    );


NDIS_STATUS
Hw11StartRequest(
    IN PNIC pNic,
    IN DOT11_START_REQUEST UNALIGNED * pDot11StartRequest,
    IN ULONG uSizeOfRequest
    );

VOID
Hw11StopBSSAdvertisment(
    IN PNIC         pNic
    );

VOID
Hw11StartBSSAdvertisment(
    IN PNIC         pNic
    );

VOID
Hw11QueryOpModeCap(
    IN PNIC pNic,
    PDOT11_OPERATION_MODE_CAPABILITY pDot11OpModeCap
    );

VOID
Hw11QueryOffloadCapability(
    IN PNIC pNic,
    PDOT11_OFFLOAD_CAPABILITY pDot11OffloadCapability
    );

NDIS_STATUS
Hw11SetCurrentOffloadCapability(
    IN PNIC pNic,
    PDOT11_CURRENT_OFFLOAD_CAPABILITY pDot11CurrentOffloadCapability
    );

VOID
Hw11QueryCurrentOffloadCapability(
    IN PNIC pNic,
    PDOT11_CURRENT_OFFLOAD_CAPABILITY pDot11CurrentOffloadCapability
    );

ULONG
Hw11GetMPDUMaxLength(
    IN PNIC pNic
    );

NDIS_STATUS
Hw11Reset(
    IN PNIC pNic,
    DOT11_RESET_TYPE Dot11ResetType
    );

VOID
Hw11ResetMacMIBs(
    IN  PNIC    pNic
    );

VOID
Hw11ResetPhyMIBs(
    IN  PNIC    pNic
    );


NDIS_STATUS
Hw11ReadResetStatus(
    IN PNIC pNic
    );

ULONG
Hw11QueryATIMWindow(
    IN PNIC pNic
    );

ULONG
Hw11QueryCFPollable(
    IN PNIC pNic
    );

ULONG
Hw11QueryCFPPeriod(
    IN PNIC pNic
    );

ULONG
Hw11QueryCFPMaxDuration(
    IN PNIC pNic
    );

VOID
Hw11QueryPowerMgmtMode(
    IN PNIC pNic,
    OUT PDOT11_POWER_MGMT_MODE pDot11PowerMgmtMode
    );

NDIS_STATUS
Hw11CanTransitionPower(
    IN  PNIC    pNic,
    IN  NDIS_DEVICE_POWER_STATE NewDevicePowerState
    );

ULONG
Hw11QueryBeaconPeriod(
    IN PNIC pNic
    );

ULONG
Hw11QueryDTIMPeriod(
    IN PNIC pNic
    );

UCHAR
Hw11QueryDTIMCount(
    IN  PNIC    pNic
    );

ULONG
Hw11QueryWEPICVErrorCount(
    IN PNIC pNic
    );

ULONG
Hw11QueryRTSThreshold(
    IN PNIC pNic
    );

ULONG
Hw11QueryShortRetryLimit(
    IN PNIC pNic
    );

ULONG
Hw11QueryLongRetryLimit(
    IN PNIC pNic
    );

ULONG
Hw11QueryMaxTXMSDULifeTime(
    IN PNIC pNic
    );

ULONG
Hw11QueryMaxReceiveLifeTime(
    IN PNIC pNic
    );


NDIS_STATUS
Hw11SetATIMWindow(
    IN PNIC pNic,
    IN ULONG uValue
    );

NDIS_STATUS
Hw11SetMediumOccupancyLimit(
    IN PNIC pNic,
    IN ULONG uValue
    );

NDIS_STATUS
Hw11SetCFPPeriod(
    IN PNIC pNic,
    IN ULONG uValue
    );

NDIS_STATUS
Hw11SetCFPMaxDuration(
    IN PNIC pNic,
    IN ULONG uValue
    );

NDIS_STATUS
Hw11SetPowerMgmtMode(
    IN PNIC pNic,
    IN PDOT11_POWER_MGMT_MODE pDot11PowerMgmtMode
    );

NDIS_STATUS
Hw11SetBeaconPeriod(
    IN PNIC pNic,
    IN ULONG uValue
    );

NDIS_STATUS
Hw11SetDTIMPeriod(
    IN PNIC pNic,
    IN ULONG uValue
    );

NDIS_STATUS
Hw11SetRTSThreshold(
    IN PNIC pNic,
    IN ULONG uValue
    );

NDIS_STATUS
Hw11SetShortRetryLimit(
    IN PNIC pNic,
    IN ULONG uValue
    );

NDIS_STATUS
Hw11SetLongRetryLimit(
    IN PNIC pNic,
    IN ULONG uValue
    );

ULONG
Hw11GetFragmentationThreshold(
    IN PNIC pNic
    );

NDIS_STATUS
Hw11SetFragmentationThreshold(
    IN PNIC pNic,
    IN ULONG uValue
    );

NDIS_STATUS
Hw11SetMaxTXMSDULifeTime(
    IN PNIC pNic,
    IN ULONG uValue
    );

NDIS_STATUS
Hw11SetMaxRXLifeTime(
    IN PNIC pNic,
    IN ULONG uValue
    );

VOID
Hw11QuerySupportedDataRatesValue(
    PNIC        pNic,
    PDOT11_SUPPORTED_DATA_RATES_VALUE pDot11SupportedDataRatesValue
    );

VOID
Hw11QueryOperationalRateSet(
    IN PNIC pNic,
    PDOT11_RATE_SET pDot11RateSet
    );

VOID
Hw11QueryCountersEntry(
    IN PNIC pNic,
    PDOT11_COUNTERS_ENTRY pDot11CountersEntry
    );

NDIS_STATUS
Hw11SetOperationalRateSet(
    IN PNIC pNic,
    PDOT11_RATE_SET pDot11RateSet
    );

ULONG
Hw11QueryCCAModeSupported(
    IN PNIC pNic
    );

ULONG
Hw11QueryCurrentCCA(
    IN PNIC pNic
    );

ULONG
Hw11QueryEdThreshold(
    IN PNIC pNic
    );

NDIS_STATUS
Hw11SetCurrentCCAMode(
    IN PNIC pNic,
    ULONG uValue
    );

NDIS_STATUS
Hw11SetEDThreshold(
    IN PNIC     pNic,
    IN LONG     Value
    );

ULONG
Hw11QueryIndicateTXStatus(
    IN PNIC pNic
    );

NDIS_STATUS
Hw11SetIndicateTXStatus(
    IN PNIC pNic,
    IN BOOL bValue
    );

ULONG
Hw11QueryNicPowerState(
    IN PNIC pNic
    );

NDIS_STATUS
Hw11SetNicPowerState(
    IN PNIC pNic,
    IN BOOL bValue
    );

NDIS_STATUS
Hw11QueryOptionalCapability(
    IN PNIC pNic,
    PDOT11_OPTIONAL_CAPABILITY pDot11OptionalCapability
    );

NDIS_STATUS
Hw11QueryCurrentOptionalCapability(
    IN PNIC pNic,
    IN PDOT11_CURRENT_OPTIONAL_CAPABILITY pDot11CurrentOptionalCapability
    );

ULONG
Hw11QueryMediumOccupancyLimit(
    IN PNIC pNic
    );

ULONG
Hw11QueryCurrentRegDomain(
    IN PNIC pNic
    );

DOT11_TEMP_TYPE
Hw11QueryTempType(
    IN PNIC pNic
    );

ULONG
Hw11QueryCurrentTXAntenna(
    IN PNIC pNic
    );

DOT11_DIVERSITY_SUPPORT
Hw11QueryDiversitySupport(
    IN PNIC pNic
    );

ULONG
Hw11QueryCurrentRXAntenna(
    IN PNIC pNic
    );

VOID
Hw11QuerySupportedPowerLevels(
    IN PNIC pNic,
    PDOT11_SUPPORTED_POWER_LEVELS pDot11SupportedPowerLevels
    );

ULONG
Hw11QueryCurrentTXPowerLevel(
    IN PNIC pNic
    );

/**
 * This function returns the Reg Domains supported by the hardware.
 *
 * \param pNic                          The NIC context for this adapter
 * \param uNumMaxEntries                The max number of entries that can be placed in pDot11RegDomainsSupportValue
 * \param pDot11RegDomainsSupportValue  The data structure where Reg Domain values have to be placed
 */
NDIS_STATUS
Hw11QueryRegDomainsSupportValue(
    IN PNIC pNic,
    IN ULONG uNumMaxEntries,
    OUT PDOT11_REG_DOMAINS_SUPPORT_VALUE pDot11RegDomainsSupportValue
    );

NDIS_STATUS
Hw11QuerySupportedTXAntenna(
    IN PNIC pNic,
    IN ULONG uNumMaxEntries,
    OUT PDOT11_SUPPORTED_ANTENNA_LIST pDot11SupportedAntennaList
    );

NDIS_STATUS
Hw11QuerySupportedRXAntenna(
    IN PNIC pNic,
    IN ULONG uNumMaxEntries,
    OUT PDOT11_SUPPORTED_ANTENNA_LIST pDot11SupportedAntennaList
    );

ULONG
Hw11QueryRFUsage(
    IN PNIC				pNic
    );

ULONG
Hw11QueryShortPreambleOptionImplemented(
    IN PNIC pNic
    );

BOOL
Hw11QueryErpPbccOptionImplemented(
    IN PNIC				pNic
    );

BOOL
Hw11QueryDsssOfdmOptionImplemented(
    IN PNIC				pNic
    );

BOOL
Hw11QueryShortSlotTimeOptionImplemented(
    IN PNIC				pNic
    );

BOOL
Hw11QueryShortSlotTimeOptionEnabled(
    IN PNIC				pNic
    );

NDIS_STATUS
Hw11QueryRSSIRange(
    IN PNIC 				pNic,
    IN PDOT11_RSSI_RANGE	pDot11RssiRange
    );

NDIS_STATUS
Hw11QueryDiversitySelectionRX(
    IN PNIC pNic,
    IN ULONG uNumMaxEntries,
    OUT PDOT11_DIVERSITY_SELECTION_RX_LIST pDot11DiversitySelectionRXList
    );

NDIS_STATUS
Hw11SetCurrentOptionalCapability(
    IN PNIC pNic,
    IN PDOT11_CURRENT_OPTIONAL_CAPABILITY pDot11CurrentOptionalCapability
    );

VOID
Hw11QueryStationId(
    IN PNIC pNic,
    IN DOT11_MAC_ADDRESS Dot11MacAddress
    );

VOID
Hw11QueryPnPCapabilities(
    IN PNIC     pNic,
    OUT PNDIS_PNP_CAPABILITIES pNdisPnPCapabilities
    );

VOID
Hw11SetStationId(
    IN PNIC pNic,
    IN DOT11_MAC_ADDRESS Dot11MacAddress
    );

NDIS_STATUS
Hw11SetCurrentRegDomain(
    IN PNIC pNic,
    IN ULONG uValue
    );

NDIS_STATUS
Hw11SetCurrentTXAntenna(
    IN PNIC pNic,
    IN ULONG uValue
    );

NDIS_STATUS
Hw11SetCurrentRXAntenna(
    IN PNIC pNic,
    IN ULONG uValue
    );

NDIS_STATUS
Hw11SetCurrentTXPowerLevel(
    IN PNIC pNic,
    IN ULONG uValue
    );

NDIS_STATUS
Hw11SetDiversitySelectionRX(
    IN PNIC pNic,
    IN PDOT11_DIVERSITY_SELECTION_RX_LIST pDot11DiversitySelectionRXList
    );

NDIS_STATUS
Hw11QuerySupportedPHYTypes(
    IN PNIC pNic,
    IN ULONG uNumMaxEntries,
    IN OUT PDOT11_SUPPORTED_PHY_TYPES pDot11SupportedPhyTypes
    );

DOT11_PHY_TYPE
Hw11QueryCurrentPhyType(
    IN PNIC pNic
    );

NDIS_STATUS
Hw11SetCurrentPhyType(
    IN PNIC pNic,
    IN DOT11_PHY_TYPE   PhyType
    );

NDIS_STATUS
Hw11UpdateIE(
    IN PNIC				pNic,
    IN PDOT11_UPDATE_IE	pUpdateIE
    );

NDIS_STATUS
Hw11QueryStatistics(
    IN PNIC             pNic,
    IN NDIS_OID         Oid,
    IN OUT ULONG64*     Stat,
    IN OUT PULONG       BytesWritten
    );

DOT11_PHY_TYPE
Hw11GetPhyType(
    IN  PNIC            pNic,
    IN  PNIC_FRAGMENT   pNicFragment
    );

ULONG
Hw11GetCalibratedRSSI(
    IN  PNIC            pNic,
    IN  PNIC_FRAGMENT   pNicFragment
    );

LONG
Hw11GetRSSI(
    IN  PNIC            pNic,
    IN  PNIC_FRAGMENT   pNicFragment
    );

LONG
Hw11GetMinRSSI(
    IN  PNIC            pNic,
    IN  PNIC_FRAGMENT   pNicFragment
    );

LONG
Hw11GetMaxRSSI(
    IN  PNIC            pNic,
    IN  PNIC_FRAGMENT   pNicFragment
    );

UCHAR
Hw11GetDataRate(
    IN  PNIC            pNic,
    IN  PNIC_FRAGMENT   pNicFragment
    );

ULONG
Hw11GetChannelCenterFrequency(
    IN  PNIC            pNic,
    IN  PNIC_FRAGMENT   pNicFragment
    );

/** Timeout of Join has to be handled by Hw */
NDIS_STATUS
Hw11JoinRequest(
    IN PNIC		                pNic,
#ifndef UNDER_CE    
    IN PDOT11_JOIN_REQUEST	pDot11JoinRequest,
#else
    IN DOT11_JOIN_REQUEST   UNALIGNED *pDot11JoinRequest,
#endif
    IN ULONG                    uJoinRequestSize,
    IN BOOLEAN                  bIsApJoin
    );

VOID
Hw11SetDevicePowerState(
    IN  PNIC		                pNic,
    IN  NDIS_DEVICE_POWER_STATE     DevicePowerState
    );

NDIS_STATUS
Hw11QuerySupportedGUIDS(
    IN  PNIC                        pNic
    );


//
// This is the Interface Miniport must implement that NIC will call into.
// These implementations for these functions should be placed in files
// whose name start with MP_ and should be located in the MP folder
//


NDIS_STATUS
Mp11InitializeReceiveEngine(
    IN PADAPTER         pAdapter,
    IN ULONG            uNumFragments
    );

NDIS_STATUS
Mp11AssociateFragment(
    IN  PADAPTER         pAdapter,
    IN  PNIC_FRAGMENT    Fragment,
    OUT PMP_FRAGMENT*    ppMpFragment
    );

VOID
Mp11DisassociateFragment(
    IN PADAPTER         pAdapter,
    IN PNIC_FRAGMENT    pNicFragment
    );

NDIS_STATUS
Mp11AllocateSharedMemoryAsync(
    IN PADAPTER         pAdapter,
    IN ULONG            Length,
    IN BOOLEAN          Cached,
    IN PVOID            Context
    );

VOID
Mp11CompletePendedRequest(
    IN  PADAPTER        pAdapter,
    IN  NDIS_STATUS     ndisStatus
    );

VOID
Mp11ScanComplete(
    IN PADAPTER         pAdapter,
    IN NDIS_STATUS      ndisStatus
    );

VOID
Mp11StartRequestComplete(
    IN  PADAPTER        pAdapter,
    IN  NDIS_STATUS     ndisStatus
    );

VOID
Mp11JoinComplete(
    IN  PADAPTER        pAdapter,
    IN  NDIS_STATUS     ndisStatus
    );

VOID
Mp11MPDUMaxLengthChanged(
    IN  PADAPTER        pAdapter,
    IN  ULONG           uNewMPDUMaxLength
    );

#ifdef UNDER_CE
//
//  All calls below MUST NOT fail.
//

//  ***
//  Specifies the type of interrupt that the NIC generates as one of the following values: 
//      NdisInterruptLatched          Interrupts are triggered by a transition from low to high on the interrupt line.
//      NdisInterruptLevelSensitive   Interrupts are active as long as the interrupt line is asserted. 
//
void
Hw11GetInterruptMode(NDIS_INTERRUPT_MODE *pInterruptMode);

//  ***
//  The time interval in which NDIS should call MiniportCheckForHang handler. See NdisMSetAttributesEx for details.
//
void
Hw11GetCheckForHangTimeInSeconds(DWORD *pdwTime);

//  ***
//  Specifies the miniport attributes that are passed to NdisMSetAttributesEx 
//  e.g. NDIS_ATTRIBUTE_DESERIALIZE, NDIS_ATTRIBUTE_BUS_MASTER.
//
void 
Hw11GetMiniportAttributes(DWORD *pdwAttribute);

//  ***
//  Specifies the I/O bus interface type of the NIC, which usually is the type of I/O bus on which the NIC is connected 
//
void
Hw11GetInterfaceType(NDIS_INTERFACE_TYPE *pInterfaceType);


//  ***
//  This macro defines the size of buffer that will be passed to NdisReadPciSlotInformation
//  By default this size is assumed to be PCI_COMMON_HDR_LENGTH which implies that there is
//  no DeviceSpecific information to be read. If the vendor has some device specific info
//  that is needed, please increase the size of this macro by that length. The function
//  Hw11ParsePciConfiguration function will always be called with the buffer returned by
//  NdisReadPciSlotInformation.
//
void
Hw11GetPciConfigBufferLength(DWORD  *pdwBufferLength);


//  ***
//  the manufacturer of the device. This must be a value allocated by the PCI SIG
//
void
Hw11GetPciVendorId(DWORD *pdwVendorId);


//  ***
//  Identifies the particular device. This value is assigned by the manufacturer
//
void
Hw11GetPciDeviceId(DWORD *pdwDeviceId);

void
Hw11GetResourceBufferSize(DWORD *pdwBufferSize);


//  ***
//  The buffer size for NdisReadPciSlotInformation() call.
//
void
Hw11GetResourceBufferSize(DWORD *pdwResourceBufferSize);


//  ***
//  Delay between checking if link has been detected by the hardware. Tweak it to fit your hardware */
//
void
Hw11GetLinkDetectionDelay(DWORD *pdwLinkDetectionDelay);



//
//  CE Note:: Since NdisAllocateSharedMemoryAsync() is not yet supported in CE, then
//            The MinRfds, MaxRfds, and DefRfds should all be set to the same value as
//            MaxRfds.
//


//  ***
//  Minimum number of Rfds that we can allocate or shrink to
//
void
Hw11GetMinRfds(DWORD *pdwMinRfds);


//  ***
//  Maximum number of Rfds that we will ever allocate or grow to
//
void
Hw11GetMaxRfds(DWORD *pdwMaxRfds);


//  ***
//  Default number of Rfd's to start with.
//
void
Hw11GetDefRfds(DWORD *pdwDefaultRfds);

//  *** 
//  Minimum number of Tcbs that need to be initialized with
//
void
Hw11GetMinTcbs(DWORD *pdwMinTcbs);

//  ***
//  Maximum number of Rfds that we can allocate 
//
void
Hw11GetMaxTcbs(DWORD *pdwMaxTcbs);

//  ***
//  Default number of Tcbs to allocate and initialize miniport with
//
void
Hw11GetDefaultTcbs(DWORD *pdwDefaultTcbs);


UCHAR
Hw11GetMinChannelNumber(PNIC pNic);


UCHAR
Hw11GetMaxChannelNumber(PNIC pNic);


void
Hw11GetMaxMcastList(DWORD *pdwMaxMcastList);


BOOL
Hw11CheckForHang();


ULONG
Hw11GetPsPacketLifetime(ULONG uPSLifetime);


VOID
Hw11CheckForATIMPacketSendCompletion(
    IN      PNIC    pNic);


/**
 * This enumeration type lists all the possible error entries that can be placed
 * in the Event log by the miniport. Vendors should add any new error entries to this
 * enumeration type before using it.
 */
typedef enum _HW11_ERROR_LOG_ENTRY{
    ERRLOG_READ_PCI_SLOT_FAILED = 101,
    ERRLOG_WRITE_PCI_SLOT_FAILED,
    ERRLOG_VENDOR_DEVICE_MISMATCH,
    ERRLOG_BUS_MASTER_DISABLED = 201,
    ERRLOG_QUERY_ADAPTER_RESOURCES_FAILED = 602,
    ERRLOG_NO_IO_RESOURCE,
    ERRLOG_NO_INTERRUPT_RESOURCE,
    ERRLOG_NO_MEMORY_RESOURCE,
    ERRLOG_REGISTER_INTERRUPT_FAILED,
    ERRLOG_REGISTER_IO_PORT_RANGE_FAILED,
    ERRLOG_MAP_IO_SPACE_FAILED,
    ERRLOG_REMOVE_MINIPORT
} HW11_ERROR_LOG_ENTRY;


#ifdef UNDER_CE
#define MP_FRAG_ELEMENT 							SCATTER_GATHER_ELEMENT 
#define PMP_FRAG_ELEMENT 							PSCATTER_GATHER_ELEMENT 

typedef struct _MP_FRAG_LIST {
    ULONG			NumberOfElements;
    ULONG_PTR		Reserved;
    MP_FRAG_ELEMENT	Elements[8];
} MP_FRAG_LIST, *PMP_FRAG_LIST;

typedef struct _MP_PHY_MAP_INFO{
	PNIC			pNic;
	ULONG			FirstMapRegisterIndex;
	ULONG			nMapRegisterUsed;
	MP_FRAG_LIST    	FragList;
}MP_PHY_MAP_INFO,*PMP_PHY_MAP_INFO;


#undef NDIS_PER_PACKET_INFO_FROM_PACKET
#define NDIS_PER_PACKET_INFO_FROM_PACKET(pPacket,para)		\
			((PSCATTER_GATHER_LIST)&((*((PMP_PHY_MAP_INFO *)(&(pPacket)->Reserved[0])))->FragList))

//
//  This is called by Nativemp since CE does not support scatter gather list packet info.
//  The hardware driver determines what to do, information is opaque to Nativewifi.
//  The hardware driver receives back this information in SGList of TCB.
//
VOID
Hw11PreProcessTxPacket(PNDIS_PACKET pPacket, PNIC pNic);

//
//  This is called right before NativeMP calls NdisMSendComplete() to give the h/w driver
//  opportunity to clean up per packet info.
//
VOID
Hw11PostProcessTxPacket(PNDIS_PACKET pPacket);
#endif	

#endif  //  UNDER_CE

#if NDIS60_MINIPORT

NDIS_STATUS
Mp11PerformScatterGather(
    IN  PADAPTER    pAdapter,
    IN  PMPTCB      pMpTcb,
    IN BOOLEAN      DispatchLevel
    );


/**
 * Hw portion can cal this function if it wants Mp functions to try and send any
 * packets that are ready and available for sending. If sends have been pended by
 * the Hw for resource reasons, this function can be called when resources become
 * available to immediately resume sends. Alternatively, we will have to wait till
 * the next packet comes along from the miniport and/or a send complete occurs before
 * we transmit again.
 * 
 * \param pAdapter          The adapter context for this miniport
 * \param DispatchLevel     Set to true if current IRQL is known to be DISPATCH
 * \sa Hw11TransmitTcb
 */
VOID
Mp11PollForTransmission(
    IN  PADAPTER    pAdapter,
    IN  BOOLEAN     DispatchLevel
    );


VOID
Hw11FillReceiveExtensionInfo(
    IN  PNIC                        pNic,
    IN  PNIC_FRAGMENT               pNicFragment,
    IN OUT PDOT11_RECV_CONTEXT      Dot11RecvExtensionInfo
    );

#else

VOID
Hw11FillReceiveExtensionInfo(
    IN  PNIC                                pNic,
    IN  PNIC_FRAGMENT                       pNicFragment,
    IN OUT PDOT11_RECV_EXTENSION_INFO       Dot11RecvExtensionInfo
    );

#endif


#ifdef UNDER_CE
//
//  Moved here from mp_main.h
//
NDIS_STATUS
MpResetInternalRoutine(
    IN PADAPTER             pAdapter,
    IN DOT11_RESET_TYPE     ResetType
    );

VOID
Mp11TerminateReceiveEngine(
    IN PADAPTER pAdapter
    );

#endif  //  UNDER_CE



#ifdef UNDER_CE

//
//  Copied here from mp_dbg.h
//

#ifndef _NATIVE_WIFI__MP_DBG_

#define _NATIVE_WIFI__MP_DBG_


#if NDIS60_MINIPORT

//
// TODO: REMOVE THESE ONCE NDIS DEFINES THEM
//
#define         NDIS_STATUS_MEDIA_IN_USE            0xC0001113
#define         NDIS_STATUS_POWER_STATE_INVALID     0xC0001111
#define         NDIS_STATUS_INVALID_STATE           0xC0001112

#endif


//
// Turn tracing on for this driver if requested. When tracing is on
// debug messages will not be posted to the debugger. ASSERT etc. will
// still work so attaching a debugger is advised.
//
#if DOT11_TRACE_ENABLED

//
// Turn traccing on. Define the bits.
// The macro is defined in the sources file
//
#define WPP_CONTROL_GUIDS                                                   \
    WPP_DEFINE_CONTROL_GUID(CtlGuid,(B69E6549,6E4F,408b,A710,32955D97C838), \
        WPP_DEFINE_BIT(DBG_SERIOUS)                                         \
        WPP_DEFINE_BIT(DBG_NORMAL)                                           \
        WPP_DEFINE_BIT(DBG_LOUD)                                             \
        WPP_DEFINE_BIT(DBG_TRACE))

#endif  // DOT11_TRACE_ENABLED


#if DBG


//
//    =============================
//      SEND COMMANDS TO DEBUGGER
//    =============================
//
// The number postfix on the macro determines how many arguments are there
// on each command. These command will execute on the debugger only if you
// first manually break in and exectue the following command on the debugger:
// .ocommand Native80211MP
//
// TODO: Do we need this?
#define MP_DEBUGGER_COMMAND0(_command)       \
    DbgPrint(("Native80211MP " _command))
    
#define MP_DEBUGGER_COMMAND1(_command, _arg1)       \
    DbgPrint(("Native80211MP " _command), _arg1)


//
//    ==============================
//    MEMORY MANAGEMENT DEBUG APIS
//    ==============================
//

#define  MP_HEADER_PATTERN          0x76028412
#define  MP_TRAILER_PATTERN         0x83395627
#define  MP_FREED_PATTERN            0x82962503

typedef struct _MP_MEMORY_BLOCK
{
  /** Pointer to next and previous blocks */
  LIST_ENTRY  ListEntry;
  /** name of the file which is doing the allocation */
  PCHAR       pstrFile;
  /** line number where allocated */
  ULONG       ulLine;
  /** ulong index of trailer (=(length/4)-1 relative to data start */
  ULONG       ulLength;
  /** Flags that can be used in future to do special allocations */
  ULONG       ulFlags;
  /** To help detect underflows. A trailer is also added to find overflows */
  ULONG       ulHeaderPattern;

#ifdef UNDER_CE
  //
  // Make it 16 byte align.
  //
  ULONG       ulReserve;
#endif

} MP_MEMORY_BLOCK, *PMP_MEMORY_BLOCK;

NDIS_STATUS 
MpAllocateMemory (
    PVOID*         ppMemory,
    ULONG          ulSize,
    ULONG          ulTag,
    PCHAR          pstrFileName,
    ULONG          ulLineNumber,
    ULONG          ulFlags
    );

VOID
MpFreeMemory (
    PVOID    pMemory
    );

VOID 
MpFreeAllocatedBlocks();


/**
* Use this macro to allocate memory whenever needed. For debug versions of the driver,
* this macro expands to MpAllocateMemory and tracks all memory allocated with detection
* of overflow and underflow. For retail builds, this macro expands to a direct call to Ndis for
* memory allocation.
* 
* \param _ppMemory        Pointer to the memory allocated will be placed here
* \param _ulSizeInBytes   The number of bytes to allocate
* \return NDIS_STATUS_SUCCESS if allocation succeeds, else the error code.
* \sa MP_FREE_MEMORY, MpAllocateMemory, NdisAllocateMemoryWithTag
*/
#define  MP_ALLOCATE_MEMORY(_NdisHandle, _ppMemory, _ulSizeInBytes, _ulTag)        \
    MpAllocateMemory(_ppMemory, _ulSizeInBytes, _ulTag, __FILE__, __LINE__, 0)

/**
* Use this macro to free memory previously allocated with MP_ALLOCATE_MEMORY. For debug
* versions of the driver, this macro expands to MpFreeMemory which checks for memory corruption,
* bad frees and other special memory operations. For retail builds, it directly macros to NDIS API for
* freeing memory.
* 
* \param _pMemory      Memory to free. Must have been allocated using MP_ALLOCATE_MEMORY
* \sa MP_ALLOCATE_MEMORY, MpFreeMemory, NdisFreeMemory
*/
#define MP_FREE_MEMORY(_pMemory)                                     \
    MpFreeMemory(_pMemory);

#define MP_DUMP_LEAKING_BLOCKS()        MpFreeAllocatedBlocks()

//
//    =========================
//         DEBUGGER BREAK/ASSERT APIS
//    =========================
//

#define MPASSERT(_Exp)                           ASSERT(_Exp)

#ifndef UNDER_CE
#define MPASSERTMSG(_Msg, _Exp)                 ASSERTMSG(__FUNCTION__ ": " _Msg, _Exp)
#define MPVERIFY(_Exp)              \
    ASSERTMSG(__FUNCTION__ ": This is probably an issue with the miniport driver. Please contact " MP_OWNER_EMAIL "\n", _Exp)
#else
#define MPASSERTMSG(_Msg, _Exp) ASSERT(_Exp)
#define MPVERIFY(_Exp)          ASSERT(_Exp)
#endif


//
// These macros help verify that calls to a function is mutually exclusive
// We need these to verify that we are serializing calls to Hw11TransmitPacket
// as guaranteed. Since a lock is not protecting the region, this mechanism will
// help verify the behavior and catch potential synchronization issues
// Please note, these macros DO NOT guarantee to catch if mutual exclusion is
// violated but could potentially catch the issue if it occurs
//
typedef     LONG   MUTUAL_EXCLUSION_VERIFIER;
#define MP_ENTER_MUTEX_REGION(MutexVerifier)        \
    MPASSERTMSG("Mutual Exclusion violation caught on Entry! More than one thread is concurrently present in " __FUNCTION__, (NdisInterlockedIncrement((PLONG)&MutexVerifier) == 1))
#define MP_LEAVE_MUTEX_REGION(MutexVerifier)        \
    MPASSERTMSG("Mutual Exclusion violation caught on Exit! More than one thread is concurrently present in " __FUNCTION__, (NdisInterlockedDecrement((PLONG)&MutexVerifier) == 0))

/**
* This set of macros are used to print messages to the debugger
* depending on the current level of debug output. These macros
* are enabled only if tracing is disabled
*/
#if !DOT11_TRACE_ENABLED

    //
    // Tracing is off, so using Debug Prints instead.
    // These are slower but they give real time and
    // runtime output as opposed to tracing
    //

    extern      ULONG GlobalDebugLevel;

    #define     DBG_OFF                 1000
    #define     DBG_TRACE               1  // Will work only for WMI tracing
    #define     DBG_SERIOUS             900
    #define     DBG_NORMAL              500
    #define     DBG_LOUD                100

    #define MpTrace(_Level, Fmt)                     \
        if(_Level >= GlobalDebugLevel)               \
            DbgPrint Fmt;

    #define MpEntry                  \
        if (DBG_LOUD >= GlobalDebugLevel)   \
            DbgPrint(("==> " __FUNCTION__ "\n"))

    #define MpExit                  \
        if (DBG_LOUD >= GlobalDebugLevel)   \
            DbgPrint(("<== " __FUNCTION__ "\n"))

#else   // !DOT11_TRACE_ENABLED

    //
    // When tracing is enabled MpEntry and MpExit have to be
    // turned off. Tracing cannot understand Preprocessor
    // directives.
    //
    #define MpEntry

    #define MpExit

#endif  // !DOT11_TRACE_ENABLED

#ifndef UNDER_CE
#define MP_VERIFY_PASSIVE_IRQL()      \
    MPASSERTMSG("Driver expected IRQL to be passive. Use !irql to check current Irql\n", (NDIS_CURRENT_IRQL() == 0))
#else
#define MP_VERIFY_PASSIVE_IRQL()
#endif

#else     // DBG

#define  MP_ALLOCATE_MEMORY(_NdisHandle, _ppMemory, _ulSizeInBytes, _ulTag)       \
  NdisAllocateMemoryWithTag (                                                      \
     _ppMemory,                                                                         \
     _ulSizeInBytes,                                                                    \
     _ulTag                                                                    \
     )

#define MP_FREE_MEMORY(_pMemory)                    \
    NdisFreeMemory(_pMemory, 0, 0)

#define MP_DUMP_LEAKING_BLOCKS()

#define MPASSERT(_Exp)
#define MPASSERTMSG(_Msg, _Exp)
#define MPVERIFY(_Exp)

#define DBG_OFF
#define DBG_TRACE
#define DBG_SERIOUS
#define DBG_NORMAL
#define DBG_LOUD
#define MpTrace(_Level, Fmt)
#define MpEntry
#define MpExit

#define MP_VERIFY_PASSIVE_IRQL()

#define MP_ENTER_MUTEX_REGION(MutexVerifier)
#define MP_LEAVE_MUTEX_REGION(MutexVerifier)

#endif   // DBG

#endif  // _NATIVE_WIFI__MP_DBG_



#endif  //  UNDER_CE


#endif //_HW_DOT_11_H
