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
/*++ BUILD Version: 0094    // Increment this if a change has global effects


Module Name:

    ndis.h

Abstract:

    This module defines the structures, macros, and functions available
    to NDIS drivers.

Revision History:

--*/

#if !defined(_NDIS_)
#define _NDIS_

#ifdef __cplusplus
extern "C" {
#endif


#include <windows.h>
#include <memory.h>

#include <ntcompat.h>

#define KSPIN_LOCK  CRITICAL_SECTION
typedef KSPIN_LOCK *PKSPIN_LOCK;

#define NDISAPI WINAPI

#define POINTER_ALIGNMENT


#if DEBUG
#define DBG     1
#else
#undef DBG
#endif


//
// Define status codes and event log codes.
//

#include <netevent.h>

//
// If we're building a miniport on x86, set BINARY_COMPATIBLE so that
// we don't use functions that aren't available on Windows 9x.
//

#if !defined(BINARY_COMPATIBLE)
#if defined(NDIS_MINIPORT_DRIVER) && defined(_M_IX86)
#define BINARY_COMPATIBLE 1
#else
#define BINARY_COMPATIBLE 0
#endif
#endif

#if !defined(_M_IX86)
#undef BINARY_COMPATIBLE
#define BINARY_COMPATIBLE 0
#endif

//
//  PnP and PM event codes that can be indicated up to transports
//  and clients.
//
typedef enum _NET_PNP_EVENT_CODE
{
    NetEventSetPower,
    NetEventQueryPower,
    NetEventQueryRemoveDevice,
    NetEventCancelRemoveDevice,
    NetEventReconfigure,
    NetEventBindList,
    NetEventBindsComplete,
    NetEventPnPCapabilities,
    NetEventMaximum
} NET_PNP_EVENT_CODE, *PNET_PNP_EVENT_CODE;

//
//  Networking PnP event indication structure.
//
typedef struct _NET_PNP_EVENT
{
    //
    //  Event code describing action to take.
    //
    NET_PNP_EVENT_CODE  NetEvent;

    //
    //  Event specific data.
    //
    PVOID               Buffer;

    //
    //  Length of event specific data.
    //
    ULONG               BufferLength;

    //
    //  Reserved values are for use by respective components only.
    //
    //  Note: these reserved areas must be pointer aligned.
    //  

    ULONG_PTR           NdisReserved[4];
    ULONG_PTR           TransportReserved[4];
    ULONG_PTR           TdiReserved[4];
    ULONG_PTR           TdiClientReserved[4];
} NET_PNP_EVENT, *PNET_PNP_EVENT;

//
//  The following structure defines the device power states.
//
typedef enum _NET_DEVICE_POWER_STATE
{
    NetDeviceStateUnspecified = 0,
    NetDeviceStateD0,
    NetDeviceStateD1,
    NetDeviceStateD2,
    NetDeviceStateD3,
    NetDeviceStateMaximum
} NET_DEVICE_POWER_STATE, *PNET_DEVICE_POWER_STATE;

//
// Indicate that we're building for NT. NDIS_NT is always used for
// miniport builds.
//

#define NDIS_NT 1

#if defined(NDIS_DOS)
#undef NDIS_DOS
#endif


//
// Define a couple of extra types.
//

#if !defined(_WINDEF_)      // these are defined in windows.h too
typedef signed int INT, *PINT;
typedef unsigned int UINT, *PUINT;
#endif

typedef UNICODE_STRING NDIS_STRING, *PNDIS_STRING;


//
// Portability extentions
//

#ifdef UNDER_CE
//
// Putting functions into specific sections can be wasteful
// of memory as unused memory at the section chunk size goes
// unused.  In CE, where memory is precious, don't do that.
//
#define NDIS_INIT_FUNCTION(_F)      message("NDIS_INIT_FUNCTION Ignored")
#define NDIS_PAGABLE_FUNCTION(_F)   message("NDIS_PAGEABLE_FUNCTION Ignored")
#define NDIS_PAGEABLE_FUNCTION(_F)  message("NDIS_PAGEABLE_FUNCTION Ignored")
#else
#define NDIS_INIT_FUNCTION(_F)      alloc_text(INIT,_F)
#define NDIS_PAGABLE_FUNCTION(_F)   alloc_text(PAGE,_F)
#define NDIS_PAGEABLE_FUNCTION(_F)  alloc_text(PAGE,_F)
#endif

//
// This file contains the definition of an NDIS_OID as
// well as #defines for all the current OID values.
//

//
// Define NDIS_STATUS and NDIS_HANDLE here
//
typedef PVOID NDIS_HANDLE, *PNDIS_HANDLE;

typedef int NDIS_STATUS, *PNDIS_STATUS; // note default size

    
#if defined(NDIS_WRAPPER)

//
// The following structure is used to queue closeadapter calls to
// worker threads so that they can complete at PASSIVE_LEVEL.
//
typedef struct _QUEUED_CLOSE
{
    NDIS_STATUS         Status;
    WORK_QUEUE_ITEM     WorkItem;
} QUEUED_CLOSE, *PQUEUED_CLOSE;

#endif

//
// for Miniports versions 5.0 and up, provide a consistent way to match
// Ndis version in their characteristics with their makefile defines
//
#if (!defined(NDIS_MINIPORT_MAJOR_VERSION) && !defined(NDIS_MINIPORT_MINOR_VERSION))
#if (defined(NDIS51_MINIPORT))
#define NDIS_MINIPORT_MAJOR_VERSION 5
#define NDIS_MINIPORT_MINOR_VERSION 1
#elif (defined(NDIS50_MINIPORT))
#define NDIS_MINIPORT_MAJOR_VERSION 5
#define NDIS_MINIPORT_MINOR_VERSION 0
#endif
#endif

//
// for protocol versions 5.0 and up, provide a consistent way to match 
// Ndis version in their characteristics with their makefile defines
//
#if (!defined(NDIS_PROTOCOL_MAJOR_VERSION) && !defined(NDIS_PROTOCOL_MINOR_VERSION))
#if (defined(NDIS51))
#define NDIS_PROTOCOL_MAJOR_VERSION 5
#define NDIS_PROTOCOL_MINOR_VERSION 1
#elif (defined(NDIS50))
#define NDIS_PROTOCOL_MAJOR_VERSION 5
#define NDIS_PROTOCOL_MINOR_VERSION 0
#endif
#endif


#include <ntddndis.h>


//
//	All mac options require the reserved bit to be set in
//	the miniports mac options.
//
#define	NDIS_MAC_OPTION_NDISWAN		0x00000001

typedef struct _NDIS_PNP_OPERATION
{
	UINT				Layer;
	UINT				Operation;
	union
	{
		PVOID			ReConfigBufferPtr;
		ULONG_PTR		ReConfigBufferOff;
	};
	UINT				ReConfigBufferSize;
	NDIS_VAR_DATA_DESC	LowerComponent;
	NDIS_VAR_DATA_DESC	UpperComponent;
	NDIS_VAR_DATA_DESC	BindList;
} NDIS_PNP_OPERATION, *PNDIS_PNP_OPERATION;

//
// Used by proxy and RCA
//
#define	NDIS_PROTOCOL_TESTER		0x20000000
#define	NDIS_PROTOCOL_PROXY			0x40000000
#define	NDIS_PROTOCOL_BIND_ALL_CO	0x80000000

#define	NDIS_OID_MASK				0xFF000000
#define	NDIS_OID_PRIVATE			0x80000000
#define	OID_GEN_ELAPSED_TIME		0x00FFFFFF

typedef	struct _NDIS_STATS
{
	LARGE_INTEGER	DirectedBytesOut;
	LARGE_INTEGER	DirectedBytesIn;
	LARGE_INTEGER	StartTicks;
	ULONG			DirectedPacketsOut;
	ULONG			DirectedPacketsIn;
} NDIS_STATS, *PNDIS_STATS;


#ifndef UNDER_CE	// CE does not support EISA or MCA
//
// Ndis defines for configuration manager data structures
//
typedef CM_MCA_POS_DATA NDIS_MCA_POS_DATA, *PNDIS_MCA_POS_DATA;
typedef CM_EISA_SLOT_INFORMATION NDIS_EISA_SLOT_INFORMATION, *PNDIS_EISA_SLOT_INFORMATION;
typedef CM_EISA_FUNCTION_INFORMATION NDIS_EISA_FUNCTION_INFORMATION, *PNDIS_EISA_FUNCTION_INFORMATION;
#endif

//
// Define an exported function.
//
#if defined(NDIS_WRAPPER)
#define EXPORT
#else
#define EXPORT DECLSPEC_IMPORT
#endif

//
// Memory manipulation functions.
//
#define NdisMoveMemory(Destination, Source, Length) RtlCopyMemory(Destination, Source, Length)
#define NdisZeroMemory(Destination, Length)         RtlZeroMemory(Destination, Length)
#define NdisEqualMemory(Source1, Source2, Length)   RtlEqualMemory(Source1, Source2, Length)
#define NdisFillMemory(Destination, Length, Fill)   RtlFillMemory(Destination, Length, Fill)

#ifdef UNDER_CE
#ifndef RtlRetrieveUlong
#define RtlRetrieveUlong(Destination, Source)	(*(Destination)) = *(UNALIGNED ULONG *)(Source)
#endif
#ifndef RtlStoreUlong
#define RtlStoreUlong(Destination, Value)	*(UNALIGNED ULONG *)(Destination) = (Value)
#endif
#endif
#define NdisRetrieveUlong(Destination, Source)      RtlRetrieveUlong(Destination, Source)
#define NdisStoreUlong(Destination, Value)          RtlStoreUlong(Destination, Value)

#define NDIS_STRING_CONST(x)    {sizeof(L##x)-2, sizeof(L##x), L##x}

#ifdef UNDER_CE
#define NdisMoveMappedMemory(Destination,Source,Length) RtlCopyMemory(Destination,Source,Length)
#define NdisZeroMappedMemory(Destination,Length)        RtlZeroMemory(Destination,Length)
#else
//
// On a RISC machine, I/O mapped memory can't be accessed with
// the Rtl routines.
//
#if defined(_M_IX86)

#define NdisMoveMappedMemory(Destination,Source,Length) RtlCopyMemory(Destination,Source,Length)
#define NdisZeroMappedMemory(Destination,Length)        RtlZeroMemory(Destination,Length)

#elif defined(_M_IA64)

#define NdisMoveMappedMemory(Destination,Source,Length)                     \
{                                                                           \
    PUCHAR _Src = (Source);                                                 \
    PUCHAR _Dest = (Destination);                                           \
    PUCHAR _End = _Dest + (Length);                                         \
    while (_Dest < _End)                                                    \
    {                                                                       \
        *_Dest++ = *_Src++;                                                 \
    }                                                                       \
}

#define NdisZeroMappedMemory(Destination,Length)                            \
{                                                                           \
    PUCHAR _Dest = (Destination);                                           \
    PUCHAR _End = _Dest + (Length);                                         \
    while (_Dest < _End)                                                    \
    {                                                                       \
        *_Dest++ = 0;                                                       \
    }                                                                       \
}

#elif defined(_ALPHA_)

#define NdisMoveMappedMemory(Destination,Source,Length)                     \
{                                                                           \
    PUCHAR _Src = (Source);                                                 \
    PUCHAR _Dest = (Destination);                                           \
    PUCHAR _End = _Dest + (Length);                                         \
    while (_Dest < _End)                                                    \
    {                                                                       \
        NdisReadRegisterUchar(_Src, _Dest);                                 \
        _Src++;                                                             \
        _Dest++;                                                            \
    }                                                                       \
}

#define NdisZeroMappedMemory(Destination,Length)                            \
{                                                                           \
    PUCHAR _Dest = (Destination);                                           \
    PUCHAR _End = _Dest + (Length);                                         \
    while (_Dest < _End)                                                    \
    {                                                                       \
        NdisWriteRegisterUchar(_Dest,0);                                    \
        _Dest++;                                                            \
    }                                                                       \
}

#endif
#endif // UNDER_CE


#define NdisMoveToMappedMemory(Destination,Source,Length)                   \
                            NdisMoveMappedMemory(Destination,Source,Length)
#define NdisMoveFromMappedMemory(Destination,Source,Length)                 \
                            NdisMoveMappedMemory(Destination,Source,Length)


//
// definition of the basic spin lock structure
//

typedef struct _NDIS_SPIN_LOCK
{
    KSPIN_LOCK  SpinLock;
#ifndef UNDER_CE		// CE does not use IRQLs
    KIRQL       OldIrql;
#endif
} NDIS_SPIN_LOCK, * PNDIS_SPIN_LOCK;


//
// definition of the ndis event structure
//
typedef struct _NDIS_EVENT
{
    KEVENT      Event;  
} NDIS_EVENT, *PNDIS_EVENT;

typedef VOID    (*NDIS_PROC)(struct _NDIS_WORK_ITEM *, PVOID);

//
// Definition of an ndis work-item
//
typedef struct _NDIS_WORK_ITEM
{
    PVOID           Context;
    NDIS_PROC       Routine;
    UCHAR           WrapperReserved[8*sizeof(PVOID)];
} NDIS_WORK_ITEM, *PNDIS_WORK_ITEM;

#define NdisInterruptLatched            Latched
#define NdisInterruptLevelSensitive     LevelSensitive
typedef KINTERRUPT_MODE NDIS_INTERRUPT_MODE, *PNDIS_INTERRUPT_MODE;

//
// Configuration definitions
//

//
// Possible data types
//

typedef enum _NDIS_PARAMETER_TYPE
{
    NdisParameterInteger,
    NdisParameterHexInteger,
    NdisParameterString,
    NdisParameterMultiString,
    NdisParameterBinary
} NDIS_PARAMETER_TYPE, *PNDIS_PARAMETER_TYPE;

typedef struct
{
    USHORT          Length;
    PVOID           Buffer;
} BINARY_DATA;

//
// To store configuration information
//
typedef struct _NDIS_CONFIGURATION_PARAMETER
{
    NDIS_PARAMETER_TYPE ParameterType;
    union
    {
        ULONG           IntegerData;
        NDIS_STRING     StringData;
        BINARY_DATA     BinaryData;
    } ParameterData;
} NDIS_CONFIGURATION_PARAMETER, *PNDIS_CONFIGURATION_PARAMETER;


//
// Definitions for the "ProcessorType" keyword
//
typedef enum _NDIS_PROCESSOR_TYPE
{
    NdisProcessorX86,
    NdisProcessorMips,
    NdisProcessorAlpha,
    NdisProcessorPpc,
    NdisProcessorArm,
    NdisProcessorSH
} NDIS_PROCESSOR_TYPE, *PNDIS_PROCESSOR_TYPE;

//
// Definitions for the "Environment" keyword
//
typedef enum _NDIS_ENVIRONMENT_TYPE
{
    NdisEnvironmentWindows,
    NdisEnvironmentWindowsNt,
    NdisEnvironmentWindowsCe
} NDIS_ENVIRONMENT_TYPE, *PNDIS_ENVIRONMENT_TYPE;


//
// Possible Hardware Architecture. Define these to
// match the HAL INTERFACE_TYPE enum.
//
typedef enum _NDIS_INTERFACE_TYPE
{
    NdisInterfaceInternal = Internal,
    NdisInterfaceIsa = Isa,
    NdisInterfaceEisa = Eisa,
    NdisInterfaceMca = MicroChannel,
    NdisInterfaceTurboChannel = TurboChannel,
    NdisInterfacePci = PCIBus,
    NdisInterfacePcMcia = PCMCIABus,
    NdisInterfaceCBus = CBus,
    NdisInterfaceMPIBus = MPIBus,
    NdisInterfaceMPSABus = MPSABus,
    NdisInterfaceProcessorInternal = ProcessorInternal,
    NdisInterfaceInternalPowerBus = InternalPowerBus,
    NdisInterfacePNPISABus = PNPISABus,
    NdisInterfacePNPBus = PNPBus,
    NdisMaximumInterfaceType
} NDIS_INTERFACE_TYPE, *PNDIS_INTERFACE_TYPE;

//
// Definition for shutdown handler
//

typedef
VOID
(*ADAPTER_SHUTDOWN_HANDLER) (
    IN  PVOID ShutdownContext
    );

//
// Stuff for PCI configuring
//

typedef CM_PARTIAL_RESOURCE_LIST NDIS_RESOURCE_LIST, *PNDIS_RESOURCE_LIST;


//
// The structure passed up on a WAN_LINE_UP indication
//

typedef struct _NDIS_WAN_LINE_UP
{
    IN ULONG                LinkSpeed;          // 100 bps units
    IN ULONG                MaximumTotalSize;   // suggested max for send packets
    IN NDIS_WAN_QUALITY     Quality;
    IN USHORT               SendWindow;         // suggested by the MAC
    IN UCHAR                RemoteAddress[6];
    IN OUT UCHAR            LocalAddress[6];
    IN ULONG                ProtocolBufferLength;   // Length of protocol info buffer
    IN PUCHAR               ProtocolBuffer;     // Information used by protocol
    IN USHORT               ProtocolType;       // Protocol ID
    IN OUT NDIS_STRING      DeviceName;
} NDIS_WAN_LINE_UP, *PNDIS_WAN_LINE_UP;

//
// The structure passed up on a WAN_LINE_DOWN indication
//

typedef struct _NDIS_WAN_LINE_DOWN
{
    IN UCHAR    RemoteAddress[6];
    IN UCHAR    LocalAddress[6];
} NDIS_WAN_LINE_DOWN, *PNDIS_WAN_LINE_DOWN;

//
// The structure passed up on a WAN_FRAGMENT indication
//

typedef struct _NDIS_WAN_FRAGMENT
{
    IN UCHAR    RemoteAddress[6];
    IN UCHAR    LocalAddress[6];
} NDIS_WAN_FRAGMENT, *PNDIS_WAN_FRAGMENT;

//
// The structure passed up on a WAN_GET_STATS indication
//

typedef struct _NDIS_WAN_GET_STATS
{
    IN  UCHAR   LocalAddress[6];
    OUT ULONG   BytesSent;
    OUT ULONG   BytesRcvd;
    OUT ULONG   FramesSent;
    OUT ULONG   FramesRcvd;
    OUT ULONG   CRCErrors;                      // Serial-like info only
    OUT ULONG   TimeoutErrors;                  // Serial-like info only
    OUT ULONG   AlignmentErrors;                // Serial-like info only
    OUT ULONG   SerialOverrunErrors;            // Serial-like info only
    OUT ULONG   FramingErrors;                  // Serial-like info only
    OUT ULONG   BufferOverrunErrors;            // Serial-like info only
    OUT ULONG   BytesTransmittedUncompressed;   // Compression info only
    OUT ULONG   BytesReceivedUncompressed;      // Compression info only
    OUT ULONG   BytesTransmittedCompressed;     // Compression info only
    OUT ULONG   BytesReceivedCompressed;        // Compression info only
} NDIS_WAN_GET_STATS, *PNDIS_WAN_GET_STATS;

#define NODMA
#ifndef NODMA
//
// DMA Channel information
//
typedef struct _NDIS_DMA_DESCRIPTION
{
    BOOLEAN     DemandMode;
    BOOLEAN     AutoInitialize;
    BOOLEAN     DmaChannelSpecified;
    DMA_WIDTH   DmaWidth;
    DMA_SPEED   DmaSpeed;
    ULONG       DmaPort;
    ULONG       DmaChannel;
} NDIS_DMA_DESCRIPTION, *PNDIS_DMA_DESCRIPTION;

//
// Internal structure representing an NDIS DMA channel
//
typedef struct _NDIS_DMA_BLOCK
{
    PVOID               MapRegisterBase;
    KEVENT              AllocationEvent;
    PVOID               SystemAdapterObject;
    BOOLEAN             InProgress;
} NDIS_DMA_BLOCK, *PNDIS_DMA_BLOCK;

#endif // NODMA

#if defined(NDIS_WRAPPER)
//
// definitions for PnP state
//

typedef enum _NDIS_PNP_DEVICE_STATE
{
    NdisPnPDeviceAdded,
    NdisPnPDeviceStarted,
    NdisPnPDeviceQueryStopped,
    NdisPnPDeviceStopped,
    NdisPnPDeviceQueryRemoved,
    NdisPnPDeviceRemoved,
    NdisPnPDeviceSurpriseRemoved
} NDIS_PNP_DEVICE_STATE;

//
// flags to use in PnPCapabilities Flag
//
#define NDIS_DEVICE_NOT_STOPPABLE                   0x00000001      // the debvice is not stoppable i.e. ISA
#define NDIS_DEVICE_NOT_REMOVEABLE                  0x00000002      // the device can not be safely removed
#define NDIS_DEVICE_NOT_SUSPENDABLE                 0x00000004      // the device can not be safely suspended
#define NDIS_DEVICE_DISABLE_PM                      0x00000008      // disable all PM features
#define NDIS_DEVICE_DISABLE_WAKE_UP                 0x00000010      // disable device waking up the system
#define NDIS_DEVICE_DISABLE_WAKE_ON_RECONNECT       0x00000020      // disable device waking up the -system- due to a cable re-connect
#define NDIS_DEVICE_RESERVED                        0x00000040      // should not be used
#define NDIS_DEVICE_DISABLE_WAKE_ON_MAGIC_PACKET    0x00000080      // disable device waking up the -system- due to a magic packet
#define NDIS_DEVICE_DISABLE_WAKE_ON_PATTERN_MATCH   0x00000100      // disable device waking up the -system- due to a pattern match



#endif // NDIS_WRAPPER defined

//
// Ndis Buffer is actually an Mdl
//
typedef MDL NDIS_BUFFER, *PNDIS_BUFFER;

struct _NDIS_PACKET;
typedef NDIS_HANDLE PNDIS_PACKET_POOL;

//
//
// wrapper-specific part of a packet
//
typedef struct _NDIS_PACKET_PRIVATE
{
    UINT                PhysicalCount;  // number of physical pages in packet.
    UINT                TotalLength;    // Total amount of data in the packet.
    PNDIS_BUFFER        Head;           // first buffer in the chain
    PNDIS_BUFFER        Tail;           // last buffer in the chain

    // if Head is NULL the chain is empty; Tail doesn't have to be NULL also

    PNDIS_PACKET_POOL   Pool;           // so we know where to free it back to
    UINT                Count;
    ULONG               Flags;          
    BOOLEAN             ValidCounts;
    UCHAR               NdisPacketFlags;    // See fPACKET_xxx bits below
    USHORT              NdisPacketOobOffset;
} NDIS_PACKET_PRIVATE, * PNDIS_PACKET_PRIVATE;

//
// The bits define the bits in the Flags
//
#define NDIS_FLAGS_PROTOCOL_ID_MASK             0x0000000F  // The low 4 bits are defined for protocol-id
                                                            // The values are defined in ntddndis.h
#define NDIS_FLAGS_MULTICAST_PACKET             0x00000010
#define NDIS_FLAGS_BROADCAST_PACKET             0x00000020
#define NDIS_FLAGS_DIRECTED_PACKET              0x00000040
#define NDIS_FLAGS_DONT_LOOPBACK                0x00000080
#define NDIS_FLAGS_IS_LOOPBACK_PACKET           0x00000100  // Valid on receive path only
#define NDIS_FLAGS_LOOPBACK_ONLY                0x00000200
#define NDIS_FLAGS_DOUBLE_BUFFERED              0x00000400  // used by ndis

//
// Low-bits in the NdisPacketFlags are reserved by NDIS Wrapper for internal use
//
#define fPACKET_WRAPPER_RESERVED                0x3F
#define fPACKET_CONTAINS_MEDIA_SPECIFIC_INFO    0x40
#define fPACKET_ALLOCATED_BY_NDIS               0x80

//
// Definition for layout of the media-specific data. More than one class of media-specific
// information can be tagged onto a packet.
//
typedef enum _NDIS_CLASS_ID
{
    NdisClass802_3Priority,
    NdisClassWirelessWanMbxMailbox,
    NdisClassIrdaPacketInfo,
    NdisClassAtmAALInfo

} NDIS_CLASS_ID;

typedef struct _MEDIA_SPECIFIC_INFORMATION
{
    UINT            NextEntryOffset;
    NDIS_CLASS_ID   ClassId;
    UINT            Size;
    UCHAR           ClassInformation[1];

} MEDIA_SPECIFIC_INFORMATION, *PMEDIA_SPECIFIC_INFORMATION;

typedef struct _NDIS_PACKET_OOB_DATA
{
    union
    {
        ULONGLONG   TimeToSend;
        ULONGLONG   TimeSent;
    };
    ULONGLONG       TimeReceived;
    UINT            HeaderSize;
    UINT            SizeMediaSpecificInfo;
    PVOID           MediaSpecificInformation;

    NDIS_STATUS     Status;
} NDIS_PACKET_OOB_DATA, *PNDIS_PACKET_OOB_DATA;

#define NDIS_GET_PACKET_PROTOCOL_TYPE(_Packet_) ((_Packet_)->Private.Flags & NDIS_PROTOCOL_ID_MASK)
    
#define NDIS_OOB_DATA_FROM_PACKET(_p)                                   \
                        (PNDIS_PACKET_OOB_DATA)((PUCHAR)(_p) +          \
                        (_p)->Private.NdisPacketOobOffset)
#define NDIS_GET_PACKET_HEADER_SIZE(_Packet)                            \
                        ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +    \
                        (_Packet)->Private.NdisPacketOobOffset))->HeaderSize
#define NDIS_GET_PACKET_STATUS(_Packet)                                 \
                        ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +    \
                        (_Packet)->Private.NdisPacketOobOffset))->Status
#define NDIS_GET_PACKET_TIME_TO_SEND(_Packet)                           \
                        ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +    \
                        (_Packet)->Private.NdisPacketOobOffset))->TimeToSend
#define NDIS_GET_PACKET_TIME_SENT(_Packet)                              \
                        ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +    \
                        (_Packet)->Private.NdisPacketOobOffset))->TimeSent
#define NDIS_GET_PACKET_TIME_RECEIVED(_Packet)                          \
                        ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +    \
                        (_Packet)->Private.NdisPacketOobOffset))->TimeReceived
#define NDIS_GET_PACKET_MEDIA_SPECIFIC_INFO(_Packet,                    \
                                            _pMediaSpecificInfo,        \
                                            _pSizeMediaSpecificInfo)    \
{                                                                       \
    if (!((_Packet)->Private.NdisPacketFlags & fPACKET_ALLOCATED_BY_NDIS) ||\
        !((_Packet)->Private.NdisPacketFlags & fPACKET_CONTAINS_MEDIA_SPECIFIC_INFO))\
    {                                                                   \
        *(_pMediaSpecificInfo) = NULL;                                  \
        *(_pSizeMediaSpecificInfo) = 0;                                 \
    }                                                                   \
    else                                                                \
    {                                                                   \
        *(_pMediaSpecificInfo) =((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +\
                    (_Packet)->Private.NdisPacketOobOffset))->MediaSpecificInformation;\
        *(_pSizeMediaSpecificInfo) = ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +\
                    (_Packet)->Private.NdisPacketOobOffset))->SizeMediaSpecificInfo;\
    }                                                                   \
}

#define NDIS_SET_PACKET_HEADER_SIZE(_Packet, _HdrSize)                  \
                        ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +    \
                        (_Packet)->Private.NdisPacketOobOffset))->HeaderSize = (_HdrSize)
#define NDIS_SET_PACKET_STATUS(_Packet, _Status)                        \
                        ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +    \
                        (_Packet)->Private.NdisPacketOobOffset))->Status = (_Status)
#define NDIS_SET_PACKET_TIME_TO_SEND(_Packet, _TimeToSend)              \
                        ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +    \
                        (_Packet)->Private.NdisPacketOobOffset))->TimeToSend = (_TimeToSend)
#define NDIS_SET_PACKET_TIME_SENT(_Packet, _TimeSent)                   \
                        ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +    \
                        (_Packet)->Private.NdisPacketOobOffset))->TimeSent = (_TimeSent)
#define NDIS_SET_PACKET_TIME_RECEIVED(_Packet, _TimeReceived)           \
                        ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +    \
                        (_Packet)->Private.NdisPacketOobOffset))->TimeReceived = (_TimeReceived)
#define NDIS_SET_PACKET_MEDIA_SPECIFIC_INFO(_Packet,                    \
                                            _MediaSpecificInfo,         \
                                            _SizeMediaSpecificInfo)     \
{                                                                       \
    if ((_Packet)->Private.NdisPacketFlags & fPACKET_ALLOCATED_BY_NDIS) \
    {                                                                   \
        (_Packet)->Private.NdisPacketFlags |= fPACKET_CONTAINS_MEDIA_SPECIFIC_INFO;\
        ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +                    \
                                          (_Packet)->Private.NdisPacketOobOffset))->MediaSpecificInformation = (_MediaSpecificInfo);\
        ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +                    \
                                          (_Packet)->Private.NdisPacketOobOffset))->SizeMediaSpecificInfo = (_SizeMediaSpecificInfo);\
    }                                                                   \
}

//
// packet definition
//
typedef struct _NDIS_PACKET
{
    NDIS_PACKET_PRIVATE Private;

    union
    {
        struct                  // For Connection-less miniports
        {
            UCHAR   MiniportReserved[2*sizeof(PVOID)];
            UCHAR   WrapperReserved[2*sizeof(PVOID)];
        };

        struct
        {
            //
            // For de-serialized miniports. And by implication conn-oriented miniports.
            // This is for the send-path only. Packets indicated will use WrapperReserved
            // instead of WrapperReservedEx
            //
            UCHAR   MiniportReservedEx[3*sizeof(PVOID)];
            UCHAR   WrapperReservedEx[sizeof(PVOID)];
        };

        struct
        {
            UCHAR   MacReserved[4*sizeof(PVOID)];
        };
    };

    ULONG_PTR       Reserved[2];            // For compatibility with Win95
    UCHAR           ProtocolReserved[1];

} NDIS_PACKET, *PNDIS_PACKET, **PPNDIS_PACKET;

//
//  NDIS per-packet information.
//
typedef enum _NDIS_PER_PACKET_INFO
{
    TcpIpChecksumPacketInfo,
    IpSecPacketInfo,
    TcpLargeSendPacketInfo,
    ClassificationHandlePacketInfo,
    NdisReserved,
    ScatterGatherListPacketInfo,
    Ieee8021pPriority,
    OriginalPacketInfo,
    PacketCancelId,
    DoubleBufferInfo,
    OriginalStatus,
    MaxPerPacketInfo
} NDIS_PER_PACKET_INFO, *PNDIS_PER_PACKET_INFO;

typedef struct _NDIS_PACKET_EXTENSION
{
    PVOID       NdisPacketInfo[MaxPerPacketInfo];
} NDIS_PACKET_EXTENSION, *PNDIS_PACKET_EXTENSION;

#define NDIS_PACKET_EXTENSION_FROM_PACKET(_P)       ((PNDIS_PACKET_EXTENSION)((PUCHAR)(_P) + (_P)->Private.NdisPacketOobOffset + sizeof(NDIS_PACKET_OOB_DATA)))
#define NDIS_PER_PACKET_INFO_FROM_PACKET(_P, _Id)   ((PNDIS_PACKET_EXTENSION)((PUCHAR)(_P) + (_P)->Private.NdisPacketOobOffset + sizeof(NDIS_PACKET_OOB_DATA)))->NdisPacketInfo[(_Id)]
#define NDIS_GET_ORIGINAL_PACKET(_P)                NDIS_PER_PACKET_INFO_FROM_PACKET(_P, OriginalPacketInfo)
#define NDIS_SET_ORIGINAL_PACKET(_P, _OP)           NDIS_PER_PACKET_INFO_FROM_PACKET(_P, OriginalPacketInfo) = _OP
#define NDIS_GET_PACKET_CANCEL_ID(_P)               NDIS_PER_PACKET_INFO_FROM_PACKET(_P, PacketCancelId)
#define NDIS_SET_PACKET_CANCEL_ID(_P, _cId)         NDIS_PER_PACKET_INFO_FROM_PACKET(_P, PacketCancelId) = _cId


