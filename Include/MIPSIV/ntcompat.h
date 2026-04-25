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
THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
PARTICULAR PURPOSE.

Module Name:  

ntcompat.h

Abstract:

Compatiblity defines for CE NDIS drivers

Notes: 


--*/
#ifndef _NTCOMPAT_H_
#define _NTCOMPAT_H_

#include <windows.h>

#include <wdm.h>
#include <resmgr.h>

//
//	Determine if the active thread owns the critical section
//
#define OWN_CRITSEC(CS)	((CS)->OwnerThread == (HANDLE)GetCurrentThreadId())

#ifdef __cplusplus
extern "C" {
#endif

typedef CONST char *PCSZ;

typedef char CCHAR, *PCCHAR;
typedef short CSHORT, *PCSHORT;
typedef ULONG CLONG, *PCLONG;

typedef STRING ANSI_STRING, *PANSI_STRING;
typedef STRING OEM_STRING, *POEM_STRING;
typedef STRING CANSI_STRING;
typedef PSTRING PCANSI_STRING;

typedef LARGE_INTEGER PHYSICAL_ADDRESS, *PPHYSICAL_ADDRESS;


/* resources */
/* bit masks for Flags when type is CmResourceTypeInterrupt */
#define CM_RESOURCE_INTERRUPT_LEVEL_SENSITIVE   0
#define CM_RESOURCE_INTERRUPT_LATCHED           1

/* bit masks for Flags when type is CmResourceTypeMemory */
#define CM_RESOURCE_MEMORY_READ_WRITE           0x0000
#define CM_RESOURCE_MEMORY_READ_ONLY            0x0001
#define CM_RESOURCE_MEMORY_WRITE_ONLY           0x0002
#define CM_RESOURCE_MEMORY_PREFETCHABLE         0x0004
#define CM_RESOURCE_MEMORY_COMBINEDWRITE        0x0008
#define CM_RESOURCE_MEMORY_24                   0x0010

/* bit masks for Flags when type is CmResourceTypePort */
#define CM_RESOURCE_PORT_MEMORY                 0
#define CM_RESOURCE_PORT_IO                     1

/* bit masks for Flags when type is CmResourceTypeDma */
#define CM_RESOURCE_DMA_8                       0x0000
#define CM_RESOURCE_DMA_16                      0x0001
#define CM_RESOURCE_DMA_32                      0x0002

/* resource options */
#define IO_RESOURCE_PREFERRED                   0x01
#define IO_RESOURCE_DEFAULT                     0x02
#define IO_RESOURCE_ALTERNATIVE                 0x08

typedef enum _CM_RESOURCE_TYPE {
          CmResourceTypeNull = 0,
          CmResourceTypePort,
          CmResourceTypeInterrupt,
          CmResourceTypeMemory,
          CmResourceTypeDma,
          CmResourceTypeDeviceSpecific,
          CmResourceTypeMaximum
        } CM_RESOURCE_TYPE;

typedef enum _CM_SHARE_DISPOSITION {
          CmResourceShareUndetermined = 0,
          CmResourceShareDeviceExclusive,
          CmResourceShareDriverExclusive,
          CmResourceShareShared
        } CM_SHARE_DISPOSITION;

typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
          UCHAR Type;
          UCHAR ShareDisposition;
          USHORT Flags;
          union {
            struct {
              PHYSICAL_ADDRESS  Start;
              ULONG             Length;
            } Port;

            struct {
              ULONG             Level;
              ULONG             Vector;
              ULONG             Affinity;
            } Interrupt;

            struct {
              PHYSICAL_ADDRESS  Start;
              ULONG             Length;
            } Memory;

            struct {
              ULONG             Channel;
              ULONG             Port;
              ULONG             Reserved1;
            } Dma;

            struct {
              ULONG             DataSize;
              ULONG             Reserved1;
              ULONG             Reserved2;
            } DeviceSpecificData;
          } u;
        } CM_PARTIAL_RESOURCE_DESCRIPTOR, *PCM_PARTIAL_RESOURCE_DESCRIPTOR;

typedef struct _CM_PARTIAL_RESOURCE_LIST {
          USHORT                Version;
          USHORT                Revision;
          ULONG                 Count;
          CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
        } CM_PARTIAL_RESOURCE_LIST, *PCM_PARTIAL_RESOURCE_LIST;

typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
          INTERFACE_TYPE        InterfaceType;
          ULONG                 BusNumber;
          CM_PARTIAL_RESOURCE_LIST PartialResourceList;
        } CM_FULL_RESOURCE_DESCRIPTOR, *PCM_FULL_RESOURCE_DESCRIPTOR;

typedef struct _CM_RESOURCE_LIST {
          ULONG                 Count;
          CM_FULL_RESOURCE_DESCRIPTOR List[1];
        } CM_RESOURCE_LIST, *PCM_RESOURCE_LIST;

