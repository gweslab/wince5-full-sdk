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

    ceddk.h

Abstract:

    This module defines the NT types, constants, and functions that are
    exposed to device drivers.

Revision History:

--*/

#ifndef _CEDDK_
#define _CEDDK_

#define NTKERNELAPI
#define NTHALAPI

#ifdef __cplusplus
extern "C" {
#endif

#define PAGE_SIZE    UserKInfo[KINX_PAGESIZE]

// Warning : This assume only 1K & 4K pages available under CE. Else Break
#define PAGE_SHIFT  ( (PAGE_SIZE == 0x1000) ? 12L : \
                      ((PAGE_SIZE == 0x400) ? 10L : 0 ) )


#include <ntstatus.h>
#ifdef _MAC
#include <macwin32.h>
#endif

typedef LARGE_INTEGER PHYSICAL_ADDRESS, *PPHYSICAL_ADDRESS; 

typedef enum _INTERFACE_TYPE {
    InterfaceTypeUndefined = -1,
    Internal,
    Isa,
    Eisa,
    MicroChannel,
    TurboChannel,
    PCIBus,
    VMEBus,
    NuBus,
    PCMCIABus,
    CBus,
    MPIBus,
    MPSABus,
    ProcessorInternal,
    InternalPowerBus,
    PNPISABus,
    PNPBus,
    MaximumInterfaceType
} INTERFACE_TYPE, *PINTERFACE_TYPE;

//
// Define types of bus information.
//

typedef enum _BUS_DATA_TYPE {
    ConfigurationSpaceUndefined = -1,
    Cmos,
    EisaConfiguration,
    Pos,
    CbusConfiguration,
    PCIConfiguration,
    VMEConfiguration,
    NuBusConfiguration,
    PCMCIAConfiguration,
    MPIConfiguration,
    MPSAConfiguration,
    PNPISAConfiguration,
    MaximumBusDataType
} BUS_DATA_TYPE, *PBUS_DATA_TYPE;

//
// A PCI driver can read the complete 256 bytes of configuration
// information for any PCI device by calling:
//
//      ULONG
//      HalGetBusData (
//          IN BUS_DATA_TYPE        PCIConfiguration,
//          IN ULONG                PciBusNumber,
//          IN PCI_SLOT_NUMBER      VirtualSlotNumber,
//          IN PPCI_COMMON_CONFIG   &PCIDeviceConfig,
//          IN ULONG                sizeof (PCIDeviceConfig)
//      );
//
//      A return value of 0 means that the specified PCI bus does not exist.
//
//      A return value of 2, with a VendorID of PCI_INVALID_VENDORID means
//      that the PCI bus does exist, but there is no device at the specified
//      VirtualSlotNumber (PCI Device/Function number).
//
//

// begin_ntminiport begin_ntndis

typedef struct _PCI_SLOT_NUMBER {
    union {
        struct {
            ULONG   DeviceNumber:5;
            ULONG   FunctionNumber:3;
            ULONG   Reserved:24;
        } bits;
        ULONG   AsULONG;
    } u;
} PCI_SLOT_NUMBER, *PPCI_SLOT_NUMBER;


#define PCI_TYPE0_ADDRESSES             6
#define PCI_TYPE1_ADDRESSES             2
#define PCI_TYPE2_ADDRESSES             1

