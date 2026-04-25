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

    wzcmsq.h

Abstract:

    Data structures, defines and function prototypes for event logging
    posted by zero config.

Environment:

    

--*/

#ifndef __WZCMSQ_H__
#define __WZCMSQ_H__


//
//  Number that we increase everytime the LOG_ENTRY is
//  modified.   This is to make sure that the client is up to 
//  date with the lates struct entries..
//

#define CURRENT_LOGGING_VERSION     4

//
//  Recommended maximum messages per queue..
//

#define DEFAULT_MAX_MESSAGES        16


//
//  Queue name
//

#define WZC_MSGQUEUE_NAME       TEXT("WzcEventLoggingQueue")

typedef struct 
{  
    DWORD       dwLogId;                    //  WZC_XXX defined below..
    DWORD       dwCurrentLogVersion;        //  To make we are using the correct client..
    UCHAR       pucSSID[33];                //  SSID is 32 byte string, add 1 byte for NULL termination.
    UCHAR       pucBSSID[6];                //  MAC address of the AP we are associated with. 
    DWORD       dwArg;                      //  Misc..
    DWORD       dwInfrastructureMode;       //  Value should be read as NDIS_802_11_NETWORK_INFRASTRUCTURE.
    FILETIME    ftTimeStamp;                //  Time stamp of when log is created.
    TCHAR       ptcAdapterName[MAX_PATH];   //  Adapter name..

}   LOG_ENTRY, *PLOG_ENTRY;



//
//  The dwInfrastructureMode is valid bit for all IDs except
//  WZC_STARTED, WZC_PREFERRED_LIST_EXHAUSTED, WZC_VISIBLE_NETWORK
//
                                                                                                        
//
//  The LogID posted by zero config..
//  For all IDs, ptcAdapterName is always valid.
//

#define WZC_STARTED                     0xffffffff      //  Other args invalid.
#define WZC_ASSOCIATING                 0x00000001      //  Valid pucSSID 
#define WZC_FAILED_ASSOCIATION          0x00000002      //  Valid pucSSID
#define WZC_SUCCESSFUL_ASSOCIATION      0x00000003      //  Valid pucSSID : Valid pucBSSID (for infrastructure only)
#define WZC_CLOSE_EAPOL_SESSION         0x00000004      //  Valid pucSSID
#define WZC_AUTHENTICATING              0x00000005      //  Valid pucSSID : Valid pucBSSID : dwArg1 == Retry number
#define WZC_AUTHENTICATED               0x00000006      //  Valid pucSSID : Valid pucBSSID
#define WZC_CANCEL_AUTH                 0x00000007      //  Valid pucSSID
#define WZC_FAILED_AUTH_NO_RETRY        0x00000008      //  Valid pucSSID : dwArs is always ERROR_CANCELLED.
#define WZC_FAILED_AUTH_WILL_RETRY      0x00000009      //  Valid pucSSID : dwArg == Failure reason.
#define WZC_PREFERED_LIST_EXHAUSTED     0x0000000a      //  None valid.
#define WZC_REAUTHENTICATING            0x0000000b      //  Valid pucSSID ; Valid pucBSSID
#define WZC_VISIBLE_NETWORK             0x0000000c      //  None valid. (this is sent only in WZC_PREFERED_LIST_EXHAUSTED case).
                                                        //      as indication that there is at least one visible network out there.                                                    

#define WZC_ASSOCIATED_NO_8021X         WZC_SUCCESSFUL_ASSOCIATION
                                                        //  Valid pucSSID : Valid pucBSSID (for infrastructure only)
                                                    
#define WZC_ASSOCIATED_REQUIRES_8021X   0x0000000d      //  Valid pucSSID : Valid pucBSSID (for infrastructure only) 


#endif  //  __WZCMSQ_H__
