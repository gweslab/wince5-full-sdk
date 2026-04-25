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
// Module Name:  
//     cebuscfg.h
// 
// Abstract: Provides Liberary for Bus Access.
// 
// Notes: 
//
#ifndef __CEBUSCFG_H_
#define __CEBUSCFG_H_
// SpaceType.
// PCI
#define PCI_WHICHSPACE_CONFIG               0x0
#define PCI_WHICHSPACE_ROM                  0x52696350
// PC Card.
#define    PCCARD_PCI_CONFIGURATION_SPACE    0  // for cardbus cards
#define    PCCARD_ATTRIBUTE_MEMORY           1
#define    PCCARD_COMMON_MEMORY              2
#define    PCCARD_ATTRIBUTE_MEMORY_INDIRECT  3
#define    PCCARD_COMMON_MEMORY_INDIRECT     4


#endif