typedef struct _PCI_COMMON_CONFIG {
    USHORT  VendorID;                   // (ro)
    USHORT  DeviceID;                   // (ro)
    USHORT  Command;                    // Device control
    USHORT  Status;
    UCHAR   RevisionID;                 // (ro)
    UCHAR   ProgIf;                     // (ro)
    UCHAR   SubClass;                   // (ro)
    UCHAR   BaseClass;                  // (ro)
    UCHAR   CacheLineSize;              // (ro+)
    UCHAR   LatencyTimer;               // (ro+)
    UCHAR   HeaderType;                 // (ro)
    UCHAR   BIST;                       // Built in self test

    union {
        struct _PCI_HEADER_TYPE_0 {
            ULONG   BaseAddresses[PCI_TYPE0_ADDRESSES];
            ULONG   CIS;
            USHORT  SubVendorID;
            USHORT  SubSystemID;
            ULONG   ROMBaseAddress;
            ULONG   Reserved2[2];

            UCHAR   InterruptLine;      //
            UCHAR   InterruptPin;       // (ro)
            UCHAR   MinimumGrant;       // (ro)
            UCHAR   MaximumLatency;     // (ro)
        } type0;

        struct _PCI_HEADER_TYPE_1 {
            ULONG   BaseAddresses[PCI_TYPE1_ADDRESSES];
            UCHAR   PrimaryBusNumber;
            UCHAR   SecondaryBusNumber;
            UCHAR   SubordinateBusNumber;
            UCHAR   SecondaryLatencyTimer;
            UCHAR   IOBase;
            UCHAR   IOLimit;
            USHORT  SecondaryStatus;
            USHORT  MemoryBase;
            USHORT  MemoryLimit;
            USHORT  PrefetchableMemoryBase;
            USHORT  PrefetchableMemoryLimit;
            ULONG   PrefetchableMemoryBaseUpper32;
            ULONG   PrefetchableMemoryLimitUpper32;
            USHORT  IOBaseUpper;
            USHORT  IOLimitUpper;
            ULONG   Reserved2;
            ULONG   ExpansionROMBase;
            UCHAR   InterruptLine;
            UCHAR   InterruptPin;
            USHORT  BridgeControl;
        } type1;

        struct _PCI_HEADER_TYPE_2 {
            ULONG   BaseAddress;
            UCHAR   CapabilitiesPtr;
            UCHAR   Reserved2;
            USHORT  SecondaryStatus;
            UCHAR   PrimaryBusNumber;
            UCHAR   CardbusBusNumber;
            UCHAR   SubordinateBusNumber;
            UCHAR   CardbusLatencyTimer;
            ULONG   MemoryBase0;
            ULONG   MemoryLimit0;
            ULONG   MemoryBase1;
            ULONG   MemoryLimit1;
            USHORT  IOBase0_LO;
            USHORT  IOBase0_HI;
            USHORT  IOLimit0_LO;
            USHORT  IOLimit0_HI;
            USHORT  IOBase1_LO;
            USHORT  IOBase1_HI;
            USHORT  IOLimit1_LO;
            USHORT  IOLimit1_HI;
            UCHAR   InterruptLine;
            UCHAR   InterruptPin;
            USHORT  BridgeControl;
            USHORT  SubVendorID;
            USHORT	SubSystemID;
            ULONG   LegacyBaseAddress;
            UCHAR	Reserved3[56];
            ULONG	SystemControl;
            UCHAR   MultiMediaControl;
            UCHAR   GeneralStatus;
            UCHAR   Reserved4[2];
            UCHAR   GPIO0Control;
            UCHAR   GPIO1Control;
            UCHAR   GPIO2Control;
            UCHAR   GPIO3Control;
            ULONG   IRQMuxRouting;
            UCHAR   RetryStatus;
            UCHAR   CardControl;
            UCHAR   DeviceControl;
            UCHAR   Diagnostic;
        } type2;

    } u;

    UCHAR   DeviceSpecific[108];

} PCI_COMMON_CONFIG, *PPCI_COMMON_CONFIG;


#define PCI_COMMON_HDR_LENGTH (FIELD_OFFSET (PCI_COMMON_CONFIG, DeviceSpecific))

#define PCI_MAX_BUS                         255
#define PCI_MAX_DEVICES                     32
#define PCI_MAX_FUNCTION                    8

#define PCI_INVALID_VENDORID                0xFFFF
#define PCI_INVALID_DEVICEID                0xFFFF

//
// Bit encodings for  PCI_COMMON_CONFIG.HeaderType
//

#define PCI_MULTIFUNCTION                   0x80
#define PCI_DEVICE_TYPE                     0x00
#define PCI_BRIDGE_TYPE                     0x01
#define PCI_CARDBUS_TYPE                    0x02

//
// Bit encodings for PCI_COMMON_CONFIG.Command
//

#define PCI_ENABLE_IO_SPACE                 0x0001
#define PCI_ENABLE_MEMORY_SPACE             0x0002
#define PCI_ENABLE_BUS_MASTER               0x0004
#define PCI_ENABLE_SPECIAL_CYCLES           0x0008
#define PCI_ENABLE_WRITE_AND_INVALIDATE     0x0010
#define PCI_ENABLE_VGA_COMPATIBLE_PALETTE   0x0020
#define PCI_ENABLE_PARITY                   0x0040  // (ro+)
#define PCI_ENABLE_WAIT_CYCLE               0x0080  // (ro+)
#define PCI_ENABLE_SERR                     0x0100  // (ro+)
#define PCI_ENABLE_FAST_BACK_TO_BACK        0x0200  // (ro)

//
// Bit encodings for PCI_COMMON_CONFIG.Status
//

#define PCI_STATUS_FAST_BACK_TO_BACK        0x0080  // (ro)
#define PCI_STATUS_DATA_PARITY_DETECTED     0x0100
#define PCI_STATUS_DEVSEL                   0x0600  // 2 bits wide
#define PCI_STATUS_SIGNALED_TARGET_ABORT    0x0800
#define PCI_STATUS_RECEIVED_TARGET_ABORT    0x1000
#define PCI_STATUS_RECEIVED_MASTER_ABORT    0x2000
#define PCI_STATUS_SIGNALED_SYSTEM_ERROR    0x4000
#define PCI_STATUS_DETECTED_PARITY_ERROR    0x8000

//
// Base Class Code encodings for Base Class (from PCI spec rev 2.1).
//