typedef struct _IO_RESOURCE_DESCRIPTOR {
          UCHAR                 Option;
          UCHAR                 Type;
          UCHAR                 ShareDisposition;
          UCHAR                 Spare1;
          USHORT                Flags;
          USHORT                Spare2;

          union {
            struct {
              ULONG             Length;
              ULONG             Alignment;
              PHYSICAL_ADDRESS  MinimumAddress;
              PHYSICAL_ADDRESS  MaximumAddress;
            } Port;

            struct {
              ULONG             Length;
              ULONG             Alignment;
              PHYSICAL_ADDRESS  MinimumAddress;
              PHYSICAL_ADDRESS  MaximumAddress;
            } Memory;

            struct {
              ULONG             MinimumVector;
              ULONG             MaximumVector;
            } Interrupt;

            struct {
              ULONG             MinimumChannel;
              ULONG             MaximumChannel;
            } Dma;

        } u;
      } IO_RESOURCE_DESCRIPTOR, *PIO_RESOURCE_DESCRIPTOR;

typedef struct _IO_RESOURCE_LIST {
          USHORT                Version;
          USHORT                Revision;
          ULONG                 Count;
          IO_RESOURCE_DESCRIPTOR Descriptors[1];
        } IO_RESOURCE_LIST, *PIO_RESOURCE_LIST;

typedef struct _IO_RESOURCE_REQUIREMENTS_LIST {
          ULONG                 ListSize;
          INTERFACE_TYPE        InterfaceType;
          ULONG                 BusNumber;
          ULONG                 SlotNumber;
          ULONG                 Reserved[3];
          ULONG                 AlternativeLists;
          IO_RESOURCE_LIST      List[1];
        } IO_RESOURCE_REQUIREMENTS_LIST, *PIO_RESOURCE_REQUIREMENTS_LIST;



#ifndef _WDMDDK_
typedef struct _DRIVER_OBJECT {
          HANDLE                ObjectHandle;
          UNICODE_STRING        DriverName;
          UNICODE_STRING        RegistryPath;
          UNICODE_STRING        ImagePath;
        } DRIVER_OBJECT, *PDRIVER_OBJECT;

typedef struct _DEVICE_OBJECT {
          CSHORT                Type;
          USHORT                Size;
          LONG                  ReferenceCount;
          PDRIVER_OBJECT        DriverObject;
          struct _DEVICE_OBJECT *NextDevice;
          struct _DEVICE_OBJECT *AttachedDevice;
        } DEVICE_OBJECT, *PDEVICE_OBJECT;
#endif


#define UNICODE_NULL ((WCHAR)0)

#if defined(BINARY_COMPATIBLE) && !defined(PopEntryList)
/* singly-linked list manipulation routines */
/*++
PSINGLE_LIST_ENTRY
PopEntryList(
  PSINGLE_LIST_ENTRY ListHead
)
--*/
#define PopEntryList(_ListHead) \
          (_ListHead)->Next; \
          { \
            PSINGLE_LIST_ENTRY _FirstEntry = (_ListHead)->Next; \
            if (_FirstEntry != NULL) \
              (_ListHead)->Next = _FirstEntry->Next; \
          }

/*++
VOID
PushEntryList(
  PSINGLE_LIST_ENTRY ListHead,
  PSINGLE_LIST_ENTRY Entry
)
--*/
#define PushEntryList(_ListHead, _Entry) \
        { \
          (_Entry)->Next = (_ListHead)->Next; \
          (_ListHead)->Next = _Entry; \
        }
#endif

#if defined(BINARY_COMPATIBLE) && !defined(InitializeListHead)
/* doubly-linked list manipulation routines */
/*++
VOID
InitializeListHead(
  PLIST_ENTRY ListHead
)
--*/
#define InitializeListHead(_ListHead) \
          ((_ListHead)->Flink = (_ListHead)->Blink = _ListHead)

/*++
BOOLEAN
IsListEmpty(
  PLIST_ENTRY ListHead
)
--*/
#define IsListEmpty(_ListHead)   ((_ListHead)->Flink == _ListHead)

/*++
PLIST_ENTRY
RemoveHeadList(
  PLIST_ENTRY ListHead
)
--*/
#define RemoveHeadList(_ListHead) \
          (_ListHead)->Flink; \
          RemoveEntryList((_ListHead)->Flink)

/*++
PLIST_ENTRY
RemoveTailList(
  PLIST_ENTRY ListHead
)
--*/
#define RemoveTailList(_ListHead) \
          (_ListHead)->Blink; \
          RemoveEntryList((_ListHead)->Blink)

/*++
VOID
RemoveEntryList(
  PLIST_ENTRY Entry
)
--*/
#define RemoveEntryList(_Entry) \
        { \
          PLIST_ENTRY _EX_Flink = (_Entry)->Flink; \
          PLIST_ENTRY _EX_Blink = (_Entry)->Blink; \
          _EX_Blink->Flink = _EX_Flink; \
          _EX_Flink->Blink = _EX_Blink; \
        }

/*++
VOID
InsertTailList(
  PLIST_ENTRY ListHead,
  PLIST_ENTRY Entry
)
--*/
#define InsertTailList(_ListHead, _Entry) \
        { \
          PLIST_ENTRY _EX_ListHead = _ListHead; \
          PLIST_ENTRY _EX_Blink = _EX_ListHead->Blink; \
          (_Entry)->Flink = _EX_ListHead; \
          (_Entry)->Blink = _EX_Blink; \
          _EX_Blink->Flink = _Entry; \
          _EX_ListHead->Blink = _Entry; \
        }

