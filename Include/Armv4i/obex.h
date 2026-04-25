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

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0286 */
/* at Thu Jun 24 19:10:10 2004
 */
/* Compiler settings for .\Obex.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32 (32b run), ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Obex_h__
#define __Obex_h__

/* Forward Declarations */ 

#ifndef __IObex_FWD_DEFINED__
#define __IObex_FWD_DEFINED__
typedef interface IObex IObex;
#endif 	/* __IObex_FWD_DEFINED__ */


#ifndef __IObex2_FWD_DEFINED__
#define __IObex2_FWD_DEFINED__
typedef interface IObex2 IObex2;
#endif 	/* __IObex2_FWD_DEFINED__ */


#ifndef __IObexDevice_FWD_DEFINED__
#define __IObexDevice_FWD_DEFINED__
typedef interface IObexDevice IObexDevice;
#endif 	/* __IObexDevice_FWD_DEFINED__ */


#ifndef __IHeaderCollection_FWD_DEFINED__
#define __IHeaderCollection_FWD_DEFINED__
typedef interface IHeaderCollection IHeaderCollection;
#endif 	/* __IHeaderCollection_FWD_DEFINED__ */


#ifndef __IObexSink_FWD_DEFINED__
#define __IObexSink_FWD_DEFINED__
typedef interface IObexSink IObexSink;
#endif 	/* __IObexSink_FWD_DEFINED__ */


#ifndef __IObexService_FWD_DEFINED__
#define __IObexService_FWD_DEFINED__
typedef interface IObexService IObexService;
#endif 	/* __IObexService_FWD_DEFINED__ */


#ifndef __IObexServiceConnection_FWD_DEFINED__
#define __IObexServiceConnection_FWD_DEFINED__
typedef interface IObexServiceConnection IObexServiceConnection;
#endif 	/* __IObexServiceConnection_FWD_DEFINED__ */


#ifndef __IInboxSink_FWD_DEFINED__
#define __IInboxSink_FWD_DEFINED__
typedef interface IInboxSink IInboxSink;
#endif 	/* __IInboxSink_FWD_DEFINED__ */


#ifndef __IHeaderEnum_FWD_DEFINED__
#define __IHeaderEnum_FWD_DEFINED__
typedef interface IHeaderEnum IHeaderEnum;
#endif 	/* __IHeaderEnum_FWD_DEFINED__ */


#ifndef __IPropertyBagEnum_FWD_DEFINED__
#define __IPropertyBagEnum_FWD_DEFINED__
typedef interface IPropertyBagEnum IPropertyBagEnum;
#endif 	/* __IPropertyBagEnum_FWD_DEFINED__ */


#ifndef __IDeviceEnum_FWD_DEFINED__
#define __IDeviceEnum_FWD_DEFINED__
typedef interface IDeviceEnum IDeviceEnum;
#endif 	/* __IDeviceEnum_FWD_DEFINED__ */


#ifndef __IObexCaps_FWD_DEFINED__
#define __IObexCaps_FWD_DEFINED__
typedef interface IObexCaps IObexCaps;
#endif 	/* __IObexCaps_FWD_DEFINED__ */


#ifndef __Obex_FWD_DEFINED__
#define __Obex_FWD_DEFINED__

#ifdef __cplusplus
typedef class Obex Obex;
#else
typedef struct Obex Obex;
#endif /* __cplusplus */

#endif 	/* __Obex_FWD_DEFINED__ */


#ifndef __HeaderCollection_FWD_DEFINED__
#define __HeaderCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class HeaderCollection HeaderCollection;
#else
typedef struct HeaderCollection HeaderCollection;
#endif /* __cplusplus */

#endif 	/* __HeaderCollection_FWD_DEFINED__ */


#ifndef __PropertyBag_FWD_DEFINED__
#define __PropertyBag_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertyBag PropertyBag;
#else
typedef struct PropertyBag PropertyBag;
#endif /* __cplusplus */

#endif 	/* __PropertyBag_FWD_DEFINED__ */


#ifndef __IrdaTransport_FWD_DEFINED__
#define __IrdaTransport_FWD_DEFINED__

#ifdef __cplusplus
typedef class IrdaTransport IrdaTransport;
#else
typedef struct IrdaTransport IrdaTransport;
#endif /* __cplusplus */

#endif 	/* __IrdaTransport_FWD_DEFINED__ */


#ifndef __BthTransport_FWD_DEFINED__
#define __BthTransport_FWD_DEFINED__

#ifdef __cplusplus
typedef class BthTransport BthTransport;
#else
typedef struct BthTransport BthTransport;
#endif /* __cplusplus */

#endif 	/* __BthTransport_FWD_DEFINED__ */


#ifndef __IpTransport_FWD_DEFINED__
#define __IpTransport_FWD_DEFINED__

#ifdef __cplusplus
typedef class IpTransport IpTransport;
#else
typedef struct IpTransport IpTransport;
#endif /* __cplusplus */

#endif 	/* __IpTransport_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_Obex_0000 */
/* [local] */ 

#include <obexerr.h>
typedef IPropertyBag __RPC_FAR *LPPROPERTYBAG2;








#define	OBEX_VERSION_10	( 0x10 )

#define	OBEX_VERSION	( OBEX_VERSION_10 )

#define	INVALID_CONN_ID	( 0xffffffff )

#define	SEND_DEVICE_UPDATES	( 0x1 )

typedef 
enum _OBEX_EVENT
    {	OE_QUERY_PASSWORD	= 0,
	OE_NEW_CONNECTION	= OE_QUERY_PASSWORD + 1,
	OE_NEW_COMMAND	= OE_NEW_CONNECTION + 1,
	OE_ABORT	= OE_NEW_COMMAND + 1,
	OE_DISCONNECT	= OE_ABORT + 1,
	OE_DEVICE_ARRIVAL	= OE_DISCONNECT + 1,
	OE_DEVICE_DEPARTURE	= OE_DEVICE_ARRIVAL + 1,
	OE_DEVICE_UPDATE	= OE_DEVICE_DEPARTURE + 1
    }	OBEX_EVENT;

typedef enum _OBEX_EVENT __RPC_FAR *LPOBEX_EVENT;

typedef 
enum _INBOX_EVENT
    {	IE_MIME	= 0,
	IE_SYNC	= IE_MIME + 1
    }	INBOX_EVENT;

typedef enum _INBOX_EVENT __RPC_FAR *LPINBOX_EVENT;

typedef struct _INBOX_EVENT_DATA
    {
    DWORD dwRequest;
    DWORD dwInboxEvent;
    LPCWSTR pszName;
    LPCWSTR pszInboxDestination;
    IHeaderCollection __RPC_FAR *pHeaderCol;
    IStream __RPC_FAR *pStream;
    }	INBOX_EVENT_DATA;

typedef struct _INBOX_EVENT_DATA __RPC_FAR *PINBOX_EVENT_DATA;

#define	SETPATH_FLAG_BACKUP	( 0x1 )

#define	SETPATH_FLAG_DONT_CREATE	( 0x2 )

#define	OBEX_HEADER_UNICODE	( 0 )

#define	OBEX_HEADER_STREAM	( 0x40 )