#define PCI_CLASS_PRE_20                    0x00
#define PCI_CLASS_MASS_STORAGE_CTLR         0x01
#define PCI_CLASS_NETWORK_CTLR              0x02
#define PCI_CLASS_DISPLAY_CTLR              0x03
#define PCI_CLASS_MULTIMEDIA_DEV            0x04
#define PCI_CLASS_MEMORY_CTLR               0x05
#define PCI_CLASS_BRIDGE_DEV                0x06
#define PCI_CLASS_SIMPLE_COMMS_CTLR         0x07
#define PCI_CLASS_BASE_SYSTEM_DEV           0x08
#define PCI_CLASS_INPUT_DEV                 0x09
#define PCI_CLASS_DOCKING_STATION           0x0a
#define PCI_CLASS_PROCESSOR                 0x0b
#define PCI_CLASS_SERIAL_BUS_CTLR           0x0c

// 0d thru fe reserved

#define PCI_CLASS_NOT_DEFINED               0xff

//
// Sub Class Code encodings (PCI rev 2.1).
//

// Class 00 - PCI_CLASS_PRE_20

#define PCI_SUBCLASS_PRE_20_NON_VGA         0x00
#define PCI_SUBCLASS_PRE_20_VGA             0x01

// Class 01 - PCI_CLASS_MASS_STORAGE_CTLR

#define PCI_SUBCLASS_MSC_SCSI_BUS_CTLR      0x00
#define PCI_SUBCLASS_MSC_IDE_CTLR           0x01
#define PCI_SUBCLASS_MSC_FLOPPY_CTLR        0x02
#define PCI_SUBCLASS_MSC_IPI_CTLR           0x03
#define PCI_SUBCLASS_MSC_RAID_CTLR          0x04
#define PCI_SUBCLASS_MSC_OTHER              0x80

// Class 02 - PCI_CLASS_NETWORK_CTLR

#define PCI_SUBCLASS_NET_ETHERNET_CTLR      0x00
#define PCI_SUBCLASS_NET_TOKEN_RING_CTLR    0x01
#define PCI_SUBCLASS_NET_FDDI_CTLR          0x02
#define PCI_SUBCLASS_NET_ATM_CTLR           0x03
#define PCI_SUBCLASS_NET_OTHER              0x80

// Class 03 - PCI_CLASS_DISPLAY_CTLR

// N.B. Sub Class 00 could be VGA or 8514 depending on Interface byte

#define PCI_SUBCLASS_VID_VGA_CTLR           0x00
#define PCI_SUBCLASS_VID_XGA_CTLR           0x01
#define PCI_SUBCLASS_VID_OTHER              0x80

// Class 04 - PCI_CLASS_MULTIMEDIA_DEV

#define PCI_SUBCLASS_MM_VIDEO_DEV           0x00
#define PCI_SUBCLASS_MM_AUDIO_DEV           0x01
#define PCI_SUBCLASS_MM_OTHER               0x80

// Class 05 - PCI_CLASS_MEMORY_CTLR

#define PCI_SUBCLASS_MEM_RAM                0x00
#define PCI_SUBCLASS_MEM_FLASH              0x01
#define PCI_SUBCLASS_MEM_OTHER              0x80

// Class 06 - PCI_CLASS_BRIDGE_DEV

#define PCI_SUBCLASS_BR_HOST                0x00
#define PCI_SUBCLASS_BR_ISA                 0x01
#define PCI_SUBCLASS_BR_EISA                0x02
#define PCI_SUBCLASS_BR_MCA                 0x03
#define PCI_SUBCLASS_BR_PCI_TO_PCI          0x04
#define PCI_SUBCLASS_BR_PCMCIA              0x05
#define PCI_SUBCLASS_BR_NUBUS               0x06
#define PCI_SUBCLASS_BR_CARDBUS             0x07
#define PCI_SUBCLASS_BR_OTHER               0x80

// Class 07 - PCI_CLASS_SIMPLE_COMMS_CTLR

// N.B. Sub Class 00 and 01 additional info in Interface byte

#define PCI_SUBCLASS_COM_SERIAL             0x00
#define PCI_SUBCLASS_COM_PARALLEL           0x01
#define PCI_SUBCLASS_COM_OTHER              0x80

// Class 08 - PCI_CLASS_BASE_SYSTEM_DEV

// N.B. See Interface byte for additional info.

#define PCI_SUBCLASS_SYS_INTERRUPT_CTLR     0x00
#define PCI_SUBCLASS_SYS_DMA_CTLR           0x01
#define PCI_SUBCLASS_SYS_SYSTEM_TIMER       0x02
#define PCI_SUBCLASS_SYS_REAL_TIME_CLOCK    0x03
#define PCI_SUBCLASS_SYS_OTHER              0x80

// Class 09 - PCI_CLASS_INPUT_DEV

#define PCI_SUBCLASS_INP_KEYBOARD           0x00
#define PCI_SUBCLASS_INP_DIGITIZER          0x01
#define PCI_SUBCLASS_INP_MOUSE              0x02
#define PCI_SUBCLASS_INP_OTHER              0x80