typedef struct _NDIS_PACKET_STACK
{
    ULONG_PTR   IMReserved[2];
//    ULONG_PTR   NdisReserved[4];
	// ce needs more than this since just the lock takes 20 bytes
	ULONG_PTR	NdisReserved[8];
} NDIS_PACKET_STACK, *PNDIS_PACKET_STACK;

//
//  Per-packet information for TcpIpChecksumPacketInfo.
//
typedef struct _NDIS_TCP_IP_CHECKSUM_PACKET_INFO
{
    union
    {
        struct
        {   
            ULONG   NdisPacketChecksumV4:1;
            ULONG   NdisPacketChecksumV6:1;
            ULONG   NdisPacketTcpChecksum:1;
            ULONG   NdisPacketUdpChecksum:1;
            ULONG   NdisPacketIpChecksum:1;
        } Transmit;

        struct
        {
            ULONG   NdisPacketTcpChecksumFailed:1;
            ULONG   NdisPacketUdpChecksumFailed:1;
            ULONG   NdisPacketIpChecksumFailed:1;
            ULONG   NdisPacketTcpChecksumSucceeded:1;
            ULONG   NdisPacketUdpChecksumSucceeded:1;
            ULONG   NdisPacketIpChecksumSucceeded:1;
            ULONG   NdisPacketLoopback:1;
        } Receive;

        ULONG   Value;
    };
} NDIS_TCP_IP_CHECKSUM_PACKET_INFO, *PNDIS_TCP_IP_CHECKSUM_PACKET_INFO;



#define MAX_HASHES          4
#define TRUNCATED_HASH_LEN  12

#define CRYPTO_SUCCESS                      0
#define CRYPTO_GENERIC_ERROR                1
#define CRYPTO_TRANSPORT_AH_AUTH_FAILED     2
#define CRYPTO_TRANSPORT_ESP_AUTH_FAILED    3
#define CRYPTO_TUNNEL_AH_AUTH_FAILED        4
#define CRYPTO_TUNNEL_ESP_AUTH_FAILED       5
#define CRYPTO_INVALID_PACKET_SYNTAX        6
#define CRYPTO_INVALID_PROTOCOL             7

typedef struct _NDIS_IPSEC_PACKET_INFO
{
    union
    {
        struct
        {
            NDIS_HANDLE OffloadHandle;  
            NDIS_HANDLE NextOffloadHandle;

        } Transmit;

        struct
        {
            ULONG   SA_DELETE_REQ:1;        
            ULONG   CRYPTO_DONE:1;
            ULONG   NEXT_CRYPTO_DONE:1;
            ULONG   CryptoStatus;
        } Receive;
    };
} NDIS_IPSEC_PACKET_INFO, *PNDIS_IPSEC_PACKET_INFO;


///
//  NDIS Task Off-Load data structures.
///

#define NDIS_TASK_OFFLOAD_VERSION 1

//
//  The following defines are used in the Task field above to define
//  the type of task offloading necessary.
//
typedef enum _NDIS_TASK
{
    TcpIpChecksumNdisTask,
    IpSecNdisTask,
    TcpLargeSendNdisTask,
    MaxNdisTask
} NDIS_TASK, *PNDIS_TASK;

typedef enum _NDIS_ENCAPSULATION
{
    UNSPECIFIED_Encapsulation,
    NULL_Encapsulation,
    IEEE_802_3_Encapsulation,
    IEEE_802_5_Encapsulation,
    LLC_SNAP_ROUTED_Encapsulation,
    LLC_SNAP_BRIDGED_Encapsulation

} NDIS_ENCAPSULATION;

//
// Encapsulation header format
//
typedef struct _NDIS_ENCAPSULATION_FORMAT
{
    NDIS_ENCAPSULATION  Encapsulation;              // Encapsulation type
    struct
    {
        ULONG   FixedHeaderSize:1;
        ULONG   Reserved:31;
    } Flags;

    ULONG    EncapsulationHeaderSize;               // Encapsulation header size

} NDIS_ENCAPSULATION_FORMAT,*PNDIS_ENCAPSULATION_FORMAT;


//
// OFFLOAD header structure for OID_TCP_TASK_OFFLOAD
//
typedef struct _NDIS_TASK_OFFLOAD_HEADER
{
    ULONG       Version;                            // set to NDIS_TASK_OFFLOAD_VERSION
    ULONG       Size;                               // Size of this structure
    ULONG       Reserved;                           // Reserved for future use
    ULONG       OffsetFirstTask;                    // Offset to the first
    NDIS_ENCAPSULATION_FORMAT  EncapsulationFormat; // Encapsulation information.
                                                    // NDIS_TASK_OFFLOAD structure(s)

} NDIS_TASK_OFFLOAD_HEADER, *PNDIS_TASK_OFFLOAD_HEADER;


//
//  Task offload Structure, which follows the above header in ndis query
//
typedef struct _NDIS_TASK_OFFLOAD
{
    ULONG       Version;                            // NDIS_TASK_OFFLOAD_VERSION
    ULONG       Size;                               //  Size of this structure. Used for version checking.
    NDIS_TASK   Task;                               //  Task.
    ULONG       OffsetNextTask;                     //  Offset to the next NDIS_TASK_OFFLOAD
    ULONG       TaskBufferLength;                   //  Length of the task offload information.
    UCHAR       TaskBuffer[1];                      //  The task offload information.
} NDIS_TASK_OFFLOAD, *PNDIS_TASK_OFFLOAD;

//
//  Offload structure for NDIS_TASK_TCP_IP_CHECKSUM
//
typedef struct _NDIS_TASK_TCP_IP_CHECKSUM
{
    struct
    {
        ULONG       IpOptionsSupported:1;
        ULONG       TcpOptionsSupported:1;
        ULONG       TcpChecksum:1;
        ULONG       UdpChecksum:1;
        ULONG       IpChecksum:1;
    } V4Transmit;

    struct
    {   
        ULONG       IpOptionsSupported:1;
        ULONG       TcpOptionsSupported:1;
        ULONG       TcpChecksum:1;
        ULONG       UdpChecksum:1;
        ULONG       IpChecksum:1;
    } V4Receive;


    struct
    {
        ULONG       IpOptionsSupported:1;
        ULONG       TcpOptionsSupported:1;
        ULONG       TcpChecksum:1;
        ULONG       UdpChecksum:1;

    } V6Transmit;

    struct
    {   
        ULONG       IpOptionsSupported:1;
        ULONG       TcpOptionsSupported:1;
        ULONG       TcpChecksum:1;
        ULONG       UdpChecksum:1;
        
    } V6Receive;


} NDIS_TASK_TCP_IP_CHECKSUM, *PNDIS_TASK_TCP_IP_CHECKSUM;

//
//  Off-load structure for NDIS_TASK_TCP_LARGE_SEND
//
typedef struct _NDIS_TASK_TCP_LARGE_SEND
{
    ULONG     Version;
    ULONG     MaxOffLoadSize;
    ULONG        MinSegmentCount;
    BOOLEAN   TcpOptions;
    BOOLEAN   IpOptions;

} NDIS_TASK_TCP_LARGE_SEND, *PNDIS_TASK_TCP_LARGE_SEND;


typedef struct _NDIS_TASK_IPSEC
{
    struct
    {
        ULONG   AH_ESP_COMBINED;
        ULONG   TRANSPORT_TUNNEL_COMBINED;
        ULONG   V4_OPTIONS;
        ULONG   RESERVED;
    } Supported;

    struct
    {
        ULONG   MD5:1;
        ULONG   SHA_1:1;
        ULONG   Transport:1;
        ULONG   Tunnel:1;
        ULONG   Send:1;
        ULONG   Receive:1;
    } V4AH;

    struct
    {
        ULONG   DES:1;
        ULONG   RESERVED:1;
        ULONG   TRIPLE_DES:1;
        ULONG   NULL_ESP:1;
        ULONG   Transport:1;
        ULONG   Tunnel:1;
        ULONG   Send:1;
        ULONG   Receive:1;
    } V4ESP;

} NDIS_TASK_IPSEC, *PNDIS_TASK_IPSEC;

#define IPSEC_TPT_UDPESP_ENCAPTYPE_IKE                 0x00000001
#define IPSEC_TUN_UDPESP_ENCAPTYPE_IKE                 0x00000002
#define IPSEC_TPTOVERTUN_UDPESP_ENCAPTYPE_IKE          0x00000004
#define IPSEC_TPT_UDPESP_OVER_PURE_TUN_ENCAPTYPE_IKE   0x00000008
#define IPSEC_TPT_UDPESP_ENCAPTYPE_OTHER               0x00000010
#define IPSEC_TUN_UDPESP_ENCAPTYPE_OTHER               0x00000020
#define IPSEC_TPTOVERTUN_UDPESP_ENCAPTYPE_OTHER        0x00000040
#define IPSEC_TPT_UDPESP_OVER_PURE_TUN_ENCAPTYPE_OTHER 0x00000080

typedef UINT    IEEE8021PPRIORITY;

//
// WAN Packet. This is used by WAN miniports only. This is the legacy model.
// Co-Ndis is the preferred model for WAN miniports
//
typedef struct _NDIS_WAN_PACKET
{
    LIST_ENTRY          WanPacketQueue;
    PUCHAR              CurrentBuffer;
    ULONG               CurrentLength;
    PUCHAR              StartBuffer;
    PUCHAR              EndBuffer;
    PVOID               ProtocolReserved1;
    PVOID               ProtocolReserved2;
    PVOID               ProtocolReserved3;
    PVOID               ProtocolReserved4;
    PVOID               MacReserved1;
    PVOID               MacReserved2;
    PVOID               MacReserved3;
    PVOID               MacReserved4;
} NDIS_WAN_PACKET, *PNDIS_WAN_PACKET;

//
// Routines to get/set packet flags
//

/*++

UINT
NdisGetPacketFlags(
    IN  PNDIS_PACKET    Packet
    );

--*/

#define NdisGetPacketFlags(_Packet)         (_Packet)->Private.Flags

/*++

VOID
NdisSetPacketFlags(
    IN  PNDIS_PACKET Packet,
    IN  UINT Flags
    );

--*/

#define NdisSetPacketFlags(_Packet, _Flags)     (_Packet)->Private.Flags |= (_Flags)
#define NdisClearPacketFlags(_Packet, _Flags)   (_Packet)->Private.Flags &= ~(_Flags)

//
// Request types used by NdisRequest; constants are added for
// all entry points in the MAC, for those that want to create
// their own internal requests.
//

typedef enum _NDIS_REQUEST_TYPE
{
    NdisRequestQueryInformation,
    NdisRequestSetInformation,
    NdisRequestQueryStatistics,
    NdisRequestOpen,
    NdisRequestClose,
    NdisRequestSend,
    NdisRequestTransferData,
    NdisRequestReset,
    NdisRequestGeneric1,
    NdisRequestGeneric2,
    NdisRequestGeneric3,
    NdisRequestGeneric4
} NDIS_REQUEST_TYPE, *PNDIS_REQUEST_TYPE;


//
// Structure of requests sent via NdisRequest
//

typedef struct _NDIS_REQUEST
{
    UCHAR               MacReserved[4*sizeof(PVOID)];
    NDIS_REQUEST_TYPE   RequestType;
    union _DATA
    {
        struct _QUERY_INFORMATION
        {
            NDIS_OID    Oid;
            PVOID       InformationBuffer;
            UINT        InformationBufferLength;
            UINT        BytesWritten;
            UINT        BytesNeeded;
        } QUERY_INFORMATION;

        struct _SET_INFORMATION
        {
            NDIS_OID    Oid;
            PVOID       InformationBuffer;
            UINT        InformationBufferLength;
            UINT        BytesRead;
            UINT        BytesNeeded;
        } SET_INFORMATION;

    } DATA;
    UCHAR               NdisReserved[9*sizeof(PVOID)];
    union
    {
        UCHAR           CallMgrReserved[2*sizeof(PVOID)];
        UCHAR           ProtocolReserved[2*sizeof(PVOID)];
    };
    UCHAR               MiniportReserved[2*sizeof(PVOID)];
} NDIS_REQUEST, *PNDIS_REQUEST;


//
// NDIS Address Family definitions.
//
typedef ULONG           NDIS_AF, *PNDIS_AF;
#define CO_ADDRESS_FAMILY_Q2931             ((NDIS_AF)0x1)  // ATM
#define CO_ADDRESS_FAMILY_PSCHED            ((NDIS_AF)0x2)  // Packet scheduler
#define CO_ADDRESS_FAMILY_L2TP              ((NDIS_AF)0x3)
#define CO_ADDRESS_FAMILY_IRDA              ((NDIS_AF)0x4)
#define CO_ADDRESS_FAMILY_1394              ((NDIS_AF)0x5)
#define CO_ADDRESS_FAMILY_PPP               ((NDIS_AF)0x6)
#define CO_ADDRESS_FAMILY_TAPI              ((NDIS_AF)0x800)
#define CO_ADDRESS_FAMILY_TAPI_PROXY        ((NDIS_AF)0x801)

//
// The following is OR'ed with the base AF to denote proxy support
//
#define CO_ADDRESS_FAMILY_PROXY             0x80000000


//
//  Address family structure registered/opened via
//      NdisCmRegisterAddressFamily
//      NdisClOpenAddressFamily
//
typedef struct
{
    NDIS_AF                     AddressFamily;  // one of the CO_ADDRESS_FAMILY_xxx values above
    ULONG                       MajorVersion;   // the major version of call manager
    ULONG                       MinorVersion;   // the minor version of call manager
} CO_ADDRESS_FAMILY, *PCO_ADDRESS_FAMILY;

//
// Definition for a SAP
//
typedef struct
{
    ULONG                       SapType;
    ULONG                       SapLength;
    UCHAR                       Sap[1];
} CO_SAP, *PCO_SAP;

//
// Definitions for physical address.
//

typedef PHYSICAL_ADDRESS NDIS_PHYSICAL_ADDRESS, *PNDIS_PHYSICAL_ADDRESS;
typedef struct _NDIS_PHYSICAL_ADDRESS_UNIT
{
    NDIS_PHYSICAL_ADDRESS       PhysicalAddress;
    UINT                        Length;
} NDIS_PHYSICAL_ADDRESS_UNIT, *PNDIS_PHYSICAL_ADDRESS_UNIT;


/*++

ULONG
NdisGetPhysicalAddressHigh(
    IN  NDIS_PHYSICAL_ADDRESS   PhysicalAddress
    );

--*/

#define NdisGetPhysicalAddressHigh(_PhysicalAddress)            \
        ((_PhysicalAddress).HighPart)

/*++

VOID
NdisSetPhysicalAddressHigh(
    IN  NDIS_PHYSICAL_ADDRESS   PhysicalAddress,
    IN  ULONG                   Value
    );

--*/

#define NdisSetPhysicalAddressHigh(_PhysicalAddress, _Value)    \
     ((_PhysicalAddress).HighPart) = (_Value)


/*++

ULONG
NdisGetPhysicalAddressLow(
    IN  NDIS_PHYSICAL_ADDRESS PhysicalAddress
    );

--*/

#define NdisGetPhysicalAddressLow(_PhysicalAddress)             \
    ((_PhysicalAddress).LowPart)


/*++

VOID
NdisSetPhysicalAddressLow(
    IN  NDIS_PHYSICAL_ADDRESS   PhysicalAddress,
    IN  ULONG                   Value
    );

--*/

#define NdisSetPhysicalAddressLow(_PhysicalAddress, _Value)     \
    ((_PhysicalAddress).LowPart) = (_Value)

//
// Macro to initialize an NDIS_PHYSICAL_ADDRESS constant
//

#define NDIS_PHYSICAL_ADDRESS_CONST(_Low, _High)                \
    { (ULONG)(_Low), (LONG)(_High) }


//
// block used for references...
//
typedef struct _REFERENCE
{
    KSPIN_LOCK                  SpinLock;
    USHORT                      ReferenceCount;
    BOOLEAN                     Closing;
} REFERENCE, * PREFERENCE;


//
// This holds a map register entry.
//

typedef struct _MAP_REGISTER_ENTRY
{
    PVOID                       MapRegister;
    BOOLEAN                     WriteToDevice;
} MAP_REGISTER_ENTRY, * PMAP_REGISTER_ENTRY;

//
// Types of Memory (not mutually exclusive)
//

#define NDIS_MEMORY_CONTIGUOUS      0x00000001
#define NDIS_MEMORY_NONCACHED       0x00000002

//
// Open options
//
#define NDIS_OPEN_RECEIVE_NOT_REENTRANT 0x00000001

//
// NDIS_STATUS values
//

#define NDIS_STATUS_SUCCESS                     ((NDIS_STATUS)STATUS_SUCCESS)
#define NDIS_STATUS_PENDING                     ((NDIS_STATUS) STATUS_PENDING)
#define NDIS_STATUS_NOT_RECOGNIZED              ((NDIS_STATUS)0x00010001L)
#define NDIS_STATUS_NOT_COPIED                  ((NDIS_STATUS)0x00010002L)
#define NDIS_STATUS_NOT_ACCEPTED                ((NDIS_STATUS)0x00010003L)
#define NDIS_STATUS_CALL_ACTIVE                 ((NDIS_STATUS)0x00010007L)

#define NDIS_STATUS_ONLINE                      ((NDIS_STATUS)0x40010003L)
#define NDIS_STATUS_RESET_START                 ((NDIS_STATUS)0x40010004L)
#define NDIS_STATUS_RESET_END                   ((NDIS_STATUS)0x40010005L)
#define NDIS_STATUS_RING_STATUS                 ((NDIS_STATUS)0x40010006L)
#define NDIS_STATUS_CLOSED                      ((NDIS_STATUS)0x40010007L)
#define NDIS_STATUS_WAN_LINE_UP                 ((NDIS_STATUS)0x40010008L)
#define NDIS_STATUS_WAN_LINE_DOWN               ((NDIS_STATUS)0x40010009L)
#define NDIS_STATUS_WAN_FRAGMENT                ((NDIS_STATUS)0x4001000AL)
#define NDIS_STATUS_MEDIA_CONNECT               ((NDIS_STATUS)0x4001000BL)
#define NDIS_STATUS_MEDIA_DISCONNECT            ((NDIS_STATUS)0x4001000CL)
#define NDIS_STATUS_HARDWARE_LINE_UP            ((NDIS_STATUS)0x4001000DL)
#define NDIS_STATUS_HARDWARE_LINE_DOWN          ((NDIS_STATUS)0x4001000EL)
#define NDIS_STATUS_INTERFACE_UP                ((NDIS_STATUS)0x4001000FL)
#define NDIS_STATUS_INTERFACE_DOWN              ((NDIS_STATUS)0x40010010L)
#define NDIS_STATUS_MEDIA_BUSY                  ((NDIS_STATUS)0x40010011L)
#define NDIS_STATUS_MEDIA_SPECIFIC_INDICATION   ((NDIS_STATUS)0x40010012L)
#define NDIS_STATUS_WW_INDICATION               NDIS_STATUS_MEDIA_SPECIFIC_INDICATION
#define NDIS_STATUS_LINK_SPEED_CHANGE           ((NDIS_STATUS)0x40010013L)
#define NDIS_STATUS_WAN_GET_STATS               ((NDIS_STATUS)0x40010014L)
#define NDIS_STATUS_WAN_CO_FRAGMENT             ((NDIS_STATUS)0x40010015L)
#define NDIS_STATUS_WAN_CO_LINKPARAMS           ((NDIS_STATUS)0x40010016L)

#define NDIS_STATUS_NOT_RESETTABLE              ((NDIS_STATUS)0x80010001L)
#define NDIS_STATUS_SOFT_ERRORS                 ((NDIS_STATUS)0x80010003L)
#define NDIS_STATUS_HARD_ERRORS                 ((NDIS_STATUS)0x80010004L)
#define NDIS_STATUS_BUFFER_OVERFLOW             ((NDIS_STATUS)STATUS_BUFFER_OVERFLOW)

#define NDIS_STATUS_FAILURE                     ((NDIS_STATUS) STATUS_UNSUCCESSFUL)
#define NDIS_STATUS_RESOURCES                   ((NDIS_STATUS)STATUS_INSUFFICIENT_RESOURCES)
#define NDIS_STATUS_CLOSING                     ((NDIS_STATUS)0xC0010002L)
#define NDIS_STATUS_BAD_VERSION                 ((NDIS_STATUS)0xC0010004L)
#define NDIS_STATUS_BAD_CHARACTERISTICS         ((NDIS_STATUS)0xC0010005L)
#define NDIS_STATUS_ADAPTER_NOT_FOUND           ((NDIS_STATUS)0xC0010006L)
#define NDIS_STATUS_OPEN_FAILED                 ((NDIS_STATUS)0xC0010007L)
#define NDIS_STATUS_DEVICE_FAILED               ((NDIS_STATUS)0xC0010008L)
#define NDIS_STATUS_MULTICAST_FULL              ((NDIS_STATUS)0xC0010009L)
#define NDIS_STATUS_MULTICAST_EXISTS            ((NDIS_STATUS)0xC001000AL)
#define NDIS_STATUS_MULTICAST_NOT_FOUND         ((NDIS_STATUS)0xC001000BL)
#define NDIS_STATUS_REQUEST_ABORTED             ((NDIS_STATUS)0xC001000CL)
#define NDIS_STATUS_RESET_IN_PROGRESS           ((NDIS_STATUS)0xC001000DL)
#define NDIS_STATUS_CLOSING_INDICATING          ((NDIS_STATUS)0xC001000EL)
#define NDIS_STATUS_NOT_SUPPORTED               ((NDIS_STATUS)STATUS_NOT_SUPPORTED)
#define NDIS_STATUS_INVALID_PACKET              ((NDIS_STATUS)0xC001000FL)
#define NDIS_STATUS_OPEN_LIST_FULL              ((NDIS_STATUS)0xC0010010L)
#define NDIS_STATUS_ADAPTER_NOT_READY           ((NDIS_STATUS)0xC0010011L)
#define NDIS_STATUS_ADAPTER_NOT_OPEN            ((NDIS_STATUS)0xC0010012L)
#define NDIS_STATUS_NOT_INDICATING              ((NDIS_STATUS)0xC0010013L)
#define NDIS_STATUS_INVALID_LENGTH              ((NDIS_STATUS)0xC0010014L)
#define NDIS_STATUS_INVALID_DATA                ((NDIS_STATUS)0xC0010015L)
#define NDIS_STATUS_BUFFER_TOO_SHORT            ((NDIS_STATUS)0xC0010016L)
#define NDIS_STATUS_INVALID_OID                 ((NDIS_STATUS)0xC0010017L)
#define NDIS_STATUS_ADAPTER_REMOVED             ((NDIS_STATUS)0xC0010018L)
#define NDIS_STATUS_UNSUPPORTED_MEDIA           ((NDIS_STATUS)0xC0010019L)
#define NDIS_STATUS_GROUP_ADDRESS_IN_USE        ((NDIS_STATUS)0xC001001AL)
#define NDIS_STATUS_FILE_NOT_FOUND              ((NDIS_STATUS)0xC001001BL)
#define NDIS_STATUS_ERROR_READING_FILE          ((NDIS_STATUS)0xC001001CL)
#define NDIS_STATUS_ALREADY_MAPPED              ((NDIS_STATUS)0xC001001DL)
#define NDIS_STATUS_RESOURCE_CONFLICT           ((NDIS_STATUS)0xC001001EL)
#define NDIS_STATUS_NO_CABLE                    ((NDIS_STATUS)0xC001001FL)

#define NDIS_STATUS_INVALID_SAP                 ((NDIS_STATUS)0xC0010020L)
#define NDIS_STATUS_SAP_IN_USE                  ((NDIS_STATUS)0xC0010021L)
#define NDIS_STATUS_INVALID_ADDRESS             ((NDIS_STATUS)0xC0010022L)
#define NDIS_STATUS_VC_NOT_ACTIVATED            ((NDIS_STATUS)0xC0010023L)
#define NDIS_STATUS_DEST_OUT_OF_ORDER           ((NDIS_STATUS)0xC0010024L)  // cause 27
#define NDIS_STATUS_VC_NOT_AVAILABLE            ((NDIS_STATUS)0xC0010025L)  // cause 35,45
#define NDIS_STATUS_CELLRATE_NOT_AVAILABLE      ((NDIS_STATUS)0xC0010026L)  // cause 37
#define NDIS_STATUS_INCOMPATABLE_QOS            ((NDIS_STATUS)0xC0010027L)  // cause 49
#define NDIS_STATUS_AAL_PARAMS_UNSUPPORTED      ((NDIS_STATUS)0xC0010028L)  // cause 93
#define NDIS_STATUS_NO_ROUTE_TO_DESTINATION     ((NDIS_STATUS)0xC0010029L)  // cause 3

#define NDIS_STATUS_TOKEN_RING_OPEN_ERROR       ((NDIS_STATUS)0xC0011000L)
#define NDIS_STATUS_INVALID_DEVICE_REQUEST      ((NDIS_STATUS)STATUS_INVALID_DEVICE_REQUEST)
#define NDIS_STATUS_NETWORK_UNREACHABLE         ((NDIS_STATUS)STATUS_NETWORK_UNREACHABLE)


//
// used in error logging
//

#define NDIS_ERROR_CODE ULONG

#define NDIS_ERROR_CODE_RESOURCE_CONFLICT           EVENT_NDIS_RESOURCE_CONFLICT
#define NDIS_ERROR_CODE_OUT_OF_RESOURCES            EVENT_NDIS_OUT_OF_RESOURCE
#define NDIS_ERROR_CODE_HARDWARE_FAILURE            EVENT_NDIS_HARDWARE_FAILURE
#define NDIS_ERROR_CODE_ADAPTER_NOT_FOUND           EVENT_NDIS_ADAPTER_NOT_FOUND
#define NDIS_ERROR_CODE_INTERRUPT_CONNECT           EVENT_NDIS_INTERRUPT_CONNECT
#define NDIS_ERROR_CODE_DRIVER_FAILURE              EVENT_NDIS_DRIVER_FAILURE
#define NDIS_ERROR_CODE_BAD_VERSION                 EVENT_NDIS_BAD_VERSION
#define NDIS_ERROR_CODE_TIMEOUT                     EVENT_NDIS_TIMEOUT
#define NDIS_ERROR_CODE_NETWORK_ADDRESS             EVENT_NDIS_NETWORK_ADDRESS
#define NDIS_ERROR_CODE_UNSUPPORTED_CONFIGURATION   EVENT_NDIS_UNSUPPORTED_CONFIGURATION
#define NDIS_ERROR_CODE_INVALID_VALUE_FROM_ADAPTER  EVENT_NDIS_INVALID_VALUE_FROM_ADAPTER
#define NDIS_ERROR_CODE_MISSING_CONFIGURATION_PARAMETER EVENT_NDIS_MISSING_CONFIGURATION_PARAMETER
#define NDIS_ERROR_CODE_BAD_IO_BASE_ADDRESS         EVENT_NDIS_BAD_IO_BASE_ADDRESS
#define NDIS_ERROR_CODE_RECEIVE_SPACE_SMALL         EVENT_NDIS_RECEIVE_SPACE_SMALL
#define NDIS_ERROR_CODE_ADAPTER_DISABLED            EVENT_NDIS_ADAPTER_DISABLED

//
// Ndis Spin Locks
//
EXPORT
VOID
NdisAllocateSpinLock(
    IN  PNDIS_SPIN_LOCK         SpinLock
    );

EXPORT
VOID
NdisFreeSpinLock(
    IN  PNDIS_SPIN_LOCK         SpinLock
    );

EXPORT
VOID
NdisAcquireSpinLock(
    IN  PNDIS_SPIN_LOCK         SpinLock
    );

EXPORT
VOID
NdisReleaseSpinLock(
    IN  PNDIS_SPIN_LOCK         SpinLock
    );

EXPORT
VOID
NdisDprAcquireSpinLock(
    IN  PNDIS_SPIN_LOCK         SpinLock
    );

EXPORT
VOID
NdisDprReleaseSpinLock(
    IN  PNDIS_SPIN_LOCK         SpinLock
    );


EXPORT
VOID
NdisGetCurrentSystemTime(
    PLARGE_INTEGER              pSystemTime
    );

//
// Interlocked support functions
//

EXPORT
ULONG
NdisInterlockedIncrement(
    IN  PLONG                   Addend
    );

EXPORT
ULONG
NdisInterlockedDecrement(
    IN  PLONG                   Addend
    );

EXPORT
VOID
NdisInterlockedAddUlong(
    IN  PULONG                  Addend,
    IN  ULONG                   Increment,
    IN  PNDIS_SPIN_LOCK         SpinLock
    );

EXPORT
PLIST_ENTRY
NdisInterlockedInsertHeadList(
    IN  PLIST_ENTRY             ListHead,
    IN  PLIST_ENTRY             ListEntry,
    IN  PNDIS_SPIN_LOCK         SpinLock
    );


EXPORT
PLIST_ENTRY
NdisInterlockedInsertTailList(
    IN  PLIST_ENTRY             ListHead,
    IN  PLIST_ENTRY             ListEntry,
    IN  PNDIS_SPIN_LOCK         SpinLock
    );


EXPORT
PLIST_ENTRY
NdisInterlockedRemoveHeadList(
    IN  PLIST_ENTRY             ListHead,
    IN  PNDIS_SPIN_LOCK         SpinLock
    );

EXPORT
LARGE_INTEGER
NdisInterlockedAddLargeInteger(
    IN  PLARGE_INTEGER          Addend,
    IN  ULONG                   Increment,
    IN  PKSPIN_LOCK             Lock
    );


#ifdef UNDER_CE
#ifdef MAXIMUM_PROCESSORS
#undef MAXIMUM_PROCESSORS
#endif
#define	MAXIMUM_PROCESSORS	1
#else
#ifndef	MAXIMUM_PROCESSORS
#define	MAXIMUM_PROCESSORS	32
#endif
#endif // UNDER_CE

#ifndef UNDER_CE
typedef union _NDIS_RW_LOCK_REFCOUNT
{
    UINT                        RefCount;
    UCHAR                       cacheLine[16];  // One refCount per cache line
} NDIS_RW_LOCK_REFCOUNT;
#endif

typedef struct _NDIS_RW_LOCK
{
#ifdef UNDER_CE
	KSPIN_LOCK          SpinLock;
#else
    union
    {
        struct
        {
            KSPIN_LOCK          SpinLock;
            PVOID               Context;
        };
        UCHAR                   Reserved[16];
    };

    NDIS_RW_LOCK_REFCOUNT       RefCount[MAXIMUM_PROCESSORS];
#endif
} NDIS_RW_LOCK, *PNDIS_RW_LOCK;

typedef struct _LOCK_STATE
{
    USHORT                      LockState;
#ifndef UNDER_CE
    KIRQL                       OldIrql;
#endif
} LOCK_STATE, *PLOCK_STATE;