#define	OBEX_HEADER_1BYTE	( 0x80 )

#define	OBEX_HEADER_4BYTE	( 0xc0 )

#define	OBEX_HEADER_COUNT	( 0 | OBEX_HEADER_4BYTE )

#define	OBEX_HEADER_NAME	( 0x1 | OBEX_HEADER_UNICODE )

#define	OBEX_HEADER_TYPE	( 0x2 | OBEX_HEADER_STREAM )

#define	OBEX_HEADER_LENGTH	( 0x3 | OBEX_HEADER_4BYTE )

#define	OBEX_HEADER_TIME_ISO	( 0x4 | OBEX_HEADER_STREAM )

#define	OBEX_HEADER_TIME_COMPAT	( 0x4 | OBEX_HEADER_4BYTE )

#define	OBEX_HEADER_DESCRIPTION	( 0x5 | OBEX_HEADER_UNICODE )

#define	OBEX_HEADER_TARGET	( 0x6 | OBEX_HEADER_STREAM )

#define	OBEX_HEADER_HTTP	( 0x7 | OBEX_HEADER_STREAM )

#define	OBEX_HEADER_BODY	( 0x8 | OBEX_HEADER_STREAM )

#define	OBEX_HEADER_END_OF_BODY	( 0x9 | OBEX_HEADER_STREAM )

#define	OBEX_HEADER_WHO	( 0xa | OBEX_HEADER_STREAM )

#define	OBEX_HEADER_CONNECTION_ID	( 0xb | OBEX_HEADER_4BYTE )

#define	OBEX_HEADER_APP_PARAMS	( 0xc | OBEX_HEADER_STREAM )

#define	OBEX_HEADER_AUTH_CHALLENGE	( 0xd | OBEX_HEADER_STREAM )

#define	OBEX_HEADER_AUTH_RESPONSE	( 0xe | OBEX_HEADER_STREAM )

#define	OBEX_HEADER_OBJECT_CLASS	( 0xf | OBEX_HEADER_STREAM )

typedef struct _OBEX_HEADER
    {
    byte bId;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()][string] */ LPWSTR pszData;
        /* [case()] */ DWORD dwData;
        /* [case()] */ byte bData;
        /* [case()] */ struct 
            {
            DWORD dwSize;
            /* [size_is] */ byte __RPC_FAR *pbaData;
            }	ba;
        }	value;
    }	OBEX_HEADER;

typedef struct _OBEX_REQUEST
    {
    DWORD dwRequest;
    DWORD dwFlags;
    IHeaderCollection __RPC_FAR *pHeaderCol;
    BOOL fStream;
    IStream __RPC_FAR *pStream;
    }	OBEX_REQUEST;

typedef struct _OBEX_REQUEST __RPC_FAR *POBEX_REQUEST;

#define	OBEX_OPCODE_FINALBIT	( 0x80 )

#define	OBEX_OPCODE_CONNECT	( 0 | OBEX_OPCODE_FINALBIT )

#define	OBEX_OPCODE_DISCONNECT	( 0x1 | OBEX_OPCODE_FINALBIT )

#define	OBEX_OPCODE_PUT	( 0x2 )

#define	OBEX_OPCODE_GET	( 0x3 )

#define	OBEX_OPCODE_SET_PATH	( 0x5 | OBEX_OPCODE_FINALBIT )

#define	OBEX_OPCODE_ABORT	( 0x7f | OBEX_OPCODE_FINALBIT )

#define	OBEX_REPLY_CONTINUE	( 0x10 )

#define	OBEX_REPLY_SUCCESS	( 0x20 )

#define	OBEX_REPLY_CREATED	( 0x21 )

#define	OBEX_REPLY_ACCEPTED	( 0x22 )

#define	OBEX_REPLY_NON_AUTHORITATIVE_INFO	( 0x23 )

#define	OBEX_REPLY_NO_CONTENT	( 0x24 )

#define	OBEX_REPLY_RESET_CONTENT	( 0x25 )

#define	OBEX_REPLY_PARTIAL_CONTENT	( 0x26 )

#define	OBEX_REPLY_MULIPLE_CHOICES	( 0x30 )

#define	OBEX_REPLY_MOVED_PERMANENTLY	( 0x31 )

#define	OBEX_REPLY_MOVED_TEMPORARILY	( 0x32 )

#define	OBEX_REPLY_SEE_OTHER	( 0x33 )

#define	OBEX_REPLY_NOT_NODIFIED	( 0x34 )

#define	OBEX_REPLY_USE_PROXY	( 0x35 )

#define	OBEX_REPLY_FAIL_BAD_REQUEST	( 0x40 )

#define	OBEX_REPLY_FAIL_UNAUTHORIZED	( 0x41 )

#define	OBEX_REPLY_FAIL_PAYMENT_REQUIRED	( 0x42 )

#define	OBEX_REPLY_FAIL_FORBIDDEN	( 0x43 )

#define	OBEX_REPLY_FAIL_NOT_FOUND	( 0x44 )

#define	OBEX_REPLY_FAIL_METHOD_NOT_ALLOWED	( 0x45 )

#define	OBEX_REPLY_FAIL_NOT_ACCEPTABLE	( 0x46 )

#define	OBEX_REPLY_FAIL_PROXY_AUTHORIZATION_REQUIRED	( 0x47 )

#define	OBEX_REPLY_FAIL_REQUEST_TIME_OUT	( 0x48 )

#define	OBEX_REPLY_FAIL_CONFLICT	( 0x49 )

#define	OBEX_REPLY_FAIL_GONE	( 0x4a )

#define	OBEX_REPLY_FAIL_LENGTH_REQUIRED	( 0x4b )

#define	OBEX_REPLY_FAIL_PRECONDITION_FAILED	( 0x4c )

#define	OBEX_REPLY_FAIL_REQUESTED_ENTITY_TOO_LARGE	( 0x4d )

#define	OBEX_REPLY_FAIL_REQUEST_URL_TOO_LARGE	( 0x4e )

#define	OBEX_REPLY_FAIL_UNSUPPORTED_MEDIA_TYPE	( 0x4f )

#define	OBEX_REPLY_FAIL_INTERNAL_SERVER_ERROR	( 0x50 )

#define	OBEX_REPLY_FAIL_NOT_IMPLEMENTED	( 0x51 )

#define	OBEX_REPLY_FAIL_BAD_GATEWAY	( 0x52 )

#define	OBEX_REPLY_FAIL_SERVICE_UNAVAILABLE	( 0x53 )

#define	OBEX_REPLY_FAIL_GATEWAY_TIMEOUT	( 0x54 )

#define	OBEX_REPLY_FAIL_HTTP_VERSION_NOT_SUPPORTED	( 0x55 )

#define	OBEX_REPLY_FAIL_DATABASE_FULL	( 0x60 )

#define	OBEX_REPLY_FAIL_DATABASE_LOCKED	( 0x61 )

#define	OBEX_DEVICE_CAP_UNKNOWN	( 0 )

#define	OBEX_DEVICE_CAP_PUSH	( 0x1 )

#define	OBEX_DEVICE_CAP_FILE_BROWSE	( 0x2 )