/*++
VOID
InsertHeadList(
  PLIST_ENTRY ListHead,
  PLIST_ENTRY Entry
)
--*/
#define InsertHeadList(_ListHead, _Entry) \
        { \
          PLIST_ENTRY _EX_ListHead = _ListHead; \
          PLIST_ENTRY _EX_Flink = _EX_ListHead->Flink; \
          (_Entry)->Flink = _EX_Flink; \
          (_Entry)->Blink = _EX_ListHead; \
          _EX_Flink->Blink = _Entry; \
          _EX_ListHead->Flink = _Entry; \
        }
#endif

///// cedriver.c

//
// Define driver unload routine type.
//

typedef
VOID
(*PCEDRIVER_UNLOAD) (
    IN struct _CEDRIVER_OBJECT *DriverObject
    );

//
// Structure used to track miniport driver objects
//
typedef struct _CEDRIVER_OBJECT
{
	struct _CEDRIVER_OBJECT *Next;
	HANDLE					DllHandle;
	UNICODE_STRING			DriverName;
	UNICODE_STRING			RegistryPath;
	PVOID					DriverObjectExtension; // Only support one of these
	DWORD					cbDriverObjectExtension;
	int						refCnt;
    PCEDRIVER_UNLOAD		DriverUnload;

} CEDRIVER_OBJECT, *PCEDRIVER_OBJECT;

typedef
  DWORD
  (__stdcall *PFN_DRIVER_ENTRY)(
     IN PVOID Argument1,
     IN PVOID Argument2
  );


#define CEDRIVER_MAX_REGISTRY_PATH_CHARS	64
#define CEDRIVER_MAX_IMAGE_PATH_CHARS		128

PCEDRIVER_OBJECT
CeDriverLoad(
	IN PWSTR wszRegistryKey,
	IN PWSTR wszDriverName,
	IN PWSTR wszGroupName
	);

DWORD
CeDriverObjectExtensionAllocate(
	IN	PCEDRIVER_OBJECT	pCeDriverObject,
	IN	PVOID				extensionID,
	IN	size_t				extensionSize,
	OUT	PVOID				pExtension
	);

PVOID
CeDriverObjectExtensionGet(
	IN	PCEDRIVER_OBJECT	pCeDriverObject,
	IN	PVOID				extensionID
	);

PCEDRIVER_OBJECT
CeDriverFindObjectByName(
    IN	LPWSTR	wszDriverName
    );

NTSTATUS
CeDriverAddRef(
	IN	PCEDRIVER_OBJECT	pCeDriverObject);

NTSTATUS
CeDriverDelRef(
	IN	PCEDRIVER_OBJECT	pCeDriverObject);

VOID
CeDriverInitializeModule();

VOID
CeDriverDeinitializeModule();

///// cedevice.c 

/////////////////////////////
//	Device Object Management
/////////////////////////////

//
// Structure used to track device objects
//
typedef struct _CEDEVICE_OBJECT
{
	struct _CEDEVICE_OBJECT *Next;
	PWSTR					DeviceName;
	PCEDRIVER_OBJECT		DriverObject;
	int						BusType;
	int						BusNumber;
	PVOID					DeviceExtension; // Only support one of these
	LONG					cbDeviceExtension;
	HANDLE                  hBusAccessHandle;   //  for using bus APIs like
	                                            //  GetBusNamePrefix(), SetDeviceConfigurationData()...
	
} CEDEVICE_OBJECT, *PCEDEVICE_OBJECT;

NTSTATUS
CeDeviceCreate(
	IN	PCEDRIVER_OBJECT	 DriverObject,
	IN	LONG				 DeviceExtensionSize,
	IN	PUNICODE_STRING		 DeviceName OPTIONAL,
    OUT	PCEDEVICE_OBJECT	*DeviceObject
	);


NTSTATUS
CeDeviceDelete(
	IN	PCEDEVICE_OBJECT	 DeviceObject
	);

typedef NTSTATUS
  (*PDEVICE_ADD_ROUTINE)(
		IN	PCEDRIVER_OBJECT	 DriverObject,
		IN	PUNICODE_STRING		 DeviceName OPTIONAL,
		IN	PCEDEVICE_OBJECT	 PhysicalDeviceObject,
		IN	ULONG				 Characteristics,
		IN  HANDLE               hBusAccessHandle
  );

NTSTATUS
CeDeviceCreateDeviceForLoadedDriver(
	IN	PCEDRIVER_OBJECT		DriverObject,
	IN	PWSTR					DeviceName,			// e.g. "NE20001"
	IN	DWORD					BusType,			// e.g  PCMCIABus
	IN	DWORD					BusNumber,
	IN  PDEVICE_ADD_ROUTINE		pfnAddDevice,
	OUT	PCEDEVICE_OBJECT	   *pPhysicalDeviceObject,
    IN  HANDLE                  hBusAccessHandle);