EXPORT
VOID
NdisInitializeReadWriteLock(
    IN  PNDIS_RW_LOCK           Lock
    );


EXPORT
VOID
NdisAcquireReadWriteLock(
    IN  PNDIS_RW_LOCK           Lock,
    IN  BOOLEAN                 fWrite,         // TRUE -> Write, FALSE -> Read
    IN  PLOCK_STATE             LockState
    );


EXPORT
VOID
NdisReleaseReadWriteLock(
    IN  PNDIS_RW_LOCK           Lock,
    IN  PLOCK_STATE             LockState
    );

EXPORT
VOID
NdisFreeReadWriteLock(
    IN  PNDIS_RW_LOCK           Lock
    );

#define NdisInterlockedAddLargeStatistic(_Addend, _Increment)   \
    ExInterlockedAddLargeStatistic((PLARGE_INTEGER)_Addend, _Increment)

//
// S-List support
//

#define NdisInterlockedPushEntrySList(SListHead, SListEntry, Lock) \
    ExInterlockedPushEntrySList(SListHead, SListEntry, &(Lock)->SpinLock)

#define NdisInterlockedPopEntrySList(SListHead, Lock) \
    ExInterlockedPopEntrySList(SListHead, &(Lock)->SpinLock)

#define NdisInterlockedFlushSList(SListHead) ExInterlockedFlushSList(SListHead)

#define NdisInitializeSListHead(SListHead)  ExInitializeSListHead(SListHead)

#define NdisQueryDepthSList(SListHead)  ExQueryDepthSList(SListHead)

EXPORT
VOID
NdisGetCurrentProcessorCpuUsage(
    OUT PULONG                  pCpuUsage
    );

EXPORT
VOID
NdisGetCurrentProcessorCounts(
    OUT PULONG                  pIdleCount,
    OUT PULONG                  pKernelAndUser,
    OUT PULONG                  pIndex
    );

EXPORT
VOID
NdisGetSystemUpTime(
    OUT PULONG                  pSystemUpTime
    );

//
// List manipulation
//

#ifdef UNDER_CE

VOID
NdisInitializeListHead(
    IN  PLIST_ENTRY ListHead
    );

#else

#define NdisInitializeListHead(_ListHead) InitializeListHead(_ListHead)

#endif


//
// Configuration Requests
//

EXPORT
VOID
NdisOpenConfiguration(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_HANDLE            ConfigurationHandle,
    IN  NDIS_HANDLE             WrapperConfigurationContext
    );

EXPORT
VOID
NdisOpenConfigurationKeyByName(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             ConfigurationHandle,
    IN  PNDIS_STRING            SubKeyName,
    OUT PNDIS_HANDLE            SubKeyHandle
    );

EXPORT
VOID
NdisOpenConfigurationKeyByIndex(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             ConfigurationHandle,
    IN  ULONG                   Index,
    OUT PNDIS_STRING            KeyName,
    OUT PNDIS_HANDLE            KeyHandle
    );

EXPORT
VOID
NdisReadConfiguration(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
    IN  NDIS_HANDLE             ConfigurationHandle,
    IN  PNDIS_STRING            Keyword,
    IN  NDIS_PARAMETER_TYPE     ParameterType
    );

EXPORT
VOID
NdisWriteConfiguration(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             ConfigurationHandle,
    IN  PNDIS_STRING            Keyword,
    IN  PNDIS_CONFIGURATION_PARAMETER ParameterValue
    );

EXPORT
VOID
NdisCloseConfiguration(
    IN  NDIS_HANDLE             ConfigurationHandle
    );

EXPORT
VOID
NdisReadNetworkAddress(
    OUT PNDIS_STATUS            Status,
    OUT PVOID *                 NetworkAddress,
    OUT PUINT                   NetworkAddressLength,
    IN  NDIS_HANDLE             ConfigurationHandle
    );

#ifndef UNDER_CE
EXPORT
VOID
NdisReadEisaSlotInformation(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             WrapperConfigurationContext,
    OUT PUINT                   SlotNumber,
    OUT PNDIS_EISA_FUNCTION_INFORMATION EisaData
    );

EXPORT
VOID
NdisReadEisaSlotInformationEx(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             WrapperConfigurationContext,
    OUT PUINT                   SlotNumber,
    OUT PNDIS_EISA_FUNCTION_INFORMATION *EisaData,
    OUT PUINT                   NumberOfFunctions
    );
#endif

EXPORT
ULONG
NdisReadPciSlotInformation(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  ULONG                   SlotNumber,
    IN  ULONG                   Offset,
    IN  PVOID                   Buffer,
    IN  ULONG                   Length
    );

EXPORT
ULONG
NdisWritePciSlotInformation(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  ULONG                   SlotNumber,
    IN  ULONG                   Offset,
    IN  PVOID                   Buffer,
    IN  ULONG                   Length
    );

EXPORT
NDIS_STATUS
NdisPciAssignResources(
    IN  NDIS_HANDLE             NdisMacHandle,
    IN  NDIS_HANDLE             NdisWrapperHandle,
    IN  NDIS_HANDLE             WrapperConfigurationContext,
    IN  ULONG                   SlotNumber,
    OUT PNDIS_RESOURCE_LIST *   AssignedResources
    );

EXPORT
ULONG
NdisReadPcmciaAttributeMemory(
    IN NDIS_HANDLE              NdisAdapterHandle,
    IN ULONG                    Offset,
    IN PVOID                    Buffer,
    IN ULONG                    Length
    );
    
EXPORT
ULONG
NdisWritePcmciaAttributeMemory(
    IN NDIS_HANDLE              NdisAdapterHandle,
    IN ULONG                    Offset,
    IN PVOID                    Buffer,
    IN ULONG                    Length
    );

//
// Buffer Pool
//

EXPORT
VOID
NdisAllocateBufferPool(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_HANDLE            PoolHandle,
    IN  UINT                    NumberOfDescriptors
    );

EXPORT
VOID
NdisFreeBufferPool(
    IN  NDIS_HANDLE             PoolHandle
    );

EXPORT
VOID
NdisAllocateBuffer(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_BUFFER *          Buffer,
    IN  NDIS_HANDLE             PoolHandle,
    IN  PVOID                   VirtualAddress,
    IN  UINT                    Length
    );

EXPORT
VOID
NdisCopyBuffer(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_BUFFER *          Buffer,
    IN  NDIS_HANDLE             PoolHandle,
    IN  PVOID                   MemoryDescriptor,
    IN  UINT                    Offset,
    IN  UINT                    Length
    );


//
//  VOID
//  NdisCopyLookaheadData(
//      IN  PVOID               Destination,
//      IN  PVOID               Source,
//      IN  ULONG               Length,
//      IN  ULONG               ReceiveFlags
//      );
//

#ifdef _M_IX86
#define NdisCopyLookaheadData(_Destination, _Source, _Length, _MacOptions)  \
        RtlCopyMemory(_Destination, _Source, _Length)
#else
#define NdisCopyLookaheadData(_Destination, _Source, _Length, _MacOptions)  \
    {                                                                       \
        if ((_MacOptions) & NDIS_MAC_OPTION_COPY_LOOKAHEAD_DATA)            \
        {                                                                   \
            RtlCopyMemory(_Destination, _Source, _Length);                  \
        }                                                                   \
        else                                                                \
        {                                                                   \
            PUCHAR _Src = (PUCHAR)(_Source);                                \
            PUCHAR _Dest = (PUCHAR)(_Destination);                          \
            PUCHAR _End = _Dest + (_Length);                                \
            while (_Dest < _End)                                            \
            {                                                               \
                *_Dest++ = *_Src++;                                         \
            }                                                               \
        }                                                                   \
    }
#endif

//
// Packet Pool
//
EXPORT
VOID
NdisAllocatePacketPool(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_HANDLE            PoolHandle,
    IN  UINT                    NumberOfDescriptors,
    IN  UINT                    ProtocolReservedLength
    );

EXPORT
VOID
NdisAllocatePacketPoolEx(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_HANDLE            PoolHandle,
    IN  UINT                    NumberOfDescriptors,
    IN  UINT                    NumberOfOverflowDescriptors,
    IN  UINT                    ProtocolReservedLength
    );

EXPORT
VOID
NdisSetPacketPoolProtocolId(
    IN  NDIS_HANDLE             PacketPoolHandle,
    IN  UINT                    ProtocolId
    );

EXPORT
UINT
NdisPacketPoolUsage(
    IN  NDIS_HANDLE             PoolHandle
    );

EXPORT
UINT
NdisPacketSize(
    IN  UINT                    ProtocolReservedSize
    );

EXPORT
NDIS_HANDLE
NdisGetPoolFromPacket(
    IN  PNDIS_PACKET            Packet
    );

EXPORT
PNDIS_PACKET_STACK
NdisIMGetCurrentPacketStack(
    IN  PNDIS_PACKET            Packet,
    OUT BOOLEAN *               StacksRemaining
    );

EXPORT
VOID
NdisFreePacketPool(
    IN  NDIS_HANDLE             PoolHandle
    );

EXPORT
VOID
NdisFreePacket(
    IN  PNDIS_PACKET            Packet
    );

EXPORT
VOID
NdisDprFreePacket(
    IN  PNDIS_PACKET            Packet
    );

EXPORT
VOID
NdisDprFreePacketNonInterlocked(
    IN  PNDIS_PACKET            Packet
    );


EXPORT
VOID
NdisAllocatePacket(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_PACKET *          Packet,
    IN  NDIS_HANDLE             PoolHandle
    );

EXPORT
VOID
NdisDprAllocatePacket(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_PACKET *          Packet,
    IN  NDIS_HANDLE             PoolHandle
    );

EXPORT
VOID
NdisDprAllocatePacketNonInterlocked(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_PACKET *          Packet,
    IN  NDIS_HANDLE             PoolHandle
    );

// VOID
// NdisReinitializePacket(
//  IN OUT PNDIS_PACKET         Packet
//  );
#define NdisReinitializePacket(Packet)                                      \
{                                                                           \
    (Packet)->Private.Head = (PNDIS_BUFFER)NULL;                            \
    (Packet)->Private.ValidCounts = FALSE;                                  \
}


//
// Block Pool APIs
//
typedef
VOID
(__stdcall *NDIS_BLOCK_INITIALIZER) (
    IN  PUCHAR                  Block,
    IN  SIZE_T                  NumberOfBytes
    );

NDIS_HANDLE
NdisCreateBlockPool(
    IN  USHORT                  BlockSize,
    IN  USHORT                  FreeBlockLinkOffset,
    IN  ULONG                   Tag,
    IN  NDIS_BLOCK_INITIALIZER  InitFunction OPTIONAL
    );

VOID
NdisDestroyBlockPool(
    IN  NDIS_HANDLE             BlockPoolHandle
    );

PUCHAR
NdisAllocateFromBlockPool(
    IN  NDIS_HANDLE             BlockPoolHandle
    );

VOID
NdisFreeToBlockPool(
    IN  PUCHAR                  Block
    );

EXPORT
VOID
NdisFreeBuffer(
    IN  PNDIS_BUFFER            Buffer
    );

#if BINARY_COMPATIBLE

EXPORT
VOID
NdisQueryBuffer(
    IN  PNDIS_BUFFER            Buffer,
    OUT PVOID *                 VirtualAddress OPTIONAL,
    OUT PUINT                   Length
    );

EXPORT
VOID
NdisQueryBufferSafe(
    IN  PNDIS_BUFFER            Buffer,
    OUT PVOID *                 VirtualAddress OPTIONAL,
    OUT PUINT                   Length,
    IN  MM_PAGE_PRIORITY        Priority
    );

EXPORT
VOID
NdisQueryBufferOffset(
    IN  PNDIS_BUFFER            Buffer,
    OUT PUINT                   Offset,
    OUT PUINT                   Length
    );

//
// This is a combination of NdisQueryPacket and NdisQueryBuffer and
// optimized for protocols to get the first Buffer, its VA and its size.
//
VOID
NdisGetFirstBufferFromPacket(
    IN  PNDIS_PACKET            Packet,
    OUT PNDIS_BUFFER *          FirstBuffer,
    OUT PVOID *                 FirstBufferVA,
    OUT PUINT                   FirstBufferLength,
    OUT PUINT                   TotalBufferLength
    );

VOID
NdisGetFirstBufferFromPacketSafe(
    IN  PNDIS_PACKET            Packet,
    OUT PNDIS_BUFFER *          FirstBuffer,
    OUT PVOID *                 FirstBufferVA,
    OUT PUINT                   FirstBufferLength,
    OUT PUINT                   TotalBufferLength,
    IN  MM_PAGE_PRIORITY        Priority
    );


//
// This is used to determine how many physical pieces
// an NDIS_BUFFER will take up when mapped.
//

EXPORT
ULONG
NDIS_BUFFER_TO_SPAN_PAGES(
    IN  PNDIS_BUFFER                Buffer
    );

EXPORT
VOID
NdisGetBufferPhysicalArraySize(
    IN  PNDIS_BUFFER                Buffer,
    OUT PUINT                       ArraySize
    );

#else // BINARY_COMPATIBLE

#define NdisQueryBuffer(_Buffer, _VirtualAddress, _Length)                  \
{                                                                           \
    if (ARGUMENT_PRESENT(_VirtualAddress))                                  \
    {                                                                       \
        *(PVOID *)(_VirtualAddress) = MmGetSystemAddressForMdl(_Buffer);    \
    }                                                                       \
    *(_Length) = MmGetMdlByteCount(_Buffer);                                \
}

#define NdisQueryBufferSafe(_Buffer, _VirtualAddress, _Length, _Priority)   \
{                                                                           \
    if (ARGUMENT_PRESENT(_VirtualAddress))                                  \
    {                                                                       \
        *(PVOID *)(_VirtualAddress) = MmGetSystemAddressForMdlSafe(_Buffer, _Priority); \
    }                                                                       \
    *(_Length) = MmGetMdlByteCount(_Buffer);                                \
}

#define NdisQueryBufferOffset(_Buffer, _Offset, _Length)                    \
{                                                                           \
    *(_Offset) = MmGetMdlByteOffset(_Buffer);                               \
    *(_Length) = MmGetMdlByteCount(_Buffer);                                \
}


#define NdisGetFirstBufferFromPacket(_Packet,                               \
                                     _FirstBuffer,                          \
                                     _FirstBufferVA,                        \
                                     _FirstBufferLength,                    \
                                     _TotalBufferLength)                    \
    {                                                                       \
        PNDIS_BUFFER    _pBuf;                                              \
                                                                            \
        _pBuf = (_Packet)->Private.Head;                                    \
        *(_FirstBuffer) = _pBuf;                                            \
        if (_pBuf)                                                          \
        {                                                                   \
            *(_FirstBufferVA) = MmGetSystemAddressForMdl(_pBuf);            \
            *(_FirstBufferLength) =                                         \
            *(_TotalBufferLength) = MmGetMdlByteCount(_pBuf);               \
            for (_pBuf = _pBuf->Next;                                       \
                 _pBuf != NULL;                                             \
                 _pBuf = _pBuf->Next)                                       \
            {                                                               \
                *(_TotalBufferLength) += MmGetMdlByteCount(_pBuf);          \
            }                                                               \
        }                                                                   \
        else                                                                \
        {                                                                   \
            *(_FirstBufferVA) = 0;                                          \
            *(_FirstBufferLength) = 0;                                      \
            *(_TotalBufferLength) = 0;                                      \
        }                                                                   \
    }

#define NdisGetFirstBufferFromPacketSafe(_Packet,                           \
                                         _FirstBuffer,                      \
                                         _FirstBufferVA,                    \
                                         _FirstBufferLength,                \
                                         _TotalBufferLength,                \
                                         _Priority)                         \
    {                                                                       \
        PNDIS_BUFFER    _pBuf;                                              \
                                                                            \
        _pBuf = (_Packet)->Private.Head;                                    \
        *(_FirstBuffer) = _pBuf;                                            \
        if (_pBuf)                                                          \
        {                                                                   \
            *(_FirstBufferVA) = MmGetSystemAddressForMdlSafe(_pBuf, _Priority); \
            *(_FirstBufferLength) = *(_TotalBufferLength) = MmGetMdlByteCount(_pBuf); \
            for (_pBuf = _pBuf->Next;                                       \
                 _pBuf != NULL;                                             \
                 _pBuf = _pBuf->Next)                                       \
            {                                                               \
                *(_TotalBufferLength) += MmGetMdlByteCount(_pBuf);          \
            }                                                               \
        }                                                                   \
        else                                                                \
        {                                                                   \
            *(_FirstBufferVA) = 0;                                          \
            *(_FirstBufferLength) = 0;                                      \
            *(_TotalBufferLength) = 0;                                      \
        }                                                                   \
    }



#define NDIS_BUFFER_TO_SPAN_PAGES(_Buffer)                                  \
    (MmGetMdlByteCount(_Buffer)==0 ?                                        \
                1 :                                                         \
                (COMPUTE_PAGES_SPANNED(                                     \
                        MmGetMdlVirtualAddress(_Buffer),                    \
                        MmGetMdlByteCount(_Buffer))))

#define NdisGetBufferPhysicalArraySize(Buffer, ArraySize)                   \
    (*(ArraySize) = NDIS_BUFFER_TO_SPAN_PAGES(Buffer))

#endif // BINARY_COMPATIBLE


/*++

NDIS_BUFFER_LINKAGE(
    IN  PNDIS_BUFFER            Buffer
    );

--*/

#define NDIS_BUFFER_LINKAGE(Buffer) ((Buffer)->Next)


/*++

VOID
NdisRecalculatePacketCounts(
    IN OUT PNDIS_PACKET         Packet
    );

--*/

#define NdisRecalculatePacketCounts(Packet)                                 \
{                                                                           \
    {                                                                       \
        PNDIS_BUFFER TmpBuffer = (Packet)->Private.Head;                    \
        if (TmpBuffer)                                                      \
        {                                                                   \
            while (TmpBuffer->Next)                                         \
            {                                                               \
                TmpBuffer = TmpBuffer->Next;                                \
            }                                                               \
            (Packet)->Private.Tail = TmpBuffer;                             \
        }                                                                   \
        (Packet)->Private.ValidCounts = FALSE;                              \
    }                                                                       \
}


/*++

VOID
NdisChainBufferAtFront(
    IN OUT PNDIS_PACKET         Packet,
    IN OUT PNDIS_BUFFER         Buffer
    );

--*/

#define NdisChainBufferAtFront(Packet, Buffer)                              \
{                                                                           \
    PNDIS_BUFFER TmpBuffer = (Buffer);                                      \
                                                                            \
    for (;;)                                                                \
    {                                                                       \
        if (TmpBuffer->Next == (PNDIS_BUFFER)NULL)                          \
            break;                                                          \
        TmpBuffer = TmpBuffer->Next;                                        \
    }                                                                       \
    if ((Packet)->Private.Head == NULL)                                     \
    {                                                                       \
        (Packet)->Private.Tail = TmpBuffer;                                 \
    }                                                                       \
    TmpBuffer->Next = (Packet)->Private.Head;                               \
    (Packet)->Private.Head = (Buffer);                                      \
    (Packet)->Private.ValidCounts = FALSE;                                  \
}

/*++

VOID
NdisChainBufferAtBack(
    IN OUT PNDIS_PACKET         Packet,
    IN OUT PNDIS_BUFFER         Buffer
    );

--*/

#define NdisChainBufferAtBack(Packet, Buffer)                               \
{                                                                           \
    PNDIS_BUFFER TmpBuffer = (Buffer);                                      \
                                                                            \
    for (;;)                                                                \
    {                                                                       \
        if (TmpBuffer->Next == NULL)                                        \
            break;                                                          \
        TmpBuffer = TmpBuffer->Next;                                        \
    }                                                                       \
    if ((Packet)->Private.Head != NULL)                                     \
    {                                                                       \
        (Packet)->Private.Tail->Next = (Buffer);                            \
    }                                                                       \
    else                                                                    \
    {                                                                       \
        (Packet)->Private.Head = (Buffer);                                  \
    }                                                                       \
    (Packet)->Private.Tail = TmpBuffer;                                     \
    TmpBuffer->Next = NULL;                                                 \
    (Packet)->Private.ValidCounts = FALSE;                                  \
}

EXPORT
VOID
NdisUnchainBufferAtFront(
    IN OUT PNDIS_PACKET         Packet,
    OUT PNDIS_BUFFER *          Buffer
    );

EXPORT
VOID
NdisUnchainBufferAtBack(
    IN OUT PNDIS_PACKET         Packet,
    OUT PNDIS_BUFFER *          Buffer
    );



#ifdef UNDER_CE

VOID
NdisQueryPacket(
    IN  PNDIS_PACKET            _Packet,
    OUT PUINT                   _PhysicalBufferCount OPTIONAL,
    OUT PUINT                   _BufferCount OPTIONAL,
    OUT PNDIS_BUFFER *          _FirstBuffer OPTIONAL,
    OUT PUINT                   _TotalPacketLength OPTIONAL
    );

#else
/*++

VOID
NdisQueryPacket(
    IN  PNDIS_PACKET            _Packet,
    OUT PUINT                   _PhysicalBufferCount OPTIONAL,
    OUT PUINT                   _BufferCount OPTIONAL,
    OUT PNDIS_BUFFER *          _FirstBuffer OPTIONAL,
    OUT PUINT                   _TotalPacketLength OPTIONAL
    );

--*/

#define NdisQueryPacket(_Packet,                                            \
                        _PhysicalBufferCount,                               \
                        _BufferCount,                                       \
                        _FirstBuffer,                                       \
                        _TotalPacketLength)                                 \
{                                                                           \
    if ((_FirstBuffer) != NULL)                                             \
    {                                                                       \
        PNDIS_BUFFER * __FirstBuffer = (_FirstBuffer);                      \
        *(__FirstBuffer) = (_Packet)->Private.Head;                         \
    }                                                                       \
    if ((_TotalPacketLength) || (_BufferCount) || (_PhysicalBufferCount))   \
    {                                                                       \
        if (!(_Packet)->Private.ValidCounts)                                \
        {                                                                   \
            PNDIS_BUFFER TmpBuffer = (_Packet)->Private.Head;               \
            UINT PTotalLength = 0, PPhysicalCount = 0, PAddedCount = 0;     \
            UINT PacketLength, Offset;                                      \
                                                                            \
            while (TmpBuffer != (PNDIS_BUFFER)NULL)                         \
            {                                                               \
                NdisQueryBufferOffset(TmpBuffer, &Offset, &PacketLength);   \
                PTotalLength += PacketLength;                               \
                PPhysicalCount += (UINT)NDIS_BUFFER_TO_SPAN_PAGES(TmpBuffer);\
                ++PAddedCount;                                              \
                TmpBuffer = TmpBuffer->Next;                                \
            }                                                               \
            (_Packet)->Private.Count = PAddedCount;                         \
            (_Packet)->Private.TotalLength = PTotalLength;                  \
            (_Packet)->Private.PhysicalCount = PPhysicalCount;              \
            (_Packet)->Private.ValidCounts = TRUE;                          \
        }                                                                   \
                                                                            \
        if (_PhysicalBufferCount)                                           \
        {                                                                   \
            PUINT __PhysicalBufferCount = (_PhysicalBufferCount);           \
            *(__PhysicalBufferCount) = (_Packet)->Private.PhysicalCount;    \
        }                                                                   \
        if (_BufferCount)                                                   \
        {                                                                   \
            PUINT __BufferCount = (_BufferCount);                           \
            *(__BufferCount) = (_Packet)->Private.Count;                    \
        }                                                                   \
        if (_TotalPacketLength)                                             \
        {                                                                   \
            PUINT __TotalPacketLength = (_TotalPacketLength);               \
            *(__TotalPacketLength) = (_Packet)->Private.TotalLength;        \
        }                                                                   \
    }                                                                       \
}

#endif


/*++

VOID
NdisQueryPacketFirstBuffer(
    IN  PNDIS_PACKET            _Packet,
    OUT PNDIS_BUFFER *          _FirstBuffer
    );

--*/

//
// The following macro can be used to retrieve the first buffer pointer in the packet buffer chain.
// Note: This macro SHOULD be used in place of any NdisQueryPacket(_P, NULL, NULL, &Buffer, NULL) call,
//       as it is more efficient.
//
#define NdisQueryPacketFirstBuffer(_Packet, _FirstBuffer) *(_FirstBuffer) = (_Packet)->Private.Head

/*++

VOID
NdisQueryPacketLength(
    IN  PNDIS_PACKET            _Packet,
    OUT PUINT                   _TotalPacketLength OPTIONAL
    );

--*/

#define NdisQueryPacketLength(_Packet,                                      \
                              _TotalPacketLength)                           \
{                                                                           \
    if (!(_Packet)->Private.ValidCounts)                                    \
    {                                                                       \
        NdisQueryPacket(_Packet, NULL, NULL, NULL, _TotalPacketLength);     \
    }                                                                       \
    else *(_TotalPacketLength) = (_Packet)->Private.TotalLength;            \
}


/*++

VOID
NdisGetNextBuffer(
    IN  PNDIS_BUFFER            CurrentBuffer,
    OUT PNDIS_BUFFER *          NextBuffer
    );

--*/

#define NdisGetNextBuffer(CurrentBuffer, NextBuffer)                        \
{                                                                           \
    *(NextBuffer) = (CurrentBuffer)->Next;                                  \
}

#if BINARY_COMPATIBLE

VOID
NdisAdjustBufferLength(
    IN  PNDIS_BUFFER            Buffer,
    IN  UINT                    Length
    );

#else // BINARY_COMPATIBLE

#define NdisAdjustBufferLength(Buffer, Length)  (((Buffer)->ByteCount) = (Length))

#endif // BINARY_COMPATIBLE

EXPORT
VOID
NdisCopyFromPacketToPacket(
    IN  PNDIS_PACKET            Destination,
    IN  UINT                    DestinationOffset,
    IN  UINT                    BytesToCopy,
    IN  PNDIS_PACKET            Source,
    IN  UINT                    SourceOffset,
    OUT PUINT                   BytesCopied
    );


EXPORT
NDIS_STATUS
NdisAllocateMemory(
    OUT PVOID *                 VirtualAddress,
    IN  UINT                    Length,
    IN  UINT                    MemoryFlags,
    IN  NDIS_PHYSICAL_ADDRESS   HighestAcceptableAddress
    );

EXPORT
NDIS_STATUS
NdisAllocateMemoryWithTag(
    OUT PVOID *                 VirtualAddress,
    IN  UINT                    Length,
    IN  ULONG                   Tag
    );

EXPORT
VOID
NdisFreeMemory(
    IN  PVOID                   VirtualAddress,
    IN  UINT                    Length,
    IN  UINT                    MemoryFlags
    );


#ifdef UNDER_CE
VOID
NdisStallExecution(
    IN  UINT                    MicrosecondsToStall
    );
#else

#define NdisStallExecution(MicroSecondsToStall)     KeStallExecutionProcessor(MicroSecondsToStall)
#endif

EXPORT
VOID
NdisInitializeEvent(
    IN  PNDIS_EVENT             Event
);

EXPORT
VOID
NdisFreeEvent(
    IN  PNDIS_EVENT             Event
);

EXPORT
VOID
NdisSetEvent(
    IN  PNDIS_EVENT             Event
);

EXPORT
VOID
NdisResetEvent(
    IN  PNDIS_EVENT             Event
);

EXPORT
BOOLEAN
NdisWaitEvent(
    IN  PNDIS_EVENT             Event,
    IN  UINT                    msToWait
);

/*++
VOID
NdisInitializeWorkItem(
    IN  PNDIS_WORK_ITEM         WorkItem,
    IN  NDIS_PROC               Routine,
    IN  PVOID                   Context
    );
--*/

#define NdisInitializeWorkItem(_WI_, _R_, _C_)  \
    {                                           \
        (_WI_)->Context = _C_;                  \
        (_WI_)->Routine = _R_;                  \
    }

EXPORT
NDIS_STATUS
NdisScheduleWorkItem(
    IN  PNDIS_WORK_ITEM         WorkItem
    );

//
// Simple I/O support
//

EXPORT
VOID
NdisOpenFile(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_HANDLE            FileHandle,
    OUT PUINT                   FileLength,
    IN  PNDIS_STRING            FileName,
    IN  NDIS_PHYSICAL_ADDRESS   HighestAcceptableAddress
    );

EXPORT
VOID
NdisCloseFile(
    IN  NDIS_HANDLE             FileHandle
    );

EXPORT
VOID
NdisMapFile(
    OUT PNDIS_STATUS            Status,
    OUT PVOID *                 MappedBuffer,
    IN  NDIS_HANDLE             FileHandle
    );

EXPORT
VOID
NdisUnmapFile(
    IN  NDIS_HANDLE             FileHandle
    );


//
// Portability extensions
//

#ifdef UNDER_CE

VOID
NdisFlushBuffer(
    IN  PNDIS_BUFFER            Buffer,
    IN  BOOLEAN                 WriteToDevice
    );

#else

#define NdisFlushBuffer(Buffer,WriteToDevice)                               \
        KeFlushIoBuffers((Buffer),!(WriteToDevice), TRUE)

#endif

/*++
ULONG
NdisGetCacheFillSize(
    )
--*/
#define NdisGetCacheFillSize()  HalGetDmaAlignmentRequirement()

EXPORT
ULONG
NdisGetSharedDataAlignment(
    VOID
    );


//
// Write Port
//

/*++
VOID
NdisWritePortUchar(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  ULONG                   Port,
    IN  UCHAR                   Data
    )
--*/
#define NdisWritePortUchar(Handle,Port,Data)                                \
        WRITE_PORT_UCHAR((PUCHAR)(NDIS_PORT_TO_PORT(Handle,Port)),(UCHAR)(Data))

/*++
VOID
NdisWritePortUshort(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  ULONG                   Port,
    IN  USHORT                  Data
    )
--*/
#define NdisWritePortUshort(Handle,Port,Data)                               \
        WRITE_PORT_USHORT((PUSHORT)(NDIS_PORT_TO_PORT(Handle,Port)),(USHORT)(Data))


/*++
VOID
NdisWritePortUlong(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  ULONG                   Port,
    IN  ULONG                   Data
    )
--*/
#define NdisWritePortUlong(Handle,Port,Data)                                \
        WRITE_PORT_ULONG((PULONG)(NDIS_PORT_TO_PORT(Handle,Port)),(ULONG)(Data))


//
// Write Port Buffers
//

/*++
VOID
NdisWritePortBufferUchar(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  ULONG                   Port,
    IN  PUCHAR                  Buffer,
    IN  ULONG                   Length
    )
--*/
#define NdisWritePortBufferUchar(Handle,Port,Buffer,Length)                 \
        NdisRawWritePortBufferUchar(NDIS_PORT_TO_PORT((Handle),(Port)),(Buffer),(Length))

/*++
VOID
NdisWritePortBufferUshort(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  ULONG                   Port,
    IN  PUSHORT                 Buffer,
    IN  ULONG                   Length
    )
--*/
#define NdisWritePortBufferUshort(Handle,Port,Buffer,Length)                \
        NdisRawWritePortBufferUshort(NDIS_PORT_TO_PORT((Handle),(Port)),(Buffer),(Length))


/*++
VOID
NdisWritePortBufferUlong(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  ULONG                   Port,
    IN  PULONG                  Buffer,
    IN  ULONG                   Length
    )
--*/
#define NdisWritePortBufferUlong(Handle,Port,Buffer,Length)                 \
        NdisRawWritePortBufferUlong(NDIS_PORT_TO_PORT((Handle),(Port)),(Buffer),(Length))