#define	OBEX_DEVICE_CAP_SYNC	( 0x4 )



extern RPC_IF_HANDLE __MIDL_itf_Obex_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Obex_0000_v0_0_s_ifspec;

#ifndef __IObex_INTERFACE_DEFINED__
#define __IObex_INTERFACE_DEFINED__

/* interface IObex */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IObex;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0C5A5B12-2979-42D1-9E15-A63E34383B58")
    IObex : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumDevices( 
            /* [out] */ IDeviceEnum __RPC_FAR *__RPC_FAR *ppDeviceEnum,
            /* [in] */ REFCLSID uuidTransport) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumTransports( 
            /* [out] */ IPropertyBagEnum __RPC_FAR *__RPC_FAR *ppTransportEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RegisterService( 
            /* [in] */ IPropertyBag __RPC_FAR *pPropertyBag,
            /* [out] */ IObexService __RPC_FAR *__RPC_FAR *ppService) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BindToDevice( 
            /* [in] */ IPropertyBag __RPC_FAR *pPropertyBag,
            /* [out] */ IObexDevice __RPC_FAR *__RPC_FAR *ppDevice) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StartDeviceEnum( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StopDeviceEnum( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObexVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IObex __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IObex __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IObex __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IObex __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Shutdown )( 
            IObex __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumDevices )( 
            IObex __RPC_FAR * This,
            /* [out] */ IDeviceEnum __RPC_FAR *__RPC_FAR *ppDeviceEnum,
            /* [in] */ REFCLSID uuidTransport);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumTransports )( 
            IObex __RPC_FAR * This,
            /* [out] */ IPropertyBagEnum __RPC_FAR *__RPC_FAR *ppTransportEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RegisterService )( 
            IObex __RPC_FAR * This,
            /* [in] */ IPropertyBag __RPC_FAR *pPropertyBag,
            /* [out] */ IObexService __RPC_FAR *__RPC_FAR *ppService);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BindToDevice )( 
            IObex __RPC_FAR * This,
            /* [in] */ IPropertyBag __RPC_FAR *pPropertyBag,
            /* [out] */ IObexDevice __RPC_FAR *__RPC_FAR *ppDevice);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StartDeviceEnum )( 
            IObex __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StopDeviceEnum )( 
            IObex __RPC_FAR * This);
        
        END_INTERFACE
    } IObexVtbl;

    interface IObex
    {
        CONST_VTBL struct IObexVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObex_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IObex_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IObex_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IObex_Initialize(This)	\
    (This)->lpVtbl -> Initialize(This)

#define IObex_Shutdown(This)	\
    (This)->lpVtbl -> Shutdown(This)

#define IObex_EnumDevices(This,ppDeviceEnum,uuidTransport)	\
    (This)->lpVtbl -> EnumDevices(This,ppDeviceEnum,uuidTransport)

#define IObex_EnumTransports(This,ppTransportEnum)	\
    (This)->lpVtbl -> EnumTransports(This,ppTransportEnum)

#define IObex_RegisterService(This,pPropertyBag,ppService)	\
    (This)->lpVtbl -> RegisterService(This,pPropertyBag,ppService)

#define IObex_BindToDevice(This,pPropertyBag,ppDevice)	\
    (This)->lpVtbl -> BindToDevice(This,pPropertyBag,ppDevice)

#define IObex_StartDeviceEnum(This)	\
    (This)->lpVtbl -> StartDeviceEnum(This)

#define IObex_StopDeviceEnum(This)	\
    (This)->lpVtbl -> StopDeviceEnum(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObex_Initialize_Proxy( 
    IObex __RPC_FAR * This);


void __RPC_STUB IObex_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObex_Shutdown_Proxy( 
    IObex __RPC_FAR * This);


void __RPC_STUB IObex_Shutdown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObex_EnumDevices_Proxy( 
    IObex __RPC_FAR * This,
    /* [out] */ IDeviceEnum __RPC_FAR *__RPC_FAR *ppDeviceEnum,
    /* [in] */ REFCLSID uuidTransport);


void __RPC_STUB IObex_EnumDevices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObex_EnumTransports_Proxy( 
    IObex __RPC_FAR * This,
    /* [out] */ IPropertyBagEnum __RPC_FAR *__RPC_FAR *ppTransportEnum);


void __RPC_STUB IObex_EnumTransports_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObex_RegisterService_Proxy( 
    IObex __RPC_FAR * This,
    /* [in] */ IPropertyBag __RPC_FAR *pPropertyBag,
    /* [out] */ IObexService __RPC_FAR *__RPC_FAR *ppService);


void __RPC_STUB IObex_RegisterService_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObex_BindToDevice_Proxy( 
    IObex __RPC_FAR * This,
    /* [in] */ IPropertyBag __RPC_FAR *pPropertyBag,
    /* [out] */ IObexDevice __RPC_FAR *__RPC_FAR *ppDevice);


void __RPC_STUB IObex_BindToDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObex_StartDeviceEnum_Proxy( 
    IObex __RPC_FAR * This);


void __RPC_STUB IObex_StartDeviceEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObex_StopDeviceEnum_Proxy( 
    IObex __RPC_FAR * This);


void __RPC_STUB IObex_StopDeviceEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IObex_INTERFACE_DEFINED__ */


#ifndef __IObex2_INTERFACE_DEFINED__
#define __IObex2_INTERFACE_DEFINED__

/* interface IObex2 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IObex2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8FF83D03-CD48-420a-83DD-52D39E8607E2")
    IObex2 : public IObex
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PauseDeviceEnum( 
            BOOL fPauseOn) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObex2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IObex2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IObex2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IObex2 __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IObex2 __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Shutdown )( 
            IObex2 __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumDevices )( 
            IObex2 __RPC_FAR * This,
            /* [out] */ IDeviceEnum __RPC_FAR *__RPC_FAR *ppDeviceEnum,
            /* [in] */ REFCLSID uuidTransport);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumTransports )( 
            IObex2 __RPC_FAR * This,
            /* [out] */ IPropertyBagEnum __RPC_FAR *__RPC_FAR *ppTransportEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RegisterService )( 
            IObex2 __RPC_FAR * This,
            /* [in] */ IPropertyBag __RPC_FAR *pPropertyBag,
            /* [out] */ IObexService __RPC_FAR *__RPC_FAR *ppService);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BindToDevice )( 
            IObex2 __RPC_FAR * This,
            /* [in] */ IPropertyBag __RPC_FAR *pPropertyBag,
            /* [out] */ IObexDevice __RPC_FAR *__RPC_FAR *ppDevice);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StartDeviceEnum )( 
            IObex2 __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StopDeviceEnum )( 
            IObex2 __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PauseDeviceEnum )( 
            IObex2 __RPC_FAR * This,
            BOOL fPauseOn);
        
        END_INTERFACE
    } IObex2Vtbl;

    interface IObex2
    {
        CONST_VTBL struct IObex2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObex2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IObex2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IObex2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IObex2_Initialize(This)	\
    (This)->lpVtbl -> Initialize(This)

#define IObex2_Shutdown(This)	\
    (This)->lpVtbl -> Shutdown(This)

#define IObex2_EnumDevices(This,ppDeviceEnum,uuidTransport)	\
    (This)->lpVtbl -> EnumDevices(This,ppDeviceEnum,uuidTransport)

#define IObex2_EnumTransports(This,ppTransportEnum)	\
    (This)->lpVtbl -> EnumTransports(This,ppTransportEnum)

#define IObex2_RegisterService(This,pPropertyBag,ppService)	\
    (This)->lpVtbl -> RegisterService(This,pPropertyBag,ppService)

#define IObex2_BindToDevice(This,pPropertyBag,ppDevice)	\
    (This)->lpVtbl -> BindToDevice(This,pPropertyBag,ppDevice)

#define IObex2_StartDeviceEnum(This)	\
    (This)->lpVtbl -> StartDeviceEnum(This)

#define IObex2_StopDeviceEnum(This)	\
    (This)->lpVtbl -> StopDeviceEnum(This)


#define IObex2_PauseDeviceEnum(This,fPauseOn)	\
    (This)->lpVtbl -> PauseDeviceEnum(This,fPauseOn)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObex2_PauseDeviceEnum_Proxy( 
    IObex2 __RPC_FAR * This,
    BOOL fPauseOn);


void __RPC_STUB IObex2_PauseDeviceEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IObex2_INTERFACE_DEFINED__ */


#ifndef __IObexDevice_INTERFACE_DEFINED__
#define __IObexDevice_INTERFACE_DEFINED__

/* interface IObexDevice */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IObexDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3ED60A15-6FB0-4A81-8ED3-49097A8E292C")
    IObexDevice : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Connect( 
            /* [unique][string][in] */ LPCWSTR pszPassword,
            /* [in] */ DWORD dwCapability,
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Disconnect( 
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders,
            /* [out] */ IStream __RPC_FAR *__RPC_FAR *ppStream) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Put( 
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders,
            /* [unique][out][in] */ IStream __RPC_FAR *__RPC_FAR *ppStream) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Abort( 
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPath( 
            /* [in] */ LPCWSTR pszName,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumProperties( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPassword( 
            /* [in] */ LPCWSTR pszPassword) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BindToStorage( 
            /* [in] */ DWORD dwCapability,
            /* [out] */ IStorage __RPC_FAR *__RPC_FAR *ppStorage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObexDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IObexDevice __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IObexDevice __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IObexDevice __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Connect )( 
            IObexDevice __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszPassword,
            /* [in] */ DWORD dwCapability,
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Disconnect )( 
            IObexDevice __RPC_FAR * This,
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Get )( 
            IObexDevice __RPC_FAR * This,
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders,
            /* [out] */ IStream __RPC_FAR *__RPC_FAR *ppStream);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Put )( 
            IObexDevice __RPC_FAR * This,
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders,
            /* [unique][out][in] */ IStream __RPC_FAR *__RPC_FAR *ppStream);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Abort )( 
            IObexDevice __RPC_FAR * This,
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetPath )( 
            IObexDevice __RPC_FAR * This,
            /* [in] */ LPCWSTR pszName,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumProperties )( 
            IObexDevice __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetPassword )( 
            IObexDevice __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPassword);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BindToStorage )( 
            IObexDevice __RPC_FAR * This,
            /* [in] */ DWORD dwCapability,
            /* [out] */ IStorage __RPC_FAR *__RPC_FAR *ppStorage);
        
        END_INTERFACE
    } IObexDeviceVtbl;

    interface IObexDevice
    {
        CONST_VTBL struct IObexDeviceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObexDevice_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IObexDevice_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IObexDevice_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IObexDevice_Connect(This,pszPassword,dwCapability,pHeaders)	\
    (This)->lpVtbl -> Connect(This,pszPassword,dwCapability,pHeaders)

#define IObexDevice_Disconnect(This,pHeaders)	\
    (This)->lpVtbl -> Disconnect(This,pHeaders)

#define IObexDevice_Get(This,pHeaders,ppStream)	\
    (This)->lpVtbl -> Get(This,pHeaders,ppStream)

#define IObexDevice_Put(This,pHeaders,ppStream)	\
    (This)->lpVtbl -> Put(This,pHeaders,ppStream)

#define IObexDevice_Abort(This,pHeaders)	\
    (This)->lpVtbl -> Abort(This,pHeaders)

#define IObexDevice_SetPath(This,pszName,dwFlags,pHeaders)	\
    (This)->lpVtbl -> SetPath(This,pszName,dwFlags,pHeaders)

#define IObexDevice_EnumProperties(This,riid,ppv)	\
    (This)->lpVtbl -> EnumProperties(This,riid,ppv)

#define IObexDevice_SetPassword(This,pszPassword)	\
    (This)->lpVtbl -> SetPassword(This,pszPassword)

#define IObexDevice_BindToStorage(This,dwCapability,ppStorage)	\
    (This)->lpVtbl -> BindToStorage(This,dwCapability,ppStorage)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexDevice_Connect_Proxy( 
    IObexDevice __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszPassword,
    /* [in] */ DWORD dwCapability,
    /* [in] */ IHeaderCollection __RPC_FAR *pHeaders);


void __RPC_STUB IObexDevice_Connect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexDevice_Disconnect_Proxy( 
    IObexDevice __RPC_FAR * This,
    /* [in] */ IHeaderCollection __RPC_FAR *pHeaders);


void __RPC_STUB IObexDevice_Disconnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexDevice_Get_Proxy( 
    IObexDevice __RPC_FAR * This,
    /* [in] */ IHeaderCollection __RPC_FAR *pHeaders,
    /* [out] */ IStream __RPC_FAR *__RPC_FAR *ppStream);


void __RPC_STUB IObexDevice_Get_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexDevice_Put_Proxy( 
    IObexDevice __RPC_FAR * This,
    /* [in] */ IHeaderCollection __RPC_FAR *pHeaders,
    /* [unique][out][in] */ IStream __RPC_FAR *__RPC_FAR *ppStream);


void __RPC_STUB IObexDevice_Put_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexDevice_Abort_Proxy( 
    IObexDevice __RPC_FAR * This,
    /* [in] */ IHeaderCollection __RPC_FAR *pHeaders);


void __RPC_STUB IObexDevice_Abort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexDevice_SetPath_Proxy( 
    IObexDevice __RPC_FAR * This,
    /* [in] */ LPCWSTR pszName,
    /* [in] */ DWORD dwFlags,
    /* [in] */ IHeaderCollection __RPC_FAR *pHeaders);


void __RPC_STUB IObexDevice_SetPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexDevice_EnumProperties_Proxy( 
    IObexDevice __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IObexDevice_EnumProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexDevice_SetPassword_Proxy( 
    IObexDevice __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPassword);


void __RPC_STUB IObexDevice_SetPassword_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexDevice_BindToStorage_Proxy( 
    IObexDevice __RPC_FAR * This,
    /* [in] */ DWORD dwCapability,
    /* [out] */ IStorage __RPC_FAR *__RPC_FAR *ppStorage);


void __RPC_STUB IObexDevice_BindToStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IObexDevice_INTERFACE_DEFINED__ */


#ifndef __IHeaderCollection_INTERFACE_DEFINED__
#define __IHeaderCollection_INTERFACE_DEFINED__

/* interface IHeaderCollection */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IHeaderCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6561D66B-8CC1-49F9-8071-632D288EDAF3")
    IHeaderCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddByteArray( 
            /* [in] */ byte Id,
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddLong( 
            /* [in] */ byte Id,
            /* [in] */ unsigned long ulData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddByte( 
            /* [in] */ byte Id,
            /* [in] */ byte pData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddUnicodeString( 
            /* [in] */ byte Id,
            /* [in] */ LPCWSTR pszData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ byte Id) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddCount( 
            /* [in] */ unsigned long ulCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddName( 
            /* [in] */ LPCWSTR pszName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddType( 
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddLength( 
            /* [in] */ unsigned long ulLength) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddTimeOld( 
            /* [in] */ unsigned long ulTime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddTime( 
            /* [in] */ FILETIME __RPC_FAR *pFiletime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddDescription( 
            /* [in] */ LPCWSTR pszDescription) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddTarget( 
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddHTTP( 
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddBody( 
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddEndOfBody( 
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddWho( 
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddConnectionId( 
            /* [in] */ unsigned long ulConnectionId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddAppParams( 
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddObjectClass( 
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumHeaders( 
            /* [out] */ IHeaderEnum __RPC_FAR *__RPC_FAR *pHeaderEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHeaderCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IHeaderCollection __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IHeaderCollection __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddByteArray )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ byte Id,
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddLong )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ byte Id,
            /* [in] */ unsigned long ulData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddByte )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ byte Id,
            /* [in] */ byte pData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddUnicodeString )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ byte Id,
            /* [in] */ LPCWSTR pszData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Remove )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ byte Id);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveAll )( 
            IHeaderCollection __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddCount )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ unsigned long ulCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddName )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ LPCWSTR pszName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddType )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddLength )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ unsigned long ulLength);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddTimeOld )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ unsigned long ulTime);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddTime )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ FILETIME __RPC_FAR *pFiletime);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddDescription )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ LPCWSTR pszDescription);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddTarget )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddHTTP )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddBody )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddEndOfBody )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddWho )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddConnectionId )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ unsigned long ulConnectionId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddAppParams )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddObjectClass )( 
            IHeaderCollection __RPC_FAR * This,
            /* [in] */ unsigned long ulSize,
            /* [size_is][in] */ byte __RPC_FAR *pData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumHeaders )( 
            IHeaderCollection __RPC_FAR * This,
            /* [out] */ IHeaderEnum __RPC_FAR *__RPC_FAR *pHeaderEnum);
        
        END_INTERFACE
    } IHeaderCollectionVtbl;

    interface IHeaderCollection
    {
        CONST_VTBL struct IHeaderCollectionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHeaderCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHeaderCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHeaderCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHeaderCollection_AddByteArray(This,Id,ulSize,pData)	\
    (This)->lpVtbl -> AddByteArray(This,Id,ulSize,pData)

#define IHeaderCollection_AddLong(This,Id,ulData)	\
    (This)->lpVtbl -> AddLong(This,Id,ulData)

#define IHeaderCollection_AddByte(This,Id,pData)	\
    (This)->lpVtbl -> AddByte(This,Id,pData)

#define IHeaderCollection_AddUnicodeString(This,Id,pszData)	\
    (This)->lpVtbl -> AddUnicodeString(This,Id,pszData)

#define IHeaderCollection_Remove(This,Id)	\
    (This)->lpVtbl -> Remove(This,Id)

#define IHeaderCollection_RemoveAll(This)	\
    (This)->lpVtbl -> RemoveAll(This)

#define IHeaderCollection_AddCount(This,ulCount)	\
    (This)->lpVtbl -> AddCount(This,ulCount)

#define IHeaderCollection_AddName(This,pszName)	\
    (This)->lpVtbl -> AddName(This,pszName)

#define IHeaderCollection_AddType(This,ulSize,pData)	\
    (This)->lpVtbl -> AddType(This,ulSize,pData)

#define IHeaderCollection_AddLength(This,ulLength)	\
    (This)->lpVtbl -> AddLength(This,ulLength)

#define IHeaderCollection_AddTimeOld(This,ulTime)	\
    (This)->lpVtbl -> AddTimeOld(This,ulTime)

#define IHeaderCollection_AddTime(This,pFiletime)	\
    (This)->lpVtbl -> AddTime(This,pFiletime)

#define IHeaderCollection_AddDescription(This,pszDescription)	\
    (This)->lpVtbl -> AddDescription(This,pszDescription)

#define IHeaderCollection_AddTarget(This,ulSize,pData)	\
    (This)->lpVtbl -> AddTarget(This,ulSize,pData)

#define IHeaderCollection_AddHTTP(This,ulSize,pData)	\
    (This)->lpVtbl -> AddHTTP(This,ulSize,pData)

#define IHeaderCollection_AddBody(This,ulSize,pData)	\
    (This)->lpVtbl -> AddBody(This,ulSize,pData)

#define IHeaderCollection_AddEndOfBody(This,ulSize,pData)	\
    (This)->lpVtbl -> AddEndOfBody(This,ulSize,pData)

#define IHeaderCollection_AddWho(This,ulSize,pData)	\
    (This)->lpVtbl -> AddWho(This,ulSize,pData)

#define IHeaderCollection_AddConnectionId(This,ulConnectionId)	\
    (This)->lpVtbl -> AddConnectionId(This,ulConnectionId)

#define IHeaderCollection_AddAppParams(This,ulSize,pData)	\
    (This)->lpVtbl -> AddAppParams(This,ulSize,pData)

#define IHeaderCollection_AddObjectClass(This,ulSize,pData)	\
    (This)->lpVtbl -> AddObjectClass(This,ulSize,pData)

#define IHeaderCollection_EnumHeaders(This,pHeaderEnum)	\
    (This)->lpVtbl -> EnumHeaders(This,pHeaderEnum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddByteArray_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ byte Id,
    /* [in] */ unsigned long ulSize,
    /* [size_is][in] */ byte __RPC_FAR *pData);


void __RPC_STUB IHeaderCollection_AddByteArray_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddLong_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ byte Id,
    /* [in] */ unsigned long ulData);


