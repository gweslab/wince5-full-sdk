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

af_irda.h

Abstract:

Support for the address family AF_IRDA for use with winsock.

Notes:

//
// Winsock1.1, IrDA1.1, WindowsNT5.0, Windows98 and WindowsCE.
// Define one of _WIN32_WINNT, _WIN32_WINDOWS, _WIN32_WCE.
//

--*/

// @CESYSGEN IF CE_MODULES_WINSOCK

#ifndef __AFIRDA__
#define __AFIRDA__

#include <winsock.h>

#ifndef _WINSOCKAPI_
typedef unsigned char   u_char;
typedef unsigned short  u_short;
typedef unsigned int    u_int;
typedef unsigned long   u_long;
#endif

#define IRDA_PROTO_SOCK_STREAM  1
#define AF_IRDA                 26
#define PF_IRDA                 AF_IRDA

                            // WINNT, WIN98, WINCE
#define SOL_IRLMP		        0x00FF                        
                        
#define IRLMP_ENUMDEVICES       0x00000010
#define IRLMP_IAS_SET           0x00000011
#define IRLMP_IAS_QUERY         0x00000012

                            // WINNT, WINCE
#define IRLMP_SEND_PDU_LEN      0x00000013
#define IRLMP_EXCLUSIVE_MODE    0x00000014
#define IRLMP_IRLPT_MODE        0x00000015
#define IRLMP_9WIRE_MODE        0x00000016

                            // WIN98
#define IRLMP_TINYTP_MODE       0x00000017
#define IRLMP_PARAMETERS		0x00000018
#define	IRLMP_DISCOVERY_MODE	0x00000019

                            // WINCE
#define IRLMP_SHARP_MODE        0x00000020
                            
                            // WINNT
#define IRLMP_LAZY_DISCOVERY    0x00000030

#define IAS_ATTRIB_NO_CLASS     0x00000010
#define IAS_ATTRIB_NO_ATTRIB    0x00000000
#define IAS_ATTRIB_INT          0x00000001
#define IAS_ATTRIB_OCTETSEQ     0x00000002
#define IAS_ATTRIB_STR          0x00000003

#define	IAS_MAX_USER_STRING		256
#define	IAS_MAX_OCTET_STRING	1024
#define IAS_MAX_CLASSNAME		64
#define IAS_MAX_ATTRIBNAME		256

#define IRDA_MAX_SERVICE_NAME   25
#define IRDA_MAX_DEVICE_NAME    22
                    
                            // WINNT, WIN98
enum 
{
  LM_HB_Extension =             128,    // Any hint byte
  
  LM_HB1_PnP =                  1,      // First hint byte
  LM_HB1_PDA_Palmtop =          2,
  LM_HB1_Computer =             4,
  LM_HB1_Printer =              8,
  LM_HB1_Modem =                16,
  LM_HB1_Fax =                  32,
  LM_HB1_LANAccess =            64,

  LM_HB2_Telephony =            1,      // Second hint byte
  LM_HB2_FileServer =           2,
};

#define LmCharSetASCII          0
#define LmCharSetISO_8859_1     1
#define LmCharSetISO_8859_2     2
#define LmCharSetISO_8859_3     3
#define LmCharSetISO_8859_4     4
#define LmCharSetISO_8859_5     5
#define LmCharSetISO_8859_6     6
#define LmCharSetISO_8859_7     7
#define LmCharSetISO_8859_8     8
#define LmCharSetISO_8859_9     9
#define LmCharSetUNICODE        0xff
    
                            // WIN98
typedef u_long LM_BAUD_RATE;

#define  LM_BAUD_1200           1200
#define  LM_BAUD_2400           2400
#define  LM_BAUD_9600           9600
#define  LM_BAUD_19200          19200
#define  LM_BAUD_38400          38400
#define  LM_BAUD_57600          57600
#define  LM_BAUD_115200         115200
#define  LM_BAUD_576K           576000
#define  LM_BAUD_1152K          1152000
#define  LM_BAUD_4M             4000000

typedef struct 
{
    u_long          nTXDataBytes;   // Max tx data bytes per packet 
    u_long          nRXDataBytes;   // Max rx data bytes per packet
    LM_BAUD_RATE    nBaudRate;      // Negotiated baud rate
    u_long          thresholdTime;  // Threshold (ms)
    u_long          discTime;       // Disconnect (ms)
    u_short         nMSLinkTurn;    // Link turn around (ms) 
    u_char          nTXPackets;     // Number packets in transmit window
    u_char          nRXPackets;     // Number packets in receive window
} LM_IRPARMS,*PLM_IRPARMS;

typedef struct _SOCKADDR_IRDA
{
	u_short irdaAddressFamily;
	u_char  irdaDeviceID[4];
	char	irdaServiceName[IRDA_MAX_SERVICE_NAME];
} SOCKADDR_IRDA, *PSOCKADDR_IRDA, FAR *LPSOCKADDR_IRDA;

typedef struct _IRDA_DEVICE_INFO
{
	u_char  irdaDeviceID[4];
	char	irdaDeviceName[IRDA_MAX_DEVICE_NAME];
	u_char	irdaDeviceHints1;
	u_char  irdaDeviceHints2;
	u_char  irdaCharSet;
} IRDA_DEVICE_INFO, *PIRDA_DEVICE_INFO, FAR *LPIRDA_DEVICE_INFO;

typedef struct _DEVICELIST
{
	ULONG                       numDevice;
	IRDA_DEVICE_INFO    Device[1];
} DEVICELIST, *PDEVICELIST, FAR *LPDEVICELIST;

typedef struct _IAS_SET
{
    char    irdaClassName[IAS_MAX_CLASSNAME];
    char    irdaAttribName[IAS_MAX_ATTRIBNAME];
    u_long	irdaAttribType;
    union
    {
        LONG irdaAttribInt;
        struct
        {
            u_short	Len;
            u_char	OctetSeq[IAS_MAX_OCTET_STRING];
        } irdaAttribOctetSeq;
        struct
        {
            u_char	Len;
            u_char	CharSet;
            u_char	UsrStr[IAS_MAX_USER_STRING];
		} irdaAttribUsrStr;
    } irdaAttribute;
} IAS_SET, *PIAS_SET, FAR *LPIAS_SET;

typedef struct _IAS_QUERY
{
	u_char	irdaDeviceID[4];
    char    irdaClassName[IAS_MAX_CLASSNAME];
    char    irdaAttribName[IAS_MAX_ATTRIBNAME];
    u_long	irdaAttribType;
    union
    {
        LONG irdaAttribInt;
        struct
        {
            u_long  Len;
            u_char  OctetSeq[IAS_MAX_OCTET_STRING];
        } irdaAttribOctetSeq;
        struct
        {
            u_long  Len;
            u_long	CharSet;
            u_char	UsrStr[IAS_MAX_USER_STRING];
        } irdaAttribUsrStr;
    } irdaAttribute;
} IAS_QUERY, *PIAS_QUERY, FAR *LPIAS_QUERY;

#endif // __AFIRDA__
// @CESYSGEN ENDIF