//
// Read Ports
//

/*++
VOID
NdisReadPortUchar(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  ULONG                   Port,
    OUT PUCHAR                  Data
    )
--*/
#define NdisReadPortUchar(Handle,Port, Data)                                \
        NdisRawReadPortUchar(NDIS_PORT_TO_PORT((Handle),(Port)),(Data))

/*++
VOID
NdisReadPortUshort(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  ULONG                   Port,
    OUT PUSHORT                 Data
    )
--*/
#define NdisReadPortUshort(Handle,Port,Data)                                \
        NdisRawReadPortUshort(NDIS_PORT_TO_PORT((Handle),(Port)),(Data))


/*++
VOID
NdisReadPortUlong(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  ULONG                   Port,
    OUT PULONG                  Data
    )
--*/
#define NdisReadPortUlong(Handle,Port,Data)                                 \
        NdisRawReadPortUlong(NDIS_PORT_TO_PORT((Handle),(Port)),(Data))

//
// Read Buffer Ports
//

/*++
VOID
NdisReadPortBufferUchar(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  ULONG                   Port,
    OUT PUCHAR                  Buffer,
    IN  ULONG                   Length
    )
--*/
#define NdisReadPortBufferUchar(Handle,Port,Buffer,Length)                  \
        NdisRawReadPortBufferUchar(NDIS_PORT_TO_PORT((Handle),(Port)),(Buffer),(Length))

/*++
VOID
NdisReadPortBufferUshort(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  ULONG                   Port,
    OUT PUSHORT                 Buffer,
    IN  ULONG                   Length
    )
--*/
#define NdisReadPortBufferUshort(Handle,Port,Buffer,Length)                 \
        NdisRawReadPortBufferUshort(NDIS_PORT_TO_PORT((Handle),(Port)),(Buffer),(Length))

/*++
VOID
NdisReadPortBufferUlong(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  ULONG                   Port,
    OUT PULONG                  Buffer,
    IN  ULONG                   Length
    )
--*/
#define NdisReadPortBufferUlong(Handle,Port,Buffer)                         \
        NdisRawReadPortBufferUlong(NDIS_PORT_TO_PORT((Handle),(Port)),(Buffer),(Length))

//
// Raw Routines
//

//
// Write Port Raw
//

/*++
VOID
NdisRawWritePortUchar(
    IN  ULONG_PTR               Port,
    IN  UCHAR                   Data
    )
--*/
#define NdisRawWritePortUchar(Port,Data)                                    \
        WRITE_PORT_UCHAR((PUCHAR)(Port),(UCHAR)(Data))

/*++
VOID
NdisRawWritePortUshort(
    IN  ULONG_PTR               Port,
    IN  USHORT                  Data
    )
--*/
#define NdisRawWritePortUshort(Port,Data)                                   \
        WRITE_PORT_USHORT((PUSHORT)(Port),(USHORT)(Data))

/*++
VOID
NdisRawWritePortUlong(
    IN  ULONG_PTR               Port,
    IN  ULONG                   Data
    )
--*/
#define NdisRawWritePortUlong(Port,Data)                                    \
        WRITE_PORT_ULONG((PULONG)(Port),(ULONG)(Data))


//
// Raw Write Port Buffers
//

/*++
VOID
NdisRawWritePortBufferUchar(
    IN  ULONG_PTR               Port,
    IN  PUCHAR                  Buffer,
    IN  ULONG                   Length
    )
--*/
#define NdisRawWritePortBufferUchar(Port,Buffer,Length) \
        WRITE_PORT_BUFFER_UCHAR((PUCHAR)(Port),(PUCHAR)(Buffer),(Length))

/*++
VOID
NdisRawWritePortBufferUshort(
    IN  ULONG_PTR               Port,
    IN  PUSHORT                 Buffer,
    IN  ULONG                   Length
    )
--*/
#define NdisRawWritePortBufferUshort(Port,Buffer,Length)                    \
        WRITE_PORT_BUFFER_USHORT((PUSHORT)(Port),(PUSHORT)(Buffer),(Length))


/*++
VOID
NdisRawWritePortBufferUlong(
    IN  ULONG_PTR               Port,
    IN  PULONG                  Buffer,
    IN  ULONG                   Length
    )
--*/
#define NdisRawWritePortBufferUlong(Port,Buffer,Length)                     \
        WRITE_PORT_BUFFER_ULONG((PULONG)(Port),(PULONG)(Buffer),(Length))


//
// Raw Read Ports
//

/*++
VOID
NdisRawReadPortUchar(
    IN  ULONG_PTR               Port,
    OUT PUCHAR                  Data
    )
--*/
#define NdisRawReadPortUchar(Port, Data) \
        *(Data) = READ_PORT_UCHAR((PUCHAR)(Port))

/*++
VOID
NdisRawReadPortUshort(
    IN  ULONG_PTR               Port,
    OUT PUSHORT                 Data
    )
--*/
#define NdisRawReadPortUshort(Port,Data) \
        *(Data) = READ_PORT_USHORT((PUSHORT)(Port))

/*++
VOID
NdisRawReadPortUlong(
    IN  ULONG_PTR               Port,
    OUT PULONG                  Data
    )
--*/
#define NdisRawReadPortUlong(Port,Data) \
        *(Data) = READ_PORT_ULONG((PULONG)(Port))


//
// Raw Read Buffer Ports
//

/*++
VOID
NdisRawReadPortBufferUchar(
    IN  ULONG_PTR               Port,
    OUT PUCHAR                  Buffer,
    IN  ULONG                   Length
    )
--*/
#define NdisRawReadPortBufferUchar(Port,Buffer,Length)                      \
        READ_PORT_BUFFER_UCHAR((PUCHAR)(Port),(PUCHAR)(Buffer),(Length))


/*++
VOID
NdisRawReadPortBufferUshort(
    IN  ULONG_PTR               Port,
    OUT PUSHORT                 Buffer,
    IN  ULONG                   Length
    )
--*/
#define NdisRawReadPortBufferUshort(Port,Buffer,Length)                     \
        READ_PORT_BUFFER_USHORT((PUSHORT)(Port),(PUSHORT)(Buffer),(Length))


/*++
VOID
NdisRawReadPortBufferUlong(
    IN  ULONG_PTR               Port,
    OUT PULONG                  Buffer,
    IN  ULONG                   Length
    )
--*/
#define NdisRawReadPortBufferUlong(Port,Buffer,Length)                      \
        READ_PORT_BUFFER_ULONG((PULONG)(Port),(PULONG)(Buffer),(Length))


//
// Write Registers
//

/*++
VOID
NdisWriteRegisterUchar(
    IN  PUCHAR                  Register,
    IN  UCHAR                   Data
    )
--*/

#define NdisWriteRegisterUchar(Register,Data)                               \
        WRITE_REGISTER_UCHAR((Register),(Data))

/*++
VOID
NdisWriteRegisterUshort(
    IN  PUCHAR                  Register,
    IN  USHORT                  Data
    )
--*/

#define NdisWriteRegisterUshort(Register,Data)                              \
        WRITE_REGISTER_USHORT((Register),(Data))

/*++
VOID
NdisWriteRegisterUlong(
    IN  PUCHAR                  Register,
    IN  ULONG                   Data
    )
--*/

#define NdisWriteRegisterUlong(Register,Data)   \
		WRITE_REGISTER_ULONG((Register),(Data))

/*++
VOID
NdisReadRegisterUchar(
    IN  PUCHAR                  Register,
    OUT PUCHAR                  Data
    )
--*/
#define NdisReadRegisterUchar(_Register, _Data) \
        *((PUCHAR)(_Data)) = READ_REGISTER_UCHAR(_Register)

/*++
VOID
NdisReadRegisterUshort(
    IN  PUSHORT                 Register,
    OUT PUSHORT                 Data
    )
--*/
#define NdisReadRegisterUshort(_Register, _Data) \
          *((PUSHORT)(_Data)) = READ_REGISTER_USHORT(_Register)

/*++
VOID
NdisReadRegisterUlong(
    IN  PULONG                  Register,
    OUT PULONG                  Data
    )
--*/
#define NdisReadRegisterUlong(_Register, _Data) \
          *((PULONG)(_Data)) = READ_REGISTER_ULONG(_Register)

#ifdef UNDER_CE	// TODO - Haven't implemented these on CE yet
EXPORT BOOLEAN NDISAPI
NdisEqualString(
  IN PNDIS_STRING String1,
  IN PNDIS_STRING String2,
  IN BOOLEAN CaseInsensitive
);

#else
#define NdisEqualAnsiString(_String1,_String2, _CaseInsensitive)            \
            RtlEqualAnsiString(_String1, _String2, _CaseInsensitive)
#define NdisEqualUnicodeString(_String1, _String2, _CaseInsensitive)        \
            RtlEqualUnicodeString(_String1, _String2, _CaseInsensitive)
#define NdisEqualString(_String1, _String2, _CaseInsensitive)               \
            RtlEqualUnicodeString(_String1, _String2, _CaseInsensitive)

#endif


EXPORT
VOID __cdecl
NdisWriteErrorLogEntry(
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  NDIS_ERROR_CODE         ErrorCode,
    IN  ULONG                   NumberOfErrorValues,
    ...
    );

EXPORT
VOID
NdisInitializeString(
    OUT PNDIS_STRING    Destination,
    IN  PUCHAR          Source
    );

#define NdisFreeString(String) NdisFreeMemory((String).Buffer, (String).MaximumLength, 0)

#define NdisPrintString(String) DbgPrint("%ls",(String).Buffer)


/*++

VOID
NdisCreateLookaheadBufferFromSharedMemory(
    IN  PVOID                   pSharedMemory,
    IN  UINT                    LookaheadLength,
    OUT PVOID *                 pLookaheadBuffer
    );

--*/

#define NdisCreateLookaheadBufferFromSharedMemory(_S, _L, _B)   ((*(_B)) = (_S))

/*++

VOID
NdisDestroyLookaheadBufferFromSharedMemory(
    IN  PVOID                   pLookaheadBuffer
    );

--*/

#define NdisDestroyLookaheadBufferFromSharedMemory(_B)


//
// The following declarations are shared between ndismac.h and ndismini.h. They
// are meant to be for internal use only. They should not be used directly by
// miniport drivers.
//

//
// declare these first since they point to each other
//

typedef struct _NDIS_WRAPPER_HANDLE     NDIS_WRAPPER_HANDLE, *PNDIS_WRAPPER_HANDLE;
typedef struct _NDIS_PROTOCOL_BLOCK     NDIS_PROTOCOL_BLOCK, *PNDIS_PROTOCOL_BLOCK;
typedef struct _NDIS_OPEN_BLOCK         NDIS_OPEN_BLOCK, *PNDIS_OPEN_BLOCK;
typedef struct _NDIS_M_DRIVER_BLOCK     NDIS_M_DRIVER_BLOCK, *PNDIS_M_DRIVER_BLOCK;
typedef struct _NDIS_MINIPORT_BLOCK     NDIS_MINIPORT_BLOCK,*PNDIS_MINIPORT_BLOCK;
typedef struct _CO_CALL_PARAMETERS      CO_CALL_PARAMETERS, *PCO_CALL_PARAMETERS;
typedef struct _CO_MEDIA_PARAMETERS     CO_MEDIA_PARAMETERS, *PCO_MEDIA_PARAMETERS;
typedef struct _NDIS_CALL_MANAGER_CHARACTERISTICS *PNDIS_CALL_MANAGER_CHARACTERISTICS;
typedef struct _NDIS_AF_LIST            NDIS_AF_LIST, *PNDIS_AF_LIST;
typedef struct _X_FILTER                ETH_FILTER, *PETH_FILTER;
typedef struct _X_FILTER                FDDI_FILTER, *PFDDI_FILTER;
typedef struct _X_FILTER                TR_FILTER, *PTR_FILTER;
typedef struct _X_FILTER                NULL_FILTER, *PNULL_FILTER;



//
// Timers.
//

typedef
VOID
(*PNDIS_TIMER_FUNCTION) (
    IN  PVOID                   SystemSpecific1,
    IN  PVOID                   FunctionContext,
    IN  PVOID                   SystemSpecific2,
    IN  PVOID                   SystemSpecific3
    );

typedef struct _NDIS_TIMER
{
    KTIMER      Timer;
    KDPC        Dpc;
} NDIS_TIMER, *PNDIS_TIMER;

EXPORT
VOID
NdisInitializeTimer(
    IN OUT PNDIS_TIMER          Timer,
    IN  PNDIS_TIMER_FUNCTION    TimerFunction,
    IN  PVOID                   FunctionContext
    );

VOID
NdisCancelTimer(
    IN  PNDIS_TIMER             Timer,
    OUT PBOOLEAN                TimerCancelled
    );

EXPORT
VOID
NdisSetTimer(
    IN  PNDIS_TIMER             Timer,
    IN  UINT                    MillisecondsToDelay
    );

EXPORT
VOID
NdisSetTimerEx(
    IN  PNDIS_TIMER             Timer,
    IN  UINT                    MillisecondsToDelay,
    IN  PVOID                   FunctionContext
    );

#ifndef NODMA
//
// DMA operations.
//

EXPORT
VOID
NdisAllocateDmaChannel(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_HANDLE            NdisDmaHandle,
    IN  NDIS_HANDLE             NdisAdapterHandle,
    IN  PNDIS_DMA_DESCRIPTION   DmaDescription,
    IN  ULONG                   MaximumLength
    );

EXPORT
VOID
NdisFreeDmaChannel(
    IN  NDIS_HANDLE             NdisDmaHandle
    );

EXPORT
VOID
NdisSetupDmaTransfer(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             NdisDmaHandle,
    IN  PNDIS_BUFFER            Buffer,
    IN  ULONG                   Offset,
    IN  ULONG                   Length,
    IN  BOOLEAN                 WriteToDevice
    );

EXPORT
VOID
NdisCompleteDmaTransfer(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             NdisDmaHandle,
    IN  PNDIS_BUFFER            Buffer,
    IN  ULONG                   Offset,
    IN  ULONG                   Length,
    IN  BOOLEAN                 WriteToDevice
    );
#endif // NODMA

//
// Wrapper initialization and termination.
//

EXPORT
VOID
NdisInitializeWrapper(
    OUT PNDIS_HANDLE            NdisWrapperHandle,
    IN  PVOID                   SystemSpecific1,
    IN  PVOID                   SystemSpecific2,
    IN  PVOID                   SystemSpecific3
    );

EXPORT
VOID
NdisTerminateWrapper(
    IN  NDIS_HANDLE             NdisWrapperHandle,
    IN  PVOID                   SystemSpecific
    );

//
// Shared memory
//

#define NdisUpdateSharedMemory(_H, _L, _V, _P)

//
// System processor count
//

EXPORT
CCHAR
NdisSystemProcessorCount(
    VOID
    );

EXPORT
PVOID
NdisGetRoutineAddress(
    IN PUNICODE_STRING  NdisRoutineName
    );


EXPORT
UINT
NdisGetVersion(
    VOID
    );

//
// Ansi/Unicode support routines
//

EXPORT
VOID
NdisInitAnsiString(
    IN OUT  PANSI_STRING        DestinationString,
    IN      PCSTR               SourceString
    );

EXPORT
VOID
NdisInitUnicodeString(
    IN OUT  PUNICODE_STRING     DestinationString,
    IN      PCWSTR              SourceString
    );

EXPORT
NDIS_STATUS
NdisAnsiStringToUnicodeString(
    IN OUT  PUNICODE_STRING     DestinationString,
    IN      PANSI_STRING        SourceString
    );

EXPORT
NDIS_STATUS
NdisUnicodeStringToAnsiString(
    IN OUT  PANSI_STRING        DestinationString,
    IN      PUNICODE_STRING     SourceString
    );

EXPORT
NDIS_STATUS
NdisUpcaseUnicodeString(
    OUT PUNICODE_STRING         DestinationString,
    IN  PUNICODE_STRING         SourceString
    );
//
// Non-paged lookaside list support routines
//

#ifndef UNDER_CE

#define NdisInitializeNPagedLookasideList(_L, _AR, _FR, _Fl, _S, _T, _D) \
                ExInitializeNPagedLookasideList(_L, _AR, _FR, _Fl, _S, _T, _D)

#define NdisDeleteNPagedLookasideList(_L)           ExDeleteNPagedLookasideList(_L)
#define NdisAllocateFromNPagedLookasideList(_L)     ExAllocateFromNPagedLookasideList(_L)
#define NdisFreeToNPagedLookasideList(_L, _E)       ExFreeToNPagedLookasideList(_L, _E)

#else   //  UNDER_CE

typedef union _SLIST_HEADER {
    ULONGLONG Alignment;
    struct {
        SINGLE_LIST_ENTRY Next;
        USHORT Depth;
        USHORT Sequence;
    };
} SLIST_HEADER, *PSLIST_HEADER;

typedef enum _POOL_TYPE 
{
    NonPagedPool,
    PagedPool,
    NonPagedPoolMustSucceed,
    DontUseThisType,
    NonPagedPoolCacheAligned,
    PagedPoolCacheAligned,
    NonPagedPoolCacheAlignedMustS,
    MaxPoolType
} POOL_TYPE;


typedef PVOID
(*PALLOCATE_FUNCTION) (
    IN POOL_TYPE    PoolType,
    IN SIZE_T       NumberOfBytes,
    IN ULONG        Tag);

typedef VOID
(*PFREE_FUNCTION) (
    IN PVOID Buffer);
    
typedef struct _GENERAL_LOOKASIDE 
{
    SLIST_HEADER        ListHead;
    USHORT              Depth;
    USHORT              MaximumDepth;
    ULONG               TotalAllocates;
    union 
    {
        ULONG AllocateMisses;
        ULONG AllocateHits;
    };

    ULONG               TotalFrees;

    union 
    {
        ULONG FreeMisses;
        ULONG FreeHits;
    };

    POOL_TYPE           Type;
    ULONG               Tag;
    ULONG               Size;
    PALLOCATE_FUNCTION  Allocate;
    PFREE_FUNCTION      Free;
    LIST_ENTRY          ListEntry;
    ULONG               LastTotalAllocates;
    union 
    {
        ULONG LastAllocateMisses;
        ULONG LastAllocateHits;
    };

    ULONG Future[2];
    
} GENERAL_LOOKASIDE, *PGENERAL_LOOKASIDE;


typedef struct _NPAGED_LOOKASIDE_LIST 
{
    GENERAL_LOOKASIDE   L;
    CRITICAL_SECTION    Lock;    
} NPAGED_LOOKASIDE_LIST, *PNPAGED_LOOKASIDE_LIST;


EXPORT
void
NdisInitializeNPagedLookasideList(
    IN PNPAGED_LOOKASIDE_LIST   Lookaside,
    IN PALLOCATE_FUNCTION       Allocate  OPTIONAL,
    IN PFREE_FUNCTION           Free  OPTIONAL,
    IN ULONG                    Flags,
    IN ULONG                    Size,
    IN ULONG                    Tag,
    IN USHORT                   Depth);


EXPORT
void
NdisDeleteNPagedLookasideList(
    IN  PNPAGED_LOOKASIDE_LIST  Lookaside);

EXPORT
PVOID
NdisAllocateFromNPagedLookasideList(
    IN PNPAGED_LOOKASIDE_LIST   Lookaside);

EXPORT
void
NdisFreeToNPagedLookasideList(
    IN PNPAGED_LOOKASIDE_LIST   Lookaside,
    IN PVOID                    Entry);


#endif

EXPORT
VOID
NdisSetPacketStatus(
    IN          PNDIS_PACKET    Packet,
    IN          NDIS_STATUS     Status,
    IN          NDIS_HANDLE     Handle,
    IN          ULONG           Code
    );

#if defined(NDIS_WRAPPER)
typedef struct _OID_LIST    OID_LIST, *POID_LIST;
#endif // NDIS_WRAPPER defined


//
// Function types for NDIS_PROTOCOL_CHARACTERISTICS
//

typedef
VOID
(*OPEN_ADAPTER_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  NDIS_STATUS             Status,
    IN  NDIS_STATUS             OpenErrorStatus
    );

typedef
VOID
(*CLOSE_ADAPTER_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  NDIS_STATUS             Status
    );

typedef
VOID
(*RESET_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  NDIS_STATUS             Status
    );

typedef
VOID
(*REQUEST_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  PNDIS_REQUEST           NdisRequest,
    IN  NDIS_STATUS             Status
    );

typedef
VOID
(*STATUS_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  NDIS_STATUS             GeneralStatus,
    IN  PVOID                   StatusBuffer,
    IN  UINT                    StatusBufferSize
    );

typedef
VOID
(*STATUS_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext
    );

typedef
VOID
(*SEND_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  PNDIS_PACKET            Packet,
    IN  NDIS_STATUS             Status
    );

typedef
VOID
(*WAN_SEND_COMPLETE_HANDLER) (
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  PNDIS_WAN_PACKET        Packet,
    IN  NDIS_STATUS             Status
    );

typedef
VOID
(*TRANSFER_DATA_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  PNDIS_PACKET            Packet,
    IN  NDIS_STATUS             Status,
    IN  UINT                    BytesTransferred
    );

typedef
VOID
(*WAN_TRANSFER_DATA_COMPLETE_HANDLER)(
    VOID
    );

typedef
NDIS_STATUS
(*RECEIVE_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  NDIS_HANDLE             MacReceiveContext,
    IN  PVOID                   HeaderBuffer,
    IN  UINT                    HeaderBufferSize,
    IN  PVOID                   LookAheadBuffer,
    IN  UINT                    LookaheadBufferSize,
    IN  UINT                    PacketSize
    );

typedef
NDIS_STATUS
(*WAN_RECEIVE_HANDLER)(
    IN  NDIS_HANDLE             NdisLinkHandle,
    IN  PUCHAR                  Packet,
    IN  ULONG                   PacketSize
    );

typedef
VOID
(*RECEIVE_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext
    );

//
// Protocol characteristics for down-level NDIS 3.0 protocols
//
typedef struct _NDIS30_PROTOCOL_CHARACTERISTICS
{
    UCHAR                           MajorNdisVersion;
    UCHAR                           MinorNdisVersion;
//    USHORT                          Filler;
    union
    {
        UINT                        Reserved;
        UINT                        Flags;
    };
    OPEN_ADAPTER_COMPLETE_HANDLER   OpenAdapterCompleteHandler;
    CLOSE_ADAPTER_COMPLETE_HANDLER  CloseAdapterCompleteHandler;
    union
    {
        SEND_COMPLETE_HANDLER       SendCompleteHandler;
        WAN_SEND_COMPLETE_HANDLER   WanSendCompleteHandler;
    };
    union
    {
     TRANSFER_DATA_COMPLETE_HANDLER TransferDataCompleteHandler;
     WAN_TRANSFER_DATA_COMPLETE_HANDLER WanTransferDataCompleteHandler;
    };

    RESET_COMPLETE_HANDLER          ResetCompleteHandler;
    REQUEST_COMPLETE_HANDLER        RequestCompleteHandler;
    union
    {
        RECEIVE_HANDLER             ReceiveHandler;
        WAN_RECEIVE_HANDLER         WanReceiveHandler;
    };
    RECEIVE_COMPLETE_HANDLER        ReceiveCompleteHandler;
    STATUS_HANDLER                  StatusHandler;
    STATUS_COMPLETE_HANDLER         StatusCompleteHandler;
    NDIS_STRING                     Name;
} NDIS30_PROTOCOL_CHARACTERISTICS;

//
// Function types extensions for NDIS 4.0 Protocols
//
typedef
INT
(*RECEIVE_PACKET_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  PNDIS_PACKET            Packet
    );

typedef
VOID
(*BIND_HANDLER)(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             BindContext,
    IN  PNDIS_STRING            DeviceName,
    IN  PVOID                   SystemSpecific1,
    IN  PVOID                   SystemSpecific2
    );

typedef
VOID
(*UNBIND_HANDLER)(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  NDIS_HANDLE             UnbindContext
    );

typedef
NDIS_STATUS
(*PNP_EVENT_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  PNET_PNP_EVENT          NetPnPEvent
    );

typedef
VOID
(*UNLOAD_PROTOCOL_HANDLER)(
    VOID
    );

//
// Protocol characteristics for NDIS 4.0 protocols
//
typedef struct _NDIS40_PROTOCOL_CHARACTERISTICS
{
#ifdef __cplusplus
    NDIS30_PROTOCOL_CHARACTERISTICS Ndis30Chars;
#else
    NDIS30_PROTOCOL_CHARACTERISTICS;
#endif

    //
    // Start of NDIS 4.0 extensions.
    //
    RECEIVE_PACKET_HANDLER          ReceivePacketHandler;

    //
    // PnP protocol entry-points
    //
    BIND_HANDLER                    BindAdapterHandler;
    UNBIND_HANDLER                  UnbindAdapterHandler;
    PNP_EVENT_HANDLER               PnPEventHandler;
    UNLOAD_PROTOCOL_HANDLER         UnloadHandler;

} NDIS40_PROTOCOL_CHARACTERISTICS;


//
// Protocol (5.0) handler proto-types - used by clients as well as call manager modules
//
typedef
VOID
(*CO_SEND_COMPLETE_HANDLER)(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             ProtocolVcContext,
    IN  PNDIS_PACKET            Packet
    );

typedef
VOID
(*CO_STATUS_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  NDIS_HANDLE             ProtocolVcContext   OPTIONAL,
    IN  NDIS_STATUS             GeneralStatus,
    IN  PVOID                   StatusBuffer,
    IN  UINT                    StatusBufferSize
    );

typedef
UINT
(*CO_RECEIVE_PACKET_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  NDIS_HANDLE             ProtocolVcContext,
    IN  PNDIS_PACKET            Packet
    );

typedef
NDIS_STATUS
(*CO_REQUEST_HANDLER)(
    IN  NDIS_HANDLE             ProtocolAfContext,
    IN  NDIS_HANDLE             ProtocolVcContext       OPTIONAL,
    IN  NDIS_HANDLE             ProtocolPartyContext    OPTIONAL,
    IN OUT PNDIS_REQUEST        NdisRequest
    );

typedef
VOID
(*CO_REQUEST_COMPLETE_HANDLER)(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             ProtocolAfContext       OPTIONAL,
    IN  NDIS_HANDLE             ProtocolVcContext       OPTIONAL,
    IN  NDIS_HANDLE             ProtocolPartyContext    OPTIONAL,
    IN  PNDIS_REQUEST           NdisRequest
    );

//
// CO_CREATE_VC_HANDLER and CO_DELETE_VC_HANDLER are synchronous calls
//
typedef
NDIS_STATUS
(*CO_CREATE_VC_HANDLER)(
    IN  NDIS_HANDLE             ProtocolAfContext,
    IN  NDIS_HANDLE             NdisVcHandle,
    OUT PNDIS_HANDLE            ProtocolVcContext
    );

typedef
NDIS_STATUS
(*CO_DELETE_VC_HANDLER)(
    IN  NDIS_HANDLE             ProtocolVcContext
    );

typedef
VOID
(*CO_AF_REGISTER_NOTIFY_HANDLER)(
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  PCO_ADDRESS_FAMILY      AddressFamily
    );

typedef struct _NDIS50_PROTOCOL_CHARACTERISTICS
{
#ifdef __cplusplus
    NDIS40_PROTOCOL_CHARACTERISTICS Ndis40Chars;
#else
    NDIS40_PROTOCOL_CHARACTERISTICS;
#endif
    
    //
    // Placeholders for protocol extensions for PnP/PM etc.
    //
    PVOID                           ReservedHandlers[4];

    //
    // Start of NDIS 5.0 extensions.
    //

    CO_SEND_COMPLETE_HANDLER        CoSendCompleteHandler;
    CO_STATUS_HANDLER               CoStatusHandler;
    CO_RECEIVE_PACKET_HANDLER       CoReceivePacketHandler;
    CO_AF_REGISTER_NOTIFY_HANDLER   CoAfRegisterNotifyHandler;

} NDIS50_PROTOCOL_CHARACTERISTICS;

#if (defined(NDIS50) || defined(NDIS51))
typedef NDIS50_PROTOCOL_CHARACTERISTICS  NDIS_PROTOCOL_CHARACTERISTICS;
#else
#if NDIS40
typedef NDIS40_PROTOCOL_CHARACTERISTICS  NDIS_PROTOCOL_CHARACTERISTICS;
#else
#ifdef UNDER_CE	// CE never supported NDIS 3.0, default to NDIS 4.0
typedef NDIS40_PROTOCOL_CHARACTERISTICS  NDIS_PROTOCOL_CHARACTERISTICS;
#else
typedef NDIS30_PROTOCOL_CHARACTERISTICS  NDIS_PROTOCOL_CHARACTERISTICS;
#endif
#endif
#endif
typedef NDIS_PROTOCOL_CHARACTERISTICS *PNDIS_PROTOCOL_CHARACTERISTICS;

//
// Requests used by Protocol Modules
//

EXPORT
VOID
NdisRegisterProtocol(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_HANDLE            NdisProtocolHandle,
    IN  PNDIS_PROTOCOL_CHARACTERISTICS ProtocolCharacteristics,
    IN  UINT                    CharacteristicsLength
    );

EXPORT
VOID
NdisDeregisterProtocol(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             NdisProtocolHandle
    );

#ifdef UNDER_CE

EXPORT VOID NDISAPI
NdisRegisterAdapter(
	OUT PNDIS_STATUS	Status,
	IN	PWCHAR			MiniportName,
	IN	PWCHAR			AdapterInstanceName
	);

EXPORT VOID NDISAPI
NdisDeregisterAdapter(
	OUT PNDIS_STATUS	Status,
	IN	PWSTR			AdapterInstanceName
	);

EXPORT VOID NDISAPI
NdisBindProtocolsToAdapter(
	OUT	PNDIS_STATUS	pStatus,
	IN	PWSTR			wszAdapterInstanceName,
	IN	PWSTR			wszProtocolName			OPTIONAL
	);

EXPORT VOID NDISAPI
NdisUnbindProtocolsFromAdapter(
	OUT	PNDIS_STATUS	pStatus,
	IN	PWSTR			wszAdapterInstanceName,
	IN	PWSTR			wszProtocolName			OPTIONAL
	);

EXPORT VOID NDISAPI
NdisRebindProtocolsToAdapter(
	OUT	PNDIS_STATUS	pStatus,
	IN	PWSTR			wszAdapterInstanceName,
	IN	PWSTR			wszProtocolName			OPTIONAL
	);

EXPORT VOID NDISAPI
NdisMRebindProtocolsToAdapter(
	IN NDIS_HANDLE MiniportAdapterHandle);

EXPORT VOID NDISAPI
NdisGetAdapterNames(
	OUT	PNDIS_STATUS	pStatus,
	OUT	PBYTE			pOutBuf,
	IN	DWORD			cbOutBufSize,
	OUT	PDWORD			pcbReturned);

EXPORT VOID NDISAPI
NdisGetProtocolNames(
	OUT	PNDIS_STATUS	pStatus,
	OUT	PBYTE			pOutBuf,
	IN	DWORD			cbOutBufSize,
	OUT	PDWORD			pcbReturned);

EXPORT VOID NDISAPI
NdisGetAdapterBindings(
	OUT	PNDIS_STATUS	pStatus,
	IN	PWCHAR			wszAdapterInstanceName,
	OUT	PBYTE			pOutBuf,
	IN	DWORD			cbOutBufSize,
	OUT	PDWORD			pcbReturned);