NTSTATUS
CeDeviceLoadDriverAndCreateDevice(
	IN	PWSTR					wszRegistryKey,		// e.g. "Comm"
	IN	PWSTR					DriverName,			// e.g. "NE2000"
	IN	PWSTR					GroupName,			// e.g. "NDIS"
	IN	PWSTR					DeviceName,			// e.g. "NE20001"
	IN	DWORD					BusType,			// e.g  PCMCIABus
	IN	DWORD					BusNumber,
	IN  PDEVICE_ADD_ROUTINE		pfnAddDevice,
	OUT	PCEDEVICE_OBJECT	   *pPhysicalDeviceObject,
	IN  HANDLE                  hBusAccessHandle);

NTSTATUS
CeDeviceLoadDriverAndCreateNonPnPDevice(
	IN	PWSTR					wszRegistryKey,		// e.g. "\Comm"
	IN	PWSTR					DriverName,
	IN	PWSTR					GroupName,
	IN	PWSTR					DeviceName,
	IN  PDEVICE_ADD_ROUTINE		pfnAddDevice);

VOID
CeDeviceEnumerateFromRegistry(
	IN	PWSTR					wszRegistryKey,		// e.g. "\Comm"
	IN	PWSTR					wszGroup,			// e.g. "NDIS"
	IN  PDEVICE_ADD_ROUTINE		pfnAddDevice
	);

VOID
CeDeviceInitializeModule();

VOID
CeDeviceDeinitializeModule();

///// ceinterrupt.c

//
// Interrupt modes.
//

typedef enum _CEKINTERRUPT_MODE
{
    LevelSensitive,
    Latched
} CEKINTERRUPT_MODE;


typedef BOOLEAN (*PCEKSERVICE_ROUTINE)(struct _CEKINTERRUPT *, PVOID);

typedef void (*PSISTSERVICE_ROUTINE)(DWORD);

typedef struct _CEKINTERRUPT
{
	ULONG				InterruptId;
	HANDLE				hEvent;
	PCEKSERVICE_ROUTINE	ServiceRoutine;
	PVOID				ServiceContext;
	HANDLE				hServiceThread;
	BOOLEAN				bOpen;
	UINT				InterruptVector;
	BOOLEAN				bResourceRequested;
	HANDLE				hIsr;
} CEKINTERRUPT, *PCEKINTERRUPT;

NTSTATUS
CeConnectInterrupt(
	OUT			PCEKINTERRUPT		*pInterruptObject,
	IN			PCEKSERVICE_ROUTINE	ServiceRoutine,
	IN			PVOID				ServiceContext,
    IN			UINT                InterruptVector,
    IN			UINT                InterruptId,
	IN			CEKINTERRUPT_MODE	InterruptMode,
	IN			BOOLEAN				ShareVector,
	IN			DWORD				BusType,
	IN			UINT				InterruptThreadPriority,
	IN			PWSTR				 wszRegKey,
	IN			UINT				 SuperISTThreadPriority,	
    IN			PSISTSERVICE_ROUTINE SuperISTServiceRoutine	
	);


NTSTATUS
CeDisconnectInterrupt(
	IN	PCEKINTERRUPT	InterruptObject
	);

///// ceke.c

////////////////////////////////////
//		KeXxx emulation
////////////////////////////////////


#define KEVENT								HANDLE
#define	PKEVENT								PHANDLE

typedef CRITICAL_SECTION					KMUTEX, *PKMUTEX;								

typedef struct _KQUEUE
{
	CRITICAL_SECTION	lock;
	HANDLE				hEvent;
	LIST_ENTRY			list;

} KQUEUE, *PKQUEUE;

VOID
CeKeInitializeQueue (
    IN PKQUEUE Queue,
    IN ULONG Count OPTIONAL
    );
VOID
CeKeFreeQueue (
    IN PKQUEUE Queue
    );
LONG
CeKeInsertQueue(
	IN	PKQUEUE	pQueue,
	IN	PLIST_ENTRY	pEntry
	);
PLIST_ENTRY
CeKeRemoveQueue (
    IN PKQUEUE         pQueue,
    IN PLARGE_INTEGER  Timeout OPTIONAL
	);

#define	KeInitializeQueue(pQ, count)	 CeKeInitializeQueue(pQ, count)
#define	KeInsertQueue(pQ, pNode)		 CeKeInsertQueue(pQ, pNode)
#define KeRemoveQueue(pQ, mode, timeout) CeKeRemoveQueue(pQ, timeout)

/////////////////////////
//	DPC management
/////////////////////////
VOID
CeKeInitializeDpc(
	PKDPC				pKDpc,
	PKDEFERRED_ROUTINE	DeferredRoutine,
	PVOID				DeferredContext);

VOID
CeKeFreeDpc(
	PKDPC				pKDpc);

LONG
CeKeInsertQueueDpc(
	PKQUEUE	pKQueue,
	PKDPC	pKDpc);

HANDLE
CeKeDpcInitializeModule(
	OUT PKQUEUE pDpcQueue,
	IN	UINT	DpcThreadPriority
	);

VOID
CeKeDpcCleanupModule(
	IN	PKQUEUE	pDpcQueue,
	IN	HANDLE	hDpcThread
	);

/////////////////////////
//	Timer management
/////////////////////////