void __RPC_STUB IHeaderCollection_AddLong_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddByte_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ byte Id,
    /* [in] */ byte pData);


void __RPC_STUB IHeaderCollection_AddByte_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddUnicodeString_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ byte Id,
    /* [in] */ LPCWSTR pszData);


void __RPC_STUB IHeaderCollection_AddUnicodeString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_Remove_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ byte Id);


void __RPC_STUB IHeaderCollection_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_RemoveAll_Proxy( 
    IHeaderCollection __RPC_FAR * This);


void __RPC_STUB IHeaderCollection_RemoveAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddCount_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ unsigned long ulCount);


void __RPC_STUB IHeaderCollection_AddCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddName_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ LPCWSTR pszName);


void __RPC_STUB IHeaderCollection_AddName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddType_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ unsigned long ulSize,
    /* [size_is][in] */ byte __RPC_FAR *pData);


void __RPC_STUB IHeaderCollection_AddType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddLength_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ unsigned long ulLength);


void __RPC_STUB IHeaderCollection_AddLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddTimeOld_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ unsigned long ulTime);


void __RPC_STUB IHeaderCollection_AddTimeOld_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddTime_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ FILETIME __RPC_FAR *pFiletime);


void __RPC_STUB IHeaderCollection_AddTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddDescription_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ LPCWSTR pszDescription);