EXPORT DWORD
NdisGetLogData(
	PWSTR	wszAdapterName,
	PBYTE	pOutBuf,
	DWORD	nOutBufSize,
	PDWORD	pBytesReturned);

#endif // UNDER_CE

EXPORT
VOID
NdisOpenAdapter(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_STATUS            OpenErrorStatus,
    OUT PNDIS_HANDLE            NdisBindingHandle,
    OUT PUINT                   SelectedMediumIndex,
    IN  PNDIS_MEDIUM            MediumArray,
    IN  UINT                    MediumArraySize,
    IN  NDIS_HANDLE             NdisProtocolHandle,
    IN  NDIS_HANDLE             ProtocolBindingContext,
    IN  PNDIS_STRING            AdapterName,
    IN  UINT                    OpenOptions,
    IN  PSTRING                 AddressingInformation OPTIONAL
    );


EXPORT
VOID
NdisCloseAdapter(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             NdisBindingHandle
    );


EXPORT
VOID
NdisCompleteBindAdapter(
    IN   NDIS_HANDLE            BindAdapterContext,
    IN   NDIS_STATUS            Status,
    IN   NDIS_STATUS            OpenStatus
    );

EXPORT
VOID
NdisCompleteUnbindAdapter(
    IN   NDIS_HANDLE            UnbindAdapterContext,
    IN   NDIS_STATUS            Status
    );

EXPORT
VOID
NdisSetProtocolFilter(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             NdisBindingHandle,
    IN  RECEIVE_HANDLER         ReceiveHandler,
    IN  RECEIVE_PACKET_HANDLER  ReceivePacketHandler,
    IN  NDIS_MEDIUM             Medium,
    IN  UINT                    Offset,
    IN  UINT                    Size,
    IN  PUCHAR                  Pattern
    );

EXPORT
VOID
NdisOpenProtocolConfiguration(
    OUT PNDIS_STATUS            Status,
    OUT PNDIS_HANDLE            ConfigurationHandle,
    IN  PNDIS_STRING            ProtocolSection
);

EXPORT
VOID
NdisGetDriverHandle(
    IN  NDIS_HANDLE             NdisBindingHandle,
    OUT PNDIS_HANDLE            NdisDriverHandle
    );

EXPORT
VOID
NdisReEnumerateProtocolBindings(
    IN  NDIS_HANDLE             NdisProtocolHandle
    );

EXPORT
NDIS_STATUS
NdisWriteEventLogEntry(
    IN  PVOID                   LogHandle,
    IN  NDIS_STATUS             EventCode,
    IN  ULONG                   UniqueEventValue,
    IN  USHORT                  NumStrings,
    IN  PVOID                   StringsList     OPTIONAL,
    IN  ULONG                   DataSize,
    IN  PVOID                   Data            OPTIONAL
    );

//
//  The following routine is used by transports to complete pending
//  network PnP events.
//
EXPORT
VOID
NdisCompletePnPEvent(
    IN  NDIS_STATUS     Status,
    IN  NDIS_HANDLE     NdisBindingHandle,
    IN  PNET_PNP_EVENT  NetPnPEvent
    );

//
//  The following routine is used by a transport to query the localized
//  friendly instance name of the adapter that they are bound to. There
//  are two variations of this, one uses the binding handle and the other
//  the binding context. Some transports need this before they bind - like
//  TCP/IP for instance.
//
EXPORT
NDIS_STATUS
NdisQueryAdapterInstanceName(
    OUT PNDIS_STRING    pAdapterInstanceName,
    IN  NDIS_HANDLE     NdisBindingHandle
    );

EXPORT
NDIS_STATUS
NdisQueryBindInstanceName(
    OUT PNDIS_STRING    pAdapterInstanceName,
    IN  NDIS_HANDLE     BindingContext
    );

//
// The following is used by TDI/NDIS interface as part of Network PnP.
// For use by TDI alone.
//
typedef
NTSTATUS
(*TDI_REGISTER_CALLBACK)(
    IN  PUNICODE_STRING         DeviceName,
    OUT HANDLE  *               TdiHandle
    );

typedef
NTSTATUS
(*TDI_PNP_HANDLER)(
    IN  PUNICODE_STRING         UpperComponent,
    IN  PUNICODE_STRING         LowerComponent,
    IN  PUNICODE_STRING         BindList,
    IN  PVOID                   ReconfigBuffer,
    IN  UINT                    ReconfigBufferSize,
    IN  UINT                    Operation
    );

EXPORT
VOID
NdisRegisterTdiCallBack(
    IN  TDI_REGISTER_CALLBACK   RegsterCallback,
    IN  TDI_PNP_HANDLER         PnPHandler
    );

EXPORT
VOID
NdisRegisterTdiPnpHandler(
    IN  TDI_PNP_HANDLER         PnPHandler
    );

#if BINARY_COMPATIBLE

VOID
NdisSend(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             NdisBindingHandle,
    IN  PNDIS_PACKET            Packet
    );

VOID
NdisSendPackets(
    IN  NDIS_HANDLE             NdisBindingHandle,
    IN  PPNDIS_PACKET           PacketArray,
    IN  UINT                    NumberOfPackets
    );

VOID
NdisTransferData(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             NdisBindingHandle,
    IN  NDIS_HANDLE             MacReceiveContext,
    IN  UINT                    ByteOffset,
    IN  UINT                    BytesToTransfer,
    IN OUT  PNDIS_PACKET        Packet,
    OUT PUINT                   BytesTransferred
    );

VOID
NdisReset(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             NdisBindingHandle
    );

VOID
NdisRequest(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             NdisBindingHandle,
    IN  PNDIS_REQUEST           NdisRequest
    );

#else // BINARY_COMPATIBLE


#ifdef __cplusplus

#define NdisSend(Status, NdisBindingHandle, Packet)                                     \
{                                                                                       \
    *(Status) =                                                                         \
        (((PNDIS_OPEN_BLOCK)(NdisBindingHandle))->NdisCommonOpenBlock.SendHandler)(     \
            (PNDIS_OPEN_BLOCK)(NdisBindingHandle),                                      \
            (Packet));                                                                  \
}

#define NdisSendPackets(NdisBindingHandle, PacketArray, NumberOfPackets)                \
{                                                                                       \
    (((PNDIS_OPEN_BLOCK)(NdisBindingHandle))->NdisCommonOpenBlock.SendPacketsHandler)(  \
        (PNDIS_OPEN_BLOCK)(NdisBindingHandle),                                          \
        (PacketArray),                                                                  \
        (NumberOfPackets));                                                             \
}

#define WanMiniportSend(Status,                                                         \
                        NdisBindingHandle,                                              \
                        NdisLinkHandle,                                                 \
                        WanPacket)                                                      \
{                                                                                       \
    *(Status) =                                                                         \
        ((((PNDIS_OPEN_BLOCK)(NdisBindingHandle))->NdisCommonOpenBlock.WanSendHandler))( \
            (PNDIS_OPEN_BLOCK)(NdisBindingHandle),                                      \
            (NdisLinkHandle),                                                           \
            (PNDIS_PACKET)(WanPacket));                                                 \
}

#define NdisTransferData(Status,                                                        \
                         NdisBindingHandle,                                             \
                         MacReceiveContext,                                             \
                         ByteOffset,                                                    \
                         BytesToTransfer,                                               \
                         Packet,                                                        \
                         BytesTransferred)                                              \
{                                                                                       \
    *(Status) =                                                                         \
        (((PNDIS_OPEN_BLOCK)(NdisBindingHandle))->NdisCommonOpenBlock.TransferDataHandler)( \
            (PNDIS_OPEN_BLOCK)(NdisBindingHandle),                                      \
            (MacReceiveContext),                                                        \
            (ByteOffset),                                                               \
            (BytesToTransfer),                                                          \
            (Packet),                                                                   \
            (BytesTransferred));                                                        \
}


#define NdisReset(Status, NdisBindingHandle)                                            \
{                                                                                       \
    *(Status) =                                                                         \
        (((PNDIS_OPEN_BLOCK)(NdisBindingHandle))->NdisCommonOpenBlock.ResetHandler)(    \
            (PNDIS_OPEN_BLOCK)(NdisBindingHandle));                                     \
}

#define NdisRequest(Status, NdisBindingHandle, NdisRequest)                             \
{                                                                                       \
    *(Status) =                                                                         \
        (((PNDIS_OPEN_BLOCK)(NdisBindingHandle))->NdisCommonOpenBlock.RequestHandler)(  \
            (PNDIS_OPEN_BLOCK)(NdisBindingHandle),                                      \
            (NdisRequest));                                                             \
}

#else

#define NdisSend(Status, NdisBindingHandle, Packet)                         \
{                                                                           \
    *(Status) =                                                             \
        (((PNDIS_OPEN_BLOCK)(NdisBindingHandle))->SendHandler)(             \
            (PNDIS_OPEN_BLOCK)(NdisBindingHandle),                          \
        (Packet));                                                          \
}


#define NdisSendPackets(NdisBindingHandle, PacketArray, NumberOfPackets)    \
{                                                                           \
    (((PNDIS_OPEN_BLOCK)(NdisBindingHandle))->SendPacketsHandler)(          \
        (PNDIS_OPEN_BLOCK)(NdisBindingHandle),                              \
        (PacketArray),                                                      \
        (NumberOfPackets));                                                 \
}

#define WanMiniportSend(Status,                                             \
                        NdisBindingHandle,                                  \
                        NdisLinkHandle,                                     \
                        WanPacket)                                          \
{                                                                           \
    *(Status) =                                                             \
        ((((PNDIS_OPEN_BLOCK)(NdisBindingHandle))->WanSendHandler))(        \
            (PNDIS_OPEN_BLOCK)(NdisBindingHandle),                          \
            (NdisLinkHandle),                                               \
            (PNDIS_PACKET)(WanPacket));                                     \
}

#define NdisTransferData(Status,                                            \
                         NdisBindingHandle,                                 \
                         MacReceiveContext,                                 \
                         ByteOffset,                                        \
                         BytesToTransfer,                                   \
                         Packet,                                            \
                         BytesTransferred)                                  \
{                                                                           \
    *(Status) =                                                             \
        (((PNDIS_OPEN_BLOCK)(NdisBindingHandle))->TransferDataHandler)(     \
            (PNDIS_OPEN_BLOCK)(NdisBindingHandle),                          \
            (MacReceiveContext),                                            \
            (ByteOffset),                                                   \
            (BytesToTransfer),                                              \
            (Packet),                                                       \
            (BytesTransferred));                                            \
}


#define NdisReset(Status, NdisBindingHandle)                                \
{                                                                           \
    *(Status) =                                                             \
        (((PNDIS_OPEN_BLOCK)(NdisBindingHandle))->ResetHandler)(            \
            (PNDIS_OPEN_BLOCK)(NdisBindingHandle));                         \
}

#define NdisRequest(Status, NdisBindingHandle, NdisRequest)                 \
{                                                                           \
    *(Status) =                                                             \
        (((PNDIS_OPEN_BLOCK)(NdisBindingHandle))->RequestHandler)(          \
            (PNDIS_OPEN_BLOCK)(NdisBindingHandle),                          \
            (NdisRequest));                                                 \
}

#endif // ifdef __cplusplus

#endif // BINARY_COMPATIBLE

//
// Routines to access packet flags
//

/*++

VOID
NdisSetSendFlags(
    IN  PNDIS_PACKET            Packet,
    IN  UINT                    Flags
    );

--*/

#define NdisSetSendFlags(_Packet,_Flags)    (_Packet)->Private.Flags = (_Flags)

/*++

VOID
NdisQuerySendFlags(
    IN  PNDIS_PACKET            Packet,
    OUT PUINT                   Flags
    );

--*/

#define NdisQuerySendFlags(_Packet,_Flags)  *(_Flags) = (_Packet)->Private.Flags

//
// The following is the minimum size of packets a miniport must allocate
// when it indicates packets via NdisMIndicatePacket or NdisMCoIndicatePacket
//
#define PROTOCOL_RESERVED_SIZE_IN_PACKET    (4 * sizeof(PVOID))

EXPORT
VOID
NdisReturnPackets(
    IN  PNDIS_PACKET    *       PacketsToReturn,
    IN  UINT                    NumberOfPackets
    );

EXPORT
PNDIS_PACKET
NdisGetReceivedPacket(
    IN  NDIS_HANDLE             NdisBindingHandle,
    IN  NDIS_HANDLE             MacContext
    );

//
// Macros to portably manipulate NDIS buffers.
//
#if BINARY_COMPATIBLE

EXPORT
ULONG
NdisBufferLength(
    IN  PNDIS_BUFFER            Buffer
    );

EXPORT
PVOID
NdisBufferVirtualAddress(
    IN  PNDIS_BUFFER            Buffer
    );

#else // BINARY_COMPATIBLE

#define NdisBufferLength(Buffer)                            MmGetMdlByteCount(Buffer)
#define NdisBufferVirtualAddress(_Buffer)                   MmGetSystemAddressForMdl(_Buffer)
#define NdisBufferVirtualAddressSafe(_Buffer, _Priority)    MmGetSystemAddressForMdlSafe(_Buffer, _Priority)

#endif  // BINARY_COMPATIBLE

//
// Ndis 5.1 entry points for setting/gettign packet's CancelId and cancelling send packets
//

// #if (defined(NDIS50) || defined(NDIS51) || defined(NDIS50_MINIPORT) || defined(NDIS51_MINIPORT))
/*
EXPORT
VOID
NdisSetPacketCancelId(
    IN  PNDIS_PACKET    Packet,
    IN  PVOID           CancelId
    );
*/
#define  NdisSetPacketCancelId(_Packet, _CancelId) NDIS_SET_PACKET_CANCEL_ID(_Packet, _CancelId);

/*
EXPORT
PVOID
NdisGetPacketCancelId(
    IN  PNDIS_PACKET    Packet
    );
*/
#define  NdisGetPacketCancelId(_Packet) NDIS_GET_PACKET_CANCEL_ID(_Packet);

EXPORT
VOID
NdisCancelSendPackets(
    IN  NDIS_HANDLE     NdisBindingHandle,
    IN  PVOID           CancelId
    );

EXPORT
NDIS_STATUS
NdisQueryPendingIOCount(
    IN      PVOID       NdisBindingHandle,
    IN OUT  PULONG      IoCount
    );
    
EXPORT
UCHAR
NdisGeneratePartialCancelId(
    VOID
    );
    
// #endif // NDIS51


//
// The following definitions are available only to miniport drivers.  They
// must not be used by full MAC drivers.
//

#if defined(UNDER_CE) || defined(NDIS_MINIPORT_DRIVER) || defined(NDIS_WRAPPER)

#if ARCNET
#include <afilter.h>
#endif
#include <xfilter.h>

#define NDIS_M_MAX_LOOKAHEAD 526


//
// Function types for NDIS_MINIPORT_CHARACTERISTICS
//


typedef
BOOLEAN
(*W_CHECK_FOR_HANG_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext
    );

typedef
VOID
(*W_DISABLE_INTERRUPT_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext
    );

typedef
VOID
(*W_ENABLE_INTERRUPT_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext
    );

typedef
VOID
(*W_HALT_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext
    );

typedef
VOID
(*W_HANDLE_INTERRUPT_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext
    );

typedef
NDIS_STATUS
(*W_INITIALIZE_HANDLER)(
    OUT PNDIS_STATUS            OpenErrorStatus,
    OUT PUINT                   SelectedMediumIndex,
    IN  PNDIS_MEDIUM            MediumArray,
    IN  UINT                    MediumArraySize,
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  NDIS_HANDLE             WrapperConfigurationContext
    );

typedef
VOID
(*W_ISR_HANDLER)(
    OUT PBOOLEAN                InterruptRecognized,
    OUT PBOOLEAN                QueueMiniportHandleInterrupt,
    IN  NDIS_HANDLE             MiniportAdapterContext
    );

typedef
NDIS_STATUS
(*W_QUERY_INFORMATION_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  NDIS_OID                Oid,
    IN  PVOID                   InformationBuffer,
    IN  ULONG                   InformationBufferLength,
    OUT PULONG                  BytesWritten,
    OUT PULONG                  BytesNeeded
    );

typedef
NDIS_STATUS
(*W_RECONFIGURE_HANDLER)(
    OUT PNDIS_STATUS            OpenErrorStatus,
    IN  NDIS_HANDLE             MiniportAdapterContext  OPTIONAL,
    IN  NDIS_HANDLE             WrapperConfigurationContext
    );

typedef
NDIS_STATUS
(*W_RESET_HANDLER)(
    OUT PBOOLEAN                AddressingReset,
    IN  NDIS_HANDLE             MiniportAdapterContext
    );

typedef
NDIS_STATUS
(*W_SEND_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  PNDIS_PACKET            Packet,
    IN  UINT                    Flags
    );

typedef
NDIS_STATUS
(*WM_SEND_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  NDIS_HANDLE             NdisLinkHandle,
    IN  PNDIS_WAN_PACKET        Packet
    );

typedef
NDIS_STATUS
(*W_SET_INFORMATION_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  NDIS_OID                Oid,
    IN  PVOID                   InformationBuffer,
    IN  ULONG                   InformationBufferLength,
    OUT PULONG                  BytesRead,
    OUT PULONG                  BytesNeeded
    );

typedef
NDIS_STATUS
(*W_TRANSFER_DATA_HANDLER)(
    OUT PNDIS_PACKET            Packet,
    OUT PUINT                   BytesTransferred,
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  NDIS_HANDLE             MiniportReceiveContext,
    IN  UINT                    ByteOffset,
    IN  UINT                    BytesToTransfer
    );

typedef
NDIS_STATUS
(*WM_TRANSFER_DATA_HANDLER)(
    VOID
    );

typedef struct _NDIS30_MINIPORT_CHARACTERISTICS
{
    UCHAR                       MajorNdisVersion;
    UCHAR                       MinorNdisVersion;
    USHORT                      Filler;
    UINT                        Reserved;
    W_CHECK_FOR_HANG_HANDLER    CheckForHangHandler;
    W_DISABLE_INTERRUPT_HANDLER DisableInterruptHandler;
    W_ENABLE_INTERRUPT_HANDLER  EnableInterruptHandler;
    W_HALT_HANDLER              HaltHandler;
    W_HANDLE_INTERRUPT_HANDLER  HandleInterruptHandler;
    W_INITIALIZE_HANDLER        InitializeHandler;
    W_ISR_HANDLER               ISRHandler;
    W_QUERY_INFORMATION_HANDLER QueryInformationHandler;
    W_RECONFIGURE_HANDLER       ReconfigureHandler;
    W_RESET_HANDLER             ResetHandler;
    union
    {
        W_SEND_HANDLER          SendHandler;
        WM_SEND_HANDLER         WanSendHandler;
    };
    W_SET_INFORMATION_HANDLER   SetInformationHandler;
    union
    {
        W_TRANSFER_DATA_HANDLER TransferDataHandler;
        WM_TRANSFER_DATA_HANDLER WanTransferDataHandler;
    };
} NDIS30_MINIPORT_CHARACTERISTICS;

//
// Miniport extensions for NDIS 4.0
//
typedef
VOID
(*W_RETURN_PACKET_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  PNDIS_PACKET            Packet
    );

//
// NDIS 4.0 extension
//
typedef
VOID
(*W_SEND_PACKETS_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  PPNDIS_PACKET           PacketArray,
    IN  UINT                    NumberOfPackets
    );

typedef
VOID
(*W_ALLOCATE_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  PVOID                   VirtualAddress,
    IN  PNDIS_PHYSICAL_ADDRESS  PhysicalAddress,
    IN  ULONG                   Length,
    IN  PVOID                   Context
    );

typedef struct _NDIS40_MINIPORT_CHARACTERISTICS
{
#ifdef __cplusplus
    NDIS30_MINIPORT_CHARACTERISTICS Ndis30Chars;
#else
    NDIS30_MINIPORT_CHARACTERISTICS;
#endif
    //
    // Extensions for NDIS 4.0
    //
    W_RETURN_PACKET_HANDLER     ReturnPacketHandler;
    W_SEND_PACKETS_HANDLER      SendPacketsHandler;
    W_ALLOCATE_COMPLETE_HANDLER AllocateCompleteHandler;

} NDIS40_MINIPORT_CHARACTERISTICS;


//
// Miniport extensions for NDIS 5.0
//
//
// NDIS 5.0 extension - however available for miniports only
//

//
// W_CO_CREATE_VC_HANDLER is a synchronous call
//
typedef
NDIS_STATUS
(*W_CO_CREATE_VC_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  NDIS_HANDLE             NdisVcHandle,
    OUT PNDIS_HANDLE            MiniportVcContext
    );

typedef
NDIS_STATUS
(*W_CO_DELETE_VC_HANDLER)(
    IN  NDIS_HANDLE             MiniportVcContext
    );

typedef
NDIS_STATUS
(*W_CO_ACTIVATE_VC_HANDLER)(
    IN  NDIS_HANDLE             MiniportVcContext,
    IN OUT PCO_CALL_PARAMETERS  CallParameters
    );

typedef
NDIS_STATUS
(*W_CO_DEACTIVATE_VC_HANDLER)(
    IN  NDIS_HANDLE             MiniportVcContext
    );

typedef
VOID
(*W_CO_SEND_PACKETS_HANDLER)(
    IN  NDIS_HANDLE             MiniportVcContext,
    IN  PPNDIS_PACKET           PacketArray,
    IN  UINT                    NumberOfPackets
    );

typedef
NDIS_STATUS
(*W_CO_REQUEST_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  NDIS_HANDLE             MiniportVcContext   OPTIONAL,
    IN OUT PNDIS_REQUEST        NdisRequest
    );

typedef struct _NDIS50_MINIPORT_CHARACTERISTICS
{
#ifdef __cplusplus
    NDIS40_MINIPORT_CHARACTERISTICS Ndis40Chars;
#else
    NDIS40_MINIPORT_CHARACTERISTICS;
#endif
    //
    // Extensions for NDIS 5.0
    //
    W_CO_CREATE_VC_HANDLER      CoCreateVcHandler;
    W_CO_DELETE_VC_HANDLER      CoDeleteVcHandler;
    W_CO_ACTIVATE_VC_HANDLER    CoActivateVcHandler;
    W_CO_DEACTIVATE_VC_HANDLER  CoDeactivateVcHandler;
    W_CO_SEND_PACKETS_HANDLER   CoSendPacketsHandler;
    W_CO_REQUEST_HANDLER        CoRequestHandler;
} NDIS50_MINIPORT_CHARACTERISTICS;

//
// Miniport extensions for NDIS 5.1
//
typedef VOID
(*W_CANCEL_SEND_PACKETS_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  PVOID                   CancelId
    );

//
// power profiles
//
typedef enum _NDIS_POWER_PROFILE
{
    NdisPowerProfileBattery,
    NdisPowerProfileAcOnLine
} NDIS_POWER_PROFILE, *PNDIS_POWER_PROFILE;

typedef enum _NDIS_DEVICE_PNP_EVENT
{
    NdisDevicePnPEventQueryRemoved,
    NdisDevicePnPEventRemoved,
    NdisDevicePnPEventSurpriseRemoved,
    NdisDevicePnPEventQueryStopped,
    NdisDevicePnPEventStopped,
    NdisDevicePnPEventPowerProfileChanged,
    NdisDevicePnPEventMaximum
} NDIS_DEVICE_PNP_EVENT, *PNDIS_DEVICE_PNP_EVENT;

typedef VOID
(*W_PNP_EVENT_NOTIFY_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  NDIS_DEVICE_PNP_EVENT   DevicePnPEvent,
    IN  PVOID                   InformationBuffer,
    IN  ULONG                   InformationBufferLength
    );

typedef VOID
(*W_MINIPORT_SHUTDOWN_HANDLER) (
    IN  NDIS_HANDLE                     MiniportAdapterContext
    );

typedef struct _NDIS51_MINIPORT_CHARACTERISTICS
{
#ifdef __cplusplus
    NDIS50_MINIPORT_CHARACTERISTICS Ndis50Chars;
#else
    NDIS50_MINIPORT_CHARACTERISTICS;
#endif
    //
    // Extensions for NDIS 5.1
    //
    W_CANCEL_SEND_PACKETS_HANDLER   CancelSendPacketsHandler;
    W_PNP_EVENT_NOTIFY_HANDLER      PnPEventNotifyHandler;
    W_MINIPORT_SHUTDOWN_HANDLER     AdapterShutdownHandler;
    PVOID                           Reserved1;
    PVOID                           Reserved2;
    PVOID                           Reserved3;
    PVOID                           Reserved4;
} NDIS51_MINIPORT_CHARACTERISTICS;

#ifdef NDIS51_MINIPORT
typedef struct _NDIS51_MINIPORT_CHARACTERISTICS NDIS_MINIPORT_CHARACTERISTICS;
#else
#ifdef NDIS50_MINIPORT
typedef struct _NDIS50_MINIPORT_CHARACTERISTICS NDIS_MINIPORT_CHARACTERISTICS;
#else
#ifdef NDIS40_MINIPORT
typedef struct _NDIS40_MINIPORT_CHARACTERISTICS NDIS_MINIPORT_CHARACTERISTICS;
#else
#ifdef UNDER_CE	// CE never supported NDIS 3.0, default to 4.0
typedef struct _NDIS40_MINIPORT_CHARACTERISTICS NDIS_MINIPORT_CHARACTERISTICS;
#else
typedef struct _NDIS30_MINIPORT_CHARACTERISTICS NDIS_MINIPORT_CHARACTERISTICS;
#endif // UNDER_CE
#endif
#endif
#endif

typedef NDIS_MINIPORT_CHARACTERISTICS * PNDIS_MINIPORT_CHARACTERISTICS;
typedef NDIS_MINIPORT_CHARACTERISTICS   NDIS_WAN_MINIPORT_CHARACTERISTICS;
typedef NDIS_WAN_MINIPORT_CHARACTERISTICS * PNDIS_MINIPORT_CHARACTERISTICS;

#ifdef UNDER_CE
typedef struct _NDIS_CE_MINIPORT_INTERRUPT_EXTENSION
{
	CRITICAL_SECTION			InterruptLock;		// Use to synchronize with ISR
} NDIS_CE_MINIPORT_INTERRUPT_EXTENSION, *PNDIS_CE_MINIPORT_INTERRUPT_EXTENSION;
#endif

typedef struct _NDIS_MINIPORT_INTERRUPT
{
    PKINTERRUPT                 InterruptObject;
    KSPIN_LOCK                  DpcCountLock;
#ifdef UNDER_CE
	PNDIS_CE_MINIPORT_INTERRUPT_EXTENSION	InterruptExtension;
#else
    PVOID                       Reserved;
#endif
    W_ISR_HANDLER               MiniportIsr;
    W_HANDLE_INTERRUPT_HANDLER  MiniportDpc;
    KDPC                        InterruptDpc;
    PNDIS_MINIPORT_BLOCK        Miniport;

    UCHAR                       DpcCount;
    BOOLEAN                     SharedInterrupt;
    BOOLEAN                     IsrRequested;

    //
    // This is used to tell when all the Dpcs for the adapter are completed.
    //

    KEVENT                      DpcsCompletedEvent;

} NDIS_MINIPORT_INTERRUPT, *PNDIS_MINIPORT_INTERRUPT;


typedef struct _NDIS_MINIPORT_TIMER
{
    KTIMER                      Timer;
    KDPC                        Dpc;
    PNDIS_TIMER_FUNCTION        MiniportTimerFunction;
    PVOID                       MiniportTimerContext;
    PNDIS_MINIPORT_BLOCK        Miniport;
    struct _NDIS_MINIPORT_TIMER *NextTimer;
} NDIS_MINIPORT_TIMER, *PNDIS_MINIPORT_TIMER;

typedef
VOID
(*FILTER_PACKET_INDICATION_HANDLER)(
    IN  NDIS_HANDLE             Miniport,
    IN  PPNDIS_PACKET           PacketArray,
    IN  UINT                    NumberOfPackets
    );

typedef
VOID
(*ETH_RCV_INDICATE_HANDLER)(
    IN  PETH_FILTER             Filter,
    IN  NDIS_HANDLE             MacReceiveContext,
    IN  PCHAR                   Address,
    IN  PVOID                   HeaderBuffer,
    IN  UINT                    HeaderBufferSize,
    IN  PVOID                   LookaheadBuffer,
    IN  UINT                    LookaheadBufferSize,
    IN  UINT                    PacketSize
    );

typedef
VOID
(*ETH_RCV_COMPLETE_HANDLER)(
    IN  PETH_FILTER             Filter
    );

typedef
VOID
(*FDDI_RCV_INDICATE_HANDLER)(
    IN  PFDDI_FILTER            Filter,
    IN  NDIS_HANDLE             MacReceiveContext,
    IN  PCHAR                   Address,
    IN  UINT                    AddressLength,
    IN  PVOID                   HeaderBuffer,
    IN  UINT                    HeaderBufferSize,
    IN  PVOID                   LookaheadBuffer,
    IN  UINT                    LookaheadBufferSize,
    IN  UINT                    PacketSize
    );

typedef
VOID
(*FDDI_RCV_COMPLETE_HANDLER)(
    IN  PFDDI_FILTER            Filter
    );

typedef
VOID
(*TR_RCV_INDICATE_HANDLER)(
    IN  PTR_FILTER              Filter,
    IN  NDIS_HANDLE             MacReceiveContext,
    IN  PVOID                   HeaderBuffer,
    IN  UINT                    HeaderBufferSize,
    IN  PVOID                   LookaheadBuffer,
    IN  UINT                    LookaheadBufferSize,
    IN  UINT                    PacketSize
    );

typedef
VOID
(*TR_RCV_COMPLETE_HANDLER)(
    IN  PTR_FILTER              Filter
    );

typedef
VOID
(*WAN_RCV_HANDLER)(
    OUT PNDIS_STATUS            Status,
    IN NDIS_HANDLE              MiniportAdapterHandle,
    IN NDIS_HANDLE              NdisLinkContext,
    IN PUCHAR                   Packet,
    IN ULONG                    PacketSize
    );

typedef
VOID
(*WAN_RCV_COMPLETE_HANDLER)(
    IN NDIS_HANDLE              MiniportAdapterHandle,
    IN NDIS_HANDLE              NdisLinkContext
    );

typedef
VOID
(*NDIS_M_SEND_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  PNDIS_PACKET            Packet,
    IN  NDIS_STATUS             Status
    );

typedef
VOID
(*NDIS_WM_SEND_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  PVOID                   Packet,
    IN  NDIS_STATUS             Status
    );

typedef
VOID
(*NDIS_M_TD_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  PNDIS_PACKET            Packet,
    IN  NDIS_STATUS             Status,
    IN  UINT                    BytesTransferred
    );

typedef
VOID
(*NDIS_M_SEND_RESOURCES_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterHandle
    );

typedef
VOID
(*NDIS_M_STATUS_HANDLER)(
    IN  NDIS_HANDLE             MiniportHandle,
    IN  NDIS_STATUS             GeneralStatus,
    IN  PVOID                   StatusBuffer,
    IN  UINT                    StatusBufferSize
    );

typedef
VOID
(*NDIS_M_STS_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterHandle
    );

typedef
VOID
(*NDIS_M_REQ_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  NDIS_STATUS             Status
    );