typedef PKDPC	PCEKDPC;

//
// Timer object
//
typedef struct _CEKTIMER {
	LIST_ENTRY          TimerListEntry;
	PCEKDPC				Dpc;

	ULONG				Reserved[2];

	//
	//	The MsRemaining field is the delta from the fire time of
	//	the previous timer in the timer queue for this timer
	//	to fire.
	//

	ULONG			    MsRemaining;
	ULONG               Period;
	ULONG				Reserved2;
} CEKTIMER, *PCEKTIMER;

VOID
CeKeInitializeTimer(
	IN OUT PCEKTIMER Timer
	);
void
CeKeSetTimer(
	IN	OUT	PCEKTIMER	Timer,
	IN	UINT			DelayMilliseconds,
	IN		PCEKDPC		Dpc
	);
void
CeKeSetPeriodicTimer(
	IN	OUT	PCEKTIMER	Timer,
	IN	UINT			PeriodMilliseconds,
	IN		PCEKDPC		Dpc
	);
BOOLEAN
CeKeCancelTimer(
	IN OUT PCEKTIMER Timer
	);
DWORD
CeKeInitializeTimerModule(
	PKQUEUE	pDpcQueue,
	DWORD	threadPriority
	);
VOID
CeKeShutdownTimerModule();

//
//  CeKePowerUp() should only be used by NDS_PowerUp() function.
//

typedef 
void (*PFUNC_POWER_UP)(void);

void
CeKePowerUp (PFUNC_POWER_UP pFunc);

#define KTIMER	CEKTIMER
#define PKTIMER	PCEKTIMER

#define	KeInitializeTimer	CeKeInitializeTimer
#define	KeSetTimer			CeKeSetTimer
#define KeSetTimerEx(_Timer_, _DueTime_, _PeriodicTime_, _Dpc_) CeKeSetPeriodicTimer(_Timer_, _PeriodicTime_, _Dpc_)
#define	KeCancelTimer		CeKeCancelTimer


#define KeGetCurrentProcessorNumber()			0
#define KeNumberProcessors						1

#define	KeBugCheckEx(bugcode, miniport, length, a, b) DebugBreak()

extern void CeKeQuerySystemTime(PLARGE_INTEGER	pCurrentTime);

#define KeQuerySystemTime						CeKeQuerySystemTime


////////////////////////////////////
//		ExXxx emulation
////////////////////////////////////

#define ERESOURCE										CRITICAL_SECTION

#define	ExInitializeResource(pResource)					InitializeCriticalSection(pResource)
#define	ExDeleteResource(pResource)						DeleteCriticalSection(pResource)
#define	ExAcquireResourceExclusive(pResource, bWait)	EnterCriticalSection(pResource)
#define	ExReleaseResource(pResource)					LeaveCriticalSection(pResource)

#define	PETHREAD										HANDLE

#define	ExAcquireSpinLock(pSpinLock, _pIrql)			EnterCriticalSection(pSpinLock)
#define	ExReleaseSpinLock(pSpinLock, _pIrql)			LeaveCriticalSection(pSpinLock)
#define ExAcquireSpinLockAtDpcLevel(pSpinLock)			EnterCriticalSection(pSpinLock)
#define ExReleaseSpinLockFromDpcLevel(pSpinLock)		LeaveCriticalSection(pSpinLock)

typedef
  VOID
  (*PWORKER_THREAD_ROUTINE)(
    IN PVOID Parameter
  );

typedef struct _WORK_QUEUE_ITEM {
          LIST_ENTRY    List;
          PWORKER_THREAD_ROUTINE WorkerRoutine;
          PVOID         Parameter;
        } WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM;

#define	ExInitializeWorkItem(_W, _R, _C)	\
		(_W)->WorkerRoutine = _R;	\
		(_W)->Parameter = _C

#define	ExInterlockedAddUlong(pAddend, Increment, pSpinLock)	\
		{	\
			ExAcquireSpinLockAtDpcLevel(pSpinLock);	\
			*pAddend += Increment;					\
			ExReleaseSpinLockFromDpcLevel(pSpinLock);	\
		}

LARGE_INTEGER
ExInterlockedAddLargeInteger(
    IN	PLARGE_INTEGER First,
    IN	LARGE_INTEGER Second,
    IN  PKSPIN_LOCK	   SpinLock
    );

PLIST_ENTRY
ExInterlockedInsertHeadList(
    IN  PLIST_ENTRY         ListHead,
    IN  PLIST_ENTRY         ListEntry,
    IN  PKSPIN_LOCK         SpinLock
    );

PLIST_ENTRY
ExInterlockedInsertTailList(
    IN  PLIST_ENTRY         ListHead,
    IN  PLIST_ENTRY         ListEntry,
    IN  PKSPIN_LOCK         SpinLock
    );

PLIST_ENTRY
ExInterlockedRemoveHeadList(
    IN PLIST_ENTRY  ListHead,
    IN PKSPIN_LOCK  SpinLock
    );

PLIST_ENTRY
ExInterlockedRemoveTailList(
    IN PLIST_ENTRY  ListHead,
    IN PKSPIN_LOCK  SpinLock
    );