// Class 0a - PCI_CLASS_DOCKING_STATION

#define PCI_SUBCLASS_DOC_GENERIC            0x00
#define PCI_SUBCLASS_DOC_OTHER              0x80

// Class 0b - PCI_CLASS_PROCESSOR

#define PCI_SUBCLASS_PROC_386               0x00
#define PCI_SUBCLASS_PROC_486               0x01
#define PCI_SUBCLASS_PROC_PENTIUM           0x02
#define PCI_SUBCLASS_PROC_ALPHA             0x10
#define PCI_SUBCLASS_PROC_POWERPC           0x20
#define PCI_SUBCLASS_PROC_COPROCESSOR       0x40

// Class 0c - PCI_CLASS_SERIAL_BUS_CTLR

#define PCI_SUBCLASS_SB_IEEE1394            0x00
#define PCI_SUBCLASS_SB_ACCESS              0x01
#define PCI_SUBCLASS_SB_SSA                 0x02
#define PCI_SUBCLASS_SB_USB                 0x03
#define PCI_SUBCLASS_SB_FIBRE_CHANNEL       0x04




//
// Bit encodes for PCI_COMMON_CONFIG.u.type0.BaseAddresses
//

#define PCI_ADDRESS_IO_SPACE                0x00000001  // (ro)
#define PCI_ADDRESS_MEMORY_SPACE            0x00000000
#define PCI_ADDRESS_MEMORY_TYPE_MASK        0x00000006  // (ro)
#define PCI_ADDRESS_MEMORY_PREFETCHABLE     0x00000008  // (ro)

#define PCI_ADDRESS_IO_ADDRESS_MASK         0xfffffffc
#define PCI_ADDRESS_MEMORY_ADDRESS_MASK     0xfffffff0
#define PCI_ADDRESS_ROM_ADDRESS_MASK        0xfffff800

#define PCI_TYPE_32BIT      0
#define PCI_TYPE_20BIT      2
#define PCI_TYPE_64BIT      4

//
// Bit encodes for PCI_COMMON_CONFIG.u.type0.ROMBaseAddresses
//

#define PCI_ROMADDRESS_ENABLED              0x00000001

//
// ISA PnP Structures
//

typedef struct  _ISA_PNP_LOGICAL_DEVICE_INFO
{
    DWORD   LogicalDeviceID;
    DWORD   CompatibleIDs[8];
}   ISA_PNP_LOGICAL_DEVICE_INFO, *PISA_PNP_LOGICAL_DEVICE_INFO;

typedef struct  _ISA_PNP_CONFIG
{
    DWORD                           VendorID;
    DWORD                           SerialNumber;
    DWORD                           NumberLogicalDevices;
    ISA_PNP_LOGICAL_DEVICE_INFO     LogicalDeviceInfo[8];
}   ISA_PNP_CONFIG, *PISA_PNP_CONFIG;

typedef struct  _ISA_PNP_RESOURCES
{
    USHORT                          Flags;
    struct
    {
        USHORT      MemoryBase;
        USHORT      MemoryUpperLimit;
        UCHAR       MemoryControl;
    }                               Memory24Descriptors[4];
    struct
    {
        DWORD       MemoryBase;
        DWORD       MemoryUpperLimit;
        UCHAR       MemoryControl;
    }                               Memory32Descriptors[4];
    USHORT                          IoPortDescriptors[8];
    struct
    {
        UCHAR       IRQLevel;
        UCHAR       IRQType;
    }                               IRQDescriptors[2];
    UCHAR                           DMADescriptors[2];
}   ISA_PNP_RESOURCES, *PISA_PNP_RESOURCES;

#define ISA_PNP_RESOURCE_FLAG_ACTIVE    0x00000001

//++
//
// ULONG
// ROUND_TO_PAGES (
//     IN ULONG Size
//     )
//
// Routine Description:
//
//     The ROUND_TO_PAGES macro takes a size in bytes and rounds it up to a
//     multiple of the page size.
//
//     NOTE: This macro fails for values 0xFFFFFFFF - (PAGE_SIZE - 1).
//
// Arguments:
//
//     Size - Size in bytes to round up to a page multiple.
//
// Return Value:
//
//     Returns the size rounded up to a multiple of the page size.
//
//--

#define ROUND_TO_PAGES(Size)  (((ULONG)(Size) + PAGE_SIZE - 1) & ~(PAGE_SIZE - 1))

//++
//
// ULONG
// BYTES_TO_PAGES (
//     IN ULONG Size
//     )
//
// Routine Description:
//
//     The BYTES_TO_PAGES macro takes the size in bytes and calculates the
//     number of pages required to contain the bytes.
//
// Arguments:
//
//     Size - Size in bytes.
//
// Return Value:
//
//     Returns the number of pages required to contain the specified size.
//
//--

