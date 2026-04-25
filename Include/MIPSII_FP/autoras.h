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

    autoras.h

Abstract:

    Data structures, defines and function prototypes for autoras.dll

Environment:

    

Revision History:

    September 2001  :: Original version.

--*/

#ifndef __AUTORAS__H_
#define __AUTORAS__H_

//
//  Createfile(AUTORAS_DEVICE_NAME...)
//

#define AUTORAS_DEVICE_NAME     TEXT("ARS1:")


//
//  Autoras.dll finds default ras phone book entry in:
//  HKLM\Comm\Autoras\RasEntry
//

#define REG_AUTORAS_ROOT        TEXT("Comm\\Autoras")
#define REG_DEFAULT_RAS_ENTRY   TEXT("RasEntry")


//
//  Autoras expects the dialer information to be provided
//  in the following registry entries:
//
//  Example:
//
//  [HKEY_LOCAL_MACHINE\Comm\Autoras]
//      "Dialer"="rnaapp.exe"
//      "NoPromptOpt"="-p"
//      "RasEntryOpt"="-e"

#define REG_AUTORAS_DIALER           TEXT("Dialer")
#define REG_AUTORAS_OPT_NO_PROMPT    TEXT("NoPromptOpt")
#define REG_AUTORAS_OPT_RASENTRY     TEXT("RasEntryOpt")


//
//  Valid IOCTL for ARS1
//

#define FSCTL_AUTORAS_BASE      FILE_DEVICE_NETWORK

#define _AUTORAS_CTL_CODE(_Function, _Method, _Access)  \
            CTL_CODE(FSCTL_AUTORAS_BASE, _Function, _Method, _Access)


#define IOCTL_ARS_DIAL		\
            _AUTORAS_CTL_CODE(0x200, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_ARS_DIAL_SYNC	\
            _AUTORAS_CTL_CODE(0x201, METHOD_BUFFERED, FILE_ANY_ACCESS)            



//
//  Message queue used by AutoRas to communicate with the dialer.
//  Dialer should call CreateMsgQueue(AUTORAS_MSGQUEUE_NAME...) 
//  and set to write access.
//	** NOTE ** 
//	The queue has to be created with MSGQUEUE_ALLOW_BROKEN
//	flag.   See public\common\oak\drivers\netsamp\rnaapp for example.
//	
//

#define AUTORAS_MSGQUEUE_NAME   TEXT("AutorasMsgqueue")

typedef struct 
{
    DWORD   dwNotificationId;
    DWORD   dwNotificationParam;

}   DIALER_NOTIFICATION, *PDIALER_NOTIFICATION;


//
//  Constants for dwNotificationId, and its necessary dwNotificationParam..
//

#define DIALER_START            0x00000001
#define DIALER_TERMINATE        0x00000002
#define DIALER_CANCELLED        0x00000003
#define DIALER_CONNECTED        0x00000004



//
//  APIs exposed by Autoras.dll driver..
//  


#define AUTORAS_DLL         TEXT("Autoras.dll")
#define AUTORAS_DIAL        TEXT("Autoras_Dial")
#define AUTORAS_DIAL_SYNC   TEXT("Autoras_Dial_Sync")


typedef BOOL (* PFN_AUTORAS_DIAL)(void);
typedef BOOL (* PFN_AUTORAS_DIAL_SYNC)(void);

#endif  //  __AUTORAS_H_