PSINGLE_LIST_ENTRY
ExInterlockedPushEntryList(
    IN  PSINGLE_LIST_ENTRY      ListHead,
    IN  PSINGLE_LIST_ENTRY      ListEntry,
    IN  PKSPIN_LOCK				SpinLock
    );

PSINGLE_LIST_ENTRY
ExInterlockedPopEntryList(
    IN  PSINGLE_LIST_ENTRY      ListHead,
    IN  PKSPIN_LOCK				SpinLock
    );

// approximate cpu usage as 50%
#define	ExGetCurrentProcessorCpuUsage(pulUsage)			(*pulUsage) = 50

#define	ExGetCurrentProcessorCounts(pIdleCount, pKernelAndUser, pIndex) \
	*pIdleCount = 0;			\
	*pKernelAndUser = 0;		\
	*pIndex = 0

////////////////////////////////////
//		IoXxx emulation
////////////////////////////////////
extern PMDL		CeIoAllocateMdl(PVOID pVa, UINT Length);
extern VOID		CeIoFreeMdl(PMDL pMdl);
extern VOID
CeIoBuildPartialMdl(
    IN PMDL SourceMdl,
    IN OUT PMDL TargetMdl,
    IN PVOID VirtualAddress,
    IN ULONG Length);

#define	IoAllocateMdl(pVa, Length, x, y, Irp)			CeIoAllocateMdl(pVa, Length)
#define	IoFreeMdl										CeIoFreeMdl
#define	IoBuildPartialMdl								CeIoBuildPartialMdl

#define	IoSetDeviceInterfaceState(name, flag)			STATUS_SUCCESS

#define	IoWMIRegistrationControl(DeviceObject, action)	STATUS_SUCCESS

#define	IoCreateSymbolicLink(SymbolicName, DeviceName)	STATUS_SUCCESS
#define	IoDeleteSymbolicLink(SymbolicName)				STATUS_SUCCESS

#define DRIVER_OBJECT	CEDRIVER_OBJECT
#define PDRIVER_OBJECT	PCEDRIVER_OBJECT

#define IoAllocateDriverObjectExtension		CeDriverObjectExtensionAllocate
#define IoGetDriverObjectExtension			CeDriverObjectExtensionGet

typedef
VOID
(*PCEDRIVER_UNLOAD) (
    IN PCEDRIVER_OBJECT DriverObject
    );

#define PDRIVER_UNLOAD PCEDRIVER_UNLOAD


#define DEVICE_OBJECT	CEDEVICE_OBJECT
#define PDEVICE_OBJECT	PCEDEVICE_OBJECT

#define	IoCreateDevice(DriverObject, ExtensionSize, Name, Type, Char, Excl, DeviceObject) \
			CeDeviceCreate(DriverObject, ExtensionSize, Name, DeviceObject)
#define	IoDeleteDevice(DeviceObject) \
			CeDeviceDelete(DeviceObject)

#define	IoAttachDeviceToDeviceStack(NewDeviceObject, PrevDeviceObject)	PrevDeviceObject
#define IoDetachDevice(NextDeviceObject) (void)0

#define KINTERRUPT			CEKINTERRUPT
#define PKINTERRUPT			PCEKINTERRUPT
#define PKSERVICE_ROUTINE	PCEKSERVICE_ROUTINE
#define KINTERRUPT_MODE		CEKINTERRUPT_MODE

////////////////////////////////////
//		MmXxx emulation
////////////////////////////////////

#ifdef MmInitializeMdl
#undef MmInitializeMdl
#endif

#define MmInitializeMdl(Mdl, BaseVa, Length) { \
    (Mdl)->Next = (PMDL) NULL; \
    (Mdl)->MdlFlags = 0; \
    (Mdl)->StartVa = (PVOID) (BaseVa); \
    (Mdl)->ByteOffset = 0; \
    (Mdl)->ByteCount = (Length); \
    }

#ifdef MmGetSystemAddressForMdl
#undef MmGetSystemAddressForMdl
#endif

#ifdef MmGetMdlVirtualAddress
#undef MmGetMdlVirtualAddress
#endif

#define MmGetMdlVirtualAddress(pMdl)                            \
            ((pMdl == NULL) ? (NULL) : ((pMdl)->StartVa))

#define	MmGetSystemAddressForMdl(pMdl)                          \
            ((pMdl == NULL) ? (NULL) : ((pMdl)->StartVa))

#define	MmGetSystemAddressForMdlSafe(pMdl, pPriority)           \
            ((pMdl == NULL) ? (NULL) : ((pMdl)->StartVa))

#ifdef MmGetMdlByteCount
#undef MmGetMdlByteCount
#endif

#define	MmGetMdlByteCount(pMdl)                                 \
            ((pMdl == NULL) ? (0x00) : ((pMdl)->ByteCount))


#ifdef MmGetMdlByteOffset
#undef MmGetMdlByteOffset
#endif

#define	MmGetMdlByteOffset(pMdl)                                \
            ((pMdl == NULL) ? (0x00) : ((pMdl)->ByteOffset))

#define MmBuildMdlForNonPagedPool(pMdl)					(void)0

