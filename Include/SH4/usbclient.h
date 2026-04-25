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

    usbclient.c

Abstract:

    Common USB Client Driver Interface

--*/

#ifndef _USBCLIENT_
#define _USBCLIENT_

#include <windows.h>
#include <usbdi.h>

#define USB_ERROR  DWORD
#define PUSB_ERROR LPDWORD

#define ONE_FRAME_PERIOD 1L // msec

// steal a debug zone for the client
#define ZONE_USBCLIENT DEBUGZONE(15)

#ifdef __cplusplus
extern "C" {
#endif

BOOL
AbortTransfer(
    LPCUSB_FUNCS   pUsbFuncs,
    USB_TRANSFER   hTransfer,
    DWORD          dwFlags
    );

BOOL
CloseTransferHandle(
    LPCUSB_FUNCS   UsbFuncs,
    USB_TRANSFER   hTransfer
    );

DWORD
ClearOrSetFeature(
    LPCUSB_FUNCS              UsbFuncs,
    HANDLE                    hUsbDevice,
    LPTRANSFER_NOTIFY_ROUTINE NotifyRoutine,
    PVOID                     NotifyContext,
    DWORD                     dwFlags, 
    WORD                      wFeature,
    UCHAR                     bIndex,
    DWORD                     dwTimeout,
    BOOL                      bSet
    );

DWORD
DefaultTransferComplete(
   PVOID    Context
   );

DWORD
GetStatus(
    LPCUSB_FUNCS              pUsbFuncs,
    HANDLE                    hUsbDevice,
    LPTRANSFER_NOTIFY_ROUTINE NotifyRoutine,
    PVOID                     NotifyContext,
    DWORD                     dwFlags,
    UCHAR                     bIndex,
    LPWORD                    lpwStatus,
    DWORD                     dwTimeout
    );

BOOL
GetTransferStatus(
    LPCUSB_FUNCS   UsbFuncs,
    USB_TRANSFER   hTransfer,
    LPDWORD        pBytesTransferred,   
    PUSB_ERROR     pUsbError
    );

DWORD
IssueBulkTransfer( 
   LPCUSB_FUNCS               UsbFuncs,
   USB_PIPE                   hPipe,
   LPTRANSFER_NOTIFY_ROUTINE  NotifyRoutine,
   PVOID                      NotifyContext,
   DWORD                      Flags,
   LPVOID                     pBuffer,
   ULONG                      PhysAddr,
   DWORD                      BufferLength,
   LPDWORD                    pBytesTransferred,
   DWORD                      dwTimeout,
   PUSB_ERROR                 pUsbRc
   );

DWORD
IssueInterruptTransfer( 
   LPCUSB_FUNCS               UsbFuncs,
   USB_PIPE                   hPipe,
   LPTRANSFER_NOTIFY_ROUTINE  NotifyRoutine,
   PVOID                      NotifyContext,
   DWORD                      Flags,
   LPVOID                     pBuffer,
   ULONG                      PhysAddr,
   DWORD                      BufferLength,
   LPDWORD                    pBytesTransferred,
   DWORD                      dwTimeout,
   PUSB_ERROR                 pUsbRc
   );

DWORD
IssueVendorTransfer(
   LPCUSB_FUNCS               UsbFuncs,
   HANDLE                     hUsbDevice,
   LPTRANSFER_NOTIFY_ROUTINE  NotifyRoutine,
   PVOID                      NotifyContext,
   DWORD                      Flags,
   PUSB_DEVICE_REQUEST        pControlHeader,
   LPVOID                     pBuf,
   ULONG                      PhysAddr,
   LPDWORD                    pBytesTransferred,
   DWORD                      dwTimeout,
   PUSB_ERROR                 pUsbRc
   );

DWORD
ResetDefaultEndpoint(
    LPCUSB_FUNCS   UsbFuncs,
    HANDLE         hUsbDevice
    );

DWORD
ResetBulkEndpoint(
    LPCUSB_FUNCS              pUsbFuncs,
    HANDLE                    hUsbDevice,
    USB_PIPE                  hPipe,
    LPTRANSFER_NOTIFY_ROUTINE NotifyRoutine,
    PVOID                     NotifyContext,
    UCHAR                     bIndex,
    DWORD                     dwTimeout
    );

BOOL
ResetPipe(
    LPCUSB_FUNCS    pUsbFuncs,
    USB_PIPE        hPipe,
    DWORD           dwFlags
    );
// Util function

//
// Registry Value Descriptor
//
typedef struct _REG_VALUE_DESCR {
    LPWSTR Name; // Value Name
    DWORD  Type; // Value Type
    DWORD  Size; // Value Data Size
    PBYTE  Data; // Value Data
} REG_VALUE_DESCR, *PREG_VALUE_DESCR;

#define SET     TRUE
#define GET     FALSE

//
// GetSetKeyValues
// Get or Set the specified KeyName and its Values to the registry under HKLM
//
// KeyName: HKLM\KeyName
// ValDesc: pointer to a Reg Value Descriptor array. Note the last array entry must be NULL.
// bSet: TRUE to Set, else Get
// bOverwrite: TRUE to overwrite it the key already exists
//
BOOL
GetSetKeyValues(
   LPCTSTR          KeyName,
   PREG_VALUE_DESCR ValDesc,
   BOOL             bSet,
   BOOL             bOverwrite
   );

#if !defined(STATUS_DELETE_PENDING)
//
// MessageId: STATUS_DELETE_PENDING
//
// MessageText:
//
//  A non close operation has been requested of a file object with a
//  delete pending.
//
#define STATUS_DELETE_PENDING            ((LONG)0xC0000056L)
#endif


typedef struct _REMOVE_LOCK 
{   
    BOOL Removed;
    LONG    IoCount;
    HANDLE  RemoveEvent;

} REMOVE_LOCK, *PREMOVE_LOCK;

BOOL
InitializeRemoveLock(
    IN PREMOVE_LOCK Lock
    );

DWORD
AcquireRemoveLock(
    IN PREMOVE_LOCK Lock,
    IN OPTIONAL PVOID Tag
    );

VOID
ReleaseRemoveLock(
    IN PREMOVE_LOCK Lock,
    IN OPTIONAL PVOID Tag
    );
  
VOID
ReleaseRemoveLockAndWait(
    IN PREMOVE_LOCK Lock,
    IN OPTIONAL PVOID Tag
    );

#ifdef __cplusplus
}
#endif

#endif // _USBCLIENT_
