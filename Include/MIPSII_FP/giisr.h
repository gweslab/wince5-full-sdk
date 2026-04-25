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
// File: GIISR.h
//
// Purpose: Generic Installable Interrupt Service Routine definitions.
//
//

#ifndef _GIISR_H_
#define _GIISR_H_

#include <pkfuncs.h>

#define USER_IOCTL(X) (IOCTL_KLIB_USER + (X))

#define IOCTL_GIISR_INFO USER_IOCTL(0)
#define IOCTL_GIISR_PORTVALUE USER_IOCTL(1)

#define MAX_GIISR_INSTANCES 32  // A maximum of 32 ISR handlers per dll are allowed

typedef struct _GIISR_INFO {
    DWORD SysIntr;              // SYSINTR for ISR handler to return (if associated device is asserting IRQ)
    BOOL CheckPort;             // If true, check port to see if device is asserting IRQ
    BOOL PortIsIO;              // Port is IO port (possibly true only for x86)
    BOOL UseMaskReg;            // If true, read from MaskAddr to obtain mask
    DWORD PortAddr;             // Port Address
    DWORD PortSize;             // Port data width in bytes
    DWORD Mask;                 // Mask to use on data port to determine if device is asserting IRQ
    DWORD MaskAddr;             // Address of register to use as mask
} GIISR_INFO, *PGIISR_INFO;
    
#endif // _GIISR_H_