#define	MmAllocateNonCachedMemory(Length)				VirtualAlloc(NULL, Length, MEM_COMMIT, PAGE_READWRITE | PAGE_NOCACHE)
#define	MmAllocateContiguousMemory(Length, HighAddr)	NULL // don't support contig in CE yet
#define	MmFreeNonCachedMemory(VirtualAddress, Length)	VirtualFree(VirtualAddress, 0, MEM_RELEASE)
#define	MmFreeContiguousMemory(VirtualAddress)			(void)0



////////////////////////////////////
//		PsXxx emulation
////////////////////////////////////

DWORD
CePsCreateSystemThread(
	OUT	PHANDLE	 pThreadHandle,
	IN	PVOID	 startFunction,
	IN	PVOID	 startParameter
	);

#define PsGetCurrentThread()		(PVOID)GetCurrentThreadId()
#define	PsCreateSystemThread(pThreadHandle, dwAccessFlags, unused1, processHandle, unused2, startFunction, startParameter) \
	CePsCreateSystemThread(pThreadHandle, startFunction, startParameter)


#define NOTHING (void)0

#define KeFlushIoBuffers(_Mdl, _ReadOperation, _DmaOperation) CacheSync(CACHE_SYNC_DISCARD)

/* debug.c */
VOID DbgBreakPoint(VOID);

/* this is a standard NT DDK function
   and should not be defined anywhere else */
#if defined(BINARY_COMPATIBLE) && defined(DbgPrint)
#undef DbgPrint
#endif

#if !defined(DbgPrint)
ULONG
DbgPrint(
  IN PCHAR DebugMessage,
  ...
);
#endif

///// registry.c 

BOOL
GetRegistryValue(
	IN	HKEY	 hKey,
	IN	TCHAR	*tszSubKeyName,	OPTIONAL
	IN	TCHAR	*tszValueName,
	OUT	LPBYTE	 pValue,
	IN	DWORD	 cbValue,
	IN	DWORD	 dwRequiredType
	);


BOOL
GetRegistryStringValue(
	IN	HKEY	 hKey,
	IN	TCHAR	*tszSubKeyName,	OPTIONAL
	IN	TCHAR	*tszValueName,
	OUT	TCHAR	*tszValue,
	IN	DWORD	 cbValue);

BOOL
GetRegistryMultiSzValue(
	IN	HKEY	 hKey,
	IN	TCHAR	*tszSubKeyName,	OPTIONAL
	IN	TCHAR	*tszValueName,
	OUT	TCHAR	*tszValue,
	IN	DWORD	 cbValue);

BOOL
GetRegistryDwordValue(
	IN	HKEY	 hKey,
	IN	TCHAR	*tszSubKeyName,	OPTIONAL
	IN	TCHAR	*tszValueName,
	OUT	DWORD	*pdwValue);
 
BOOL
SetRegistryDwordValue(
	IN	HKEY	 hKey,
	IN	TCHAR	*tszSubKeyName,	OPTIONAL
	IN	TCHAR	*tszValueName,
	IN	DWORD	 dwValue);


// from ntrtl.h
typedef enum _RTL_GENERIC_COMPARE_RESULTS {
    GenericLessThan,
    GenericGreaterThan,
    GenericEqual
} RTL_GENERIC_COMPARE_RESULTS;


typedef struct _TIME_FIELDS {
    CSHORT Year;        // range [1601...]
    CSHORT Month;       // range [1..12]
    CSHORT Day;         // range [1..31]
    CSHORT Hour;        // range [0..23]
    CSHORT Minute;      // range [0..59]
    CSHORT Second;      // range [0..59]
    CSHORT Milliseconds;// range [0..999]
    CSHORT Weekday;     // range [0..6] == [Sunday..Saturday]
} TIME_FIELDS, *PTIME_FIELDS;


VOID
RtlTimeToTimeFields (
    IN PLARGE_INTEGER Time,
    OUT PTIME_FIELDS TimeFields
    );

BOOLEAN
RtlTimeFieldsToTime (
    IN PTIME_FIELDS TimeFields,
    OUT PLARGE_INTEGER Time
    );

VOID
RtlInitString(
  OUT PSTRING DestinationString,
  IN PCSZ SourceString OPTIONAL
);


VOID
RtlFreeAnsiString(
    PANSI_STRING AnsiString
    );

VOID
RtlInitAnsiString(
  OUT PANSI_STRING DestinationString,
  IN PCSZ SourceString OPTIONAL
);


VOID
RtlInitUnicodeString(
  OUT PUNICODE_STRING DestinationString,
  IN PCWSTR SourceString OPTIONAL
);

BOOLEAN
RtlCreateUnicodeString(
  OUT	PUNICODE_STRING DestinationString,
  IN	PCWSTR			SourceString
  );

VOID
RtlFreeUnicodeString(
  IN PUNICODE_STRING UnicodeString
);


NTSTATUS
RtlAnsiStringToUnicodeString(
  OUT PUNICODE_STRING DestinationString,
  IN PANSI_STRING SourceString,
  IN BOOLEAN AllocateDestinationString
);

NTSTATUS
RtlUnicodeStringToAnsiString(
  IN OUT PANSI_STRING DestinationString,
  IN PUNICODE_STRING SourceString,
  IN BOOLEAN AllocateDestinationString
);


