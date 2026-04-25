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
    usb200.h

Abstract:  
    Constant definitions from Universal Serial Bus specification version 2.0.

Notes: 

--*/
#ifndef   __USB200_H__
#define   __USB200_H__
#include <usb100.h>

#include <PSHPACK1.H>
#define USB_DEVICE_QUALIFIER_DESCRIPTOR_TYPE                    0x06
#define USB_OTHER_SPEED_CONFIGURATION_DESCRIPTOR_TYPE           0x07

typedef struct _USB_DEVICE_QUALIFIER_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    USHORT bcdUSB;
    UCHAR bDeviceClass;
    UCHAR bDeviceSubClass;
    UCHAR bDeviceProtocol;
    UCHAR bMaxPacketSize0;

    UCHAR bNumConfigurations;
    UCHAR bReserved;
} USB_DEVICE_QUALIFIER_DESCRIPTOR, *PUSB_DEVICE_QUALIFIER_DESCRIPTOR;

typedef USB_CONFIGURATION_DESCRIPTOR USB_OTHER_SPEED_CONFIGURATION_DESCRIPTOR, *PUSB_OTHER_SPEED_CONFIGURATION_DESCRIPTOR;

#define USB_ENDPOINT_MAX_PACKET_SIZE_MASK                       0x07FF

#include <POPPACK.H>

#endif   /* __USB200_H__ */