#define BYTES_TO_PAGES(Size)  (((ULONG)(Size) >> PAGE_SHIFT) + \
                               (((ULONG)(Size) & (PAGE_SIZE - 1)) != 0))

//++
//
// ULONG
// BYTE_OFFSET (
//     IN PVOID Va
//     )
//
// Routine Description:
//
//     The BYTE_OFFSET macro takes a virtual address and returns the byte offset
//     of that address within the page.
//
// Arguments:
//
//     Va - Virtual address.
//
// Return Value:
//
//     Returns the byte offset portion of the virtual address.
//
//--

#define BYTE_OFFSET(Va) ((ULONG)(Va) & (PAGE_SIZE - 1))


//++
//
// PVOID
// PAGE_ALIGN (
//     IN PVOID Va
//     )
//
// Routine Description:
//
//     The PAGE_ALIGN macro takes a virtual address and returns a page-aligned
//     virtual address for that page.
//
// Arguments:
//
//     Va - Virtual address.
//
// Return Value:
//
//     Returns the page aligned virtual address.
//
//--

#define PAGE_ALIGN(Va) ((PVOID)((ULONG)(Va) & ~(PAGE_SIZE - 1)))


//++
//
// ULONG
// ADDRESS_AND_SIZE_TO_SPAN_PAGES (
//     IN PVOID Va,
//     IN ULONG Size
//     )
//
// Routine Description:
//
//     The ADDRESS_AND_SIZE_TO_SPAN_PAGES macro takes a virtual address and
//     size and returns the number of pages spanned by the size.
//
// Arguments:
//
//     Va - Virtual address.
//
//     Size - Size in bytes.
//
// Return Value:
//
//     Returns the number of pages spanned by the size.
//
// Notes:
//
//     Do not call with a Size of zero, since it sometimes will return 1
//     instead of 0 for the number of pages.
//
//--

#define COMPUTE_PAGES_SPANNED(Va, Size) \
    ((((ULONG)(Va) & (PAGE_SIZE - 1)) + (Size) + (PAGE_SIZE - 1)) >> PAGE_SHIFT)

#define ADDRESS_AND_SIZE_TO_SPAN_PAGES(Va, Size) \
   COMPUTE_PAGES_SPANNED((Va), (Size))



// OEM IOCTL codes for IOCTL_HAL_DDK_CALL calls.
//
#define IOCTL_HAL_SETBUSDATA    0x01
#define IOCTL_HAL_GETBUSDATA    0x02

// Used by HalSetBusDataByOffset & HalGetBusDataByOffset when calling OAL.
//
typedef struct  __BUSDATA_PARMS
{
    IN  DWORD Function;    // Which function (IOCTL_HAL_GETBUSDATA/SETBUSDATA)
    OUT ULONG ReturnCode;  // Return code from the function
    IN  BUS_DATA_TYPE BusDataType;
    IN  ULONG BusNumber;
    IN  ULONG SlotNumber;
    IN  PVOID Buffer;
    IN  ULONG Offset;
    IN  ULONG Length;
} BUSDATA_PARMS, *PBUSDATA_PARMS;


NTKERNELAPI
PVOID
MmMapIoSpace (
    IN PHYSICAL_ADDRESS PhysicalAddress,
    IN ULONG NumberOfBytes,
    IN BOOLEAN CacheEnable
    );

NTKERNELAPI
VOID
MmUnmapIoSpace (
    IN PVOID BaseAddress,
    IN ULONG NumberOfBytes
    );

NTKERNELAPI
BOOL
TransBusAddrToVirtual(
    IN INTERFACE_TYPE InterfaceType,
    IN ULONG BusNumber,
    IN PHYSICAL_ADDRESS BusAddress,
    IN ULONG Length,
    IN OUT PULONG AddressSpace,
    OUT PPVOID MappedAddress
    );

NTKERNELAPI
BOOL
TransBusAddrToStatic(
    IN INTERFACE_TYPE InterfaceType,
    IN ULONG BusNumber,
    IN PHYSICAL_ADDRESS BusAddress,
    IN ULONG Length,
    IN OUT PULONG AddressSpace,
    OUT PPVOID MappedAddress
    );
    
//
// I/O driver configuration functions.
//

NTHALAPI
ULONG
HalGetBusDataByOffset(
    IN BUS_DATA_TYPE BusDataType,
    IN ULONG BusNumber,
    IN ULONG SlotNumber,
    IN PVOID Buffer,
    IN ULONG Offset,
    IN ULONG Length
    );

ULONG __inline
HalGetBusData(
    IN BUS_DATA_TYPE BusDataType,
    IN ULONG BusNumber,
    IN ULONG SlotNumber,
    IN PVOID Buffer,
    IN ULONG Length
    )
{
    return HalGetBusDataByOffset(
        BusDataType, BusNumber, SlotNumber, Buffer, 0, Length);
}