NTSTATUS
RtlUpcaseUnicodeString(
  OUT PUNICODE_STRING DestinationString,
  IN PUNICODE_STRING SourceString,
  IN BOOLEAN AllocateDestinationString
);

NTSTATUS
RtlDowncaseUnicodeString(
    OUT PUNICODE_STRING DestinationString,
    IN PUNICODE_STRING SourceString,
    IN BOOLEAN AllocateDestinationString
    );

BOOLEAN
RtlEqualUnicodeString(
  IN PUNICODE_STRING String1,
  IN PUNICODE_STRING String2,
  IN BOOLEAN CaseInSensitive
);

VOID
RtlCopyUnicodeString(
  OUT PUNICODE_STRING DestinationString,
  IN PUNICODE_STRING SourceString OPTIONAL
);


NTSTATUS
RtlAppendUnicodeToString(
  IN PUNICODE_STRING Destination,
  IN PWSTR Source OPTIONAL
);

NTSTATUS
RtlUnicodeStringToInteger(
  IN PUNICODE_STRING String,
  IN ULONG			 Base,
  OUT PINT			 pInteger
);

NTSTATUS
RtlAppendUnicodeStringToString (
    PUNICODE_STRING Destination,
    PUNICODE_STRING Source
    );

BOOLEAN
RtlCreateUnicodeStringFromAsciiz(
    OUT PUNICODE_STRING DestinationString,
    IN PCSTR SourceString
    );

NTSTATUS
RtlCharToInteger(
  IN	PCHAR			String,
  IN	ULONG			Base,
  OUT	PINT			pInteger
);

LONG
RtlCompareUnicodeString(
    PUNICODE_STRING String1,
    PUNICODE_STRING String2,
    BOOLEAN CaseInSensitive
    );

BOOLEAN
RtlEqualDomainName(
    IN PUNICODE_STRING String1,
    IN PUNICODE_STRING String2
    );

NTSTATUS
RtlConvertSidToUnicodeString(
    PUNICODE_STRING UnicodeString,
    PSID Sid,
    BOOLEAN AllocateDestinationString
    );

VOID
RtlRunEncodeUnicodeString(
    PUCHAR          Seed        OPTIONAL,
    PUNICODE_STRING String
    );

VOID
RtlRunDecodeUnicodeString(
    UCHAR           Seed,
    PUNICODE_STRING String
    );

VOID
RtlAssert(
  IN PVOID FailedAssertion,
  IN PVOID FileName,
  IN ULONG LineNumber,
  IN PCHAR Message OPTIONAL
);

#if defined(x86)
#define HalGetDmaAlignmentRequirement() ((ULONG)1)
#else
#define HalGetDmaAlignmentRequirement() ((ULONG)sizeof(ULONGLONG))
#endif /* x86 */

//
// _MM_PAGE_PRIORITY_ provides a method for the system to handle requests
// intelligently in low resource conditions.
//
// LowPagePriority should be used when it is acceptable to the driver for the
// mapping request to fail if the system is low on resources.  An example of
// this could be for a non-critical network connection where the driver can
// handle the failure case when system resources are close to being depleted.
//
// NormalPagePriority should be used when it is acceptable to the driver for the
// mapping request to fail if the system is very low on resources.  An example
// of this could be for a non-critical local filesystem request.
//
// HighPagePriority should be used when it is unacceptable to the driver for the
// mapping request to fail unless the system is completely out of resources.
// An example of this would be the paging file path in a driver.
//

// begin_ntndis

typedef enum _MM_PAGE_PRIORITY {
    LowPagePriority,
    NormalPagePriority = 16,
    HighPagePriority = 32
} MM_PAGE_PRIORITY;


//SID And ACL functions
#include <lss.h>
BOOL
ConvertStringSidToSidW(
    IN LPCWSTR   StringSid,
    OUT PSID   *Sid
    );


PVOID
RtlFreeSid(
    IN PSID Sid
    );

NTSTATUS
RtlAllocateAndInitializeSid(
    IN PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
    IN UCHAR SubAuthorityCount,
    IN ULONG SubAuthority0,
    IN ULONG SubAuthority1,
    IN ULONG SubAuthority2,
    IN ULONG SubAuthority3,
    IN ULONG SubAuthority4,
    IN ULONG SubAuthority5,
    IN ULONG SubAuthority6,
    IN ULONG SubAuthority7,
    OUT PSID *Sid
    );

PULONG                                              // ntifs
RtlSubAuthoritySid (                                // ntifs
    PSID Sid,                                       // ntifs
    ULONG SubAuthority                              // ntifs
    );                                              // ntifs

PUCHAR
RtlSubAuthorityCountSid (
    PSID Sid
    );

// begin_ntifs
ULONG
RtlLengthSid (
    PSID Sid
    );

NTSTATUS
RtlCopySid (
    ULONG DestinationSidLength,
    PSID DestinationSid,
    PSID SourceSid
    );

ULONG
RtlLengthRequiredSid (
    ULONG SubAuthorityCount
    );


#ifdef __cplusplus
}
#endif

#endif
