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

Copyright (c) 1996 Microsoft Corporation

Module Name:

    mqmgmt.h

Abstract:


--*/

#ifndef __MQMGMT_H__
#define __MQMGMT_H__

#ifdef __cplusplus
extern "C"
{
#endif

//********************************************************************
// Access flag to be specified with MQOpenQueue() to get a handle which 
// can be used with MQPurge() or MQReceiveMessage() on an outgoing queue
//********************************************************************

#define MQ_ADMIN_ACCESS 0x00000080

//********************************************************************
//  LOCAL MSMQ MACHINE PROPERTIES
//********************************************************************
enum MQMGMT_MACHINE_PROPERTIES
{
    PROPID_MGMT_MSMQ_BASE = 0,    
    PROPID_MGMT_MSMQ_ACTIVEQUEUES,  /* VT_LPWSTR | VT_VECTOR  */
    PROPID_MGMT_MSMQ_PRIVATEQ,      /* VT_LPWSTR | VT_VECTOR  */
    PROPID_MGMT_MSMQ_DSSERVER,      /* VT_LPWSTR        */
    PROPID_MGMT_MSMQ_CONNECTED,     /* VT_LPWSTR        */
    PROPID_MGMT_MSMQ_TYPE,          /* VT_LPWSTR        */
};


//********************************************************************
//  LOCAL MSMQ QUEUE PROPERTIES
//********************************************************************
enum MQMGMT_QUEUE_PROPERTIES
{
    PROPID_MGMT_QUEUE_BASE = 0,
    PROPID_MGMT_QUEUE_PATHNAME,             /* VT_LPWSTR            */
    PROPID_MGMT_QUEUE_FORMATNAME,           /* VT_LPWSTR            */
    PROPID_MGMT_QUEUE_TYPE,                 /* VT_LPWSTR            */
    PROPID_MGMT_QUEUE_LOCATION,             /* VT_LPWSTR            */
    PROPID_MGMT_QUEUE_XACT,                 /* VT_LPWSTR            */
    PROPID_MGMT_QUEUE_FOREIGN,              /* VT_LPWSTR            */
    PROPID_MGMT_QUEUE_MESSAGE_COUNT,        /* VT_UI4               */
    PROPID_MGMT_QUEUE_USED_QUOTA,           /* VT_UI4               */
    PROPID_MGMT_QUEUE_JOURNAL_MESSAGE_COUNT,/* VT_UI4               */
    PROPID_MGMT_QUEUE_JOURNAL_USED_QUOTA,   /* VT_UI4               */
    PROPID_MGMT_QUEUE_STATE,                /* VT_LPWSTR            */
    PROPID_MGMT_QUEUE_NEXTHOPS,             /* VT_LPWSTR | VT_VECTOR*/
    PROPID_MGMT_QUEUE_EOD_LAST_ACK,         /* VT_BLOB              */
    PROPID_MGMT_QUEUE_EOD_LAST_ACK_TIME,    /* VT_I4                */
    PROPID_MGMT_QUEUE_EOD_LAST_ACK_COUNT,   /* VT_UI4               */
    PROPID_MGMT_QUEUE_EOD_FIRST_NON_ACK,    /* VT_BLOB              */
    PROPID_MGMT_QUEUE_EOD_LAST_NON_ACK,     /* VT_BLOB              */
    PROPID_MGMT_QUEUE_EOD_NEXT_SEQ,         /* VT_BLOB              */
    PROPID_MGMT_QUEUE_EOD_NO_READ_COUNT,    /* VT_UI4               */
    PROPID_MGMT_QUEUE_EOD_NO_ACK_COUNT,     /* VT_UI4               */
    PROPID_MGMT_QUEUE_EOD_RESEND_TIME,      /* VT_I4                */
    PROPID_MGMT_QUEUE_EOD_RESEND_INTERVAL,  /* VT_UI4               */
    PROPID_MGMT_QUEUE_EOD_RESEND_COUNT,     /* VT_UI4               */
    PROPID_MGMT_QUEUE_EOD_SOURCE_INFO,      /* VT_VARIANT | VT_VECTOR */
};


//
// Returned Value for PROPID_MGMT_MSMQ_CONNECTED property
//
#define MSMQ_CONNECTED      L"CONNECTED"
#define MSMQ_DISCONNECTED   L"DISCONNECTED"

//
// Returned value for PROPID_MGMT_QUEUE_TYPE
//
#define MGMT_QUEUE_TYPE_PUBLIC      L"PUBLIC"
#define MGMT_QUEUE_TYPE_PRIVATE     L"PRIVATE"
#define MGMT_QUEUE_TYPE_MACHINE     L"MACHINE"
#define MGMT_QUEUE_TYPE_CONNECTOR   L"CONNECTOR"

//
// String names passed in IOControl management.
//
#define MACHINE_ACTION_STARTUP  L"STARTUP"
#define MACHINE_ACTION_SHUTDOWN L"SHUTDOWN"
#define MACHINE_ACTION_EXIT     L"EXIT"
#define MACHINE_ACTION_CONSOLE	L"CONSOLE"
#define QUEUE_ACTION_PURGE		L"PURGE"
#define QUEUE_ACTION_DELMSG		L"DELETE"

//
// Returned value for PROPID_MGMT_QUEUE_STATE
//
#define MGMT_QUEUE_STATE_LOCAL          L"LOCAL CONNECTION"
#define MGMT_QUEUE_STATE_NONACTIVE      L"INACTIVE"
#define MGMT_QUEUE_STATE_WAITING        L"WAITING"
#define MGMT_QUEUE_STATE_NEED_VALIDATE  L"NEED VALIDATION"
#define MGMT_QUEUE_STATE_ONHOLD         L"ONHOLD"
#define MGMT_QUEUE_STATE_CONNECTED      L"CONNECTED"
#define MGMT_QUEUE_STATE_DISCONNECTING  L"DISCONNECTING"
#define MGMT_QUEUE_STATE_DISCONNECTED   L"DISCONNECTED"

//
// Returned value for PROPID_MGMT_QUEUE_LOCATION
//
#define MGMT_QUEUE_LOCAL_LOCATION   L"LOCAL"
#define MGMT_QUEUE_REMOTE_LOCATION  L"REMOTE"

//
//Returned Value for PROPID_MGMT_QUEUE_XACT and PROPID_MGMT_QUEUE_FOREIGN
//
#define MGMT_QUEUE_UNKNOWN_TYPE     L"UNKNOWN"
#define MGMT_QUEUE_CORRECT_TYPE     L"YES"
#define MGMT_QUEUE_INCORRECT_TYPE   L"NO"


#define MO_MACHINE_TOKEN    L"MACHINE"
#define MO_QUEUE_TOKEN      L"QUEUE"

#define MACHINE_ACTION_CONNECT      L"CONNECT"
#define MACHINE_ACTION_DISCONNECT   L"DISCONNECT"
#define MACHINE_ACTION_TIDY         L"TIDY"

#define QUEUE_ACTION_PAUSE      L"PAUSE"
#define QUEUE_ACTION_RESUME     L"RESUME"
#define QUEUE_ACTION_EOD_RESEND L"EOD_RESEND"


typedef PROPID MGMTPROPID;
typedef struct tagMQMGMTPROPS
{
    DWORD cProp;
    MGMTPROPID* aPropID;
    MQPROPVARIANT* aPropVar;
    HRESULT* aStatus;
} MQMGMTPROPS;

    
struct SEQUENCE_INFO
{
    LONGLONG SeqID;
    ULONG SeqNo; 
    ULONG PrevNo;
};


    
HRESULT
APIENTRY
MQMgmtGetInfo(
    IN LPCWSTR pMachineName,
    IN LPCWSTR pObjectName,
    IN OUT MQMGMTPROPS* pMgmtProps
    );

HRESULT
APIENTRY
MQMgmtAction(
    IN LPCWSTR pMachineName,
    IN LPCWSTR pObjectName,
    IN LPCWSTR pAction
    );

//*******************************************
// Delete (purge) all messages from a queue
//*******************************************
HRESULT
APIENTRY
MQPurgeQueue(
   IN HANDLE hQueue
   );

#ifdef __cplusplus
}
#endif

#endif // __MQMGMT_H__