NTHALAPI
ULONG
HalSetBusDataByOffset(
    IN BUS_DATA_TYPE BusDataType,
    IN ULONG BusNumber,
    IN ULONG SlotNumber,
    IN PVOID Buffer,
    IN ULONG Offset,
    IN ULONG Length
    );

ULONG __inline
HalSetBusData(
    IN BUS_DATA_TYPE BusDataType,
    IN ULONG BusNumber,
    IN ULONG SlotNumber,
    IN PVOID Buffer,
    IN ULONG Length
    )
{
    return HalSetBusDataByOffset(
        BusDataType, BusNumber, SlotNumber, Buffer, 0, Length);
}

NTHALAPI
BOOLEAN
HalTranslateBusAddress(
    IN INTERFACE_TYPE  InterfaceType,
    IN ULONG BusNumber,
    IN PHYSICAL_ADDRESS BusAddress,
    IN OUT PULONG AddressSpace,
    OUT PPHYSICAL_ADDRESS TranslatedAddress
    );

NTHALAPI
BOOLEAN
HalTranslateSystemAddress(
    IN  INTERFACE_TYPE    InterfaceType,
    IN  ULONG             BusNumber,
    IN  PHYSICAL_ADDRESS  SystemAddress,
    OUT PPHYSICAL_ADDRESS TranslatedAddress
    );


//
// DMA Adapter Description
//
typedef struct _DMA_ADAPTER_OBJECT_
{
    USHORT ObjectSize;                  // Size of structure (versioning).
    INTERFACE_TYPE InterfaceType;       // Adapter bus interface.
    ULONG BusNumber;                    // Adapter bus number.
} DMA_ADAPTER_OBJECT, *PDMA_ADAPTER_OBJECT;

//
// DMA functions.
//
NTHALAPI
PVOID
HalAllocateCommonBuffer(
    IN  PDMA_ADAPTER_OBJECT       Adapter,
    IN  ULONG              Length,
    OUT PPHYSICAL_ADDRESS  LogicalAddress,
    IN  BOOLEAN            CacheEnabled
    );

NTHALAPI
VOID
HalFreeCommonBuffer(
    IN PDMA_ADAPTER_OBJECT      Adapter,
    IN ULONG             Length,
    IN PHYSICAL_ADDRESS  LogicalAddress,
    IN PVOID             VirtualAddress,
    IN BOOLEAN           CacheEnabled
    );

//
// I/O space read and write macros.
//
//  These are implemented as functions in ceddk.dll, since only the platform
//  architect knows for sure how the peripherals are mapped to the chip.  An
//  appropriate DLL must then be written for each platform.
//
//  The READ/WRITE_REGISTER_* calls manipulate I/O registers in MEMORY space.
//  (Use x86 move instructions, with LOCK prefix to force correct behavior
//   w.r.t. caches and write buffers.)
//
//  The READ/WRITE_PORT_* calls manipulate I/O registers in PORT space.
//  (Use x86 in/out instructions.)
//

// 
// Use inline/macro versions of these APIs only when (a) performance is critical and
// (b) the underlying platform supports their use.
//

#ifdef CEDDK_USEDDKMACRO

#include <ddkmacro.h>

#else       // CEDDK_USEDDKMACRO

NTKERNELAPI
UCHAR
READ_REGISTER_UCHAR(
    PUCHAR  Register
    );

NTKERNELAPI
USHORT
READ_REGISTER_USHORT(
    PUSHORT Register
    );

NTKERNELAPI
ULONG
READ_REGISTER_ULONG(
    PULONG  Register
    );

NTKERNELAPI
VOID
READ_REGISTER_BUFFER_UCHAR(
    PUCHAR  Register,
    PUCHAR  Buffer,
    ULONG   Count
    );

NTKERNELAPI
VOID
READ_REGISTER_BUFFER_USHORT(
    PUSHORT Register,
    PUSHORT Buffer,
    ULONG   Count
    );

NTKERNELAPI
VOID
READ_REGISTER_BUFFER_ULONG(
    PULONG  Register,
    PULONG  Buffer,
    ULONG   Count
    );


NTKERNELAPI
VOID
WRITE_REGISTER_UCHAR(
    PUCHAR  Register,
    UCHAR   Value
    );

NTKERNELAPI
VOID
WRITE_REGISTER_USHORT(
    PUSHORT Register,
    USHORT  Value
    );

NTKERNELAPI
VOID
WRITE_REGISTER_ULONG(
    PULONG  Register,
    ULONG   Value
    );

NTKERNELAPI
VOID
WRITE_REGISTER_BUFFER_UCHAR(
    PUCHAR  Register,
    PUCHAR  Buffer,
    ULONG   Count
    );

NTKERNELAPI
VOID
WRITE_REGISTER_BUFFER_USHORT(
    PUSHORT Register,
    PUSHORT Buffer,
    ULONG   Count
    );