void __RPC_STUB IHeaderCollection_AddDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddTarget_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ unsigned long ulSize,
    /* [size_is][in] */ byte __RPC_FAR *pData);


void __RPC_STUB IHeaderCollection_AddTarget_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddHTTP_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ unsigned long ulSize,
    /* [size_is][in] */ byte __RPC_FAR *pData);


void __RPC_STUB IHeaderCollection_AddHTTP_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddBody_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ unsigned long ulSize,
    /* [size_is][in] */ byte __RPC_FAR *pData);


void __RPC_STUB IHeaderCollection_AddBody_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddEndOfBody_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ unsigned long ulSize,
    /* [size_is][in] */ byte __RPC_FAR *pData);


void __RPC_STUB IHeaderCollection_AddEndOfBody_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddWho_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ unsigned long ulSize,
    /* [size_is][in] */ byte __RPC_FAR *pData);


void __RPC_STUB IHeaderCollection_AddWho_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddConnectionId_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ unsigned long ulConnectionId);


void __RPC_STUB IHeaderCollection_AddConnectionId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddAppParams_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ unsigned long ulSize,
    /* [size_is][in] */ byte __RPC_FAR *pData);


void __RPC_STUB IHeaderCollection_AddAppParams_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_AddObjectClass_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [in] */ unsigned long ulSize,
    /* [size_is][in] */ byte __RPC_FAR *pData);


