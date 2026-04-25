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

    nuiouser.h

Abstract:

    Constants and types to access the NDISUIO driver.
    Users must also include ntddndis.h

Environment:

    User/Kernel mode.

Revision History:

    
    4/12/2000    Created
	03/15/2001	 CE port.

--*/

#ifndef __NUIOUSER__H
#define __NUIOUSER__H

#ifdef UNDER_CE
#define	NDISUIO_DEVICE_NAME          TEXT("UIO1:")
#endif


#define FSCTL_NDISUIO_BASE      FILE_DEVICE_NETWORK

#define _NDISUIO_CTL_CODE(_Function, _Method, _Access)  \
            CTL_CODE(FSCTL_NDISUIO_BASE, _Function, _Method, _Access)

#define IOCTL_NDISUIO_OPEN_DEVICE		\
            _NDISUIO_CTL_CODE(0x200, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_NDISUIO_QUERY_OID_VALUE   \
            _NDISUIO_CTL_CODE(0x201, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_NDISUIO_SET_OID_VALUE		\
            _NDISUIO_CTL_CODE(0x205, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_NDISUIO_SET_ETHER_TYPE	\
            _NDISUIO_CTL_CODE(0x202, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_NDISUIO_QUERY_BINDING		\
            _NDISUIO_CTL_CODE(0x203, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_NDISUIO_BIND_WAIT			\
            _NDISUIO_CTL_CODE(0x204, METHOD_BUFFERED, FILE_ANY_ACCESS)


#ifdef UNDER_CE

#define IOCTL_NDISUIO_OPEN_WRITE_DEVICE		\
            _NDISUIO_CTL_CODE(0x206, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define	IOCTL_NDISUIO_REQUEST_NOTIFICATION	\
			_NDISUIO_CTL_CODE(0x207, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define	IOCTL_NDISUIO_CANCEL_NOTIFICATION	\
			_NDISUIO_CTL_CODE(0x208, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define	IOCTL_NDISUIO_NIC_STATISTICS		\
			_NDISUIO_CTL_CODE(0x209, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_CANCEL_READ					\
			_NDISUIO_CTL_CODE(0x20a, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_NDISUIO_NATIVEWIFI_STATISTICS					\
			_NDISUIO_CTL_CODE(0x20b, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif


//
//  Structure to go with IOCTL_NDISUIO_QUERY_OID_VALUE.
//  The Data part is of variable length, determined by
//  the input buffer length passed to DeviceIoControl.
//
typedef struct _NDISUIO_QUERY_OID
{
    NDIS_OID        Oid;

#ifdef UNDER_CE
	//
	//	In CE land app is allowed to query without having to do
	//	IOCTL_NDISUIO_OPEN_DEVICE
	//	Hence the device name to query argument needed..
	//	For app that does IOCTL_NDISUIO_OPEN_DEVICE this argument
	//	is then not necessary..
	//

	PTCHAR			ptcDeviceName;	
#endif

    UCHAR           Data[sizeof(ULONG)];

} NDISUIO_QUERY_OID, *PNDISUIO_QUERY_OID;

//
//  Structure to go with IOCTL_NDISUIO_SET_OID_VALUE.
//  The Data part is of variable length, determined
//  by the input buffer length passed to DeviceIoControl.
//
typedef struct _NDISUIO_SET_OID
{
    NDIS_OID        Oid;

#ifdef UNDER_CE
	//
	//	In CE land app is allowed to set without having to do
	//	IOCTL_NDISUIO_OPEN_DEVICE
	//	Hence the device name to query argument needed..
	//	For app that does IOCTL_NDISUIO_OPEN_DEVICE this argument
	//	is then not necessary..
	//

	PTCHAR			ptcDeviceName;	
#endif

    UCHAR           Data[sizeof(ULONG)];

} NDISUIO_SET_OID, *PNDISUIO_SET_OID;


//
//  Structure to go with IOCTL_NDISUIO_QUERY_BINDING.
//  The input parameter is BindingIndex, which is the
//  index into the list of bindings active at the driver.
//  On successful completion, we get back a device name
//  and a device descriptor (friendly name).
//
typedef struct _NDISUIO_QUERY_BINDING
{
	ULONG			BindingIndex;		// 0-based binding number
	ULONG			DeviceNameOffset;	// from start of this struct
	ULONG			DeviceNameLength;	// in bytes
	ULONG			DeviceDescrOffset;	// from start of this struct
	ULONG			DeviceDescrLength;	// in bytes

} NDISUIO_QUERY_BINDING, *PNDISUIO_QUERY_BINDING;



#ifdef UNDER_CE

//
//	These are from \nt\public\internal\net\inc\ndispnp.h
//	Since CE does not support NdisQueryStatistics(), so NDISUIO 
//	will do the job via IOCTL_NDISUIO_NIC_STATISTICS ioctl call.
//

#define MEDIA_STATE_CONNECTED       0
#define MEDIA_STATE_DISCONNECTED    1
#define MEDIA_STATE_UNKNOWN         -1

#define DEVICE_STATE_CONNECTED      1
#define DEVICE_STATE_DISCONNECTED   0

typedef struct
{
    ULONG               Size;               //	Of this structure.
	PTCHAR				ptcDeviceName;		//	The device name to be queried..
    ULONG               DeviceState;        //	DEVICE_STATE_XXX above
    ULONG               MediaType;          //	NdisMediumXXX
    ULONG               MediaState;			//	MEDIA_STATE_XXX above
    ULONG               PhysicalMediaType;
    ULONG               LinkSpeed;          //	In 100bits/s. 10Mb/s = 100000
    ULONGLONG           PacketsSent;
    ULONGLONG           PacketsReceived;
    ULONG               InitTime;           //	In milliseconds
    ULONG               ConnectTime;        //	In seconds
    ULONGLONG           BytesSent;          //	0 - Unknown (or not supported)
    ULONGLONG           BytesReceived;      //	0 - Unknown (or not supported)
    ULONGLONG           DirectedBytesReceived;
    ULONGLONG           DirectedPacketsReceived;
    ULONG               PacketsReceiveErrors;
    ULONG               PacketsSendErrors;
    ULONG               ResetCount;
    ULONG               MediaSenseConnectCount;
    ULONG               MediaSenseDisconnectCount;

} NIC_STATISTICS, *PNIC_STATISTICS;


#ifdef UNDER_CE
typedef struct
{
    ULONG               Size;               //  Of this structure.
	PTCHAR				ptcDeviceName;		//	The device name to be queried..
    ULONG               PhysicalMediaType;	
    BOOL                bStationMode;       //  if PhysicalMediaType == NdisPhysicalMediumNativeWifi
                                            //  then bStationMode indicates is is currently operating
                                            //  as Station mode.
    ULONG               ulRSSI;             //  If NWIFI and STA mode then ulRSSI is queried.

    ULONG               Reserved[32];       //  For future...

} NATIVEWIFI_STATISTICS, *PNATIVEWIFI_STATISTICS;
#endif


//
//	This is for device notification (Media State, bind/unbind etc).
//	Because CE does not have WMI..
//

#define	NDISUIO_NOTIFICATION_RESET_START					0x00000001
#define	NDISUIO_NOTIFICATION_RESET_END						0x00000002
#define NDISUIO_NOTIFICATION_MEDIA_CONNECT					0x00000004
#define NDISUIO_NOTIFICATION_MEDIA_DISCONNECT				0x00000008
#define NDISUIO_NOTIFICATION_BIND							0x00000010
#define	NDISUIO_NOTIFICATION_UNBIND							0x00000020
#define NDISUIO_NOTIFICATION_MEDIA_SPECIFIC_NOTIFICATION    0x00000040
#define NDISUIO_NOTIFICATION_WW_ASYNC_RESPONSE              0x00000080
#define NDISUIO_NOTIFICATION_WW_INDICATION                  0x00000100
#define NDISUIO_NOTIFICATION_DEVICE_POWER_UP                0x00000200
#define NDISUIO_NOTIFICATION_DEVICE_POWER_DOWN              0x00000400


typedef struct
{
	DWORD	dwNotificationType;
	TCHAR	ptcDeviceName[MAX_PATH];
	UINT    uiOffsetToStatusBuffer;     //  For notifications that come with status.
	UINT    uiStatusBufferSize;         //	Offset from the beginning of the struct.                                        
                                        //  e.g. NDIS_STATUS_MEDIA_SPECIFIC_INDICATION
	
}	NDISUIO_DEVICE_NOTIFICATION, *PNDISUIO_DEVICE_NOTIFICATION;


typedef	struct
{
	HANDLE	hMsgQueue;
	DWORD	dwNotificationTypes;

}	NDISUIO_REQUEST_NOTIFICATION, *PNDISUIO_REQUEST_NOTIFICATION;


#endif
 
#endif // __NUIOUSER__H
