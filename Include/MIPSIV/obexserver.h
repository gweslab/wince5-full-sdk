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
#if ! defined (__obex_H__)
#define __obex_H__
//
//	Requests
//
#define OBEX_REQ_REQUEST			0x00000001
#define OBEX_REQ_CLOSE				0x00000002
#define OBEX_REQ_INIT				0x00000003
#define OBEX_REQ_UNLOAD				0x00000004

//
//	Responses
//
#define OBEX_RESP_RESPOND			0x00000001
#define OBEX_RESP_OK				0x00000002
#define OBEX_RESP_ACCEPT			0x00000003
#define OBEX_RESP_REJECT			0x00000004
#define OBEX_RESP_DENY				0x00000005
#define OBEX_RESP_CONTINUE			0x00000006
#define OBEX_RESP_ABORT				0x00000007
#define OBEX_RESP_DISCONNECT		0x00000008
#define OBEX_RESP_HANGUP			0x00000009

//
//	Obex Service Transaction
//
//	When obex server receives request, it parses it into headers and values and calls service
//	referenced in the request through ServiceCallback. Service must format the response and
//	send it through ServerCallback or ask obex server to format and send one of the standard
//	canned responses such as disconnect, abort, accept, reject or continue.
//
//	Service callback shall not return until the request is dispatched.
//
//	Service callback shall use routines supplied in ObexTransaction structure
//	for its internal memory allocation. Service shall not spin threads or store
//	pointers into Server's code.
//

typedef void *(*MemAlloc)(int cBytes);
typedef void (*MemFree)  (void *pMem);
typedef int  (*ServerCallback)  (unsigned int uiOp, unsigned int uiId, struct _obex_command *pCommand);
typedef int  (*ServiceCallback) (struct _obex_transaction *pTrans);

//return values (for return code)
//  0  ==  FAILED (transport supports auth)
//  1  ==  SUCCESS
//  2  ==  NOT_SUPPORTED (transport doesnt support auth)
typedef HRESULT  (*AuthCallback) (unsigned int uiTransactionId, UINT *uiRetCode);


//return values (for return code)
//  0  ==  FAILED (transport supports auth)
//  1  ==  SUCCESS
//  2  ==  NOT_SUPPORTED (transport doesnt support auth)
typedef HRESULT  (*EncryptionCallback) (unsigned int uiTransactionId, UINT *uiRetCode);


//compute a hash of the passed in token,  pDestSize is [in/out] taking the size
//   of the destbuffer and returning the size used
typedef HRESULT  (*ComputeHash) (unsigned char *orig, unsigned int len, unsigned char *dest, unsigned int *pDestSize);

typedef union {
	unsigned char	uc;
	unsigned int	ui;
	WCHAR			*pwsz;
	struct {
		unsigned int	cuc;
		unsigned char	*puc;
	} caub;
} ObexVariant;

typedef struct _obex_command {
	unsigned int	uiOp;
	unsigned int	uiResp;
	unsigned int	fFinal;
	ObexPacketData	sPktData;
	unsigned int	cProp;
	unsigned int	*aPropID;
	ObexVariant		*aPropVar;
} ObexCommand;

typedef struct _obex_transaction {
	unsigned int	uiConnectionId;
	unsigned int	uiTransactionId;

	unsigned int	uiOp;

	ObexCommand		*pObex;

	MemAlloc		ObexAlloc;
	MemFree			ObexFree;
	ServerCallback	ObexExecute;
	AuthCallback	ObexAuthRequest;
	EncryptionCallback ObexEncryptionRequest;	
    ComputeHash     ObexComputeHash;
} ObexTransaction;


//
//	AF_INET, AF_IRDA, [AF_BT]
//
#define OBEX_PROTOCOLS				2

#define OBEX_KEY_BASE		L"Software\\Microsoft\\Obex"
#define OBEX_KEY_SERVERS	L"Software\\Microsoft\\Obex\\Services"
#define OBEX_KEY_OBJECTS	L"Software\\Microsoft\\Obex\\Objects"

//
//	File browser API
//
#if defined (__cplusplus)
extern "C" {
#endif

extern "C" GUID CLSID_FileExchange;

#define OBEX_TRANSPORT_INET		1
#define OBEX_TRANSPORT_IRDA		2
#define OBEX_TRANSPORT_BTH		3

HANDLE ObexConnect (WCHAR *szMachineName, DWORD dwTransport, LPBYTE pbService, DWORD cService);
BOOL ObexDisconnect (HANDLE hConnect);
HANDLE ObexFindFileFirst (HANDLE hConnect, WCHAR *szPattern, WIN32_FIND_DATA *pwfd);
BOOL ObexFindFileNext (HANDLE hSearch, WIN32_FIND_DATA *pwfd);
BOOL ObexCloseSearch (HANDLE hSearch);
BOOL ObexSetCurrentDirectory (HANDLE hConnect, WCHAR *szRemotePath);
BOOL ObexCreateDirectory (HANDLE hConnect, WCHAR *szRemotePath);
BOOL ObexGetFile (HANDLE hConnect, WCHAR *szFileLocal, WCHAR *szFileRemote);
BOOL ObexPutFile (HANDLE hConnect, WCHAR *szFileRemote, WCHAR *szFileLocal);
BOOL ObexSendData(HANDLE hConnect, WCHAR *szDataName, CHAR *data, DWORD size);

#if defined (__cplusplus)
};
#endif

#define OBEX_TCP_PORT			650



#endif // __obex_H__



