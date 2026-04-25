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

    6to4svc.h

Abstract:

    Constants and types to configure tunnels managed by ipv6svc.dll.
    
Environment:

    Windows CE only.

Revision History:

    03/13/2002  :: Initial version.
    
--*/

#ifndef __6TO4SVC__H

#define __6TO4SVC__H

#define DEVICE_NAME_6TO4SVC         TEXT("V6H1:")

#define FSCTL_6TO4SVC_BASE          FILE_DEVICE_NETWORK

#define _6TO4SVC_CTL_CODE(_Function, _Method, _Access)  \
            CTL_CODE(FSCTL_6TO4SVC_BASE, _Function, _Method, _Access)

#define IOCTL_6TO4SVC_CONFIG_CHANGE		                \
            _6TO4SVC_CTL_CODE(0x200, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_6TO4SVC_GET_INFO_ISATAP                   \
            _6TO4SVC_CTL_CODE(0x201, METHOD_BUFFERED, FILE_ANY_ACCESS)
            
#define IOCTL_6TO4SVC_GET_INTO_6TO4                  \
            _6TO4SVC_CTL_CODE(0x202, METHOD_BUFFERED, FILE_ANY_ACCESS)


#define KEY_GLOBAL                      L"Comm\\IPv6hlp\\Config"
#define KEY_INTERFACES                  L"Comm"

#define KEY_ENABLE_RESOLUTION           L"EnableResolution"
#define KEY_RESOLUTION_INTERVAL         L"ResolutionInterval"
#define KEY_RELAY_NAME                  L"RelayName"
#define KEY_ENABLE_ISATAP_RESOLUTION    L"EnableIsatapResolution"
#define KEY_ISATAP_RESOLUTION_INTERVAL  L"IsatapResolutionInterval"
#define KEY_ISATAP_ROUTER_NAME          L"IsatapRouterName"


#define KEY_TEREDO L"Comm\\IPv6Hlp\\Teredo"
#define KEY_TEREDO_REFRESH_INTERVAL     L"RefreshInterval"
#define KEY_TEREDO_SERVER_NAME          L"ServerName"
#define KEY_ENABLE_TEREDO_RESOLUTION    L"EnableTeredo"

#ifndef STATE
typedef enum {
    DEFAULT = 0,
    AUTOMATIC,
    ENABLED,
    DISABLED
} STATE;
#endif

typedef struct _RELAY_INFO 
{
    SOCKADDR_IN          sinAddress;  // IPv4 address
    SOCKADDR_IN6         sin6Address; // IPv6 address
    ULONG                ulMetric;
    
} RELAY_INFO, *PRELAY_INFO;


#define MAX_FQDN_HOSTNAME   1025

typedef struct _INFO_ISATAP
{
    WCHAR       RouterName[MAX_FQDN_HOSTNAME];      //  ISATAP router.
    BOOL        bEnable;                            //  ISATAP enabled ?
    ULONG       ulResolutionInterval;               //  Resolution interval.   
    IN_ADDR     iaIsatapRouter;                     //  IPv4 address of the
                                                    //  isatap router.
}   INFO_ISATAP, *PINFO_ISATAP;


#define MAX_RELAY_INFO      5

typedef struct _INFO_6TO4
{
    WCHAR       RelayName[MAX_FQDN_HOSTNAME];       //  6to4 relay.
    BOOL        bEnable;                            //  6to4 enabled?
    ULONG       ulResolutionInterval;               //  Resolution interval.
    ULONG       ulNumberOfRelays;                   //  No of relays.
    RELAY_INFO  RelayInfo[MAX_RELAY_INFO];          //  Relay information.    
    
}   INFO_6TO4, *PINFO_6TO4;
 
#endif // __6TO4SVC_H