typedef
VOID
(*NDIS_M_RESET_COMPLETE_HANDLER)(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  NDIS_STATUS             Status,
    IN  BOOLEAN                 AddressingReset
    );

typedef
BOOLEAN
(FASTCALL *NDIS_M_START_SENDS)(
    IN  PNDIS_MINIPORT_BLOCK    Miniport
    );

//
//  Defines the type of work item.
//
typedef enum _NDIS_WORK_ITEM_TYPE
{
    NdisWorkItemRequest,
    NdisWorkItemSend,
    NdisWorkItemReturnPackets,
    NdisWorkItemResetRequested,
    NdisWorkItemResetInProgress,
    NdisWorkItemReserved,
    NdisWorkItemMiniportCallback,
    NdisMaxWorkItems
} NDIS_WORK_ITEM_TYPE, *PNDIS_WORK_ITEM_TYPE;


#define NUMBER_OF_WORK_ITEM_TYPES   NdisMaxWorkItems
#define NUMBER_OF_SINGLE_WORK_ITEMS 6

//
//  Work item structure
//
typedef struct _NDIS_MINIPORT_WORK_ITEM
{
    //
    //  Link for the list of work items of this type.
    //
    SINGLE_LIST_ENTRY   Link;

    //
    //  type of work item and context information.
    //
    NDIS_WORK_ITEM_TYPE WorkItemType;
    PVOID               WorkItemContext;
} NDIS_MINIPORT_WORK_ITEM, *PNDIS_MINIPORT_WORK_ITEM;

typedef
NDIS_STATUS
(FASTCALL *NDIS_M_QUEUE_WORK_ITEM)(
    IN  PNDIS_MINIPORT_BLOCK    Miniport,
    IN  NDIS_WORK_ITEM_TYPE     WorkItemType,
    IN  PVOID                   WorkItemContext
    );

typedef
NDIS_STATUS
(FASTCALL *NDIS_M_QUEUE_NEW_WORK_ITEM)(
    IN  PNDIS_MINIPORT_BLOCK    Miniport,
    IN  NDIS_WORK_ITEM_TYPE     WorkItemType,
    IN  PVOID                   WorkItemContext
    );

typedef
VOID
(FASTCALL *NDIS_M_DEQUEUE_WORK_ITEM)(
    IN  PNDIS_MINIPORT_BLOCK    Miniport,
    IN  NDIS_WORK_ITEM_TYPE     WorkItemType,
    OUT PVOID   *               WorkItemContext
    );

#if defined(NDIS_WRAPPER)

//
// Structure used by the logging apis
//
typedef struct _NDIS_LOG
{
    PNDIS_MINIPORT_BLOCK        Miniport;   // The owning miniport block
    KSPIN_LOCK                  LogLock;    // For serialization
#ifdef UNDER_CE
    KEVENT                      DataAvailableEvent;
#else
    PIRP                        Irp;        // Pending Irp to consume this log
#endif
    UINT                        TotalSize;  // Size of the log buffer
    UINT                        CurrentSize;// Size of the log buffer
    UINT                        InPtr;      // IN part of the circular buffer
    UINT                        OutPtr;     // OUT part of the circular buffer
    UCHAR                       LogBuf[1];  // The circular buffer
} NDIS_LOG, *PNDIS_LOG;

#if ARCNET

//
// Arcnet specific stuff
//
#define ARC_SEND_BUFFERS            8
#define ARC_HEADER_SIZE             4

typedef struct _NDIS_ARC_BUF
{
    NDIS_HANDLE                 ArcnetBufferPool;
    PUCHAR                      ArcnetLookaheadBuffer;
    UINT                        NumFree;
    ARC_BUFFER_LIST             ArcnetBuffers[ARC_SEND_BUFFERS];
} NDIS_ARC_BUF, *PNDIS_ARC_BUF;

#endif

#endif

typedef struct _NDIS_BIND_PATHS
{
    UINT                        Number;
    NDIS_STRING                 Paths[1];
} NDIS_BIND_PATHS, *PNDIS_BIND_PATHS;

//
// Do not change the structure below !!!
//
typedef struct
{
    union
    {
        PETH_FILTER             EthDB;
        PNULL_FILTER            NullDB;             // Default Filter
    };
    PTR_FILTER                  TrDB;
#if FDDI
    PFDDI_FILTER                FddiDB;
#else
	PVOID						FddiDB;
#endif
#if ARCNET
    PARC_FILTER                 ArcDB;
#else
    PVOID                       ArcDB;
#endif
} FILTERDBS, *PFILTERDBS;

//
// one of these per mini-port registered on a Driver
//
struct _NDIS_MINIPORT_BLOCK
{
    PVOID                       Signature;          // MINIPORT_DEVICE_MAGIC_VALUE
    NDIS_HANDLE                 DeviceContext;      // Context associated with the intermediate driver
    PNDIS_M_DRIVER_BLOCK        DriverHandle;       // pointer to our Driver block
    NDIS_HANDLE                 MiniportAdapterContext; // context when calling mini-port functions
    UNICODE_STRING              MiniportName;       // how mini-port refers to us
    NDIS_HANDLE                 OpenQueue;          // queue of opens for this mini-port
//    PNDIS_BIND_PATHS            BindPaths;
    PNDIS_MINIPORT_BLOCK        NextMiniport;       // used by driver's MiniportQueue
    REFERENCE                   Ref;                // contains spinlock for OpenQueue


    BOOLEAN                     Padding1;           // DO NOT REMOVE OR NDIS WILL BREAK!!!
    BOOLEAN                     Padding2;           // DO NOT REMOVE OR NDIS WILL BREAK!!!

    //
    // Synchronization stuff.
    //
    // The boolean is used to lock out several DPCs from running at the same time.
    //   This has been depricated - do not use this field anymore.
    //
#ifdef  NDIS_NO_DPC
    UCHAR                       DepricatedLockAcquired;       // Depricated , when new ndis goes in, this becomes a place holder.
                                                      // To keep struct the same size. Now use LockCS.
#else
    //xxx - remove once we're sure this is no longer needed. 
    UCHAR                       LockAcquired;       // EXPOSED via macros. Do not move
#endif 

    UCHAR                       PmodeOpens;         // Count of opens which turned on pmode/all_local

    KSPIN_LOCK                  Lock;

    PNDIS_MINIPORT_INTERRUPT    Interrupt;

    ULONG                       Flags;              // Flags to keep track of the
                                                    // miniport's state.
    KSPIN_LOCK                  UnusedLock1;		// unused, for CE BC
    //
    // Work that the miniport needs to do.
    //
    SINGLE_LIST_ENTRY           WorkQueue[NUMBER_OF_WORK_ITEM_TYPES];
	PVOID						WorkQueueBCPadding[3]; // CE used to have 3 more work item types
	SINGLE_LIST_ENTRY			WorkItemFreeQueue;	// CE BC

	KDPC						UnusedDpc1;			// CE BC
    //
    // Watch-dog timer
    //
    NDIS_TIMER                  WakeUpDpcTimer;


    //
    // Holds media specific information.
    //
#ifdef __cplusplus
    FILTERDBS                   FilterDbs;          // EXPOSED via macros. Do not move
#else
    FILTERDBS;                                      // EXPOSED via macros. Do not move
#endif
    FILTER_PACKET_INDICATION_HANDLER PacketIndicateHandler;
    NDIS_M_SEND_COMPLETE_HANDLER    SendCompleteHandler;
    NDIS_M_SEND_RESOURCES_HANDLER   SendResourcesHandler;
    NDIS_M_RESET_COMPLETE_HANDLER   ResetCompleteHandler;

	PVOID						WrapperContext;
    NDIS_MEDIUM                 MediaType;

    //
    // contains mini-port information
    //
    ULONG                       BusNumber;
    NDIS_INTERFACE_TYPE         BusType;
    NDIS_INTERFACE_TYPE         AdapterType;

    //
    // Holds the map registers for this mini-port.
    //
	ULONG						PhysicalMapRegistersNeeded;
	ULONG						MaximumPhysicalMapping;
    PMAP_REGISTER_ENTRY         MapRegisters;   // EXPOSED via macros. Do not move

	PVOID						UnusedProcessDeferredHandler;  // CE BC
	PVOID						UnusedQueueWorkItemHandler;    // CE BC
	PVOID						UnusedQueueNewWorkItemHandler; // CE BC
	PVOID						UnusedDeQueueWorkItemHandler;  // CE BC

	PVOID						UnusedDeferredTimer; // CE BC

    //
    // Resource information
    //
    PCM_RESOURCE_LIST           Resources;

	PVOID						UnusedReservedPVOID; // CE BC

    SINGLE_LIST_ENTRY           SingleWorkItems[NUMBER_OF_SINGLE_WORK_ITEMS];

    //
    //  For efficiency
    //
    W_HANDLE_INTERRUPT_HANDLER  HandleInterruptHandler;
    W_DISABLE_INTERRUPT_HANDLER DisableInterruptHandler;
    W_ENABLE_INTERRUPT_HANDLER  EnableInterruptHandler;
    W_SEND_PACKETS_HANDLER      SendPacketsHandler;
    NDIS_M_START_SENDS          DeferredSendHandler;

    //
    // Send information
    //
    LIST_ENTRY                  PacketList;
    PNDIS_PACKET                FirstPendingPacket; // This is head of the queue of packets
                                                    // waiting to be sent to miniport.
    PNDIS_PACKET                ReturnPacketsQueue;

    //
    // Space used for temp. use during request processing
    //
    ULONG                       RequestBuffer;
    PVOID                       SetMCastBuffer;

    PNDIS_MINIPORT_BLOCK        PrimaryMiniport;

    //
    // context to pass to bus driver when reading or writing config space
    //
    PVOID                       BusDataContext;
    //
    // flag to specify PnP capabilities of the device. we need this to fail query_stop
    // query_remove or suspend request if the device can not handle it
    //
    ULONG                       PnPCapabilities;
    
    //
    // Needed for PnP. Upcased version. The buffer is allocated as part of the
    // NDIS_MINIPORT_BLOCK itself.
    //
    // Note:
    // the following two fields should be explicitly UNICODE_STRING because
    // under Win9x the NDIS_STRING is an ANSI_STRING
    //
    UNICODE_STRING              BaseName;
    UNICODE_STRING              SymbolicLinkName;

    //
    // Check for hang stuff
    //
    ULONG                       CheckForHangSeconds;
    USHORT                      CFHangTicks;
    USHORT                      CFHangCurrentTick;

    //
    // Reset information
    //
    NDIS_STATUS                 ResetStatus;
    NDIS_HANDLE                 ResetOpen;

    PDEVICE_OBJECT              DeviceObject;
    PDEVICE_OBJECT              PhysicalDeviceObject;
    PDEVICE_OBJECT              NextDeviceObject;

    //
    // List of registered address families. Valid for the call-manager, Null for the client
    //
    PNDIS_AF_LIST               CallMgrAfList;

    PVOID                       MiniportThread;
    PVOID                       SetInfoBuf;
    USHORT                      SetInfoBufLen;
    USHORT                      MaxSendPackets;

    //
    //  Status code that is returned from the fake handlers.
    //
    NDIS_STATUS                 FakeStatus;

    PVOID                       LockHandler;        // For the filter lock

    //
    // the following field should be explicitly UNICODE_STRING because
    // under Win9x the NDIS_STRING is an ANSI_STRING
    //
    PUNICODE_STRING             pAdapterInstanceName;   //  Instance specific name for the adapter.

    PNDIS_MINIPORT_TIMER        TimerQueue;

    UINT                        MacOptions;

    //
    // RequestInformation
    //
    PNDIS_REQUEST               PendingRequest;
    UINT                        MaximumLongAddresses;
    UINT                        MaximumShortAddresses;
    UINT                        CurrentLookahead;
    UINT                        MaximumLookahead;

    //
    // The following cannot be unionized.
    //
    ETH_RCV_INDICATE_HANDLER    EthRxIndicateHandler;   // EXPOSED via macros. Do not move
    TR_RCV_INDICATE_HANDLER     TrRxIndicateHandler;    // EXPOSED via macros. Do not move
    FDDI_RCV_INDICATE_HANDLER   FddiRxIndicateHandler;  // EXPOSED via macros. Do not move

    ETH_RCV_COMPLETE_HANDLER    EthRxCompleteHandler;   // EXPOSED via macros. Do not move
    TR_RCV_COMPLETE_HANDLER     TrRxCompleteHandler;    // EXPOSED via macros. Do not move
    FDDI_RCV_COMPLETE_HANDLER   FddiRxCompleteHandler;  // EXPOSED via macros. Do not move

    NDIS_M_STATUS_HANDLER       StatusHandler;          // EXPOSED via macros. Do not move
    NDIS_M_STS_COMPLETE_HANDLER StatusCompleteHandler;  // EXPOSED via macros. Do not move
    NDIS_M_TD_COMPLETE_HANDLER  TDCompleteHandler;      // EXPOSED via macros. Do not move
    NDIS_M_REQ_COMPLETE_HANDLER QueryCompleteHandler;   // EXPOSED via macros. Do not move
    NDIS_M_REQ_COMPLETE_HANDLER SetCompleteHandler;     // EXPOSED via macros. Do not move

    NDIS_WM_SEND_COMPLETE_HANDLER WanSendCompleteHandler;// EXPOSED via macros. Do not move
    WAN_RCV_HANDLER             WanRcvHandler;          // EXPOSED via macros. Do not move
    WAN_RCV_COMPLETE_HANDLER    WanRcvCompleteHandler;  // EXPOSED via macros. Do not move

    /********************************************************************************************/
    /****************                                                                  **********/
    /**************** STUFF ABOVE IS POTENTIALLY ACCESSED BY MACROS. ADD STUFF BELOW   **********/
    /**************** SEVERE POSSIBILITY OF BREAKING SOMETHING IF STUFF ABOVE IS MOVED **********/
    /****************                                                                  **********/
    /********************************************************************************************/

    PNDIS_BIND_PATHS            BindPaths;
    PNDIS_REQUEST               MediaRequest;
    ULONG                       PnPFlags;
    //
    //  This is the processor number that the miniport's
    //  interrupt DPC and timers are running on.
    //
    UCHAR                       AssignedProcessor;

#if defined(NDIS_WRAPPER)
    PNDIS_MINIPORT_BLOCK        NextGlobalMiniport;     // used to queue miniport on global miniport queue

    UCHAR                       SendFlags;
    UCHAR                       TrResetRing;
    UCHAR                       ArcnetAddress;
    UCHAR                       XState;     // flag to indicate why we have set the fake handlers
    
    union
    {
#if ARCNET
        PNDIS_ARC_BUF           ArcBuf;
#endif
        //
        // the following field has a different use under NT and Memphis
        //
        PVOID                   BusInterface;
    };

    PNDIS_LOG                   Log;

    //
    // Store information here to track adapters
    //
    ULONG                       SlotNumber;

    PCM_RESOURCE_LIST           AllocatedResources;
    PCM_RESOURCE_LIST           AllocatedResourcesTranslated;

    //
    //  Contains a list of the packet patterns that have been added to the
    //  adapter.
    //
    SINGLE_LIST_ENTRY           PatternList;

    //
    //  The driver's power management capabilities.
    //
    NDIS_PNP_CAPABILITIES       PMCapabilities;

    //
    // DeviceCapabilites as received from bus driver
    //
    DEVICE_CAPABILITIES         DeviceCaps;

    //
    //  Contains the wake-up events that are enabled for the miniport.
    //
    ULONG                       WakeUpEnable;

    //
    //  The current device state that the adapter is in.
    //
    DEVICE_POWER_STATE          CurrentDevicePowerState;

    //
    //  The following IRP is created in response to a cable disconnect
    //  from the device.  We keep a pointer around in case we need to cancel
    //  it.
    //
    PIRP                        pIrpWaitWake;

    SYSTEM_POWER_STATE          WaitWakeSystemState;

    //
    //  The following is a pointer to a dynamically allocated array
    //  of GUID structs. This is used to map GUIDs to OIDs
    //  for custom GUIDs provided by the miniport.
    //

    LARGE_INTEGER               VcIndex;                //  Index used to identify a VC.
    KSPIN_LOCK                  VcCountLock;            //  Lock used to protect VC instance count.
    LIST_ENTRY                  WmiEnabledVcs;          //  List of WMI enabled VCs
    PNDIS_GUID                  pNdisGuidMap;           // This is a list of all the GUIDs
                                                        //  and OIDs supported including any
                                                        //  customg GUIDs.
    PNDIS_GUID                  pCustomGuidMap;         // This is a pointer into
                                                        //  the pGuidToOidMap to the
                                                        //  first custom GUID.
    USHORT                      VcCount;                //  Number of VC's that have instance names.

    USHORT                      cNdisGuidMap;           // This is the number of std. GUIDs
    USHORT                      cCustomGuidMap;         // This is the number of custom GUIDs

    //
    // These two are used temporarily while allocating the map registers.
    //
    USHORT                      CurrentMapRegister;
    PKEVENT                     AllocationEvent;

    USHORT                      SGMapRegistersNeeded;

    //
    // This timer is used for media disconnect timouts.
    //
    NDIS_TIMER                  MediaDisconnectTimer;

    //
    // The timeout value for media disconnect timer to fire
    // default is 20 seconds
    //
    USHORT                      MediaDisconnectTimeOut;

    //
    // Used for WMI support
    //
    USHORT                      InstanceNumber;

    //
    // this event will be set at the end of adapter initialization
    //
    NDIS_EVENT                  OpenReadyEvent;

    //
    // current PnP state of the device, ex. started, stopped, query_removed, etc.
    //
    NDIS_PNP_DEVICE_STATE       PnPDeviceState;
    
    //
    // previous device state. to be used when we get a cancel_remove or a cancel_stop
    //
    NDIS_PNP_DEVICE_STATE       OldPnPDeviceState;
    
    //
    // Handlers to Write/Read Bus data
    //
    PGET_SET_DEVICE_DATA        SetBusData;
    PGET_SET_DEVICE_DATA        GetBusData;

    KDPC                        DeferredDpc;

    //
    // Some NDIS gathered stats
    //
    NDIS_STATS                  NdisStats;

    //
    // Valid during Packet Indication
    //
    PNDIS_PACKET                IndicatedPacket[MAXIMUM_PROCESSORS];

    //
    // this event is for protecting against returning from REMOVE IRP
    // too early and while we still have pending workitems
    //
    PKEVENT                     RemoveReadyEvent;

    //
    // this event gets signaled when all opens on the miniport are closed
    //
    PKEVENT                     AllOpensClosedEvent;

    //
    // this event gets signaled when all requests on the miniport are gone
    //
    PKEVENT                     AllRequestsCompletedEvent;

    //
    // Init time for the miniport in milliseconds
    //
    ULONG                       InitTimeMs;

    NDIS_MINIPORT_WORK_ITEM     WorkItemBuffer[NUMBER_OF_SINGLE_WORK_ITEMS];

    PDMA_ADAPTER                SystemAdapterObject;
    
    //
    // flags to fail certain NDIS APIs to make sure the driver does the right things
    //
    ULONG                       DriverVerifyFlags;
    
    POID_LIST                   OidList;
    //
    // InternalResetCount:  The # of times NDIS decided a miniport was hung
    // MiniportResetCount   The # of times miniport decided it was hung
    //
    USHORT                      InternalResetCount;
    USHORT                      MiniportResetCount;

    USHORT                      MediaSenseConnectCount;
    USHORT                      MediaSenseDisconnectCount;

    PNDIS_PACKET    *           xPackets;

    //
    // track the user mode requests
    //
    ULONG                       UserModeOpenReferences;

    //
    // Saved handlers. The handlers in the NDIS_OPEN_BLOCK are saved here
    // by ndisMSwapOpenHandlers and restored by ndisMRestoreOpenHandlers.
    //
    union
    {
        PVOID                   SavedSendHandler;
        PVOID                   SavedWanSendHandler;
    };
    PVOID                       SavedSendPacketsHandler;
    PVOID                       SavedCancelSendPacketsHandler;

    //
    // real SendPacketsHandler
    //
    W_SEND_PACKETS_HANDLER      WSendPacketsHandler;                
    
    ULONG                       MiniportAttributes;

    PDMA_ADAPTER                SavedSystemAdapterObject;
    USHORT                      NumOpens;
    //
    // extra check for hang ticks allowed for OID_GEN_MEDIA_CONNECT_STATUS and OID_GEN_LINK_SPEED
    //
    USHORT                      CFHangXTicks; 
    ULONG                       RequestCount;
    ULONG                       IndicatedPacketsCount;
    ULONG                       PhysicalMediumType;
    //
    // last request. needed for debugging purpose
    //
    PNDIS_REQUEST               LastRequest;
#ifndef UNDER_CE
    LONG                        DmaAdapterRefCount;
#endif
    PVOID                       FakeMac;
    ULONG                       LockDbg;
    ULONG                       LockDbgX;
    PVOID                       LockThread;
    ULONG                       InfoFlags;
    KSPIN_LOCK                  TimerQueueLock;
    PKEVENT                     ResetCompletedEvent;
    PKEVENT                     QueuedBindingCompletedEvent;
#ifndef UNDER_CE
    PKEVENT                     DmaResourcesReleasedEvent;
#endif
    FILTER_PACKET_INDICATION_HANDLER SavedPacketIndicateHandler;
    ULONG                       RegisteredInterrupts;

#if DBG
    ULONG                       cDpcSendCompletes;
    ULONG                       cDpcRcvIndications;
    ULONG                       cDpcRcvIndicationCalls;
#endif

#ifdef UNDER_CE
	//
	//	Should the adapter be rebound to protocol drivers on a resume.
	//	E.g. to force DHCP to be run.
	//	0 == no rebind on resume
	//  1 == rebind on resume
	//
	DWORD					bDoAdapterRebindOnResume;

	DWORD					bDoAdapterResetOnResume;

	
	//
	//	The system interrupt number assigned by a bus enumerator and
	//	set in the registry value "SysIntr", or 0xFFFFFFFF if none assigned.
	//
	DWORD					InterruptId;

	DWORD				    dwCEMiniportFlag;

	//
	//	The following is CE specific implementation that allows a protocol
	//	driver to block MEDIA_CONNECT_STATUS from miniport.
	//
	//	dwCEControlledMediaStatus is set to NDIS_STATUS_MEDIA_CONNECT
	//	by the controlling protocol, and reset to NDIS_STATU_MEDIA_DISCONNECT
	//	by the underlying miniport driver.
	//

	DWORD				    dwCEControlledMediaStatus;
    HANDLE                  hPM;
    DWORD                   CEDevicePowerState;

	//
	//	CE specific implementation to keep track of PCMCIA I/O windows that
	//	have been mapped into memory.
	//	Should point to NDIS_PCMCIA_WINDOW structure.
	//

	PVOID				    pNpw;


	//
	//  For CardBus adapter.
	//  From NDIS point of view it is the same as PCI but removeable.
	//

    PVOID                   pvPCIPort;          //  The original address from HalTranslateBusAddress()
	PVOID                   pvPCIPortAlias;     //  The alias.
    DWORD                   dwPciPortAliasSize; //  Alias port size.


    CRITICAL_SECTION        csBindUnbind;       //  to serialize the Bind/Unbind IOCTL requests.
    

#ifdef  NDIS_NO_DPC
    //
    //  This CriticalSection will emulate the old LockAcquired Flag.
    //    The owner of this CS will have exclusive access to the Miniport.
    //
    CRITICAL_SECTION LockCS;
#endif

#endif

#endif // NDIS_WRAPPER defined
};


#ifdef UNDER_CE

//
//	Values for dwCEMiniportFlag
//

#define	MINIPORT_SET_MEDIA_CONNECT_BLOCKED(_M)		\
			(_M)->dwCEMiniportFlag |= fCE_MINIPORT_FLAG_MEDIA_CONNECT_BLOCKED

#define	MINIPORT_CLEAR_MEDIA_CONNECT_BLOCKED(_M)	\
			(_M)->dwCEMiniportFlag &= ~fCE_MINIPORT_FLAG_MEDIA_CONNECT_BLOCKED

#define	MINIPORT_TEST_CE_FLAG(_M, _F)				\
			(((_M)->dwCEMiniportFlag & (_F)) != 0)

#define MINIPORT_SET_CE_FLAG(_M, _F)				\
			((_M)->dwCEMiniportFlag |= (_F))

#define MINIPORT_CLEAR_CE_FLAG(_M, _F)				\
			((_M)->dwCEMiniportFlag &= ~(_F))


#define	fCE_MINIPORT_FLAG_RESET_FROM_RESUME		            0x00000001
#define fCE_MINIPORT_FLAG_PM                                0x00000002
#define fCE_MINIPORT_FLAG_REG_DISABLE_PM                    0x00000004
#define fCE_MINIPORT_FLAG_PCMCIA_SUPPORTS_KEEP_POWERED      0x00000008
#define fCE_MINIPORT_FLAG_PCMCIA_CARD_REMOVED               0x00000010
#define	fCE_MINIPORT_FLAG_MEDIA_CONNECT_BLOCKED	            0x80000000



#endif

//
//  Routines for intermediate miniport drivers.
//
typedef
VOID
(*W_MINIPORT_CALLBACK)(
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  PVOID                   CallbackContext
    );

EXPORT
NDIS_STATUS
NdisIMRegisterLayeredMiniport(
    IN  NDIS_HANDLE             NdisWrapperHandle,
    IN  PNDIS_MINIPORT_CHARACTERISTICS MiniportCharacteristics,
    IN  UINT                    CharacteristicsLength,
    OUT PNDIS_HANDLE            DriverHandle
    );

EXPORT
VOID
NdisIMDeregisterLayeredMiniport(
    IN  NDIS_HANDLE         DriverHandle
    );

EXPORT
VOID
NdisIMAssociateMiniport(
    IN  NDIS_HANDLE         DriverHandle,
    IN  NDIS_HANDLE         ProtocolHandle
    );

//
// These 3 functions are now obsolete. Use Deserialized driver model for optimal performance.
//
EXPORT
BOOLEAN
NdisIMSwitchToMiniport(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    OUT PNDIS_HANDLE            SwitchHandle
    );

EXPORT
VOID
NdisIMRevertBack(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  NDIS_HANDLE             SwitchHandle
    );

EXPORT
NDIS_STATUS
NdisIMQueueMiniportCallback(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  W_MINIPORT_CALLBACK     CallbackRoutine,
    IN  PVOID                   CallbackContext
    );

EXPORT
NDIS_STATUS
NdisMRegisterDevice(
    IN  NDIS_HANDLE             NdisWrapperHandle,
    IN  PNDIS_STRING            DeviceName,
    IN  PNDIS_STRING            SymbolicName,
    IN  PDRIVER_DISPATCH        MajorFunctions[],
    OUT PDEVICE_OBJECT      *   pDeviceObject,
    OUT NDIS_HANDLE         *   NdisDeviceHandle
    );

EXPORT
NDIS_STATUS
NdisMDeregisterDevice(
    IN  NDIS_HANDLE             NdisDeviceHandle
    );

EXPORT
VOID
NdisMRegisterUnloadHandler(
    IN  NDIS_HANDLE             NdisWrapperHandle,
    IN  PDRIVER_UNLOAD          UnloadHandler
    );

//
// Operating System Requests
//
typedef UCHAR   NDIS_DMA_SIZE;

#define NDIS_DMA_24BITS             ((NDIS_DMA_SIZE)0)
#define NDIS_DMA_32BITS             ((NDIS_DMA_SIZE)1)
#define NDIS_DMA_64BITS             ((NDIS_DMA_SIZE)2)

EXPORT
NDIS_STATUS
NdisMAllocateMapRegisters(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  UINT                    DmaChannel,
    IN  NDIS_DMA_SIZE           DmaSize,
    IN  ULONG                   PhysicalMapRegistersNeeded,
    IN  ULONG                   MaximumPhysicalMapping
    );

EXPORT
VOID
NdisMFreeMapRegisters(
    IN  NDIS_HANDLE             MiniportAdapterHandle
    );

EXPORT
NDIS_STATUS
NdisMInitializeScatterGatherDma(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  BOOLEAN                 Dma64BitAddresses,
    IN  ULONG                   MaximumPhysicalMapping
    );

EXPORT
NDIS_STATUS
NdisMRegisterIoPortRange(
    OUT PVOID *                 PortOffset,
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  UINT                    InitialPort,
    IN  UINT                    NumberOfPorts
    );

EXPORT
VOID
NdisMDeregisterIoPortRange(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  UINT                    InitialPort,
    IN  UINT                    NumberOfPorts,
    IN  PVOID                   PortOffset
    );

EXPORT
NDIS_STATUS
NdisMMapIoSpace(
    OUT PVOID *                 VirtualAddress,
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  NDIS_PHYSICAL_ADDRESS   PhysicalAddress,
    IN  UINT                    Length
    );

EXPORT
VOID
NdisMUnmapIoSpace(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  PVOID                   VirtualAddress,
    IN  UINT                    Length
    );

EXPORT
NDIS_STATUS
NdisMRegisterInterrupt(
    OUT PNDIS_MINIPORT_INTERRUPT Interrupt,
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  UINT                    InterruptVector,
    IN  UINT                    InterruptLevel,
    IN  BOOLEAN                 RequestIsr,
    IN  BOOLEAN                 SharedInterrupt,
    IN  NDIS_INTERRUPT_MODE     InterruptMode
    );

EXPORT
VOID
NdisMDeregisterInterrupt(
    IN  PNDIS_MINIPORT_INTERRUPT Interrupt
    );

EXPORT
BOOLEAN
NdisMSynchronizeWithInterrupt(
    IN  PNDIS_MINIPORT_INTERRUPT Interrupt,
    IN  PVOID                   SynchronizeFunction,
    IN  PVOID                   SynchronizeContext
    );


EXPORT
VOID
NdisMQueryAdapterResources(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             WrapperConfigurationContext,
    OUT PNDIS_RESOURCE_LIST     ResourceList,
    IN  OUT PUINT               BufferSize
    );

//
// Timers
//
// VOID
// NdisMSetTimer(
//  IN  PNDIS_MINIPORT_TIMER    Timer,
//  IN  UINT                    MillisecondsToDelay
//  );
#define NdisMSetTimer(_Timer, _Delay)   NdisSetTimer((PNDIS_TIMER)_Timer, _Delay)

EXPORT
VOID
NdisMSetPeriodicTimer(
    IN  PNDIS_MINIPORT_TIMER     Timer,
    IN  UINT                     MillisecondPeriod
    );

EXPORT
VOID
NdisMInitializeTimer(
    IN  OUT PNDIS_MINIPORT_TIMER Timer,
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  PNDIS_TIMER_FUNCTION    TimerFunction,
    IN  PVOID                   FunctionContext
    );

EXPORT
VOID
NdisMCancelTimer(
    IN  PNDIS_MINIPORT_TIMER    Timer,
    OUT PBOOLEAN                TimerCancelled
    );

EXPORT
VOID
NdisMSleep(
    IN  ULONG                   MicrosecondsToSleep
    );

//
// Physical Mapping
//
EXPORT
VOID
NdisMStartBufferPhysicalMapping(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  PNDIS_BUFFER            Buffer,
    IN  ULONG                   PhysicalMapRegister,
    IN  BOOLEAN                 WriteToDevice,
    OUT PNDIS_PHYSICAL_ADDRESS_UNIT PhysicalAddressArray,
    OUT PUINT                   ArraySize
    );

EXPORT
VOID
NdisMCompleteBufferPhysicalMapping(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  PNDIS_BUFFER            Buffer,
    IN  ULONG                   PhysicalMapRegister
    );

