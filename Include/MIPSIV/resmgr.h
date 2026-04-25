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
/* File:    ResMgr.h
 *
 * Purpose: Resource manager definitions
 * The resource manager itself is part of the device manager (device.exe)
 * and its affliated entry points are declared in winbase.h.
 *
 */

#ifndef _RESMGR_H
#define _RESMGR_H

// Resource ids less than BASE_OEM are reserved by Microsoft;
// Resource ids between these limits are for OEM use.
#define RESMGR_BASE_OEM     0x00080000
#define RESMGR_MAX_OEM      0x000FFFFF
// Resource ids greater than MAX_OEM are reserved for future use by Microsoft.

// --- FIVE hex digits (not four) in these constants!
#define RESMGR_IRQ          0x00001
#define RESMGR_IOSPACE      0x00002

#endif // _RESMGR_H