void __RPC_STUB IHeaderCollection_AddObjectClass_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHeaderCollection_EnumHeaders_Proxy( 
    IHeaderCollection __RPC_FAR * This,
    /* [out] */ IHeaderEnum __RPC_FAR *__RPC_FAR *pHeaderEnum);


void __RPC_STUB IHeaderCollection_EnumHeaders_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHeaderCollection_INTERFACE_DEFINED__ */


#ifndef __IObexSink_INTERFACE_DEFINED__
#define __IObexSink_INTERFACE_DEFINED__

/* interface IObexSink */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IObexSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("80DFC5AB-BF07-4612-BACE-AEBC0129590A")
    IObexSink : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ OBEX_EVENT Event,
            /* [in] */ IUnknown __RPC_FAR *pUnk1,
            /* [in] */ IUnknown __RPC_FAR *pUnk2) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObexSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IObexSink __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IObexSink __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IObexSink __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Notify )( 
            IObexSink __RPC_FAR * This,
            /* [in] */ OBEX_EVENT Event,
            /* [in] */ IUnknown __RPC_FAR *pUnk1,
            /* [in] */ IUnknown __RPC_FAR *pUnk2);
        
        END_INTERFACE
    } IObexSinkVtbl;

    interface IObexSink
    {
        CONST_VTBL struct IObexSinkVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObexSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IObexSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IObexSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IObexSink_Notify(This,Event,pUnk1,pUnk2)	\
    (This)->lpVtbl -> Notify(This,Event,pUnk1,pUnk2)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexSink_Notify_Proxy( 
    IObexSink __RPC_FAR * This,
    /* [in] */ OBEX_EVENT Event,
    /* [in] */ IUnknown __RPC_FAR *pUnk1,
    /* [in] */ IUnknown __RPC_FAR *pUnk2);


void __RPC_STUB IObexSink_Notify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IObexSink_INTERFACE_DEFINED__ */


#ifndef __IObexService_INTERFACE_DEFINED__
#define __IObexService_INTERFACE_DEFINED__

/* interface IObexService */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IObexService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B00990A-010D-4F19-AE6C-D60DA9B3783E")
    IObexService : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetConnection( 
            /* [out] */ IObexServiceConnection __RPC_FAR *__RPC_FAR *ppConnection,
            /* [in] */ boolean fWait) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPassword( 
            /* [in] */ LPCWSTR pszPassword) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObexServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IObexService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IObexService __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IObexService __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetConnection )( 
            IObexService __RPC_FAR * This,
            /* [out] */ IObexServiceConnection __RPC_FAR *__RPC_FAR *ppConnection,
            /* [in] */ boolean fWait);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Close )( 
            IObexService __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetPassword )( 
            IObexService __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPassword);
        
        END_INTERFACE
    } IObexServiceVtbl;

    interface IObexService
    {
        CONST_VTBL struct IObexServiceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObexService_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IObexService_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IObexService_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IObexService_GetConnection(This,ppConnection,fWait)	\
    (This)->lpVtbl -> GetConnection(This,ppConnection,fWait)

#define IObexService_Close(This)	\
    (This)->lpVtbl -> Close(This)

#define IObexService_SetPassword(This,pszPassword)	\
    (This)->lpVtbl -> SetPassword(This,pszPassword)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexService_GetConnection_Proxy( 
    IObexService __RPC_FAR * This,
    /* [out] */ IObexServiceConnection __RPC_FAR *__RPC_FAR *ppConnection,
    /* [in] */ boolean fWait);


void __RPC_STUB IObexService_GetConnection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexService_Close_Proxy( 
    IObexService __RPC_FAR * This);


void __RPC_STUB IObexService_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexService_SetPassword_Proxy( 
    IObexService __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPassword);


void __RPC_STUB IObexService_SetPassword_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IObexService_INTERFACE_DEFINED__ */


#ifndef __IObexServiceConnection_INTERFACE_DEFINED__
#define __IObexServiceConnection_INTERFACE_DEFINED__

/* interface IObexServiceConnection */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IObexServiceConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CB258BBB-678B-414A-81A3-CB98B669EDD7")
    IObexServiceConnection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Accept( 
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close( 
            /* [in] */ IHeaderCollection __RPC_FAR *pExtraHeaders) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCommand( 
            /* [out][in] */ OBEX_REQUEST __RPC_FAR *pRequest,
            /* [in] */ boolean fWait) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendResponse( 
            /* [in] */ DWORD dwResponse,
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumProperties( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumHeaders( 
            /* [out] */ IHeaderEnum __RPC_FAR *__RPC_FAR *ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObexServiceConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IObexServiceConnection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IObexServiceConnection __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IObexServiceConnection __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Accept )( 
            IObexServiceConnection __RPC_FAR * This,
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Close )( 
            IObexServiceConnection __RPC_FAR * This,
            /* [in] */ IHeaderCollection __RPC_FAR *pExtraHeaders);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCommand )( 
            IObexServiceConnection __RPC_FAR * This,
            /* [out][in] */ OBEX_REQUEST __RPC_FAR *pRequest,
            /* [in] */ boolean fWait);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendResponse )( 
            IObexServiceConnection __RPC_FAR * This,
            /* [in] */ DWORD dwResponse,
            /* [in] */ IHeaderCollection __RPC_FAR *pHeaders);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumProperties )( 
            IObexServiceConnection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumHeaders )( 
            IObexServiceConnection __RPC_FAR * This,
            /* [out] */ IHeaderEnum __RPC_FAR *__RPC_FAR *ppEnum);
        
        END_INTERFACE
    } IObexServiceConnectionVtbl;

    interface IObexServiceConnection
    {
        CONST_VTBL struct IObexServiceConnectionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObexServiceConnection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IObexServiceConnection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IObexServiceConnection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IObexServiceConnection_Accept(This,pHeaders)	\
    (This)->lpVtbl -> Accept(This,pHeaders)

#define IObexServiceConnection_Close(This,pExtraHeaders)	\
    (This)->lpVtbl -> Close(This,pExtraHeaders)

#define IObexServiceConnection_GetCommand(This,pRequest,fWait)	\
    (This)->lpVtbl -> GetCommand(This,pRequest,fWait)

#define IObexServiceConnection_SendResponse(This,dwResponse,pHeaders)	\
    (This)->lpVtbl -> SendResponse(This,dwResponse,pHeaders)

#define IObexServiceConnection_EnumProperties(This,riid,ppv)	\
    (This)->lpVtbl -> EnumProperties(This,riid,ppv)

#define IObexServiceConnection_EnumHeaders(This,ppEnum)	\
    (This)->lpVtbl -> EnumHeaders(This,ppEnum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexServiceConnection_Accept_Proxy( 
    IObexServiceConnection __RPC_FAR * This,
    /* [in] */ IHeaderCollection __RPC_FAR *pHeaders);


void __RPC_STUB IObexServiceConnection_Accept_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexServiceConnection_Close_Proxy( 
    IObexServiceConnection __RPC_FAR * This,
    /* [in] */ IHeaderCollection __RPC_FAR *pExtraHeaders);


void __RPC_STUB IObexServiceConnection_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexServiceConnection_GetCommand_Proxy( 
    IObexServiceConnection __RPC_FAR * This,
    /* [out][in] */ OBEX_REQUEST __RPC_FAR *pRequest,
    /* [in] */ boolean fWait);


void __RPC_STUB IObexServiceConnection_GetCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexServiceConnection_SendResponse_Proxy( 
    IObexServiceConnection __RPC_FAR * This,
    /* [in] */ DWORD dwResponse,
    /* [in] */ IHeaderCollection __RPC_FAR *pHeaders);


void __RPC_STUB IObexServiceConnection_SendResponse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexServiceConnection_EnumProperties_Proxy( 
    IObexServiceConnection __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IObexServiceConnection_EnumProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexServiceConnection_EnumHeaders_Proxy( 
    IObexServiceConnection __RPC_FAR * This,
    /* [out] */ IHeaderEnum __RPC_FAR *__RPC_FAR *ppEnum);


void __RPC_STUB IObexServiceConnection_EnumHeaders_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IObexServiceConnection_INTERFACE_DEFINED__ */


#ifndef __IInboxSink_INTERFACE_DEFINED__
#define __IInboxSink_INTERFACE_DEFINED__

/* interface IInboxSink */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IInboxSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5335417D-96D5-4AB4-9EF0-8F29C82232A3")
    IInboxSink : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ INBOX_EVENT_DATA __RPC_FAR *pInboxData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInboxSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IInboxSink __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IInboxSink __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IInboxSink __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Notify )( 
            IInboxSink __RPC_FAR * This,
            /* [in] */ INBOX_EVENT_DATA __RPC_FAR *pInboxData);
        
        END_INTERFACE
    } IInboxSinkVtbl;

    interface IInboxSink
    {
        CONST_VTBL struct IInboxSinkVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInboxSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IInboxSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IInboxSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IInboxSink_Notify(This,pInboxData)	\
    (This)->lpVtbl -> Notify(This,pInboxData)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IInboxSink_Notify_Proxy( 
    IInboxSink __RPC_FAR * This,
    /* [in] */ INBOX_EVENT_DATA __RPC_FAR *pInboxData);


void __RPC_STUB IInboxSink_Notify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IInboxSink_INTERFACE_DEFINED__ */


#ifndef __IHeaderEnum_INTERFACE_DEFINED__
#define __IHeaderEnum_INTERFACE_DEFINED__

/* interface IHeaderEnum */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IHeaderEnum;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5507423D-0DD6-443D-A3CF-756D8E725C77")
    IHeaderEnum : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ OBEX_HEADER __RPC_FAR *__RPC_FAR *rgelt,
            /* [unique][out][in] */ ULONG __RPC_FAR *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IHeaderEnum __RPC_FAR *__RPC_FAR *ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHeaderEnumVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IHeaderEnum __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IHeaderEnum __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IHeaderEnum __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IHeaderEnum __RPC_FAR * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ OBEX_HEADER __RPC_FAR *__RPC_FAR *rgelt,
            /* [unique][out][in] */ ULONG __RPC_FAR *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            IHeaderEnum __RPC_FAR * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IHeaderEnum __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IHeaderEnum __RPC_FAR * This,
            /* [out] */ IHeaderEnum __RPC_FAR *__RPC_FAR *ppenum);
        
        END_INTERFACE
    } IHeaderEnumVtbl;

    interface IHeaderEnum
    {
        CONST_VTBL struct IHeaderEnumVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHeaderEnum_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHeaderEnum_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHeaderEnum_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHeaderEnum_Next(This,celt,rgelt,pceltFetched)	\
    (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched)

#define IHeaderEnum_Skip(This,celt)	\
    (This)->lpVtbl -> Skip(This,celt)

#define IHeaderEnum_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IHeaderEnum_Clone(This,ppenum)	\
    (This)->lpVtbl -> Clone(This,ppenum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IHeaderEnum_Next_Proxy( 
    IHeaderEnum __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ OBEX_HEADER __RPC_FAR *__RPC_FAR *rgelt,
    /* [unique][out][in] */ ULONG __RPC_FAR *pceltFetched);


void __RPC_STUB IHeaderEnum_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IHeaderEnum_Skip_Proxy( 
    IHeaderEnum __RPC_FAR * This,
    /* [in] */ ULONG celt);


void __RPC_STUB IHeaderEnum_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IHeaderEnum_Reset_Proxy( 
    IHeaderEnum __RPC_FAR * This);


void __RPC_STUB IHeaderEnum_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IHeaderEnum_Clone_Proxy( 
    IHeaderEnum __RPC_FAR * This,
    /* [out] */ IHeaderEnum __RPC_FAR *__RPC_FAR *ppenum);


void __RPC_STUB IHeaderEnum_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHeaderEnum_INTERFACE_DEFINED__ */


#ifndef __IPropertyBagEnum_INTERFACE_DEFINED__
#define __IPropertyBagEnum_INTERFACE_DEFINED__

/* interface IPropertyBagEnum */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPropertyBagEnum;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6194770D-2B61-47DE-8628-33C42E091181")
    IPropertyBagEnum : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ LPPROPERTYBAG2 __RPC_FAR *rgelt,
            /* [unique][out][in] */ ULONG __RPC_FAR *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IPropertyBagEnum __RPC_FAR *__RPC_FAR *ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyBagEnumVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertyBagEnum __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertyBagEnum __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertyBagEnum __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IPropertyBagEnum __RPC_FAR * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ LPPROPERTYBAG2 __RPC_FAR *rgelt,
            /* [unique][out][in] */ ULONG __RPC_FAR *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            IPropertyBagEnum __RPC_FAR * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IPropertyBagEnum __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IPropertyBagEnum __RPC_FAR * This,
            /* [out] */ IPropertyBagEnum __RPC_FAR *__RPC_FAR *ppenum);
        
        END_INTERFACE
    } IPropertyBagEnumVtbl;

    interface IPropertyBagEnum
    {
        CONST_VTBL struct IPropertyBagEnumVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyBagEnum_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyBagEnum_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyBagEnum_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyBagEnum_Next(This,celt,rgelt,pceltFetched)	\
    (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched)

#define IPropertyBagEnum_Skip(This,celt)	\
    (This)->lpVtbl -> Skip(This,celt)

#define IPropertyBagEnum_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IPropertyBagEnum_Clone(This,ppenum)	\
    (This)->lpVtbl -> Clone(This,ppenum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertyBagEnum_Next_Proxy( 
    IPropertyBagEnum __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ LPPROPERTYBAG2 __RPC_FAR *rgelt,
    /* [unique][out][in] */ ULONG __RPC_FAR *pceltFetched);


void __RPC_STUB IPropertyBagEnum_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyBagEnum_Skip_Proxy( 
    IPropertyBagEnum __RPC_FAR * This,
    /* [in] */ ULONG celt);


void __RPC_STUB IPropertyBagEnum_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyBagEnum_Reset_Proxy( 
    IPropertyBagEnum __RPC_FAR * This);


void __RPC_STUB IPropertyBagEnum_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyBagEnum_Clone_Proxy( 
    IPropertyBagEnum __RPC_FAR * This,
    /* [out] */ IPropertyBagEnum __RPC_FAR *__RPC_FAR *ppenum);


void __RPC_STUB IPropertyBagEnum_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyBagEnum_INTERFACE_DEFINED__ */


#ifndef __IDeviceEnum_INTERFACE_DEFINED__
#define __IDeviceEnum_INTERFACE_DEFINED__

/* interface IDeviceEnum */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDeviceEnum;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("53B5F567-DFE3-46DF-985A-BB993AE1AB00")
    IDeviceEnum : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IObexDevice __RPC_FAR *__RPC_FAR *rgelt,
            /* [unique][out][in] */ ULONG __RPC_FAR *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IDeviceEnum __RPC_FAR *__RPC_FAR *ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDeviceEnumVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDeviceEnum __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDeviceEnum __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDeviceEnum __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IDeviceEnum __RPC_FAR * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IObexDevice __RPC_FAR *__RPC_FAR *rgelt,
            /* [unique][out][in] */ ULONG __RPC_FAR *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            IDeviceEnum __RPC_FAR * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IDeviceEnum __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IDeviceEnum __RPC_FAR * This,
            /* [out] */ IDeviceEnum __RPC_FAR *__RPC_FAR *ppenum);
        
        END_INTERFACE
    } IDeviceEnumVtbl;

    interface IDeviceEnum
    {
        CONST_VTBL struct IDeviceEnumVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDeviceEnum_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDeviceEnum_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDeviceEnum_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDeviceEnum_Next(This,celt,rgelt,pceltFetched)	\
    (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched)

#define IDeviceEnum_Skip(This,celt)	\
    (This)->lpVtbl -> Skip(This,celt)

#define IDeviceEnum_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IDeviceEnum_Clone(This,ppenum)	\
    (This)->lpVtbl -> Clone(This,ppenum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDeviceEnum_Next_Proxy( 
    IDeviceEnum __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ IObexDevice __RPC_FAR *__RPC_FAR *rgelt,
    /* [unique][out][in] */ ULONG __RPC_FAR *pceltFetched);


void __RPC_STUB IDeviceEnum_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDeviceEnum_Skip_Proxy( 
    IDeviceEnum __RPC_FAR * This,
    /* [in] */ ULONG celt);


void __RPC_STUB IDeviceEnum_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDeviceEnum_Reset_Proxy( 
    IDeviceEnum __RPC_FAR * This);


void __RPC_STUB IDeviceEnum_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDeviceEnum_Clone_Proxy( 
    IDeviceEnum __RPC_FAR * This,
    /* [out] */ IDeviceEnum __RPC_FAR *__RPC_FAR *ppenum);


void __RPC_STUB IDeviceEnum_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDeviceEnum_INTERFACE_DEFINED__ */


#ifndef __IObexCaps_INTERFACE_DEFINED__
#define __IObexCaps_INTERFACE_DEFINED__

/* interface IObexCaps */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IObexCaps;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("265CB2AB-EEDE-4f0e-A2D9-DF03C067EE56")
    IObexCaps : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetCaps( 
            /* [in] */ DWORD dwCaps) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObexCapsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IObexCaps __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IObexCaps __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IObexCaps __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetCaps )( 
            IObexCaps __RPC_FAR * This,
            /* [in] */ DWORD dwCaps);
        
        END_INTERFACE
    } IObexCapsVtbl;

    interface IObexCaps
    {
        CONST_VTBL struct IObexCapsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObexCaps_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IObexCaps_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IObexCaps_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IObexCaps_SetCaps(This,dwCaps)	\
    (This)->lpVtbl -> SetCaps(This,dwCaps)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IObexCaps_SetCaps_Proxy( 
    IObexCaps __RPC_FAR * This,
    /* [in] */ DWORD dwCaps);


void __RPC_STUB IObexCaps_SetCaps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IObexCaps_INTERFACE_DEFINED__ */



#ifndef __OBEXLib_LIBRARY_DEFINED__
#define __OBEXLib_LIBRARY_DEFINED__

/* library OBEXLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_OBEXLib;

EXTERN_C const CLSID CLSID_Obex;

#ifdef __cplusplus

class DECLSPEC_UUID("30a7bc00-59b6-40bb-aa2b-89eb49ef274e")
Obex;
#endif

EXTERN_C const CLSID CLSID_HeaderCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("30a7bc01-59b6-40bb-aa2b-89eb49ef274e")
HeaderCollection;
#endif

EXTERN_C const CLSID CLSID_PropertyBag;

#ifdef __cplusplus

class DECLSPEC_UUID("30a7bc05-59b6-40bb-aa2b-89eb49ef274e")
PropertyBag;
#endif

EXTERN_C const CLSID CLSID_IrdaTransport;

#ifdef __cplusplus

class DECLSPEC_UUID("30A7BC02-59B6-40BB-AA2B-89EB49EF274E")
IrdaTransport;
#endif

EXTERN_C const CLSID CLSID_BthTransport;

#ifdef __cplusplus

class DECLSPEC_UUID("30A7BC03-59B6-40BB-AA2B-89EB49EF274E")
BthTransport;
#endif

EXTERN_C const CLSID CLSID_IpTransport;

#ifdef __cplusplus

class DECLSPEC_UUID("30A7BC04-59B6-40BB-AA2B-89EB49EF274E")
IpTransport;
#endif
#endif /* __OBEXLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