//
// Shared memory
//
EXPORT
VOID
NdisMAllocateSharedMemory(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  ULONG                   Length,
    IN  BOOLEAN                 Cached,
    OUT PVOID *                 VirtualAddress,
    OUT PNDIS_PHYSICAL_ADDRESS  PhysicalAddress
    );

EXPORT
NDIS_STATUS
NdisMAllocateSharedMemoryAsync(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  ULONG                   Length,
    IN  BOOLEAN                 Cached,
    IN  PVOID                   Context
    );

/*++
VOID
NdisMUpdateSharedMemory(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  ULONG                   Length,
    IN  PVOID                   VirtualAddress,
    IN  NDIS_PHYSICAL_ADDRESS   PhysicalAddress
    )
--*/
#define NdisMUpdateSharedMemory(_H, _L, _V, _P) NdisUpdateSharedMemory(_H, _L, _V, _P)


EXPORT
VOID
NdisMFreeSharedMemory(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  ULONG                   Length,
    IN  BOOLEAN                 Cached,
    IN  PVOID                   VirtualAddress,
    IN  NDIS_PHYSICAL_ADDRESS   PhysicalAddress
    );

#ifndef NODMA
//
// DMA operations.
//
EXPORT
NDIS_STATUS
NdisMRegisterDmaChannel(
    OUT PNDIS_HANDLE            MiniportDmaHandle,
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  UINT                    DmaChannel,
    IN  BOOLEAN                 Dma32BitAddresses,
    IN  PNDIS_DMA_DESCRIPTION   DmaDescription,
    IN  ULONG                   MaximumLength
    );


EXPORT
VOID
NdisMDeregisterDmaChannel(
    IN  NDIS_HANDLE             MiniportDmaHandle
    );

/*++
VOID
NdisMSetupDmaTransfer(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             MiniportDmaHandle,
    IN  PNDIS_BUFFER            Buffer,
    IN  ULONG                   Offset,
    IN  ULONG                   Length,
    IN  BOOLEAN                 WriteToDevice
    )
--*/
#define NdisMSetupDmaTransfer(_S, _H, _B, _O, _L, _M_) \
        NdisSetupDmaTransfer(_S, _H, _B, _O, _L, _M_)

/*++
VOID
NdisMCompleteDmaTransfer(
    OUT PNDIS_STATUS            Status,
    IN  NDIS_HANDLE             MiniportDmaHandle,
    IN  PNDIS_BUFFER            Buffer,
    IN  ULONG                   Offset,
    IN  ULONG                   Length,
    IN  BOOLEAN                 WriteToDevice
    )
--*/
#define NdisMCompleteDmaTransfer(_S, _H, _B, _O, _L, _M_) \
        NdisCompleteDmaTransfer(_S, _H, _B, _O, _L, _M_)

EXPORT
ULONG
NdisMReadDmaCounter(
    IN  NDIS_HANDLE             MiniportDmaHandle
    );
#endif // NODMA

//
// Requests Used by Miniport Drivers
//
#define NdisMInitializeWrapper(_a,_b,_c,_d) NdisInitializeWrapper((_a),(_b),(_c),(_d))

EXPORT
NDIS_STATUS
NdisMRegisterMiniport(
    IN  NDIS_HANDLE             NdisWrapperHandle,
    IN  PNDIS_MINIPORT_CHARACTERISTICS MiniportCharacteristics,
    IN  UINT                    CharacteristicsLength
    );

// EXPORT
// NDIS_STATUS
// NdisIMInitializeDeviceInstance(
//  IN  NDIS_HANDLE             DriverHandle,
//  IN  PNDIS_STRING            DriverInstance
//  );
#define NdisIMInitializeDeviceInstance(_H_, _I_)    \
                                NdisIMInitializeDeviceInstanceEx(_H_, _I_, NULL)

EXPORT
NDIS_STATUS
NdisIMInitializeDeviceInstanceEx(
    IN  NDIS_HANDLE             DriverHandle,
    IN  PNDIS_STRING            DriverInstance,
    IN  NDIS_HANDLE             DeviceContext   OPTIONAL
    );

EXPORT
NDIS_STATUS
NdisIMCancelInitializeDeviceInstance(
    IN  NDIS_HANDLE             DriverHandle,
    IN  PNDIS_STRING            DeviceInstance
    );

EXPORT
NDIS_HANDLE
NdisIMGetDeviceContext(
    IN  NDIS_HANDLE             MiniportAdapterHandle
    );

EXPORT
NDIS_HANDLE
NdisIMGetBindingContext(
    IN  NDIS_HANDLE             NdisBindingHandle
    );

EXPORT
NDIS_STATUS
NdisIMDeInitializeDeviceInstance(
    IN  NDIS_HANDLE             NdisMiniportHandle
    );

EXPORT
VOID
NdisIMCopySendPerPacketInfo(
    OUT PNDIS_PACKET            DstPacket,
    IN  PNDIS_PACKET            SrcPacket
    );

EXPORT
VOID
NdisIMCopySendCompletePerPacketInfo(
    OUT PNDIS_PACKET            DstPacket, 
    IN  PNDIS_PACKET            SrcPacket
    );             

// EXPORT
// VOID
// NdisMSetAttributes(
//  IN  NDIS_HANDLE             MiniportAdapterHandle,
//  IN  NDIS_HANDLE             MiniportAdapterContext,
//  IN  BOOLEAN                 BusMaster,
//  IN  NDIS_INTERFACE_TYPE     AdapterType
//  );
#define NdisMSetAttributes(_H_, _C_, _M_, _T_)                                      \
                        NdisMSetAttributesEx(_H_,                                   \
                                             _C_,                                   \
                                             0,                                     \
                                             (_M_) ? NDIS_ATTRIBUTE_BUS_MASTER : 0, \
                                             _T_)                                   \


EXPORT
VOID
NdisMSetAttributesEx(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  NDIS_HANDLE             MiniportAdapterContext,
    IN  UINT                    CheckForHangTimeInSeconds OPTIONAL,
    IN  ULONG                   AttributeFlags,
    IN  NDIS_INTERFACE_TYPE     AdapterType OPTIONAL
    );

#define NDIS_ATTRIBUTE_IGNORE_PACKET_TIMEOUT        0x00000001
#define NDIS_ATTRIBUTE_IGNORE_REQUEST_TIMEOUT       0x00000002
#define NDIS_ATTRIBUTE_IGNORE_TOKEN_RING_ERRORS     0x00000004
#define NDIS_ATTRIBUTE_BUS_MASTER                   0x00000008
#define NDIS_ATTRIBUTE_INTERMEDIATE_DRIVER          0x00000010
#define NDIS_ATTRIBUTE_DESERIALIZE                  0x00000020
#define NDIS_ATTRIBUTE_NO_HALT_ON_SUSPEND           0x00000040
#define NDIS_ATTRIBUTE_SURPRISE_REMOVE_OK           0x00000080
#define NDIS_ATTRIBUTE_NOT_CO_NDIS                  0x00000100
#define NDIS_ATTRIBUTE_USES_SAFE_BUFFER_APIS        0x00000200

// This attribute flag can be set if the Miniport never sets the
// packet status to NDIS_STATUS_RESOURCES prior to calling NdisMIndicateReceivePacket.
#define NDIS_ATTRIBUTE_ALWAYS_GIVES_RX_PACKET_OWNERSHIP 0x00000400


EXPORT
NDIS_STATUS
NdisMSetMiniportSecondary(
    IN  NDIS_HANDLE             MiniportHandle,
    IN  NDIS_HANDLE             PrimaryMiniportHandle
    );

EXPORT
NDIS_STATUS
NdisMPromoteMiniport(
    IN  NDIS_HANDLE             MiniportHandle
    );

EXPORT
NDIS_STATUS
NdisMRemoveMiniport(
    IN  NDIS_HANDLE             MiniportHandle
    );

#define NdisMSendComplete(_M, _P, _S)   (*((PNDIS_MINIPORT_BLOCK)(_M))->SendCompleteHandler)(_M, _P, _S)

#define NdisMSendResourcesAvailable(_M) (*((PNDIS_MINIPORT_BLOCK)(_M))->SendResourcesHandler)(_M)

#define NdisMResetComplete(_M, _S, _A)  (*((PNDIS_MINIPORT_BLOCK)(_M))->ResetCompleteHandler)(_M, _S, _A)

#define NdisMTransferDataComplete(_M, _P, _S, _B)   \
                                        (*((PNDIS_MINIPORT_BLOCK)(_M))->TDCompleteHandler)(_M, _P, _S, _B)

/*++

VOID
NdisMWanSendComplete(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  PVOID                   Packet,
    IN  NDIS_STATUS             Status
    );

--*/

#define NdisMWanSendComplete(_M_, _P_, _S_)                                             \
                (*((PNDIS_MINIPORT_BLOCK)(_M_))->WanSendCompleteHandler)(_M_, _P_, _S_)

#define NdisMQueryInformationComplete(_M, _S)   \
                                        (*((PNDIS_MINIPORT_BLOCK)(_M))->QueryCompleteHandler)(_M, _S)

#define NdisMSetInformationComplete(_M, _S) \
                                        (*((PNDIS_MINIPORT_BLOCK)(_M))->SetCompleteHandler)(_M, _S)

/*++

VOID
NdisMIndicateReceivePacket(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  PPNDIS_PACKET           ReceivedPackets,
    IN  UINT                    NumberOfPackets
    );

--*/
#define NdisMIndicateReceivePacket(_H, _P, _N)                                  \
{                                                                               \
    (*((PNDIS_MINIPORT_BLOCK)(_H))->PacketIndicateHandler)(                     \
                        _H,                                                     \
                        _P,                                                     \
                        _N);                                                    \
}

/*++

VOID
NdisMWanIndicateReceive(
    OUT PNDIS_STATUS            Status,
    IN NDIS_HANDLE              MiniportAdapterHandle,
    IN NDIS_HANDLE              NdisLinkContext,
    IN PUCHAR                   Packet,
    IN ULONG                    PacketSize
    );

--*/

#define NdisMWanIndicateReceive(_S_, _M_, _C_, _P_, _Z_)                        \
                (*((PNDIS_MINIPORT_BLOCK)(_M_))->WanRcvHandler)(_S_, _M_, _C_, _P_, _Z_)

/*++

VOID
NdisMWanIndicateReceiveComplete(
    IN NDIS_HANDLE              MiniportAdapterHandle,
    IN NDIS_HANDLE              NdisLinkContext
    );

--*/

#define NdisMWanIndicateReceiveComplete(_M_, _C_)                                   \
                (*((PNDIS_MINIPORT_BLOCK)(_M_))->WanRcvCompleteHandler)(_M_, _C_)



/*++

VOID
NdisMEthIndicateReceive(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  NDIS_HANDLE             MiniportReceiveContext,
    IN  PVOID                   HeaderBuffer,
    IN  UINT                    HeaderBufferSize,
    IN  PVOID                   LookaheadBuffer,
    IN  UINT                    LookaheadBufferSize,
    IN  UINT                    PacketSize
    )

--*/

#ifdef __cplusplus

#define NdisMEthIndicateReceive( _H, _C, _B, _SZ, _L, _LSZ, _PSZ)               \
{                                                                               \
    (*((PNDIS_MINIPORT_BLOCK)(_H))->EthRxIndicateHandler)(                      \
        (((PNDIS_MINIPORT_BLOCK)(_H))->FilterDbs).EthDB,                          \
        _C,                                                                     \
        _B,                                                                     \
        _B,                                                                     \
        _SZ,                                                                    \
        _L,                                                                     \
        _LSZ,                                                                   \
        _PSZ                                                                    \
        );                                                                      \
}

#else

#define NdisMEthIndicateReceive( _H, _C, _B, _SZ, _L, _LSZ, _PSZ)               \
{                                                                               \
    (*((PNDIS_MINIPORT_BLOCK)(_H))->EthRxIndicateHandler)(                      \
        ((PNDIS_MINIPORT_BLOCK)(_H))->EthDB,                                    \
        _C,                                                                     \
        _B,                                                                     \
        _B,                                                                     \
        _SZ,                                                                    \
        _L,                                                                     \
        _LSZ,                                                                   \
        _PSZ                                                                    \
        );                                                                      \
}

#endif  // __cplusplus


/*++

VOID
NdisMTrIndicateReceive(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  NDIS_HANDLE             MiniportReceiveContext,
    IN  PVOID                   HeaderBuffer,
    IN  UINT                    HeaderBufferSize,
    IN  PVOID                   LookaheadBuffer,
    IN  UINT                    LookaheadBufferSize,
    IN  UINT                    PacketSize
    )

--*/

#ifdef __cplusplus

#define NdisMTrIndicateReceive( _H, _C, _B, _SZ, _L, _LSZ, _PSZ)                \
{                                                                               \
    (*((PNDIS_MINIPORT_BLOCK)(_H))->TrRxIndicateHandler)(                       \
        (((PNDIS_MINIPORT_BLOCK)(_H))->FilterDbs).TrDB,                                     \
        _C,                                                                     \
        _B,                                                                     \
        _SZ,                                                                    \
        _L,                                                                     \
        _LSZ,                                                                   \
        _PSZ                                                                    \
        );                                                                      \
}

#else

#define NdisMTrIndicateReceive( _H, _C, _B, _SZ, _L, _LSZ, _PSZ)                \
{                                                                               \
    (*((PNDIS_MINIPORT_BLOCK)(_H))->TrRxIndicateHandler)(                       \
        ((PNDIS_MINIPORT_BLOCK)(_H))->TrDB,                                     \
        _C,                                                                     \
        _B,                                                                     \
        _SZ,                                                                    \
        _L,                                                                     \
        _LSZ,                                                                   \
        _PSZ                                                                    \
        );                                                                      \
}

#endif  // __cplusplus


/*++

VOID
NdisMFddiIndicateReceive(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  NDIS_HANDLE             MiniportReceiveContext,
    IN  PVOID                   HeaderBuffer,
    IN  UINT                    HeaderBufferSize,
    IN  PVOID                   LookaheadBuffer,
    IN  UINT                    LookaheadBufferSize,
    IN  UINT                    PacketSize
    )

--*/

#ifdef __cplusplus

#define NdisMFddiIndicateReceive( _H, _C, _B, _SZ, _L, _LSZ, _PSZ)              \
{                                                                               \
    (*((PNDIS_MINIPORT_BLOCK)(_H))->FddiRxIndicateHandler)(                     \
            (PFDDI_FILTER)((((PNDIS_MINIPORT_BLOCK)(_H))->FilterDbs).FddiDB),                               \
            _C,                                                                 \
            (PCHAR)((PUCHAR)_B + 1),                                                     \
            ((((PUCHAR)_B)[0] & 0x40) ? FDDI_LENGTH_OF_LONG_ADDRESS             \
                            : FDDI_LENGTH_OF_SHORT_ADDRESS),                    \
            _B,                                                                 \
            _SZ,                                                                \
            _L,                                                                 \
            _LSZ,                                                               \
            _PSZ                                                                \
    );                                                                          \
}

#else

#define NdisMFddiIndicateReceive( _H, _C, _B, _SZ, _L, _LSZ, _PSZ)              \
{                                                                               \
    (*((PNDIS_MINIPORT_BLOCK)(_H))->FddiRxIndicateHandler)(                     \
            ((PNDIS_MINIPORT_BLOCK)(_H))->FddiDB,                               \
            _C,                                                                 \
            (PUCHAR)_B + 1,                                                     \
            ((((PUCHAR)_B)[0] & 0x40) ? FDDI_LENGTH_OF_LONG_ADDRESS             \
                            : FDDI_LENGTH_OF_SHORT_ADDRESS),                    \
            _B,                                                                 \
            _SZ,                                                                \
            _L,                                                                 \
            _LSZ,                                                               \
            _PSZ                                                                \
    );                                                                          \
}

#endif  // __cplusplus


/*++

VOID
NdisMArcIndicateReceive(
    IN  NDIS_HANDLE             MiniportHandle,
    IN  PUCHAR                  pRawHeader,     // Pointer to Arcnet frame header
    IN  PUCHAR                  pData,          // Pointer to data portion of Arcnet frame
    IN  UINT                    Length          // Data Length
    )

--*/
#define NdisMArcIndicateReceive( _H, _HD, _D, _SZ)                              \
{                                                                               \
    ArcFilterDprIndicateReceive(((PNDIS_MINIPORT_BLOCK)(_H))->ArcDB,            \
                                _HD,                                            \
                                _D,                                             \
                                _SZ                                             \
                                );                                              \
}


/*++

VOID
NdisMEthIndicateReceiveComplete(
    IN  NDIS_HANDLE             MiniportHandle
    );

--*/

#ifdef __cplusplus

#define NdisMEthIndicateReceiveComplete( _H )                                   \
{                                                                               \
    (*((PNDIS_MINIPORT_BLOCK)(_H))->EthRxCompleteHandler)(                      \
                              ((PNDIS_MINIPORT_BLOCK)_H)->FilterDbs.EthDB);     \
}

#else

#define NdisMEthIndicateReceiveComplete( _H )                                   \
{                                                                               \
    (*((PNDIS_MINIPORT_BLOCK)(_H))->EthRxCompleteHandler)(                      \
                                        ((PNDIS_MINIPORT_BLOCK)_H)->EthDB);     \
}

#endif  // __cplusplus

/*++

VOID
NdisMTrIndicateReceiveComplete(
    IN  NDIS_HANDLE             MiniportHandle
    );

--*/

#ifdef __cplusplus

#define NdisMTrIndicateReceiveComplete( _H )                                    \
{                                                                               \
    (*((PNDIS_MINIPORT_BLOCK)(_H))->TrRxCompleteHandler)(                       \
                                        (((PNDIS_MINIPORT_BLOCK)(_H))->FilterDbs).TrDB);      \
}

#else

#define NdisMTrIndicateReceiveComplete( _H )                                    \
{                                                                               \
    (*((PNDIS_MINIPORT_BLOCK)(_H))->TrRxCompleteHandler)(                       \
                                        ((PNDIS_MINIPORT_BLOCK)_H)->TrDB);      \
}

#endif  // __cplusplus


/*++

VOID
NdisMFddiIndicateReceiveComplete(
    IN  NDIS_HANDLE             MiniportHandle
    );

--*/

#ifdef __cplusplus

#define NdisMFddiIndicateReceiveComplete( _H )                                  \
{                                                                               \
    (*((PNDIS_MINIPORT_BLOCK)(_H))->FddiRxCompleteHandler)(                     \
                                        (PFDDI_FILTER)((((PNDIS_MINIPORT_BLOCK)(_H))->FilterDbs).FddiDB));    \
}

#else

#define NdisMFddiIndicateReceiveComplete( _H )                                  \
{                                                                               \
    (*((PNDIS_MINIPORT_BLOCK)(_H))->FddiRxCompleteHandler)(                     \
                                        ((PNDIS_MINIPORT_BLOCK)_H)->FddiDB);    \
}

#endif  // __cplusplus


/*++

VOID
NdisMArcIndicateReceiveComplete(
    IN  NDIS_HANDLE             MiniportHandle
    );

--*/

#define NdisMArcIndicateReceiveComplete( _H )                                   \
{                                                                               \
    if (((PNDIS_MINIPORT_BLOCK)_H)->EthDB)                                      \
    {                                                                           \
        NdisMEthIndicateReceiveComplete(_H);                                    \
    }                                                                           \
                                                                                \
    ArcFilterDprIndicateReceiveComplete(((PNDIS_MINIPORT_BLOCK)_H)->ArcDB);     \
}

/*++

EXPORT
VOID
NdisMIndicateStatus(
    IN  NDIS_HANDLE             MiniportHandle,
    IN  NDIS_STATUS             GeneralStatus,
    IN  PVOID                   StatusBuffer,
    IN  UINT                    StatusBufferSize
    );
--*/

#define NdisMIndicateStatus(_M, _G, _SB, _BS)   (*((PNDIS_MINIPORT_BLOCK)(_M))->StatusHandler)(_M, _G, _SB, _BS)

/*++

EXPORT
VOID
NdisMIndicateStatusComplete(
    IN  NDIS_HANDLE             MiniportHandle
    );

--*/

#define NdisMIndicateStatusComplete(_M) (*((PNDIS_MINIPORT_BLOCK)(_M))->StatusCompleteHandler)(_M)

EXPORT
VOID
NdisMRegisterAdapterShutdownHandler(
    IN  NDIS_HANDLE             MiniportHandle,
    IN  PVOID                   ShutdownContext,
    IN  ADAPTER_SHUTDOWN_HANDLER ShutdownHandler
    );

EXPORT
VOID
NdisMDeregisterAdapterShutdownHandler(
    IN  NDIS_HANDLE             MiniportHandle
    );

EXPORT
NDIS_STATUS
NdisMPciAssignResources(
    IN  NDIS_HANDLE             MiniportHandle,
    IN  ULONG                   SlotNumber,
    IN  PNDIS_RESOURCE_LIST *   AssignedResources
    );

#ifdef NDIS51_MINIPORT

EXPORT
NDIS_STATUS
NdisMNotifyPnPEvent(
    IN  NDIS_HANDLE             MiniportHandle,
    IN  PNET_PNP_EVENT          NetPnPEvent
    );
    
EXPORT
NDIS_STATUS
NdisIMNotifyPnPEvent(
    IN  NDIS_HANDLE             MiniportHandle,
    IN  PNET_PNP_EVENT          NetPnPEvent
    );

#endif

//
// Logging support for miniports
//

EXPORT
NDIS_STATUS
NdisMCreateLog(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  UINT                    Size,
    OUT PNDIS_HANDLE            LogHandle
    );

EXPORT
VOID
NdisMCloseLog(
    IN  NDIS_HANDLE             LogHandle
    );

EXPORT
NDIS_STATUS
NdisMWriteLogData(
    IN  NDIS_HANDLE             LogHandle,
    IN  PVOID                   LogBuffer,
    IN  UINT                    LogBufferSize
    );

EXPORT
VOID
NdisMFlushLog(
    IN  NDIS_HANDLE             LogHandle
    );

EXPORT
VOID
NdisMGetDeviceProperty(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN OUT PDEVICE_OBJECT *     PhysicalDeviceObject        OPTIONAL,
    IN OUT PDEVICE_OBJECT *     FunctionalDeviceObject      OPTIONAL,
    IN OUT PDEVICE_OBJECT *     NextDeviceObject            OPTIONAL,
    IN OUT PCM_RESOURCE_LIST *  AllocatedResources          OPTIONAL,
    IN OUT PCM_RESOURCE_LIST *  AllocatedResourcesTranslated OPTIONAL
    );

//
//  Get a pointer to the adapter's localized instance name.
//
EXPORT
NDIS_STATUS
NdisMQueryAdapterInstanceName(
    OUT PNDIS_STRING            pAdapterInstanceName,
    IN  NDIS_HANDLE             MiniportHandle
    );

//
// NDIS 5.0 extensions for miniports
//

EXPORT
VOID
NdisMCoIndicateReceivePacket(
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  PPNDIS_PACKET           PacketArray,
    IN  UINT                    NumberOfPackets
    );

EXPORT
VOID
NdisMCoIndicateStatus(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  NDIS_HANDLE             NdisVcHandle    OPTIONAL,
    IN  NDIS_STATUS             GeneralStatus,
    IN  PVOID                   StatusBuffer    OPTIONAL,
    IN  ULONG                   StatusBufferSize
    );

EXPORT
VOID
NdisMCoReceiveComplete(
    IN  NDIS_HANDLE             MiniportAdapterHandle
    );

EXPORT
VOID
NdisMCoSendComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  PNDIS_PACKET            Packet
    );

EXPORT
VOID
NdisMCoActivateVcComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );

EXPORT
VOID
NdisMCoDeactivateVcComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             NdisVcHandle
    );

EXPORT
VOID
NdisMCoRequestComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  PNDIS_REQUEST           Request
    );

EXPORT
NDIS_STATUS
NdisMCmRegisterAddressFamily(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  PCO_ADDRESS_FAMILY      AddressFamily,
    IN  PNDIS_CALL_MANAGER_CHARACTERISTICS CmCharacteristics,
    IN  UINT                    SizeOfCmCharacteristics
    );

EXPORT
NDIS_STATUS
NdisMCmCreateVc(
    IN  NDIS_HANDLE             MiniportAdapterHandle,
    IN  NDIS_HANDLE             NdisAfHandle,
    IN  NDIS_HANDLE             MiniportVcContext,
    OUT PNDIS_HANDLE            NdisVcHandle
    );

EXPORT
NDIS_STATUS
NdisMCmDeleteVc(
    IN  NDIS_HANDLE             NdisVcHandle
    );


EXPORT
NDIS_STATUS
NdisMCmActivateVc(
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );

EXPORT
NDIS_STATUS
NdisMCmDeactivateVc(
    IN  NDIS_HANDLE             NdisVcHandle
    );


EXPORT
NDIS_STATUS
NdisMCmRequest(
    IN  NDIS_HANDLE             NdisAfHandle,
    IN  NDIS_HANDLE             NdisVcHandle    OPTIONAL,
    IN  NDIS_HANDLE             NdisPartyHandle OPTIONAL,
    IN OUT PNDIS_REQUEST        NdisRequest
    );

// EXPORT
// VOID
// NdisMCmRequestComplete(
//  IN  NDIS_STATUS             Status,
//  IN  NDIS_HANDLE             NdisAfHandle,
//  IN  NDIS_HANDLE             NdisVcHandle    OPTIONAL,
//  IN  NDIS_HANDLE             NdisPartyHandle OPTIONAL,
//  IN  PNDIS_REQUEST           NdisRequest
//  );
#define NdisMCmRequestComplete(_S_, _AH_, _VH_, _PH_, _R_) \
                                        NdisCoRequestComplete(_S_, _AH_, _VH_, _PH_, _R_)

// EXPORT
// VOID
// NdisMCmOpenAddressFamilyComplete(
//  IN  NDIS_STATUS             Status,
//  IN  NDIS_HANDLE             NdisAfHandle,
//  IN  NDIS_HANDLE             CallMgrAfContext
//  );

#define NdisMCmOpenAddressFamilyComplete(_S_, _H_, _C_) \
                                        NdisCmOpenAddressFamilyComplete(_S_, _H_, _C_)


// EXPORT
// VOID
// NdisMCmCloseAddressFamilyComplete(
//  IN  NDIS_STATUS             Status,
//  IN  NDIS_HANDLE             NdisAfHandle
//  );

#define NdisMCmCloseAddressFamilyComplete(_S_, _H_)     \
                                        NdisCmCloseAddressFamilyComplete(_S_, _H_)



// EXPORT
// VOID
// NdisMCmRegisterSapComplete(
//  IN  NDIS_STATUS             Status,
//  IN  NDIS_HANDLE             NdisSapHandle,
//  IN  NDIS_HANDLE             CallMgrSapContext
//  );

#define NdisMCmRegisterSapComplete(_S_, _H_, _C_)       \
                                        NdisCmRegisterSapComplete(_S_, _H_, _C_)


// EXPORT
// VOID
// NdisMCmDeregisterSapComplete(
//  IN  NDIS_STATUS             Status,
//  IN  NDIS_HANDLE             NdisSapHandle
//  );

#define NdisMCmDeregisterSapComplete(_S_, _H_)          \
                                        NdisCmDeregisterSapComplete(_S_, _H_)


// EXPORT
// VOID
// NdisMCmMakeCallComplete(
//  IN  NDIS_STATUS             Status,
//  IN  NDIS_HANDLE             NdisVcHandle,
//  IN  NDIS_HANDLE             NdisPartyHandle     OPTIONAL,
//  IN  NDIS_HANDLE             CallMgrPartyContext OPTIONAL,
//  IN  PCO_CALL_PARAMETERS     CallParameters
//  );

#define NdisMCmMakeCallComplete(_S_, _VH_, _PH_, _CC_, _CP_)    \
                                        NdisCmMakeCallComplete(_S_, _VH_, _PH_, _CC_, _CP_)


// EXPORT
// VOID
// NdisMCmCloseCallComplete(
//  IN  NDIS_STATUS             Status,
//  IN  NDIS_HANDLE             NdisVcHandle,
//  IN  NDIS_HANDLE             NdisPartyHandle OPTIONAL
//  );

#define NdisMCmCloseCallComplete(_S_, _VH_, _PH_)       \
                                        NdisCmCloseCallComplete(_S_, _VH_, _PH_)


// EXPORT
// VOID
// NdisMCmAddPartyComplete(
//  IN  NDIS_STATUS             Status,
//  IN  NDIS_HANDLE             NdisPartyHandle,
//  IN  NDIS_HANDLE             CallMgrPartyContext OPTIONAL,
//  IN  PCO_CALL_PARAMETERS     CallParameters
//  );

#define NdisMCmAddPartyComplete(_S_, _H_, _C_, _P_)     \
                                        NdisCmAddPartyComplete(_S_, _H_, _C_, _P_)


// EXPORT
// VOID
// NdisMCmDropPartyComplete(
//  IN  NDIS_STATUS             Status,
//  IN  NDIS_HANDLE             NdisPartyHandle
//  );

#define NdisMCmDropPartyComplete(_S_, _H_)              \
                                        NdisCmDropPartyComplete(_S_, _H_)


// EXPORT
// NDIS_STATUS
// NdisMCmDispatchIncomingCall(
//  IN  NDIS_HANDLE             NdisSapHandle,
//  IN  NDIS_HANDLE             NdisVcHandle,
//  IN  PCO_CALL_PARAMETERS     CallParameters
//  );

#define NdisMCmDispatchIncomingCall(_SH_, _VH_, _CP_)   \
                                        NdisCmDispatchIncomingCall(_SH_, _VH_, _CP_)


// EXPORT
// VOID
// NdisMCmDispatchCallConnected(
//  IN  NDIS_HANDLE             NdisVcHandle
//  );

#define NdisMCmDispatchCallConnected(_H_)               \
                                        NdisCmDispatchCallConnected(_H_)


// EXPORT
// NdisMCmModifyCallQoSComplete(
//  IN  NDIS_STATUS             Status,
//  IN  NDIS_HANDLE             NdisVcHandle,
//  IN  PCO_CALL_PARAMETERS     CallParameters
//  );

#define NdisMCmModifyCallQoSComplete(_S_, _H_, _P_)     \
                                        NdisCmModifyCallQoSComplete(_S_, _H_, _P_)


// EXPORT
// VOID
// VOID
// NdisMCmDispatchIncomingCallQoSChange(
//  IN  NDIS_HANDLE             NdisVcHandle,
//  IN  PCO_CALL_PARAMETERS     CallParameters
//  );

#define NdisMCmDispatchIncomingCallQoSChange(_H_, _P_)  \
                                        NdisCmDispatchIncomingCallQoSChange(_H_, _P_)


// EXPORT
// VOID
// NdisMCmDispatchIncomingCloseCall(
//   IN  NDIS_STATUS             CloseStatus,
//   IN  NDIS_HANDLE             NdisVcHandle,
//   IN  PVOID                   Buffer         OPTIONAL,
//   IN  UINT                    Size
//   );

#define NdisMCmDispatchIncomingCloseCall(_S_, _H_, _B_, _Z_)    \
                                        NdisCmDispatchIncomingCloseCall(_S_, _H_, _B_, _Z_)


