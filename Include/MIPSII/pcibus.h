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
/* File:    PCIbus.h
 *
 * Purpose: PCIbus driver definitions
 *
 */

#ifndef _PCIBUS_H_
#define _PCIBUS_H_

#include <PCIrsrc.h>

#define MAX_LOAD_ORDER 255

#define PCI_MAX_REG_NAME 256    // Maximum length of a registry naem
#define PCI_MAX_REG_DATA 512    // Maximum length of registry data value

#define PCI_MAX_REG_LIST 16     // Maximum list size for multi_sz registry value

#define PCIBUS_INSTANCE_KEYNAME TEXT("Instance")
#define PCIBUS_TEMPLATE_KEYNAME TEXT("Template")

#define PCIBUS_CLASS_VALNAME TEXT("Class")
#define PCIBUS_CLASS_VALTYPE REG_DWORD

#define PCIBUS_SUBCLASS_VALNAME TEXT("SubClass")
#define PCIBUS_SUBCLASS_VALTYPE REG_DWORD

#define PCIBUS_PROGIF_VALNAME TEXT("ProgIF")
#define PCIBUS_PROGIF_VALTYPE REG_DWORD

#define PCIBUS_VENDORID_VALNAME TEXT("VendorID")
#define PCIBUS_VENDORID_VALTYPE REG_DWORD

#define PCIBUS_DEVICEID_VALNAME TEXT("DeviceID")
#define PCIBUS_DEVICEID_VALTYPE REG_DWORD

#define PCIBUS_REVISIONID_VALNAME TEXT("RevisionID")
#define PCIBUS_REVISIONID_VALTYPE REG_DWORD

#define PCIBUS_SUBVENDORID_VALNAME TEXT("SubVendorID")
#define PCIBUS_SUBVENDORID_VALTYPE REG_DWORD

#define PCIBUS_SUBSYSTEMID_VALNAME TEXT("SubSystemID")
#define PCIBUS_SUBSYSTEMID_VALTYPE REG_DWORD

#define PCIBUS_IFCTYPE_VALNAME TEXT("InterfaceType")
#define PCIBUS_IFCTYPE_VALTYPE REG_DWORD

#define PCIBUS_BUSNUMBER_VALNAME TEXT("BusNumber")
#define PCIBUS_BUSNUMBER_VALTYPE REG_DWORD

#define PCIBUS_DEVICENUMBER_VALNAME TEXT("DeviceNumber")
#define PCIBUS_DEVICENUMBER_VALTYPE REG_DWORD

#define PCIBUS_FUNCTIONNUMBER_VALNAME TEXT("FunctionNumber")
#define PCIBUS_FUNCTIONNUMBER_VALTYPE REG_DWORD

#define PCIBUS_LOGICALLOC_VALNAME TEXT("LogicalLoc")
#define PCIBUS_LOGICALLOC_VALTYPE REG_BINARY

#define PCIBUS_PHYSICALLOC_VALNAME TEXT("PhysicalLoc")
#define PCIBUS_PHYSICALLOC_VALTYPE REG_BINARY

#define PCIBUS_MEMBASE_VALNAME TEXT("MemBase")
#define PCIBUS_MEMBASE_VALTYPE REG_DWORD

#define PCIBUS_MEMLEN_VALNAME TEXT("MemLen")
#define PCIBUS_MEMLEN_VALTYPE REG_DWORD

#define PCIBUS_IOBASE_VALNAME TEXT("IoBase")
#define PCIBUS_IOBASE_VALTYPE REG_DWORD

#define PCIBUS_IOLEN_VALNAME TEXT("IoLen")
#define PCIBUS_IOLEN_VALTYPE REG_DWORD

#define PCIBUS_IRQ_VALNAME TEXT("Irq")
#define PCIBUS_IRQ_VALTYPE REG_DWORD

#define PCIBUS_SYSINTR_VALNAME TEXT("SysIntr")
#define PCIBUS_SYSINTR_VALTYPE REG_DWORD

#define PCIBUS_INSTANCEINDEX_VALNAME TEXT("InstanceIndex")
#define PCIBUS_INSTANCEINDEX_VALTYPE REG_DWORD

#define PCIBUS_NOCONFIG_VALNAME TEXT("NoConfig")
#define PCIBUS_NOCONFIG_VALTYPE REG_DWORD

#define PCIBUS_CONFIGENTRY_VALNAME TEXT("ConfigEntry")
#define PCIBUS_CONFIGENTRY_VALTYPE REG_SZ

#define PCIBUS_CONFIGDLL_VALNAME TEXT("ConfigDll")
#define PCIBUS_CONFIGDLL_VALTYPE REG_SZ

#define PCIBUS_COMMAND_VALNAME TEXT("Command")
#define PCIBUS_COMMAND_VALTYPE REG_DWORD

#define PCIBUS_BRIDGECONTROL_VALNAME TEXT("BridgeControl")
#define PCIBUS_BRIDGECONTROL_VALTYPE REG_DWORD

#define PCIBUS_LATENCY_VALNAME TEXT("Latency")
#define PCIBUS_LATENCY_VALTYPE REG_DWORD

#define PCIBUS_SECONDARYLATENCY_VALNAME TEXT("SecondaryLatency")
#define PCIBUS_SECONDARYLATENCY_VALTYPE REG_DWORD

#define PCIBUS_MATCH_NONE 0
#define PCIBUS_MATCH_ALL 8

//
// Type definitions
//
typedef struct _PCI_RSRC_LIST {
    DWORD Num;
    DWORD Reg[PCI_TYPE0_ADDRESSES];
} PCI_RSRC_LIST, *PPCI_RSRC_LIST;

typedef struct _PCI_PHYSICAL_LOC {
    DWORD Depth;
    BYTE Tree[PCI_MAX_BUS + 1];
} PCI_PHYSICAL_LOC, *PPCI_PHYSICAL_LOC;

typedef struct _PCI_DEV_INFO {
    WCHAR RegPath[DEVKEY_LEN];
    DWORD Bus;
    DWORD Device;
    DWORD Function;
    PPCI_COMMON_CONFIG Cfg;
    PCI_RSRC_LIST MemBase;
    PCI_RSRC_LIST MemLen;
    PCI_RSRC_LIST IoBase;
    PCI_RSRC_LIST IoLen;
    BOOL Matched;
    BOOL Configure;
    BOOL ConfigEntry;
    WCHAR ConfigEntryName[DEVENTRY_LEN];
    WCHAR ConfigDllName[DEVDLL_LEN];
    WCHAR DllName[DEVDLL_LEN];
    DWORD DevFlags;
    PPCI_CFG_INFO ConfigInfo;
    DWORD Command;
    DWORD BridgeControl;
    DWORD Latency;
    DWORD SecondaryLatency;
} PCI_DEV_INFO, *PPCI_DEV_INFO; 

//
// Prototype for optional ConfigEntry entry point
//
typedef DWORD (*PFN_CONFIGENTRY)(DWORD, struct _PCI_DEV_INFO *, PPCI_RSRC, PPCI_RSRC, PDWORD, PDWORD);

#endif // _PCIBUS_H_