NTKERNELAPI
VOID
WRITE_REGISTER_BUFFER_ULONG(
    PULONG  Register,
    PULONG  Buffer,
    ULONG   Count
    );

NTKERNELAPI
UCHAR
READ_PORT_UCHAR(
    PUCHAR  Port
    );

NTKERNELAPI
USHORT
READ_PORT_USHORT(
    PUSHORT Port
    );

NTKERNELAPI
ULONG
READ_PORT_ULONG(
    PULONG  Port
    );

NTKERNELAPI
VOID
READ_PORT_BUFFER_UCHAR(
    PUCHAR  Port,
    PUCHAR  Buffer,
    ULONG   Count
    );

NTKERNELAPI
VOID
READ_PORT_BUFFER_USHORT(
    PUSHORT Port,
    PUSHORT Buffer,
    ULONG   Count
    );

NTKERNELAPI
VOID
READ_PORT_BUFFER_ULONG(
    PULONG  Port,
    PULONG  Buffer,
    ULONG   Count
    );

NTKERNELAPI
VOID
WRITE_PORT_UCHAR(
    PUCHAR  Port,
    UCHAR   Value
    );

NTKERNELAPI
VOID
WRITE_PORT_USHORT(
    PUSHORT Port,
    USHORT  Value
    );

NTKERNELAPI
VOID
WRITE_PORT_ULONG(
    PULONG  Port,
    ULONG   Value
    );

NTKERNELAPI
VOID
WRITE_PORT_BUFFER_UCHAR(
    PUCHAR  Port,
    PUCHAR  Buffer,
    ULONG   Count
    );

NTKERNELAPI
VOID
WRITE_PORT_BUFFER_USHORT(
    PUSHORT Port,
    PUSHORT Buffer,
    ULONG   Count
    );

NTKERNELAPI
VOID
WRITE_PORT_BUFFER_ULONG(
    PULONG  Port,
    PULONG  Buffer,
    ULONG   Count
    );

#endif      // CEDDK_USEDDKMACRO

//
// Definitions for Stall Execution
//
extern HANDLE g_hCalibrateThread;

typedef  LONG  (*pRegCloseKey) (     HKEY     );
#ifdef UNICODE

typedef 
LONG
(*pRegCreateKeyEx) (
    IN HKEY hKey,
    IN LPCWSTR lpSubKey,
    IN DWORD Reserved,
    IN LPWSTR lpClass,
    IN DWORD dwOptions,
    IN REGSAM samDesired,
    IN LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    OUT PHKEY phkResult,
    OUT LPDWORD lpdwDisposition
    );
#else
typedef 
LONG
(*pRegCreateKeyEx) (
    IN HKEY hKey,
    IN LPCSTR lpSubKey,
    IN DWORD Reserved,
    IN LPSTR lpClass,
    IN DWORD dwOptions,
    IN REGSAM samDesired,
    IN LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    OUT PHKEY phkResult,
    OUT LPDWORD lpdwDisposition
    );
#endif // !UNICODE

#ifdef UNICODE
typedef 
LONG
 (*pRegQueryValueEx) (
    IN HKEY hKey,
    IN LPCWSTR lpValueName,
    IN LPDWORD lpReserved,
    OUT LPDWORD lpType,
    IN OUT LPBYTE lpData,
    IN OUT LPDWORD lpcbData
    );
#else
typedef 
LONG
(*pRegQueryValueEx) (
    IN HKEY hKey,
    IN LPCSTR lpValueName,
    IN LPDWORD lpReserved,
    OUT LPDWORD lpType,
    IN OUT LPBYTE lpData,
    IN OUT LPDWORD lpcbData
    );
#endif

#ifdef UNICODE
typedef 
LONG
(*pRegQueryValueEx) (
    IN HKEY hKey,
    IN LPCWSTR lpValueName,
    IN LPDWORD lpReserved,
    OUT LPDWORD lpType,
    IN OUT LPBYTE lpData,
    IN OUT LPDWORD lpcbData
    );
#else
typedef 
LONG
(*pRegQueryValueEx) (
    IN HKEY hKey,
    IN LPCSTR lpValueName,
    IN LPDWORD lpReserved,
    OUT LPDWORD lpType,
    IN OUT LPBYTE lpData,
    IN OUT LPDWORD lpcbData
    );
#endif

#ifdef UNICODE
typedef 
LONG
(*pRegSetValueEx) (
    IN HKEY hKey,
    IN LPCWSTR lpValueName,
    IN DWORD Reserved,
    IN DWORD dwType,
    IN CONST BYTE* lpData,
    IN DWORD cbData
    );
#else
typedef 
LONG
(*pRegSetValueEx) (
    IN HKEY hKey,
    IN LPCSTR lpValueName,
    IN DWORD Reserved,
    IN DWORD dwType,
    IN CONST BYTE* lpData,
    IN DWORD cbData
    );
#endif 

void
StallOneMicrosecond(void);

BOOL  
BeginCalibration (HKEY hKey);

