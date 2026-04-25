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

#ifndef _SHDISPID_H_
#define _SHDISPID_H_


// define the events for the shell folder view
#define DISPID_SELECTIONCHANGED     200     // The Selection Changed
#define DISPID_FILELISTENUMDONE     201     // Done enumerating the shell folder
#define DISPID_VERBINVOKED          202     // A verb (either from the main or context menu) was invoked in the folder view
#define DISPID_DEFAULTVERBINVOKED   203     // default verb (either from the main or context menu) was invoked in the folder view
#define DISPID_BEGINDRAG            204     // user clicked on an item

// define the events for the ComboBoxEx control
#define DISPID_ENTERPRESSED         200     // The user hit Enter or Return


// Define Events for search object
#define DISPID_SEARCHCOMMAND_START      1
#define DISPID_SEARCHCOMMAND_COMPLETE   2
#define DISPID_SEARCHCOMMAND_ABORT      3
#define DISPID_SEARCHCOMMAND_UPDATE     4
#define DISPID_SEARCHCOMMAND_PROGRESSTEXT 5
#define DISPID_SEARCHCOMMAND_ERROR      6
#define DISPID_SEARCHCOMMAND_RESTORE    7


// Shell Add/Remove Programs events
#define DISPID_IADCCTL_DIRTY            0x100
#define DISPID_IADCCTL_PUBCAT           0x101
#define DISPID_IADCCTL_SORT             0x102
#define DISPID_IADCCTL_FORCEX86         0x103
#define DISPID_IADCCTL_SHOWPOSTSETUP    0x104
#define DISPID_IADCCTL_ONDOMAIN         0x105
#define DISPID_IADCCTL_DEFAULTCAT       0x106

#endif // EXDISPID_H_
