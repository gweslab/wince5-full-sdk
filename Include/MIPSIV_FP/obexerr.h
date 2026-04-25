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
/*****************************************************************************
*
*
* Module Name:
*
*    obexerr.h
*
* Abstract:
*
*    Error codes for OBEX
*
*****************************************************************************/

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __OBEXERR_H__
#define __OBEXERR_H__

//--------------------------------------------------------------------------
//     Core OBEX Error messages
//--------------------------------------------------------------------------

//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// OBEX error codes from the IrOBEX spec mapped into HRESULTS
//
#define IR_OBEX_ERROR_BASE      0x0600
#define E_OBEX_BASE             MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, IR_OBEX_ERROR_BASE)
#define HRESULT_FROM_OBEX(x)    ( (x == 0x20) ? S_OK : E_OBEX_BASE | x )
#define OBEX_FROM_HRESULT       ( (x == S_OK) ? OBEX_REPLY_SUCCESS : x & 0x000000FF )
#define IS_OBEX_ERR(x)          ( (x & 0x00000F00) == IR_OBEX_ERROR_BASE )

//
// Windows specific error codes
//
#define WIN_OBEX_ERROR_BASE         0x0500
#define MAKE_OBEX_HRESULT(x)        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, WIN_OBEX_ERROR_BASE + x)

//
// MessageId: OBEX_E_DISCONNECTED
//
// MessageText:
//
//  The connection has been disconnected.
//
#define OBEX_E_DISCONNECTED                     MAKE_OBEX_HRESULT(0)

//
// MessageId: OBEX_E_ABORTED
//
// MessageText:
//
//  The request has been aborted.
//
#define OBEX_E_ABORTED                          MAKE_OBEX_HRESULT(1)

//
// MessageId: OBEX_E_NOT_INITIALIZED
//
// MessageText:
//
//  OBEX has not been initialized.
//
#define OBEX_E_NOT_INITIALIZED                  MAKE_OBEX_HRESULT(2)

//
// MessageId: OBEX_E_TRANSPORT_NOT_AVAILABLE
//
// MessageText:
//
//  The requested transport is not available.
//
#define OBEX_E_TRANSPORT_NOT_AVAILABLE          MAKE_OBEX_HRESULT(3)

// MessageId: OBEX_E_TRANSPORT_INIT
//
// MessageText:
//
//  An error occurred while initializing the transports.
//
#define OBEX_E_TRANSPORT_INIT                   MAKE_OBEX_HRESULT(4)

// MessageId: OBEX_E_ALREADY_CONNECTED
//
// MessageText:
//
//  A connection to the device has already been established.
//
#define OBEX_E_ALREADY_CONNECTED                MAKE_OBEX_HRESULT(5)

// MessageId: OBEX_E_NOT_CONNECTED
//
// MessageText:
//
//  A connection to the device has not been established.
//
#define OBEX_E_NOT_CONNECTED                    MAKE_OBEX_HRESULT(6)

// MessageId: OBEX_E_CANT_CONNECT
//
// MessageText:
//
//  A connection to the OBEX service on the remote device could not be established.
//
#define OBEX_E_CANT_CONNECT                     MAKE_OBEX_HRESULT(7)

// MessageId: OBEX_E_TIMEOUT
//
// MessageText:
//
//  A timeout occurred while communicating on the network.
//
#define OBEX_E_TIMEOUT                          MAKE_OBEX_HRESULT(8)

// MessageId: OBEX_E_NETWORK_ERROR
//
// MessageText:
//
//  An unspecified network error occurred.
//
#define OBEX_E_NETWORK_ERROR                    MAKE_OBEX_HRESULT(9)

// MessageId: OBEX_E_DEVICE_NOT_FOUND
//
// MessageText:
//
//  The specified device could not be located.
//
#define OBEX_E_DEVICE_NOT_FOUND                 MAKE_OBEX_HRESULT(0xA)

// MessageId: OBEX_E_SERIVCE_ALREADY_REGISTERED
//
// MessageText:
//
//  The specified service has already been registered.
//
#define OBEX_E_SERIVCE_ALREADY_REGISTERED       MAKE_OBEX_HRESULT(0xB)

// MessageId: OBEX_E_UNEXPECTED
//
// MessageText:
//
//  The unexpected error occurred.
//
#define OBEX_E_UNEXPECTED                       MAKE_OBEX_HRESULT(0xC)

// MessageId: OBEX_E_CONNECTION_NOT_ACCEPTED
//
// MessageText:
//
//  The connection has not yet been accepted.
//
#define OBEX_E_CONNECTION_NOT_ACCEPTED          MAKE_OBEX_HRESULT(0xD)

// MessageId: OBEX_E_STREAM_CLOSED
//
// MessageText:
//
//  The stream has been closed and can no longer be used.
//
#define OBEX_E_STREAM_CLOSED                    MAKE_OBEX_HRESULT(0xE)

#endif // #ifndef __OBEXERR_H__