void
CalibrateStallCounter(void);

void 
StallExecution (DWORD dwMicroSec);

//------------------------------------------------------------------------------
// milli-second wait, use Sleep if possible
//
#include <pkfuncs.h>
#define MAX_STALL   (0x3fffffff/1000)
__inline void DDKDriverSleep (DWORD dwMilliSecond)
{
    if (IsInPwrHdlr ()) {
        DWORD dwMs;
        while (dwMilliSecond) {
            dwMs = (dwMilliSecond > MAX_STALL)? MAX_STALL : dwMilliSecond;
            StallExecution (dwMs * 1000);   // stall execution is in micro-second
            dwMilliSecond -= dwMs;
        }
    } else {
        Sleep (dwMilliSecond);
    }
}


#include <pm.h>
#include <CeBus.h>

HANDLE  CreateBusAccessHandle(LPCTSTR lpActiveRegPath);
VOID    CloseBusAccessHandle(HANDLE hBusAccess);
BOOL    SetDevicePowerState(HANDLE hBusAccess, CEDEVICE_POWER_STATE PowerState,PVOID pReserved);
BOOL    GetDevicePowerState(HANDLE hBusAccess, PCEDEVICE_POWER_STATE pPowerState,PVOID pReserved);
BOOL    TranslateBusAddr(HANDLE hBusAccess,
            INTERFACE_TYPE  InterfaceType,ULONG BusNumber,PHYSICAL_ADDRESS BusAddress,PULONG AddressSpace,PPHYSICAL_ADDRESS TranslatedAddress );
BOOL    TranslateSystemAddr(HANDLE hBusAccess,
            INTERFACE_TYPE  InterfaceType,ULONG BusNumber,PHYSICAL_ADDRESS SystemAddress,PPHYSICAL_ADDRESS TranslatedAddress );

ULONG   SetDeviceConfigurationData(HANDLE hBusAccess,
            DWORD dwSpace,DWORD BusNumber, DWORD SlotNumber,DWORD dwOffset, DWORD dwLength, PVOID pBuffer);
ULONG   GetDeviceConfigurationData(HANDLE hBusAccess,
            DWORD dwSpace,DWORD BusNumber, DWORD SlotNumber,DWORD dwOffset, DWORD dwLength, PVOID pBuffer);
BOOL    GetParentDeviceInfo(HANDLE hBusAccess, PDEVMGR_DEVICE_INFORMATION pDeviceInfo);

BOOL    GetChildDeviceRemoveState(HANDLE hBusAccess, PDWORD lpdChildDeviceState);
BOOL    GetBusNamePrefix(HANDLE hBusAccess, LPTSTR lpReturnStr,DWORD dwSizeInCharacters);
BOOL    BusTransBusAddrToVirtual( IN HANDLE hBusAccess,IN INTERFACE_TYPE InterfaceType,IN ULONG BusNumber, IN PHYSICAL_ADDRESS BusAddress, IN ULONG Length,IN OUT PULONG AddressSpace, OUT PPVOID MappedAddress);
BOOL    BusTransBusAddrToStatic(IN HANDLE hBusAccess,IN INTERFACE_TYPE InterfaceType, IN ULONG BusNumber,IN PHYSICAL_ADDRESS BusAddress, IN ULONG Length, IN OUT PULONG AddressSpace, OUT PPVOID MappedAddress);
BOOL    BusIoControl(HANDLE hBusAccess, DWORD dwIoControlCode, LPVOID lpInBuffer, DWORD nInBufferSize, LPVOID lpOutBuffer, DWORD nOutBufferSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped);

///////////////////////////////////////////////////////////////////////////////
// DRIVERHELPER_POWER library
///////////////////////////////////////////////////////////////////////////////

typedef CEDEVICE_POWER_STATE (*PFN_SETPOWERLEVEL)( DWORD, CEDEVICE_POWER_STATE );
typedef void (*PFN_SETPOWERLEVELCALLBACK)( DWORD, CEDEVICE_POWER_STATE );

// lock mechanism initialization/cleanup
HANDLE DDKPwr_Initialize( PFN_SETPOWERLEVEL pSetPowerLevelFn, DWORD dwContext, BOOL fAbortOnPMRequests, DWORD dwTimeout );
void   DDKPwr_Deinitialize( HANDLE hPowerLock );

// power level lock acquire/release
HANDLE DDKPwr_RequestLevel( HANDLE hPowerLock, CEDEVICE_POWER_STATE dx );
void   DDKPwr_ReleaseLevel( HANDLE hPowerLock, HANDLE hLevelLock );

// power level get/set
CEDEVICE_POWER_STATE DDKPwr_GetDeviceLevel( HANDLE hPowerLock );
BOOL DDKPwr_SetDeviceLevel( HANDLE hPowerLock, CEDEVICE_POWER_STATE dx, PFN_SETPOWERLEVELCALLBACK pCallbackFn );

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _CEDDK_