//  EXPORT
//  VOID
//  NdisMCmDispatchIncomingDropParty(
//      IN  NDIS_STATUS         DropStatus,
//      IN  NDIS_HANDLE         NdisPartyHandle,
//      IN  PVOID               Buffer      OPTIONAL,
//      IN  UINT                Size
//      );
#define NdisMCmDispatchIncomingDropParty(_S_, _H_, _B_, _Z_)    \
                                        NdisCmDispatchIncomingDropParty(_S_, _H_, _B_, _Z_)


#endif // defined(NDIS_MINIPORT_DRIVER) || defined(NDIS_WRAPPER)

//
// The following definitions are available only to full MAC drivers.  They
// must not be used by miniport drivers.
//

#if defined(NDIS_WRAPPER)

typedef
BOOLEAN
(*PNDIS_INTERRUPT_SERVICE)(
    IN  PVOID                   InterruptContext
    );

typedef
VOID
(*PNDIS_DEFERRED_PROCESSING)(
    IN  PVOID                   SystemSpecific1,
    IN  PVOID                   InterruptContext,
    IN  PVOID                   SystemSpecific2,
    IN  PVOID                   SystemSpecific3
    );

#endif // defined(NDIS_WRAPPER)

//
// The following handlers are used in the OPEN_BLOCK
//
typedef
NDIS_STATUS
(*WAN_SEND_HANDLER)(
    IN  NDIS_HANDLE             NdisBindingHandle,
    IN  NDIS_HANDLE             LinkHandle,
    IN  PVOID                   Packet
    );

typedef
NDIS_STATUS
(*SEND_HANDLER)(
    IN  NDIS_HANDLE             NdisBindingHandle,
    IN  PNDIS_PACKET            Packet
    );

typedef
NDIS_STATUS
(*TRANSFER_DATA_HANDLER)(
    IN  NDIS_HANDLE             NdisBindingHandle,
    IN  NDIS_HANDLE             MacReceiveContext,
    IN  UINT                    ByteOffset,
    IN  UINT                    BytesToTransfer,
    OUT PNDIS_PACKET            Packet,
    OUT PUINT                   BytesTransferred
    );

typedef
NDIS_STATUS
(*RESET_HANDLER)(
    IN  NDIS_HANDLE             NdisBindingHandle
    );

typedef
NDIS_STATUS
(*REQUEST_HANDLER)(
    IN  NDIS_HANDLE             NdisBindingHandle,
    IN  PNDIS_REQUEST           NdisRequest
    );

typedef
VOID
(*SEND_PACKETS_HANDLER)(
    IN NDIS_HANDLE              MiniportAdapterContext,
    IN PPNDIS_PACKET            PacketArray,
    IN UINT                     NumberOfPackets
    );


typedef struct _NDIS_COMMON_OPEN_BLOCK
{
    PVOID                       MacHandle;          // needed for backward compatibility
    NDIS_HANDLE                 BindingHandle;      // Miniport's open context
    PNDIS_MINIPORT_BLOCK        MiniportHandle;     // pointer to the miniport
    PNDIS_PROTOCOL_BLOCK        ProtocolHandle;     // pointer to our protocol
    NDIS_HANDLE                 ProtocolBindingContext;// context when calling ProtXX funcs
    PNDIS_OPEN_BLOCK            MiniportNextOpen;   // used by adapter's OpenQueue
    PNDIS_OPEN_BLOCK            ProtocolNextOpen;   // used by protocol's OpenQueue
    NDIS_HANDLE                 MiniportAdapterContext; // context for miniport
    BOOLEAN                     Reserved1;
    BOOLEAN                     Reserved2;
    BOOLEAN                     Reserved3;
    BOOLEAN                     Reserved4;
    PNDIS_STRING                BindDeviceName;
    KSPIN_LOCK                  Reserved5;
    PNDIS_STRING                RootDeviceName;

    //
    // These are referenced by the macros used by protocols to call.
    // All of the ones referenced by the macros are internal NDIS handlers for the miniports
    //
    union
    {
        SEND_HANDLER            SendHandler;
        WAN_SEND_HANDLER        WanSendHandler;
    };
    TRANSFER_DATA_HANDLER       TransferDataHandler;

    //
    // These are referenced internally by NDIS
    //
    SEND_COMPLETE_HANDLER       SendCompleteHandler;
    TRANSFER_DATA_COMPLETE_HANDLER TransferDataCompleteHandler;
    RECEIVE_HANDLER             ReceiveHandler;
    RECEIVE_COMPLETE_HANDLER    ReceiveCompleteHandler;
    WAN_RECEIVE_HANDLER         WanReceiveHandler;
    REQUEST_COMPLETE_HANDLER    RequestCompleteHandler;

    //
    // NDIS 4.0 extensions
    //
    RECEIVE_PACKET_HANDLER      ReceivePacketHandler;
    SEND_PACKETS_HANDLER        SendPacketsHandler;

    //
    // More Cached Handlers
    //
    RESET_HANDLER               ResetHandler;
    REQUEST_HANDLER             RequestHandler;
    RESET_COMPLETE_HANDLER      ResetCompleteHandler;
    STATUS_HANDLER              StatusHandler;
    STATUS_COMPLETE_HANDLER     StatusCompleteHandler;
    
#if defined(NDIS_WRAPPER)
    ULONG                       Flags;
    ULONG                       References;
    KSPIN_LOCK                  SpinLock;           // guards Closing
    NDIS_HANDLE                 FilterHandle;
    ULONG                       ProtocolOptions;
    USHORT                      CurrentLookahead;
    USHORT                      ConnectDampTicks;
    USHORT                      DisconnectDampTicks;

    //
    // These are optimizations for getting to driver routines. They are not
    // necessary, but are here to save a dereference through the Driver block.
    //
    W_SEND_HANDLER              WSendHandler;
    W_TRANSFER_DATA_HANDLER     WTransferDataHandler;

    //
    //  NDIS 4.0 miniport entry-points
    //
    W_SEND_PACKETS_HANDLER      WSendPacketsHandler;

    W_CANCEL_SEND_PACKETS_HANDLER   CancelSendPacketsHandler;

    //
    //  Contains the wake-up events that are enabled for the open.
    //
    ULONG                       WakeUpEnable;
    //
    // event to be signalled when close complets
    //
    PKEVENT                     CloseCompleteEvent;

    QUEUED_CLOSE                QC;

    ULONG                       AfReferences;

    PNDIS_OPEN_BLOCK            NextGlobalOpen;

#endif

#ifdef UNDER_CE

	//
	//	Additional data to support control of NDIS_STATUS_MEDIA_CONNECT
	//	indication..
	//

	DWORD						dwCEProtocolFlag;

#endif

} NDIS_COMMON_OPEN_BLOCK;


#ifdef UNDER_CE

//
//	dwCEProtocolFlag in NDIS_COMMON_OPEN_BLOCK
//

#define	PROTOCOL_SET_BLOCK_MEDIA_CONNECT(_P)	\
			(_P)->dwCEProtocolFlag |= fCE_PROTOCOL_FLAG_BLOCK_MEDIA_CONNECT

#define	PROTOCOL_CLEAR_BLOCK_MEDIA_CONNECT(_P)	\
			(_P)->dwCEProtocolFlag &= ~fCE_PROTOCOL_FLAG_BLOCK_MEDIA_CONNECT

#define	PROTOCOL_TEST_CE_FLAG(_P, _F)			\
			(((_P)->dwCEProtocolFlag & (_F)) != 0)

#define	fCE_PROTOCOL_FLAG_BLOCK_MEDIA_CONNECT		0x80000000
#define	fCE_PROTOCOL_FLAG_NEVER_LOOPBACK    		0x40000000

#endif

//
// one of these per open on an adapter/protocol
//
struct _NDIS_OPEN_BLOCK
{
#ifdef __cplusplus
    NDIS_COMMON_OPEN_BLOCK NdisCommonOpenBlock;
#else
    NDIS_COMMON_OPEN_BLOCK;
#endif

#if defined(NDIS_WRAPPER)
    
    //
    // The stuff below is for CO drivers/protocols. This part is not allocated for CL drivers.
    //
    struct _NDIS_OPEN_CO
    {
        //
        // this is the list of the call manager opens done on this adapter
        //
        struct _NDIS_CO_AF_BLOCK *  NextAf;
    
        //
        //  NDIS 5.0 miniport entry-points, filled in at open time.
        //
        W_CO_CREATE_VC_HANDLER      MiniportCoCreateVcHandler;
        W_CO_REQUEST_HANDLER        MiniportCoRequestHandler;
    
        //
        // NDIS 5.0 protocol completion routines, filled in at RegisterAf/OpenAf time
        //
        CO_CREATE_VC_HANDLER        CoCreateVcHandler;
        CO_DELETE_VC_HANDLER        CoDeleteVcHandler;
        PVOID                       CmActivateVcCompleteHandler;
        PVOID                       CmDeactivateVcCompleteHandler;
        PVOID                       CoRequestCompleteHandler;
    
        //
        // lists for queuing connections. There is both a queue for currently
        // active connections and a queue for connections that are not active.
        //
        LIST_ENTRY                  ActiveVcHead;
        LIST_ENTRY                  InactiveVcHead;
        LONG                        PendingAfNotifications;
        PKEVENT                     AfNotifyCompleteEvent;
    };
#endif
};


#if defined(NDIS50) || defined(NDIS50_MINIPORT) || defined(NDIS51_MINIPORT)

typedef struct _CO_CALL_PARAMETERS      CO_CALL_PARAMETERS, *PCO_CALL_PARAMETERS;
typedef struct _CO_MEDIA_PARAMETERS     CO_MEDIA_PARAMETERS, *PCO_MEDIA_PARAMETERS;

//
// CoNdis client only handler proto-types - used by clients of call managers
//
typedef
VOID
(*CL_OPEN_AF_COMPLETE_HANDLER)(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             ProtocolAfContext,
    IN  NDIS_HANDLE             NdisAfHandle
    );

typedef
VOID
(*CL_CLOSE_AF_COMPLETE_HANDLER)(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             ProtocolAfContext
    );

typedef
VOID
(*CL_REG_SAP_COMPLETE_HANDLER)(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             ProtocolSapContext,
    IN  PCO_SAP                 Sap,
    IN  NDIS_HANDLE             NdisSapHandle
    );

typedef
VOID
(*CL_DEREG_SAP_COMPLETE_HANDLER)(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             ProtocolSapContext
    );

typedef
VOID
(*CL_MAKE_CALL_COMPLETE_HANDLER)(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             ProtocolVcContext,
    IN  NDIS_HANDLE             NdisPartyHandle     OPTIONAL,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );

typedef
VOID
(*CL_CLOSE_CALL_COMPLETE_HANDLER)(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             ProtocolVcContext,
    IN  NDIS_HANDLE             ProtocolPartyContext OPTIONAL
    );

typedef
VOID
(*CL_ADD_PARTY_COMPLETE_HANDLER)(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             ProtocolPartyContext,
    IN  NDIS_HANDLE             NdisPartyHandle,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );

typedef
VOID
(*CL_DROP_PARTY_COMPLETE_HANDLER)(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             ProtocolPartyContext
    );

typedef
NDIS_STATUS
(*CL_INCOMING_CALL_HANDLER)(
    IN  NDIS_HANDLE             ProtocolSapContext,
    IN  NDIS_HANDLE             ProtocolVcContext,
    IN OUT PCO_CALL_PARAMETERS  CallParameters
    );

typedef
VOID
(*CL_CALL_CONNECTED_HANDLER)(
    IN  NDIS_HANDLE             ProtocolVcContext
    );

typedef
VOID
(*CL_INCOMING_CLOSE_CALL_HANDLER)(
    IN  NDIS_STATUS             CloseStatus,
    IN  NDIS_HANDLE             ProtocolVcContext,
    IN  PVOID                   CloseData   OPTIONAL,
    IN  UINT                    Size        OPTIONAL
    );

typedef
VOID
(*CL_INCOMING_DROP_PARTY_HANDLER)(
    IN  NDIS_STATUS             DropStatus,
    IN  NDIS_HANDLE             ProtocolPartyContext,
    IN  PVOID                   CloseData   OPTIONAL,
    IN  UINT                    Size        OPTIONAL
    );

typedef
VOID
(*CL_MODIFY_CALL_QOS_COMPLETE_HANDLER)(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             ProtocolVcContext,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );

typedef
VOID
(*CL_INCOMING_CALL_QOS_CHANGE_HANDLER)(
    IN  NDIS_HANDLE             ProtocolVcContext,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );

typedef struct _NDIS_CLIENT_CHARACTERISTICS
{
    UCHAR                           MajorVersion;
    UCHAR                           MinorVersion;

    USHORT                          Filler;
    UINT                            Reserved;

    CO_CREATE_VC_HANDLER            ClCreateVcHandler;
    CO_DELETE_VC_HANDLER            ClDeleteVcHandler;
    CO_REQUEST_HANDLER              ClRequestHandler;
    CO_REQUEST_COMPLETE_HANDLER     ClRequestCompleteHandler;
    CL_OPEN_AF_COMPLETE_HANDLER     ClOpenAfCompleteHandler;
    CL_CLOSE_AF_COMPLETE_HANDLER    ClCloseAfCompleteHandler;
    CL_REG_SAP_COMPLETE_HANDLER     ClRegisterSapCompleteHandler;
    CL_DEREG_SAP_COMPLETE_HANDLER   ClDeregisterSapCompleteHandler;
    CL_MAKE_CALL_COMPLETE_HANDLER   ClMakeCallCompleteHandler;
    CL_MODIFY_CALL_QOS_COMPLETE_HANDLER ClModifyCallQoSCompleteHandler;
    CL_CLOSE_CALL_COMPLETE_HANDLER  ClCloseCallCompleteHandler;
    CL_ADD_PARTY_COMPLETE_HANDLER   ClAddPartyCompleteHandler;
    CL_DROP_PARTY_COMPLETE_HANDLER  ClDropPartyCompleteHandler;
    CL_INCOMING_CALL_HANDLER        ClIncomingCallHandler;
    CL_INCOMING_CALL_QOS_CHANGE_HANDLER ClIncomingCallQoSChangeHandler;
    CL_INCOMING_CLOSE_CALL_HANDLER  ClIncomingCloseCallHandler;
    CL_INCOMING_DROP_PARTY_HANDLER  ClIncomingDropPartyHandler;
    CL_CALL_CONNECTED_HANDLER       ClCallConnectedHandler;

} NDIS_CLIENT_CHARACTERISTICS, *PNDIS_CLIENT_CHARACTERISTICS;

//
// CoNdis call-manager only handler proto-types - used by call managers only
//
typedef
NDIS_STATUS
(*CM_OPEN_AF_HANDLER)(
    IN  NDIS_HANDLE             CallMgrBindingContext,
    IN  PCO_ADDRESS_FAMILY      AddressFamily,
    IN  NDIS_HANDLE             NdisAfHandle,
    OUT PNDIS_HANDLE            CallMgrAfContext
    );

typedef
NDIS_STATUS
(*CM_CLOSE_AF_HANDLER)(
    IN  NDIS_HANDLE             CallMgrAfContext
    );

typedef
NDIS_STATUS
(*CM_REG_SAP_HANDLER)(
    IN  NDIS_HANDLE             CallMgrAfContext,
    IN  PCO_SAP                 Sap,
    IN  NDIS_HANDLE             NdisSapHandle,
    OUT PNDIS_HANDLE            CallMgrSapContext
    );

typedef
NDIS_STATUS
(*CM_DEREG_SAP_HANDLER)(
    IN  NDIS_HANDLE             CallMgrSapContext
    );

typedef
NDIS_STATUS
(*CM_MAKE_CALL_HANDLER)(
    IN  NDIS_HANDLE             CallMgrVcContext,
    IN OUT PCO_CALL_PARAMETERS  CallParameters,
    IN  NDIS_HANDLE             NdisPartyHandle     OPTIONAL,
    OUT PNDIS_HANDLE            CallMgrPartyContext OPTIONAL
    );

typedef
NDIS_STATUS
(*CM_CLOSE_CALL_HANDLER)(
    IN  NDIS_HANDLE             CallMgrVcContext,
    IN  NDIS_HANDLE             CallMgrPartyContext OPTIONAL,
    IN  PVOID                   CloseData           OPTIONAL,
    IN  UINT                    Size                OPTIONAL
    );

typedef
NDIS_STATUS
(*CM_MODIFY_CALL_QOS_HANDLER)(
    IN  NDIS_HANDLE             CallMgrVcContext,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );

typedef
VOID
(*CM_INCOMING_CALL_COMPLETE_HANDLER)(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             CallMgrVcContext,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );

typedef
VOID
(*CM_ACTIVATE_VC_COMPLETE_HANDLER)(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             CallMgrVcContext,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );

typedef
VOID
(*CM_DEACTIVATE_VC_COMPLETE_HANDLER)(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             CallMgrVcContext
    );

typedef
NDIS_STATUS
(*CM_ADD_PARTY_HANDLER)(
    IN  NDIS_HANDLE             CallMgrVcContext,
    IN OUT PCO_CALL_PARAMETERS  CallParameters,
    IN  NDIS_HANDLE             NdisPartyHandle,
    OUT PNDIS_HANDLE            CallMgrPartyContext
    );

typedef
NDIS_STATUS
(*CM_DROP_PARTY_HANDLER)(
    IN  NDIS_HANDLE             CallMgrPartyContext,
    IN  PVOID                   CloseData   OPTIONAL,
    IN  UINT                    Size        OPTIONAL
    );

typedef struct _NDIS_CALL_MANAGER_CHARACTERISTICS
{
    UCHAR                           MajorVersion;
    UCHAR                           MinorVersion;
    USHORT                          Filler;
    UINT                            Reserved;

    CO_CREATE_VC_HANDLER            CmCreateVcHandler;
    CO_DELETE_VC_HANDLER            CmDeleteVcHandler;
    CM_OPEN_AF_HANDLER              CmOpenAfHandler;
    CM_CLOSE_AF_HANDLER             CmCloseAfHandler;
    CM_REG_SAP_HANDLER              CmRegisterSapHandler;
    CM_DEREG_SAP_HANDLER            CmDeregisterSapHandler;
    CM_MAKE_CALL_HANDLER            CmMakeCallHandler;
    CM_CLOSE_CALL_HANDLER           CmCloseCallHandler;
    CM_INCOMING_CALL_COMPLETE_HANDLER CmIncomingCallCompleteHandler;
    CM_ADD_PARTY_HANDLER            CmAddPartyHandler;
    CM_DROP_PARTY_HANDLER           CmDropPartyHandler;
    CM_ACTIVATE_VC_COMPLETE_HANDLER CmActivateVcCompleteHandler;
    CM_DEACTIVATE_VC_COMPLETE_HANDLER CmDeactivateVcCompleteHandler;
    CM_MODIFY_CALL_QOS_HANDLER      CmModifyCallQoSHandler;
    CO_REQUEST_HANDLER              CmRequestHandler;
    CO_REQUEST_COMPLETE_HANDLER     CmRequestCompleteHandler;
    
} NDIS_CALL_MANAGER_CHARACTERISTICS, *PNDIS_CALL_MANAGER_CHARACTERISTICS;

//
// this send flag is used on ATM net cards to set ( turn on ) the CLP bit
// (Cell Loss Priority) bit
//
#define CO_SEND_FLAG_SET_DISCARD_ELIBILITY  0x00000001

//
// the Address structure used on NDIS_CO_ADD_ADDRESS or NDIS_CO_DELETE_ADDRESS
//
typedef struct _CO_ADDRESS
{
    ULONG                       AddressSize;
    UCHAR                       Address[1];
} CO_ADDRESS, *PCO_ADDRESS;

//
// the list of addresses returned from the CallMgr on a NDIS_CO_GET_ADDRESSES
//
typedef struct _CO_ADDRESS_LIST
{
    ULONG                       NumberOfAddressesAvailable;
    ULONG                       NumberOfAddresses;
    CO_ADDRESS                  AddressList;
} CO_ADDRESS_LIST, *PCO_ADDRESS_LIST;

#ifndef FAR
#define FAR
#endif
#include <qos.h>

typedef struct _CO_SPECIFIC_PARAMETERS
{
    ULONG                       ParamType;
    ULONG                       Length;
    UCHAR                       Parameters[1];
} CO_SPECIFIC_PARAMETERS, *PCO_SPECIFIC_PARAMETERS;

typedef struct _CO_CALL_MANAGER_PARAMETERS
{
    FLOWSPEC                    Transmit;
    FLOWSPEC                    Receive;
    CO_SPECIFIC_PARAMETERS      CallMgrSpecific;
} CO_CALL_MANAGER_PARAMETERS, *PCO_CALL_MANAGER_PARAMETERS;


//
// this is the generic portion of the media parameters, including the media
// specific component too.
//
typedef struct _CO_MEDIA_PARAMETERS
{
    ULONG                       Flags;
    ULONG                       ReceivePriority;
    ULONG                       ReceiveSizeHint;
    CO_SPECIFIC_PARAMETERS POINTER_ALIGNMENT      MediaSpecific;
} CO_MEDIA_PARAMETERS, *PCO_MEDIA_PARAMETERS;


//
// definitions for the flags in CO_MEDIA_PARAMETERS
//
#define RECEIVE_TIME_INDICATION 0x00000001
#define USE_TIME_STAMPS         0x00000002
#define TRANSMIT_VC             0x00000004
#define RECEIVE_VC              0x00000008
#define INDICATE_ERRED_PACKETS  0x00000010
#define INDICATE_END_OF_TX      0x00000020
#define RESERVE_RESOURCES_VC    0x00000040
#define ROUND_DOWN_FLOW         0x00000080
#define ROUND_UP_FLOW           0x00000100
//
// define a flag to set in the flags of an Ndis packet when the miniport
// indicates a receive with an error in it
//
#define ERRED_PACKET_INDICATION 0x00000001

//
// this is the structure passed during call-setup
//
typedef struct _CO_CALL_PARAMETERS
{
    ULONG                       Flags;
    PCO_CALL_MANAGER_PARAMETERS CallMgrParameters;
    PCO_MEDIA_PARAMETERS        MediaParameters;
} CO_CALL_PARAMETERS, *PCO_CALL_PARAMETERS;

//
// Definitions for the Flags in CO_CALL_PARAMETERS
//
#define PERMANENT_VC            0x00000001
#define CALL_PARAMETERS_CHANGED 0x00000002
#define QUERY_CALL_PARAMETERS   0x00000004
#define BROADCAST_VC            0x00000008
#define MULTIPOINT_VC           0x00000010

//
// The format of the Request for adding/deleting a PVC
//
typedef struct _CO_PVC
{
    NDIS_HANDLE                 NdisAfHandle;
    CO_SPECIFIC_PARAMETERS      PvcParameters;
} CO_PVC,*PCO_PVC;


typedef struct _ATM_ADDRESS     ATM_ADDRESS, *PATM_ADDRESS;

EXPORT
VOID
NdisConvertStringToAtmAddress(
    OUT PNDIS_STATUS            Status,
    IN  PNDIS_STRING            String,
    OUT PATM_ADDRESS            AtmAddress
    );

//
// NDIS 5.0 Extensions for protocols
//

EXPORT
NDIS_STATUS
NdisCoAssignInstanceName(
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  PNDIS_STRING            BaseInstanceName,
    OUT PNDIS_STRING            VcInstanceName
    );

EXPORT
VOID
NdisCoSendPackets(
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  PPNDIS_PACKET           PacketArray,
    IN  UINT                    NumberOfPackets
    );


EXPORT
NDIS_STATUS
NdisCoCreateVc(
    IN  NDIS_HANDLE             NdisBindingHandle,
    IN  NDIS_HANDLE             NdisAfHandle        OPTIONAL,   // For CM signalling VCs
    IN  NDIS_HANDLE             ProtocolVcContext,
    IN OUT PNDIS_HANDLE         NdisVcHandle
    );


EXPORT
NDIS_STATUS
NdisCoDeleteVc(
    IN  NDIS_HANDLE             NdisVcHandle
    );


EXPORT
NDIS_STATUS
NdisCoRequest(
    IN  NDIS_HANDLE             NdisBindingHandle,
    IN  NDIS_HANDLE             NdisAfHandle    OPTIONAL,
    IN  NDIS_HANDLE             NdisVcHandle    OPTIONAL,
    IN  NDIS_HANDLE             NdisPartyHandle OPTIONAL,
    IN OUT PNDIS_REQUEST        NdisRequest
    );


EXPORT
VOID
NdisCoRequestComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             NdisAfHandle,
    IN  NDIS_HANDLE             NdisVcHandle    OPTIONAL,
    IN  NDIS_HANDLE             NdisPartyHandle OPTIONAL,
    IN  PNDIS_REQUEST           NdisRequest
    );

#ifndef __NDISTAPI_VAR_STRING_DECLARED
#define __NDISTAPI_VAR_STRING_DECLARED

typedef struct _VAR_STRING
{
    ULONG   ulTotalSize;
    ULONG   ulNeededSize;
    ULONG   ulUsedSize;

    ULONG   ulStringFormat;
    ULONG   ulStringSize;
    ULONG   ulStringOffset;

} VAR_STRING, *PVAR_STRING;

#endif // __NDISTAPI_VAR_STRING_DECLARED


#ifndef __NDISTAPI_STRINGFORMATS_DEFINED
#define __NDISTAPI_STRINGFORMATS_DEFINED

#define STRINGFORMAT_ASCII                          0x00000001
#define STRINGFORMAT_DBCS                           0x00000002
#define STRINGFORMAT_UNICODE                        0x00000003
#define STRINGFORMAT_BINARY                         0x00000004

#endif // __NDISTAPI_STRINGFORMATS_DEFINED

EXPORT
NDIS_STATUS
NdisCoGetTapiCallId(
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  OUT PVAR_STRING         TapiCallId
    );

//
// Client Apis
//
EXPORT
NDIS_STATUS
NdisClOpenAddressFamily(
    IN  NDIS_HANDLE             NdisBindingHandle,
    IN  PCO_ADDRESS_FAMILY      AddressFamily,
    IN  NDIS_HANDLE             ProtocolAfContext,
    IN  PNDIS_CLIENT_CHARACTERISTICS ClCharacteristics,
    IN  UINT                    SizeOfClCharacteristics,
    OUT PNDIS_HANDLE            NdisAfHandle
    );


EXPORT
NDIS_STATUS
NdisClCloseAddressFamily(
    IN  NDIS_HANDLE             NdisAfHandle
    );


EXPORT
NDIS_STATUS
NdisClRegisterSap(
    IN  NDIS_HANDLE             NdisAfHandle,
    IN  NDIS_HANDLE             ProtocolSapContext,
    IN  PCO_SAP                 Sap,
    OUT PNDIS_HANDLE            NdisSapHandle
    );


EXPORT
NDIS_STATUS
NdisClDeregisterSap(
    IN  NDIS_HANDLE             NdisSapHandle
    );


EXPORT
NDIS_STATUS
NdisClMakeCall(
    IN  NDIS_HANDLE             NdisVcHandle,
    IN OUT PCO_CALL_PARAMETERS  CallParameters,
    IN  NDIS_HANDLE             ProtocolPartyContext    OPTIONAL,
    OUT PNDIS_HANDLE            NdisPartyHandle         OPTIONAL
    );


EXPORT
NDIS_STATUS
NdisClCloseCall(
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  NDIS_HANDLE             NdisPartyHandle         OPTIONAL,
    IN  PVOID                   Buffer                  OPTIONAL,
    IN  UINT                    Size                    OPTIONAL
    );


EXPORT
NDIS_STATUS
NdisClModifyCallQoS(
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );


EXPORT
VOID
NdisClIncomingCallComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );


EXPORT
NDIS_STATUS
NdisClAddParty(
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  NDIS_HANDLE             ProtocolPartyContext,
    IN OUT PCO_CALL_PARAMETERS  CallParameters,
    OUT PNDIS_HANDLE            NdisPartyHandle
    );


EXPORT
NDIS_STATUS
NdisClDropParty(
    IN  NDIS_HANDLE             NdisPartyHandle,
    IN  PVOID                   Buffer      OPTIONAL,
    IN  UINT                    Size        OPTIONAL
    );


EXPORT
NDIS_STATUS
NdisClGetProtocolVcContextFromTapiCallId(
    IN  UNICODE_STRING          TapiCallId,
    OUT PNDIS_HANDLE            ProtocolVcContext
    );

//
// Call Manager Apis
//
EXPORT
NDIS_STATUS
NdisCmRegisterAddressFamily(
    IN  NDIS_HANDLE             NdisBindingHandle,
    IN  PCO_ADDRESS_FAMILY      AddressFamily,
    IN  PNDIS_CALL_MANAGER_CHARACTERISTICS CmCharacteristics,
    IN  UINT                    SizeOfCmCharacteristics
    );


EXPORT
VOID
NdisCmOpenAddressFamilyComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             NdisAfHandle,
    IN  NDIS_HANDLE             CallMgrAfContext
    );


EXPORT
VOID
NdisCmCloseAddressFamilyComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             NdisAfHandle
    );


EXPORT
VOID
NdisCmRegisterSapComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             NdisSapHandle,
    IN  NDIS_HANDLE             CallMgrSapContext
    );


EXPORT
VOID
NdisCmDeregisterSapComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             NdisSapHandle
    );


EXPORT
NDIS_STATUS
NdisCmActivateVc(
    IN  NDIS_HANDLE             NdisVcHandle,
    IN OUT PCO_CALL_PARAMETERS  CallParameters
    );


EXPORT
NDIS_STATUS
NdisCmDeactivateVc(
    IN  NDIS_HANDLE             NdisVcHandle
    );


EXPORT
VOID
NdisCmMakeCallComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  NDIS_HANDLE             NdisPartyHandle     OPTIONAL,
    IN  NDIS_HANDLE             CallMgrPartyContext OPTIONAL,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );


EXPORT
VOID
NdisCmCloseCallComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  NDIS_HANDLE             NdisPartyHandle OPTIONAL
    );


EXPORT
VOID
NdisCmAddPartyComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             NdisPartyHandle,
    IN  NDIS_HANDLE             CallMgrPartyContext OPTIONAL,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );


EXPORT
VOID
NdisCmDropPartyComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             NdisPartyHandle
    );


EXPORT
NDIS_STATUS
NdisCmDispatchIncomingCall(
    IN  NDIS_HANDLE             NdisSapHandle,
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );


EXPORT
VOID
NdisCmDispatchCallConnected(
    IN  NDIS_HANDLE             NdisVcHandle
    );


EXPORT
VOID
NdisCmModifyCallQoSComplete(
    IN  NDIS_STATUS             Status,
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );


EXPORT
VOID
NdisCmDispatchIncomingCallQoSChange(
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  PCO_CALL_PARAMETERS     CallParameters
    );


EXPORT
VOID
NdisCmDispatchIncomingCloseCall(
    IN  NDIS_STATUS             CloseStatus,
    IN  NDIS_HANDLE             NdisVcHandle,
    IN  PVOID                   Buffer      OPTIONAL,
    IN  UINT                    Size        OPTIONAL
    );


EXPORT
VOID
NdisCmDispatchIncomingDropParty(
    IN  NDIS_STATUS             DropStatus,
    IN  NDIS_HANDLE             NdisPartyHandle,
    IN  PVOID                   Buffer      OPTIONAL,
    IN  UINT                    Size        OPTIONAL
    );


#endif // defined(NDIS50) || defined(NDIS50_MINIPORT) || defined(NDIS51_MINIPORT)

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _NDIS_
