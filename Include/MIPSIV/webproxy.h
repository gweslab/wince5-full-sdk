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

#ifndef __WEBPROXY_H__
#define __WEBPROXY_H__

#include <winsock.h>

#define PROXY_VERSION	1

#define IOCTL_SERVICE_PRX_SIGNAL_FILTER		1


typedef struct _PROXY_HTTP_REQUEST {
	DWORD dwSize;
	const SOCKADDR_STORAGE* psaClient;
	int cbsaClient;
	const char* szUser;
	int cchUser;
	const char* szURL;
	int cchURL;
	char* szURLOut;
	int cbURLOut;
	const SOCKADDR_STORAGE* psaProxy;
	int cbsaProxy;
} PROXY_HTTP_REQUEST, *PPROXY_HTTP_REQUEST;

typedef struct _PROXY_HTTP_INFORMATION {
	DWORD dwSize;
	DWORD dwProxyVersion;
} PROXY_HTTP_INFORMATION, *PPROXY_HTTP_INFORMATION;
	

#endif
