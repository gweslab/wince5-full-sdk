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

devload.h

Abstract:

Device loader structures and defines

Notes: 


--*/

#ifndef __DEVLOAD_H_
#define __DEVLOAD_H_

#ifdef __cplusplus
extern "C" {
#endif

// @doc DRIVERS

//
// These keys are under HKEY_LOCAL_MACHINE
//
#define DEVLOAD_DRIVERS_KEY  TEXT("Drivers")
#define DEVLOAD_BUILT_IN_KEY TEXT("Drivers\\BuiltIn")
#define DEVLOAD_PCMCIA_KEY   TEXT("Drivers\\PCMCIA")
#define DEVLOAD_ACTIVE_KEY   TEXT("Drivers\\Active")
#define DEVLOAD_DETECT_KEY   DEVLOAD_PCMCIA_KEY TEXT("\\Detect")

//
// These are the required and optional values under a device key.
//
#define DEVLOAD_DLLNAME_VALNAME     TEXT("Dll")     // DLL name (required)
#define DEVLOAD_DLLNAME_VALTYPE     REG_SZ
#define DEVLOAD_ICLASS_VALNAME      TEXT("IClass")  // Class(es) of device interface (semi-required)
#define DEVLOAD_ICLASS_VALTYPE      REG_MULTI_SZ
#define DEVLOAD_LOADORDER_VALNAME   TEXT("Order")   // LoadOrder (optional)
#define DEVLOAD_LOADORDER_VALTYPE   REG_DWORD
#define DEVLOAD_ENTRYPOINT_VALNAME  TEXT("Entry")   // Entrypoint name (deprecated)
#define DEVLOAD_ENTRYPOINT_VALTYPE  REG_SZ
#define DEVLOAD_PREFIX_VALNAME      TEXT("Prefix")  // Device prefix (optional)
#define DEVLOAD_PREFIX_VALTYPE      REG_SZ
#define DEVLOAD_INDEX_VALNAME       TEXT("Index")   // Device index (optional)
#define DEVLOAD_INDEX_VALTYPE       REG_DWORD
#define DEVLOAD_CONTEXT_VALNAME     TEXT("Context") // Device context (optional)
#define DEVLOAD_CONTEXT_VALTYPE     REG_DWORD
#define DEVLOAD_INITCODE_VALNAME    TEXT("Ioctl")   // Device IO control code to indicate context (deprecated)
#define DEVLOAD_INITCODE_VALTYPE    REG_DWORD
#define DEVLOAD_BUSINITCODE_VALNAME TEXT("BusIoctl")   // Bus IO control code to indicate context
#define DEVLOAD_BUSINITCODE_VALTYPE REG_DWORD
#define DEVLOAD_FLAGS_VALNAME       TEXT("Flags")   // Flag to control loading/unloading (optional)
#define DEVLOAD_FLAGS_VALTYPE       REG_DWORD
#define DEVLOAD_INTRPEND_VALNAME    TEXT("NoIntrPend") // Is the interrupt pending flag invalid (optional)
#define DEVLOAD_INTRPEND_VALTYPE   REG_DWORD
#define DEVLOAD_REPARMS_VALNAME    TEXT("RegenumParms") // Regenum parms passed into Active\xx
#define DEVLOAD_REPARMS_VALTYPE   REG_MULTI_SZ

#define DEVLOAD_MEMBASE_VALNAME     TEXT("MemBase") // Memory base (optional)
#define DEVLOAD_MEMLEN_VALNAME      TEXT("MemLen")  // Memory length (optional)
#define DEVLOAD_IOBASE_VALNAME      TEXT("IoBase")  // IO base (optional)
#define DEVLOAD_IOLEN_VALNAME       TEXT("IoLen")   // IO length (optional)
#define DEVLOAD_SYSINTR_VALNAME     TEXT("SysIntr") // System interrupt number (optional)
#define DEVLOAD_IRQ_VALNAME         TEXT("Irq")     // Irq number (optional)
#define DEVLOAD_IFCTYPE_VALNAME     TEXT("InterfaceType")   // Bus interface type (i.e. PCIbus, ISA, etc) (optional)
#define DEVLOAD_BUSNUMBER_VALNAME   TEXT("BusNumber")       // Bus number (relevant for PCIbus) (optional)
#define DEVLOAD_ISRDLL_VALNAME      TEXT("IsrDll")  // DLL name of ISR (optional)
#define DEVLOAD_ISRHANDLER_VALNAME  TEXT("IsrHandler")      // ISR handler function name (optional)

//
// The presence of the value "Keep" will cause device.exe to skip the call to
// FreeLibrary after calling the specified entrypoint.  This only affects
// builtin drivers that specify an entrypoint. (This usage is deprecated -
// make appropriate use of the UNLOAD flag instead).
//
#define DEVLOAD_KEEPLIB_VALNAME      TEXT("Keep")   // (deprecated - see above)
#define DEVLOAD_KEEPLIB_VALTYPE      REG_DWORD

//
// Flag values.
//
#define DEVFLAGS_NONE           0x00000000      // No flags defined
#define DEVFLAGS_UNLOAD         0x00000001      // Unload driver after call to entry point returns
#define DEVFLAGS_LOADLIBRARY    0x00000002      // Use LoadLibrary instead of LoadDriver
#define DEVFLAGS_NOLOAD         0x00000004      // Don't load Dll
#define DEVFLAGS_NAKEDENTRIES   0x00000008      // Entry points don't have Prefix prepended
#define DEVFLAGS_BOOTPHASE_1    0x00001000      // This driver only load at system phase 1 
#define DEVFLAGS_IRQ_EXCLUSIVE	0x00000100      // This driver only can be load when it has exclusive access for IRQ.

//
// Structure passed in the input buffer of DeviceIoControl() for the 
// post initialization ioctl
//
typedef struct _POST_INIT_BUF {
    HANDLE p_hDevice;        // device handle from RegisterDevice
    HKEY   p_hDeviceKey;     // open registry handle to the driver's device key
} POST_INIT_BUF, *PPOST_INIT_BUF;


// 
// For passing additional registry settings to ActivateDeviceEx()
//
typedef struct _REGINI {
    LPCWSTR lpszVal;
    LPBYTE pData;
    DWORD dwLen;
    DWORD dwType;
} REGINI;
typedef struct _REGINI const *LPCREGINI;

//
// These values reside under a device's active key
//
#define DEVLOAD_CLIENTINFO_VALNAME  TEXT("ClientInfo") // ClientInfo DWORD from ActivateDriver
#define DEVLOAD_CLIENTINFO_VALTYPE  REG_DWORD
#define DEVLOAD_HANDLE_VALNAME      TEXT("Hnd")     // Device handle (from RegisterDevice)
#define DEVLOAD_HANDLE_VALTYPE      REG_DWORD
#define DEVLOAD_DEVNAME_VALNAME     TEXT("Name")    // Device name (i.e "COM1:")
#define DEVLOAD_DEVNAME_VALTYPE     REG_SZ
#define DEVLOAD_DEVKEY_VALNAME      TEXT("Key")     // Device key in \Drivers\(Built-In or PCMCIA)
#define DEVLOAD_DEVKEY_VALTYPE      REG_SZ
#define DEVLOAD_PNPID_VALNAME       TEXT("PnpId")   // Plug and Play Id (PCMCIA, optional)
#define DEVLOAD_PNPID_VALTYPE       REG_SZ
#define DEVLOAD_SOCKET_VALNAME      TEXT("Sckt")    // PCMCIA socket (optional)
#define DEVLOAD_SOCKET_VALTYPE      REG_DWORD       // Actually a CARD_SOCKET_HANDLE   
#define DEVLOAD_INTERFACETYPE_VALNAME TEXT("InterfaceType")  // Bus Type
#define DEVLOAD_INTERFACETYPE_VALTYPE  REG_DWORD 

//
// These values reside under a device's active key.  They are provided by the device's bus
// driver.  All values are optional.  The BusParent tells the Device Manager which device
// driver loaded the new driver.  The BusPrefix is used to specify DLL entry point decoration
// for devices that do not expose a stream interface to applications (via the legacy or $device
// namespaces).  If a Prefix value is specified in the device's device key and a BusPrefix value
// is specified, they must match.  The BusName provides the Device Manager with the name that the
// device driver will expose in the $bus namespace.  This name must be unique and is completely
// specified by the bus driver; it is not decorated with an instance index; if a duplicate name 
// is found, the driver will not load.
//
#define DEVLOAD_BUSPARENT_VALNAME   TEXT("BusParent")   // parent bus driver handle
#define DEVLOAD_BUSPARENT_VALTYPE   REG_DWORD
#define DEVLOAD_BUSPREFIX_VALNAME   TEXT("BusPrefix")   // DLL entry point decoration -- must match "Prefix" if present in device key
#define DEVLOAD_BUSPREFIX_VALTYPE   REG_SZ
#define DEVLOAD_BUSNAME_VALNAME     TEXT("BusName")     // device's name on the parent bus
#define DEVLOAD_BUSNAME_VALTYPE     REG_SZ

//
// TAPI Pnp support
//
#define DEVLOAD_TSPDLL_VALNAME      TEXT("Tsp")     // TAPI Service Provider DLL
#define DEVLOAD_TSPDLL_VALTYPE      REG_SZ
#define DEVLOAD_TSPDEV_VALNAME      TEXT("THnd")    // TAPI device index
#define DEVLOAD_TSPDEV_VALTYPE      REG_DWORD

//
// Prototype for the optional device driver entrypoint
//
typedef DWORD (*PFN_DEV_ENTRY)(LPTSTR);     // Parameter is registry path of device's key

#define DEVKEY_LEN      256  // Max length of registry key path name
#define DEVNAME_LEN     16  // Max length of device name
#define DEVDLL_LEN      64  // Max length of device driver DLL name
#define DEVENTRY_LEN    64  // Max length of device driver entrypoint name
#define DEVPREFIX_LEN    8  // Max length of device prefix

//
// Device APIs: EnumPnpIds, EnumDevices, GetDeviceKeys and OpenDeviceKey
// (in coredll.dll)
//
DWORD EnumPnpIds(LPTSTR PnpList, LPDWORD lpBuflen);
DWORD EnumDevices(LPTSTR DevList, LPDWORD lpBuflen);
DWORD GetDeviceKeys(LPCTSTR DevName, LPTSTR ActiveKey, LPDWORD lpActiveLen,
                                     LPTSTR DriverKey, LPDWORD lpDriverLen);
HKEY OpenDeviceKey(LPCTSTR ActiveKey);
HANDLE GetDeviceHandleFromContext(LPCTSTR pContext);

//
// Device Manager APIs located in devmgr.dll.  These APIs are only available to drivers
// loaded in the Device Manager's process context.
//
DWORD WINAPI DmAdvertiseInterface(HANDLE hDevice, const GUID *devclass, LPCWSTR name, BOOL fAdd);

//
// This interface GUID indicates that the device supports differentiating the $bus and $device
// (and legacy) namespaces.  Devices must advertise this GUID via IClass or calls to 
// DmAdvertiseInterface() before CreateFile() requests on their $bus names will succeed.  The GUID
// must be associated with their bus name, not their $device or legacy name.
//
#define DMCLASS_PROTECTEDBUSNAMESPACE   TEXT("{6F40791D-300E-44E4-BC38-E0E63CA8375C}")

//
// Drivers that advertise DMCLASS_PROTECTEDBUSNAMESPACE will have this bit set in the dwAccess
// parameter to their XXX_Open() entry point when a handle is opened using the $bus namespace.
// This allows them to know which handles are allowed to carry out privileged operations.  If they
// advertise DMCLASS_PROTECTEDBUSNAMESPACE, they are required to block privileged operations on
// handles opened in the $device or legacy namespaces.
//
#define DEVACCESS_BUSNAMESPACE          FILE_WRITE_ATTRIBUTES

#ifdef __cplusplus
}
#endif

#endif //__DEVLOAD_H__

