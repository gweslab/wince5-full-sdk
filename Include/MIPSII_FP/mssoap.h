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
/* at Thu Jun 24 19:10:12 2004
 */
/* Compiler settings for .\mssoap.idl:
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

#ifndef __mssoap_h__
#define __mssoap_h__

/* Forward Declarations */ 

#ifndef __ISoapConnector_FWD_DEFINED__
#define __ISoapConnector_FWD_DEFINED__
typedef interface ISoapConnector ISoapConnector;
#endif 	/* __ISoapConnector_FWD_DEFINED__ */


#ifndef __ISoapConnectorFactory_FWD_DEFINED__
#define __ISoapConnectorFactory_FWD_DEFINED__
typedef interface ISoapConnectorFactory ISoapConnectorFactory;
#endif 	/* __ISoapConnectorFactory_FWD_DEFINED__ */


#ifndef __ISoapReader_FWD_DEFINED__
#define __ISoapReader_FWD_DEFINED__
typedef interface ISoapReader ISoapReader;
#endif 	/* __ISoapReader_FWD_DEFINED__ */


#ifndef __ISoapSerializer_FWD_DEFINED__
#define __ISoapSerializer_FWD_DEFINED__
typedef interface ISoapSerializer ISoapSerializer;
#endif 	/* __ISoapSerializer_FWD_DEFINED__ */


#ifndef __ISOAPClient_FWD_DEFINED__
#define __ISOAPClient_FWD_DEFINED__
typedef interface ISOAPClient ISOAPClient;
#endif 	/* __ISOAPClient_FWD_DEFINED__ */


#ifndef __ISOAPServer_FWD_DEFINED__
#define __ISOAPServer_FWD_DEFINED__
typedef interface ISOAPServer ISOAPServer;
#endif 	/* __ISOAPServer_FWD_DEFINED__ */


#ifndef __IHeaderHandler_FWD_DEFINED__
#define __IHeaderHandler_FWD_DEFINED__
typedef interface IHeaderHandler IHeaderHandler;
#endif 	/* __IHeaderHandler_FWD_DEFINED__ */


#ifndef __ISoapTypeMapper_FWD_DEFINED__
#define __ISoapTypeMapper_FWD_DEFINED__
typedef interface ISoapTypeMapper ISoapTypeMapper;
#endif 	/* __ISoapTypeMapper_FWD_DEFINED__ */


#ifndef __ISoapTypeMapper2_FWD_DEFINED__
#define __ISoapTypeMapper2_FWD_DEFINED__
typedef interface ISoapTypeMapper2 ISoapTypeMapper2;
#endif 	/* __ISoapTypeMapper2_FWD_DEFINED__ */


#ifndef __ISoapTypeMapperFactory_FWD_DEFINED__
#define __ISoapTypeMapperFactory_FWD_DEFINED__
typedef interface ISoapTypeMapperFactory ISoapTypeMapperFactory;
#endif 	/* __ISoapTypeMapperFactory_FWD_DEFINED__ */


#ifndef __ISoapMapper_FWD_DEFINED__
#define __ISoapMapper_FWD_DEFINED__
typedef interface ISoapMapper ISoapMapper;
#endif 	/* __ISoapMapper_FWD_DEFINED__ */


#ifndef __IEnumSoapMappers_FWD_DEFINED__
#define __IEnumSoapMappers_FWD_DEFINED__
typedef interface IEnumSoapMappers IEnumSoapMappers;
#endif 	/* __IEnumSoapMappers_FWD_DEFINED__ */


#ifndef __IWSDLOperation_FWD_DEFINED__
#define __IWSDLOperation_FWD_DEFINED__
typedef interface IWSDLOperation IWSDLOperation;
#endif 	/* __IWSDLOperation_FWD_DEFINED__ */


#ifndef __IEnumWSDLOperations_FWD_DEFINED__
#define __IEnumWSDLOperations_FWD_DEFINED__
typedef interface IEnumWSDLOperations IEnumWSDLOperations;
#endif 	/* __IEnumWSDLOperations_FWD_DEFINED__ */


#ifndef __IWSDLPort_FWD_DEFINED__
#define __IWSDLPort_FWD_DEFINED__
typedef interface IWSDLPort IWSDLPort;
#endif 	/* __IWSDLPort_FWD_DEFINED__ */


#ifndef __IEnumWSDLPorts_FWD_DEFINED__
#define __IEnumWSDLPorts_FWD_DEFINED__
typedef interface IEnumWSDLPorts IEnumWSDLPorts;
#endif 	/* __IEnumWSDLPorts_FWD_DEFINED__ */


#ifndef __IWSDLService_FWD_DEFINED__
#define __IWSDLService_FWD_DEFINED__
typedef interface IWSDLService IWSDLService;
#endif 	/* __IWSDLService_FWD_DEFINED__ */


#ifndef __IEnumWSDLService_FWD_DEFINED__
#define __IEnumWSDLService_FWD_DEFINED__
typedef interface IEnumWSDLService IEnumWSDLService;
#endif 	/* __IEnumWSDLService_FWD_DEFINED__ */


#ifndef __IWSDLReader_FWD_DEFINED__
#define __IWSDLReader_FWD_DEFINED__
typedef interface IWSDLReader IWSDLReader;
#endif 	/* __IWSDLReader_FWD_DEFINED__ */


#ifndef __ISOAPError_FWD_DEFINED__
#define __ISOAPError_FWD_DEFINED__
typedef interface ISOAPError ISOAPError;
#endif 	/* __ISOAPError_FWD_DEFINED__ */


#ifndef __ISOAPError_FWD_DEFINED__
#define __ISOAPError_FWD_DEFINED__
typedef interface ISOAPError ISOAPError;
#endif 	/* __ISOAPError_FWD_DEFINED__ */


#ifndef __ISoapConnector_FWD_DEFINED__
#define __ISoapConnector_FWD_DEFINED__
typedef interface ISoapConnector ISoapConnector;
#endif 	/* __ISoapConnector_FWD_DEFINED__ */


#ifndef __ISoapConnectorFactory_FWD_DEFINED__
#define __ISoapConnectorFactory_FWD_DEFINED__
typedef interface ISoapConnectorFactory ISoapConnectorFactory;
#endif 	/* __ISoapConnectorFactory_FWD_DEFINED__ */


#ifndef __IHeaderHandler_FWD_DEFINED__
#define __IHeaderHandler_FWD_DEFINED__
typedef interface IHeaderHandler IHeaderHandler;
#endif 	/* __IHeaderHandler_FWD_DEFINED__ */


#ifndef __SoapConnector_FWD_DEFINED__
#define __SoapConnector_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapConnector SoapConnector;
#else
typedef struct SoapConnector SoapConnector;
#endif /* __cplusplus */

#endif 	/* __SoapConnector_FWD_DEFINED__ */


#ifndef __SoapConnectorFactory_FWD_DEFINED__
#define __SoapConnectorFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapConnectorFactory SoapConnectorFactory;
#else
typedef struct SoapConnectorFactory SoapConnectorFactory;
#endif /* __cplusplus */

#endif 	/* __SoapConnectorFactory_FWD_DEFINED__ */


#ifndef __HttpConnector_FWD_DEFINED__
#define __HttpConnector_FWD_DEFINED__

#ifdef __cplusplus
typedef class HttpConnector HttpConnector;
#else
typedef struct HttpConnector HttpConnector;
#endif /* __cplusplus */

#endif 	/* __HttpConnector_FWD_DEFINED__ */


#ifndef __SoapReader_FWD_DEFINED__
#define __SoapReader_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapReader SoapReader;
#else
typedef struct SoapReader SoapReader;
#endif /* __cplusplus */

#endif 	/* __SoapReader_FWD_DEFINED__ */


#ifndef __SoapSerializer_FWD_DEFINED__
#define __SoapSerializer_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapSerializer SoapSerializer;
#else
typedef struct SoapSerializer SoapSerializer;
#endif /* __cplusplus */

#endif 	/* __SoapSerializer_FWD_DEFINED__ */


#ifndef __SoapServer_FWD_DEFINED__
#define __SoapServer_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapServer SoapServer;
#else
typedef struct SoapServer SoapServer;
#endif /* __cplusplus */

#endif 	/* __SoapServer_FWD_DEFINED__ */


#ifndef __SoapClient_FWD_DEFINED__
#define __SoapClient_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapClient SoapClient;
#else
typedef struct SoapClient SoapClient;
#endif /* __cplusplus */

#endif 	/* __SoapClient_FWD_DEFINED__ */


#ifndef __WSDLReader_FWD_DEFINED__
#define __WSDLReader_FWD_DEFINED__

#ifdef __cplusplus
typedef class WSDLReader WSDLReader;
#else
typedef struct WSDLReader WSDLReader;
#endif /* __cplusplus */

#endif 	/* __WSDLReader_FWD_DEFINED__ */


#ifndef __SoapTypeMapperFactory_FWD_DEFINED__
#define __SoapTypeMapperFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapTypeMapperFactory SoapTypeMapperFactory;
#else
typedef struct SoapTypeMapperFactory SoapTypeMapperFactory;
#endif /* __cplusplus */

#endif 	/* __SoapTypeMapperFactory_FWD_DEFINED__ */


#ifndef __EnumWSDLService_FWD_DEFINED__
#define __EnumWSDLService_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnumWSDLService EnumWSDLService;
#else
typedef struct EnumWSDLService EnumWSDLService;
#endif /* __cplusplus */

#endif 	/* __EnumWSDLService_FWD_DEFINED__ */


#ifndef __WSDLService_FWD_DEFINED__
#define __WSDLService_FWD_DEFINED__

#ifdef __cplusplus
typedef class WSDLService WSDLService;
#else
typedef struct WSDLService WSDLService;
#endif /* __cplusplus */

#endif 	/* __WSDLService_FWD_DEFINED__ */


#ifndef __EnumWSDLOperations_FWD_DEFINED__
#define __EnumWSDLOperations_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnumWSDLOperations EnumWSDLOperations;
#else
typedef struct EnumWSDLOperations EnumWSDLOperations;
#endif /* __cplusplus */

#endif 	/* __EnumWSDLOperations_FWD_DEFINED__ */


#ifndef __WSDLOperation_FWD_DEFINED__
#define __WSDLOperation_FWD_DEFINED__

#ifdef __cplusplus
typedef class WSDLOperation WSDLOperation;
#else
typedef struct WSDLOperation WSDLOperation;
#endif /* __cplusplus */

#endif 	/* __WSDLOperation_FWD_DEFINED__ */


#ifndef __SoapMapper_FWD_DEFINED__
#define __SoapMapper_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapMapper SoapMapper;
#else
typedef struct SoapMapper SoapMapper;
#endif /* __cplusplus */

#endif 	/* __SoapMapper_FWD_DEFINED__ */


#ifndef __EnumSoapMappers_FWD_DEFINED__
#define __EnumSoapMappers_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnumSoapMappers EnumSoapMappers;
#else
typedef struct EnumSoapMappers EnumSoapMappers;
#endif /* __cplusplus */

#endif 	/* __EnumSoapMappers_FWD_DEFINED__ */


#ifndef __EnumWSDLPorts_FWD_DEFINED__
#define __EnumWSDLPorts_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnumWSDLPorts EnumWSDLPorts;
#else
typedef struct EnumWSDLPorts EnumWSDLPorts;
#endif /* __cplusplus */

#endif 	/* __EnumWSDLPorts_FWD_DEFINED__ */


#ifndef __WSDLPort_FWD_DEFINED__
#define __WSDLPort_FWD_DEFINED__

#ifdef __cplusplus
typedef class WSDLPort WSDLPort;
#else
typedef struct WSDLPort WSDLPort;
#endif /* __cplusplus */

#endif 	/* __WSDLPort_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "msxml2.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_mssoap_0000 */
/* [local] */ 

#pragma once




extern RPC_IF_HANDLE __MIDL_itf_mssoap_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mssoap_0000_v0_0_s_ifspec;

#ifndef __ISoapConnector_INTERFACE_DEFINED__
#define __ISoapConnector_INTERFACE_DEFINED__

/* interface ISoapConnector */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapConnector;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("09BC1FF4-5711-4B93-B01D-DDD826EBD353")
    ISoapConnector : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InputStream( 
            /* [retval][out] */ IStream __RPC_FAR *__RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OutputStream( 
            /* [retval][out] */ IStream __RPC_FAR *__RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [in] */ BSTR pPropertyName,
            /* [retval][out] */ VARIANT __RPC_FAR *pPropertyValue) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Property( 
            /* [in] */ BSTR pPropertyName,
            /* [in] */ VARIANT PropertyValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConnectWSDL( 
            /* [in] */ IWSDLPort __RPC_FAR *pPort) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BeginMessageWSDL( 
            /* [in] */ IWSDLOperation __RPC_FAR *pOperation) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EndMessage( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Connect( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BeginMessage( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapConnectorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISoapConnector __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISoapConnector __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISoapConnector __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ISoapConnector __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ISoapConnector __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ISoapConnector __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ISoapConnector __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_InputStream )( 
            ISoapConnector __RPC_FAR * This,
            /* [retval][out] */ IStream __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_OutputStream )( 
            ISoapConnector __RPC_FAR * This,
            /* [retval][out] */ IStream __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Property )( 
            ISoapConnector __RPC_FAR * This,
            /* [in] */ BSTR pPropertyName,
            /* [retval][out] */ VARIANT __RPC_FAR *pPropertyValue);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Property )( 
            ISoapConnector __RPC_FAR * This,
            /* [in] */ BSTR pPropertyName,
            /* [in] */ VARIANT PropertyValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ConnectWSDL )( 
            ISoapConnector __RPC_FAR * This,
            /* [in] */ IWSDLPort __RPC_FAR *pPort);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            ISoapConnector __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BeginMessageWSDL )( 
            ISoapConnector __RPC_FAR * This,
            /* [in] */ IWSDLOperation __RPC_FAR *pOperation);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EndMessage )( 
            ISoapConnector __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Connect )( 
            ISoapConnector __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BeginMessage )( 
            ISoapConnector __RPC_FAR * This);
        
        END_INTERFACE
    } ISoapConnectorVtbl;

    interface ISoapConnector
    {
        CONST_VTBL struct ISoapConnectorVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapConnector_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISoapConnector_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISoapConnector_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISoapConnector_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISoapConnector_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISoapConnector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISoapConnector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISoapConnector_get_InputStream(This,pVal)	\
    (This)->lpVtbl -> get_InputStream(This,pVal)

#define ISoapConnector_get_OutputStream(This,pVal)	\
    (This)->lpVtbl -> get_OutputStream(This,pVal)

#define ISoapConnector_get_Property(This,pPropertyName,pPropertyValue)	\
    (This)->lpVtbl -> get_Property(This,pPropertyName,pPropertyValue)

#define ISoapConnector_put_Property(This,pPropertyName,PropertyValue)	\
    (This)->lpVtbl -> put_Property(This,pPropertyName,PropertyValue)

#define ISoapConnector_ConnectWSDL(This,pPort)	\
    (This)->lpVtbl -> ConnectWSDL(This,pPort)

#define ISoapConnector_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define ISoapConnector_BeginMessageWSDL(This,pOperation)	\
    (This)->lpVtbl -> BeginMessageWSDL(This,pOperation)

#define ISoapConnector_EndMessage(This)	\
    (This)->lpVtbl -> EndMessage(This)

#define ISoapConnector_Connect(This)	\
    (This)->lpVtbl -> Connect(This)

#define ISoapConnector_BeginMessage(This)	\
    (This)->lpVtbl -> BeginMessage(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapConnector_get_InputStream_Proxy( 
    ISoapConnector __RPC_FAR * This,
    /* [retval][out] */ IStream __RPC_FAR *__RPC_FAR *pVal);


void __RPC_STUB ISoapConnector_get_InputStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapConnector_get_OutputStream_Proxy( 
    ISoapConnector __RPC_FAR * This,
    /* [retval][out] */ IStream __RPC_FAR *__RPC_FAR *pVal);


void __RPC_STUB ISoapConnector_get_OutputStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapConnector_get_Property_Proxy( 
    ISoapConnector __RPC_FAR * This,
    /* [in] */ BSTR pPropertyName,
    /* [retval][out] */ VARIANT __RPC_FAR *pPropertyValue);


void __RPC_STUB ISoapConnector_get_Property_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISoapConnector_put_Property_Proxy( 
    ISoapConnector __RPC_FAR * This,
    /* [in] */ BSTR pPropertyName,
    /* [in] */ VARIANT PropertyValue);


void __RPC_STUB ISoapConnector_put_Property_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapConnector_ConnectWSDL_Proxy( 
    ISoapConnector __RPC_FAR * This,
    /* [in] */ IWSDLPort __RPC_FAR *pPort);


void __RPC_STUB ISoapConnector_ConnectWSDL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapConnector_Reset_Proxy( 
    ISoapConnector __RPC_FAR * This);


void __RPC_STUB ISoapConnector_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapConnector_BeginMessageWSDL_Proxy( 
    ISoapConnector __RPC_FAR * This,
    /* [in] */ IWSDLOperation __RPC_FAR *pOperation);


void __RPC_STUB ISoapConnector_BeginMessageWSDL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapConnector_EndMessage_Proxy( 
    ISoapConnector __RPC_FAR * This);


void __RPC_STUB ISoapConnector_EndMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapConnector_Connect_Proxy( 
    ISoapConnector __RPC_FAR * This);


void __RPC_STUB ISoapConnector_Connect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapConnector_BeginMessage_Proxy( 
    ISoapConnector __RPC_FAR * This);


void __RPC_STUB ISoapConnector_BeginMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISoapConnector_INTERFACE_DEFINED__ */


#ifndef __ISoapConnectorFactory_INTERFACE_DEFINED__
#define __ISoapConnectorFactory_INTERFACE_DEFINED__

/* interface ISoapConnectorFactory */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapConnectorFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8905303D-7ED3-40C2-A37F-27A46F98346A")
    ISoapConnectorFactory : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreatePortConnector( 
            /* [in] */ IWSDLPort __RPC_FAR *pPort,
            /* [retval][out] */ ISoapConnector __RPC_FAR *__RPC_FAR *ppConnector) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapConnectorFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISoapConnectorFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISoapConnectorFactory __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISoapConnectorFactory __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ISoapConnectorFactory __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ISoapConnectorFactory __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ISoapConnectorFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ISoapConnectorFactory __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreatePortConnector )( 
            ISoapConnectorFactory __RPC_FAR * This,
            /* [in] */ IWSDLPort __RPC_FAR *pPort,
            /* [retval][out] */ ISoapConnector __RPC_FAR *__RPC_FAR *ppConnector);
        
        END_INTERFACE
    } ISoapConnectorFactoryVtbl;

    interface ISoapConnectorFactory
    {
        CONST_VTBL struct ISoapConnectorFactoryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapConnectorFactory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISoapConnectorFactory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISoapConnectorFactory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISoapConnectorFactory_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISoapConnectorFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISoapConnectorFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISoapConnectorFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISoapConnectorFactory_CreatePortConnector(This,pPort,ppConnector)	\
    (This)->lpVtbl -> CreatePortConnector(This,pPort,ppConnector)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapConnectorFactory_CreatePortConnector_Proxy( 
    ISoapConnectorFactory __RPC_FAR * This,
    /* [in] */ IWSDLPort __RPC_FAR *pPort,
    /* [retval][out] */ ISoapConnector __RPC_FAR *__RPC_FAR *ppConnector);


void __RPC_STUB ISoapConnectorFactory_CreatePortConnector_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISoapConnectorFactory_INTERFACE_DEFINED__ */


#ifndef __ISoapReader_INTERFACE_DEFINED__
#define __ISoapReader_INTERFACE_DEFINED__

/* interface ISoapReader */
/* [local][dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FDE424F3-0474-4231-AB31-4A037C9A98BB")
    ISoapReader : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE load( 
            /* [in] */ VARIANT xmlSource,
            /* [defaultvalue][in] */ BSTR bstrSoapAction,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isSuccessful) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE loadXML( 
            /* [in] */ BSTR bstrXML,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isSuccessful) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DOM( 
            /* [retval][out] */ IXMLDOMDocument __RPC_FAR *__RPC_FAR *pIXMLDOMDocument) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Envelope( 
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Body( 
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Header( 
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Fault( 
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FaultString( 
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FaultCode( 
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FaultActor( 
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FaultDetail( 
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HeaderEntry( 
            /* [in] */ BSTR LocalName,
            /* [defaultvalue][in] */ BSTR NamespaceURI,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MustUnderstandHeaderEntries( 
            /* [retval][out] */ IXMLDOMNodeList __RPC_FAR *__RPC_FAR *ppNodeList) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HeaderEntries( 
            /* [retval][out] */ IXMLDOMNodeList __RPC_FAR *__RPC_FAR *ppNodeList) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BodyEntries( 
            /* [retval][out] */ IXMLDOMNodeList __RPC_FAR *__RPC_FAR *ppNodeList) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BodyEntry( 
            /* [in] */ BSTR LocalName,
            /* [defaultvalue][in] */ BSTR NamespaceURI,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RPCStruct( 
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RPCParameter( 
            /* [in] */ BSTR LocalName,
            /* [defaultvalue][in] */ BSTR NamespaceURI,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RPCResult( 
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_soapAction( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrSoapAction) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISoapReader __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISoapReader __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISoapReader __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ISoapReader __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ISoapReader __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ISoapReader __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ISoapReader __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *load )( 
            ISoapReader __RPC_FAR * This,
            /* [in] */ VARIANT xmlSource,
            /* [defaultvalue][in] */ BSTR bstrSoapAction,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isSuccessful);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *loadXML )( 
            ISoapReader __RPC_FAR * This,
            /* [in] */ BSTR bstrXML,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isSuccessful);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DOM )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ IXMLDOMDocument __RPC_FAR *__RPC_FAR *pIXMLDOMDocument);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Envelope )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Body )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Header )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Fault )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FaultString )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FaultCode )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FaultActor )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FaultDetail )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HeaderEntry )( 
            ISoapReader __RPC_FAR * This,
            /* [in] */ BSTR LocalName,
            /* [defaultvalue][in] */ BSTR NamespaceURI,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MustUnderstandHeaderEntries )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ IXMLDOMNodeList __RPC_FAR *__RPC_FAR *ppNodeList);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HeaderEntries )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ IXMLDOMNodeList __RPC_FAR *__RPC_FAR *ppNodeList);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_BodyEntries )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ IXMLDOMNodeList __RPC_FAR *__RPC_FAR *ppNodeList);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_BodyEntry )( 
            ISoapReader __RPC_FAR * This,
            /* [in] */ BSTR LocalName,
            /* [defaultvalue][in] */ BSTR NamespaceURI,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_RPCStruct )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_RPCParameter )( 
            ISoapReader __RPC_FAR * This,
            /* [in] */ BSTR LocalName,
            /* [defaultvalue][in] */ BSTR NamespaceURI,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_RPCResult )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_soapAction )( 
            ISoapReader __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrSoapAction);
        
        END_INTERFACE
    } ISoapReaderVtbl;

    interface ISoapReader
    {
        CONST_VTBL struct ISoapReaderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapReader_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISoapReader_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISoapReader_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISoapReader_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISoapReader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISoapReader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISoapReader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISoapReader_load(This,xmlSource,bstrSoapAction,isSuccessful)	\
    (This)->lpVtbl -> load(This,xmlSource,bstrSoapAction,isSuccessful)

#define ISoapReader_loadXML(This,bstrXML,isSuccessful)	\
    (This)->lpVtbl -> loadXML(This,bstrXML,isSuccessful)

#define ISoapReader_get_DOM(This,pIXMLDOMDocument)	\
    (This)->lpVtbl -> get_DOM(This,pIXMLDOMDocument)

#define ISoapReader_get_Envelope(This,ppElement)	\
    (This)->lpVtbl -> get_Envelope(This,ppElement)

#define ISoapReader_get_Body(This,ppElement)	\
    (This)->lpVtbl -> get_Body(This,ppElement)

#define ISoapReader_get_Header(This,ppElement)	\
    (This)->lpVtbl -> get_Header(This,ppElement)

#define ISoapReader_get_Fault(This,ppElement)	\
    (This)->lpVtbl -> get_Fault(This,ppElement)

#define ISoapReader_get_FaultString(This,ppElement)	\
    (This)->lpVtbl -> get_FaultString(This,ppElement)

#define ISoapReader_get_FaultCode(This,ppElement)	\
    (This)->lpVtbl -> get_FaultCode(This,ppElement)

#define ISoapReader_get_FaultActor(This,ppElement)	\
    (This)->lpVtbl -> get_FaultActor(This,ppElement)

#define ISoapReader_get_FaultDetail(This,ppElement)	\
    (This)->lpVtbl -> get_FaultDetail(This,ppElement)

#define ISoapReader_get_HeaderEntry(This,LocalName,NamespaceURI,ppElement)	\
    (This)->lpVtbl -> get_HeaderEntry(This,LocalName,NamespaceURI,ppElement)

#define ISoapReader_get_MustUnderstandHeaderEntries(This,ppNodeList)	\
    (This)->lpVtbl -> get_MustUnderstandHeaderEntries(This,ppNodeList)

#define ISoapReader_get_HeaderEntries(This,ppNodeList)	\
    (This)->lpVtbl -> get_HeaderEntries(This,ppNodeList)

#define ISoapReader_get_BodyEntries(This,ppNodeList)	\
    (This)->lpVtbl -> get_BodyEntries(This,ppNodeList)

#define ISoapReader_get_BodyEntry(This,LocalName,NamespaceURI,ppElement)	\
    (This)->lpVtbl -> get_BodyEntry(This,LocalName,NamespaceURI,ppElement)

#define ISoapReader_get_RPCStruct(This,ppElement)	\
    (This)->lpVtbl -> get_RPCStruct(This,ppElement)

#define ISoapReader_get_RPCParameter(This,LocalName,NamespaceURI,ppElement)	\
    (This)->lpVtbl -> get_RPCParameter(This,LocalName,NamespaceURI,ppElement)

#define ISoapReader_get_RPCResult(This,ppElement)	\
    (This)->lpVtbl -> get_RPCResult(This,ppElement)

#define ISoapReader_get_soapAction(This,pbstrSoapAction)	\
    (This)->lpVtbl -> get_soapAction(This,pbstrSoapAction)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapReader_load_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [in] */ VARIANT xmlSource,
    /* [defaultvalue][in] */ BSTR bstrSoapAction,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isSuccessful);


void __RPC_STUB ISoapReader_load_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapReader_loadXML_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [in] */ BSTR bstrXML,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isSuccessful);


void __RPC_STUB ISoapReader_loadXML_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_DOM_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ IXMLDOMDocument __RPC_FAR *__RPC_FAR *pIXMLDOMDocument);


void __RPC_STUB ISoapReader_get_DOM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_Envelope_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);


void __RPC_STUB ISoapReader_get_Envelope_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_Body_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);


void __RPC_STUB ISoapReader_get_Body_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_Header_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);


void __RPC_STUB ISoapReader_get_Header_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_Fault_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);


void __RPC_STUB ISoapReader_get_Fault_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_FaultString_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);


void __RPC_STUB ISoapReader_get_FaultString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_FaultCode_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);


void __RPC_STUB ISoapReader_get_FaultCode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_FaultActor_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);


void __RPC_STUB ISoapReader_get_FaultActor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_FaultDetail_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);


void __RPC_STUB ISoapReader_get_FaultDetail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_HeaderEntry_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [in] */ BSTR LocalName,
    /* [defaultvalue][in] */ BSTR NamespaceURI,
    /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);


void __RPC_STUB ISoapReader_get_HeaderEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_MustUnderstandHeaderEntries_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ IXMLDOMNodeList __RPC_FAR *__RPC_FAR *ppNodeList);


void __RPC_STUB ISoapReader_get_MustUnderstandHeaderEntries_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_HeaderEntries_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ IXMLDOMNodeList __RPC_FAR *__RPC_FAR *ppNodeList);


void __RPC_STUB ISoapReader_get_HeaderEntries_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_BodyEntries_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ IXMLDOMNodeList __RPC_FAR *__RPC_FAR *ppNodeList);


void __RPC_STUB ISoapReader_get_BodyEntries_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_BodyEntry_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [in] */ BSTR LocalName,
    /* [defaultvalue][in] */ BSTR NamespaceURI,
    /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);


void __RPC_STUB ISoapReader_get_BodyEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_RPCStruct_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);


void __RPC_STUB ISoapReader_get_RPCStruct_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_RPCParameter_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [in] */ BSTR LocalName,
    /* [defaultvalue][in] */ BSTR NamespaceURI,
    /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);


void __RPC_STUB ISoapReader_get_RPCParameter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_RPCResult_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ IXMLDOMElement __RPC_FAR *__RPC_FAR *ppElement);


void __RPC_STUB ISoapReader_get_RPCResult_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapReader_get_soapAction_Proxy( 
    ISoapReader __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrSoapAction);


void __RPC_STUB ISoapReader_get_soapAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISoapReader_INTERFACE_DEFINED__ */


#ifndef __ISoapSerializer_INTERFACE_DEFINED__
#define __ISoapSerializer_INTERFACE_DEFINED__

/* interface ISoapSerializer */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapSerializer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ADE424F3-0474-4231-AB31-4A254897700B")
    ISoapSerializer : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ VARIANT vDestination) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE startEnvelope( 
            /* [defaultvalue][in] */ BSTR env_Prefix = L"",
            /* [defaultvalue][in] */ BSTR enc_style_uri = L"NONE",
            /* [defaultvalue][in] */ BSTR xml_encoding = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE endEnvelope( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE startHeader( 
            /* [defaultvalue][in] */ BSTR enc_style_uri = L"NONE") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE startHeaderElement( 
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ BSTR ns_uri = L"",
            /* [defaultvalue][in] */ int mustUnderstand = 0,
            /* [defaultvalue][in] */ BSTR actor_uri = L"",
            /* [defaultvalue][in] */ BSTR enc_style_uri = L"NONE",
            /* [defaultvalue][in] */ BSTR prefix = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE endHeaderElement( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE endHeader( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE startBody( 
            /* [defaultvalue][in] */ BSTR enc_style_uri = L"NONE") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE endBody( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE startElement( 
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ BSTR ns_uri = L"",
            /* [defaultvalue][in] */ BSTR enc_style_uri = L"NONE",
            /* [defaultvalue][in] */ BSTR prefix = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE endElement( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SoapAttribute( 
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ BSTR ns_uri = L"",
            /* [defaultvalue][in] */ BSTR value = L"",
            /* [defaultvalue][in] */ BSTR prefix = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SoapNamespace( 
            /* [in] */ BSTR prefix,
            /* [in] */ BSTR ns_uri) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SoapDefaultNamespace( 
            /* [in] */ BSTR ns_uri) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE writeString( 
            /* [in] */ BSTR string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE writeBuffer( 
            /* [in] */ long len,
            /* [in] */ char __RPC_FAR *buffer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE startFault( 
            /* [in] */ BSTR faultcode,
            /* [in] */ BSTR faultstring,
            /* [defaultvalue][in] */ BSTR faultactor = L"",
            /* [defaultvalue][in] */ BSTR faultcodeNS = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE startFaultDetail( 
            /* [defaultvalue][in] */ BSTR enc_style_uri = L"NONE") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE endFaultDetail( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE endFault( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE writeXML( 
            /* [in] */ BSTR string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getPrefixForNamespace( 
            /* [in] */ BSTR ns_string,
            /* [retval][out] */ BSTR __RPC_FAR *ns_prefix) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EncodingStream( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppIEncodingStream) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapSerializerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISoapSerializer __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISoapSerializer __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ISoapSerializer __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Init )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ VARIANT vDestination);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *startEnvelope )( 
            ISoapSerializer __RPC_FAR * This,
            /* [defaultvalue][in] */ BSTR env_Prefix,
            /* [defaultvalue][in] */ BSTR enc_style_uri,
            /* [defaultvalue][in] */ BSTR xml_encoding);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endEnvelope )( 
            ISoapSerializer __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *startHeader )( 
            ISoapSerializer __RPC_FAR * This,
            /* [defaultvalue][in] */ BSTR enc_style_uri);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *startHeaderElement )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ BSTR ns_uri,
            /* [defaultvalue][in] */ int mustUnderstand,
            /* [defaultvalue][in] */ BSTR actor_uri,
            /* [defaultvalue][in] */ BSTR enc_style_uri,
            /* [defaultvalue][in] */ BSTR prefix);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endHeaderElement )( 
            ISoapSerializer __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endHeader )( 
            ISoapSerializer __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *startBody )( 
            ISoapSerializer __RPC_FAR * This,
            /* [defaultvalue][in] */ BSTR enc_style_uri);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endBody )( 
            ISoapSerializer __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *startElement )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ BSTR ns_uri,
            /* [defaultvalue][in] */ BSTR enc_style_uri,
            /* [defaultvalue][in] */ BSTR prefix);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endElement )( 
            ISoapSerializer __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SoapAttribute )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ BSTR ns_uri,
            /* [defaultvalue][in] */ BSTR value,
            /* [defaultvalue][in] */ BSTR prefix);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SoapNamespace )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ BSTR prefix,
            /* [in] */ BSTR ns_uri);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SoapDefaultNamespace )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ BSTR ns_uri);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *writeString )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ BSTR string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *writeBuffer )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ long len,
            /* [in] */ char __RPC_FAR *buffer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *startFault )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ BSTR faultcode,
            /* [in] */ BSTR faultstring,
            /* [defaultvalue][in] */ BSTR faultactor,
            /* [defaultvalue][in] */ BSTR faultcodeNS);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *startFaultDetail )( 
            ISoapSerializer __RPC_FAR * This,
            /* [defaultvalue][in] */ BSTR enc_style_uri);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endFaultDetail )( 
            ISoapSerializer __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *endFault )( 
            ISoapSerializer __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *reset )( 
            ISoapSerializer __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *writeXML )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ BSTR string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getPrefixForNamespace )( 
            ISoapSerializer __RPC_FAR * This,
            /* [in] */ BSTR ns_string,
            /* [retval][out] */ BSTR __RPC_FAR *ns_prefix);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_EncodingStream )( 
            ISoapSerializer __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppIEncodingStream);
        
        END_INTERFACE
    } ISoapSerializerVtbl;

    interface ISoapSerializer
    {
        CONST_VTBL struct ISoapSerializerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapSerializer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISoapSerializer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISoapSerializer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISoapSerializer_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISoapSerializer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISoapSerializer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISoapSerializer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISoapSerializer_Init(This,vDestination)	\
    (This)->lpVtbl -> Init(This,vDestination)

#define ISoapSerializer_startEnvelope(This,env_Prefix,enc_style_uri,xml_encoding)	\
    (This)->lpVtbl -> startEnvelope(This,env_Prefix,enc_style_uri,xml_encoding)

#define ISoapSerializer_endEnvelope(This)	\
    (This)->lpVtbl -> endEnvelope(This)

#define ISoapSerializer_startHeader(This,enc_style_uri)	\
    (This)->lpVtbl -> startHeader(This,enc_style_uri)

#define ISoapSerializer_startHeaderElement(This,name,ns_uri,mustUnderstand,actor_uri,enc_style_uri,prefix)	\
    (This)->lpVtbl -> startHeaderElement(This,name,ns_uri,mustUnderstand,actor_uri,enc_style_uri,prefix)

#define ISoapSerializer_endHeaderElement(This)	\
    (This)->lpVtbl -> endHeaderElement(This)

#define ISoapSerializer_endHeader(This)	\
    (This)->lpVtbl -> endHeader(This)

#define ISoapSerializer_startBody(This,enc_style_uri)	\
    (This)->lpVtbl -> startBody(This,enc_style_uri)

#define ISoapSerializer_endBody(This)	\
    (This)->lpVtbl -> endBody(This)

#define ISoapSerializer_startElement(This,name,ns_uri,enc_style_uri,prefix)	\
    (This)->lpVtbl -> startElement(This,name,ns_uri,enc_style_uri,prefix)

#define ISoapSerializer_endElement(This)	\
    (This)->lpVtbl -> endElement(This)

#define ISoapSerializer_SoapAttribute(This,name,ns_uri,value,prefix)	\
    (This)->lpVtbl -> SoapAttribute(This,name,ns_uri,value,prefix)

#define ISoapSerializer_SoapNamespace(This,prefix,ns_uri)	\
    (This)->lpVtbl -> SoapNamespace(This,prefix,ns_uri)

#define ISoapSerializer_SoapDefaultNamespace(This,ns_uri)	\
    (This)->lpVtbl -> SoapDefaultNamespace(This,ns_uri)

#define ISoapSerializer_writeString(This,string)	\
    (This)->lpVtbl -> writeString(This,string)

#define ISoapSerializer_writeBuffer(This,len,buffer)	\
    (This)->lpVtbl -> writeBuffer(This,len,buffer)

#define ISoapSerializer_startFault(This,faultcode,faultstring,faultactor,faultcodeNS)	\
    (This)->lpVtbl -> startFault(This,faultcode,faultstring,faultactor,faultcodeNS)

#define ISoapSerializer_startFaultDetail(This,enc_style_uri)	\
    (This)->lpVtbl -> startFaultDetail(This,enc_style_uri)

#define ISoapSerializer_endFaultDetail(This)	\
    (This)->lpVtbl -> endFaultDetail(This)

#define ISoapSerializer_endFault(This)	\
    (This)->lpVtbl -> endFault(This)

#define ISoapSerializer_reset(This)	\
    (This)->lpVtbl -> reset(This)

#define ISoapSerializer_writeXML(This,string)	\
    (This)->lpVtbl -> writeXML(This,string)

#define ISoapSerializer_getPrefixForNamespace(This,ns_string,ns_prefix)	\
    (This)->lpVtbl -> getPrefixForNamespace(This,ns_string,ns_prefix)

#define ISoapSerializer_get_EncodingStream(This,ppIEncodingStream)	\
    (This)->lpVtbl -> get_EncodingStream(This,ppIEncodingStream)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_Init_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [in] */ VARIANT vDestination);


void __RPC_STUB ISoapSerializer_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_startEnvelope_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [defaultvalue][in] */ BSTR env_Prefix,
    /* [defaultvalue][in] */ BSTR enc_style_uri,
    /* [defaultvalue][in] */ BSTR xml_encoding);


void __RPC_STUB ISoapSerializer_startEnvelope_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_endEnvelope_Proxy( 
    ISoapSerializer __RPC_FAR * This);


void __RPC_STUB ISoapSerializer_endEnvelope_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_startHeader_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [defaultvalue][in] */ BSTR enc_style_uri);


void __RPC_STUB ISoapSerializer_startHeader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_startHeaderElement_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [in] */ BSTR name,
    /* [defaultvalue][in] */ BSTR ns_uri,
    /* [defaultvalue][in] */ int mustUnderstand,
    /* [defaultvalue][in] */ BSTR actor_uri,
    /* [defaultvalue][in] */ BSTR enc_style_uri,
    /* [defaultvalue][in] */ BSTR prefix);


void __RPC_STUB ISoapSerializer_startHeaderElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_endHeaderElement_Proxy( 
    ISoapSerializer __RPC_FAR * This);


void __RPC_STUB ISoapSerializer_endHeaderElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_endHeader_Proxy( 
    ISoapSerializer __RPC_FAR * This);


void __RPC_STUB ISoapSerializer_endHeader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_startBody_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [defaultvalue][in] */ BSTR enc_style_uri);


void __RPC_STUB ISoapSerializer_startBody_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_endBody_Proxy( 
    ISoapSerializer __RPC_FAR * This);


void __RPC_STUB ISoapSerializer_endBody_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_startElement_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [in] */ BSTR name,
    /* [defaultvalue][in] */ BSTR ns_uri,
    /* [defaultvalue][in] */ BSTR enc_style_uri,
    /* [defaultvalue][in] */ BSTR prefix);


void __RPC_STUB ISoapSerializer_startElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_endElement_Proxy( 
    ISoapSerializer __RPC_FAR * This);


void __RPC_STUB ISoapSerializer_endElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_SoapAttribute_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [in] */ BSTR name,
    /* [defaultvalue][in] */ BSTR ns_uri,
    /* [defaultvalue][in] */ BSTR value,
    /* [defaultvalue][in] */ BSTR prefix);


void __RPC_STUB ISoapSerializer_SoapAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_SoapNamespace_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [in] */ BSTR prefix,
    /* [in] */ BSTR ns_uri);


void __RPC_STUB ISoapSerializer_SoapNamespace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_SoapDefaultNamespace_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [in] */ BSTR ns_uri);


void __RPC_STUB ISoapSerializer_SoapDefaultNamespace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_writeString_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [in] */ BSTR string);


void __RPC_STUB ISoapSerializer_writeString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_writeBuffer_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [in] */ long len,
    /* [in] */ char __RPC_FAR *buffer);


void __RPC_STUB ISoapSerializer_writeBuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_startFault_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [in] */ BSTR faultcode,
    /* [in] */ BSTR faultstring,
    /* [defaultvalue][in] */ BSTR faultactor,
    /* [defaultvalue][in] */ BSTR faultcodeNS);


void __RPC_STUB ISoapSerializer_startFault_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_startFaultDetail_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [defaultvalue][in] */ BSTR enc_style_uri);


void __RPC_STUB ISoapSerializer_startFaultDetail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_endFaultDetail_Proxy( 
    ISoapSerializer __RPC_FAR * This);


void __RPC_STUB ISoapSerializer_endFaultDetail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_endFault_Proxy( 
    ISoapSerializer __RPC_FAR * This);


void __RPC_STUB ISoapSerializer_endFault_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_reset_Proxy( 
    ISoapSerializer __RPC_FAR * This);


void __RPC_STUB ISoapSerializer_reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_writeXML_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [in] */ BSTR string);


void __RPC_STUB ISoapSerializer_writeXML_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_getPrefixForNamespace_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [in] */ BSTR ns_string,
    /* [retval][out] */ BSTR __RPC_FAR *ns_prefix);


void __RPC_STUB ISoapSerializer_getPrefixForNamespace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapSerializer_get_EncodingStream_Proxy( 
    ISoapSerializer __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppIEncodingStream);


void __RPC_STUB ISoapSerializer_get_EncodingStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISoapSerializer_INTERFACE_DEFINED__ */


#ifndef __ISOAPClient_INTERFACE_DEFINED__
#define __ISOAPClient_INTERFACE_DEFINED__

/* interface ISOAPClient */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISOAPClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4BDFD94B-415C-46f2-95E1-D145AB080F9E")
    ISOAPClient : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE mssoapinit( 
            /* [in] */ BSTR bstrWSDLFile,
            /* [defaultvalue][in] */ BSTR bstrServiceName = L"",
            /* [defaultvalue][in] */ BSTR bstrPort = L"",
            /* [defaultvalue][in] */ BSTR bstrWSMLFile = L"") = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_faultcode( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrFaultcode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_faultstring( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrFaultstring) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_faultactor( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrActor) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_detail( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrDetail) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ClientProperty( 
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ VARIANT __RPC_FAR *pPropertyValue) = 0;
        
        virtual /* [helpstring][propputref] */ HRESULT STDMETHODCALLTYPE putref_HeaderHandler( 
            /* [in] */ IDispatch __RPC_FAR *pHeaderHandler) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ClientProperty( 
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT PropertyValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectorProperty( 
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ VARIANT __RPC_FAR *pPropertyValue) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectorProperty( 
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT PropertyValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPClientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISOAPClient __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISOAPClient __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISOAPClient __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ISOAPClient __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ISOAPClient __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ISOAPClient __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ISOAPClient __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *mssoapinit )( 
            ISOAPClient __RPC_FAR * This,
            /* [in] */ BSTR bstrWSDLFile,
            /* [defaultvalue][in] */ BSTR bstrServiceName,
            /* [defaultvalue][in] */ BSTR bstrPort,
            /* [defaultvalue][in] */ BSTR bstrWSMLFile);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_faultcode )( 
            ISOAPClient __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrFaultcode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_faultstring )( 
            ISOAPClient __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrFaultstring);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_faultactor )( 
            ISOAPClient __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrActor);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_detail )( 
            ISOAPClient __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrDetail);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ClientProperty )( 
            ISOAPClient __RPC_FAR * This,
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ VARIANT __RPC_FAR *pPropertyValue);
        
        /* [helpstring][propputref] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *putref_HeaderHandler )( 
            ISOAPClient __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pHeaderHandler);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ClientProperty )( 
            ISOAPClient __RPC_FAR * This,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT PropertyValue);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ConnectorProperty )( 
            ISOAPClient __RPC_FAR * This,
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ VARIANT __RPC_FAR *pPropertyValue);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ConnectorProperty )( 
            ISOAPClient __RPC_FAR * This,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT PropertyValue);
        
        END_INTERFACE
    } ISOAPClientVtbl;

    interface ISOAPClient
    {
        CONST_VTBL struct ISOAPClientVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPClient_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPClient_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPClient_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPClient_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISOAPClient_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISOAPClient_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISOAPClient_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISOAPClient_mssoapinit(This,bstrWSDLFile,bstrServiceName,bstrPort,bstrWSMLFile)	\
    (This)->lpVtbl -> mssoapinit(This,bstrWSDLFile,bstrServiceName,bstrPort,bstrWSMLFile)

#define ISOAPClient_get_faultcode(This,bstrFaultcode)	\
    (This)->lpVtbl -> get_faultcode(This,bstrFaultcode)

#define ISOAPClient_get_faultstring(This,bstrFaultstring)	\
    (This)->lpVtbl -> get_faultstring(This,bstrFaultstring)

#define ISOAPClient_get_faultactor(This,bstrActor)	\
    (This)->lpVtbl -> get_faultactor(This,bstrActor)

#define ISOAPClient_get_detail(This,bstrDetail)	\
    (This)->lpVtbl -> get_detail(This,bstrDetail)

#define ISOAPClient_get_ClientProperty(This,PropertyName,pPropertyValue)	\
    (This)->lpVtbl -> get_ClientProperty(This,PropertyName,pPropertyValue)

#define ISOAPClient_putref_HeaderHandler(This,pHeaderHandler)	\
    (This)->lpVtbl -> putref_HeaderHandler(This,pHeaderHandler)

#define ISOAPClient_put_ClientProperty(This,PropertyName,PropertyValue)	\
    (This)->lpVtbl -> put_ClientProperty(This,PropertyName,PropertyValue)

#define ISOAPClient_get_ConnectorProperty(This,PropertyName,pPropertyValue)	\
    (This)->lpVtbl -> get_ConnectorProperty(This,PropertyName,pPropertyValue)

#define ISOAPClient_put_ConnectorProperty(This,PropertyName,PropertyValue)	\
    (This)->lpVtbl -> put_ConnectorProperty(This,PropertyName,PropertyValue)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISOAPClient_mssoapinit_Proxy( 
    ISOAPClient __RPC_FAR * This,
    /* [in] */ BSTR bstrWSDLFile,
    /* [defaultvalue][in] */ BSTR bstrServiceName,
    /* [defaultvalue][in] */ BSTR bstrPort,
    /* [defaultvalue][in] */ BSTR bstrWSMLFile);


void __RPC_STUB ISOAPClient_mssoapinit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISOAPClient_get_faultcode_Proxy( 
    ISOAPClient __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrFaultcode);


void __RPC_STUB ISOAPClient_get_faultcode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISOAPClient_get_faultstring_Proxy( 
    ISOAPClient __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrFaultstring);


void __RPC_STUB ISOAPClient_get_faultstring_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISOAPClient_get_faultactor_Proxy( 
    ISOAPClient __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrActor);


void __RPC_STUB ISOAPClient_get_faultactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISOAPClient_get_detail_Proxy( 
    ISOAPClient __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrDetail);


void __RPC_STUB ISOAPClient_get_detail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPClient_get_ClientProperty_Proxy( 
    ISOAPClient __RPC_FAR * This,
    /* [in] */ BSTR PropertyName,
    /* [retval][out] */ VARIANT __RPC_FAR *pPropertyValue);


void __RPC_STUB ISOAPClient_get_ClientProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propputref] */ HRESULT STDMETHODCALLTYPE ISOAPClient_putref_HeaderHandler_Proxy( 
    ISOAPClient __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pHeaderHandler);


void __RPC_STUB ISOAPClient_putref_HeaderHandler_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPClient_put_ClientProperty_Proxy( 
    ISOAPClient __RPC_FAR * This,
    /* [in] */ BSTR PropertyName,
    /* [in] */ VARIANT PropertyValue);


void __RPC_STUB ISOAPClient_put_ClientProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPClient_get_ConnectorProperty_Proxy( 
    ISOAPClient __RPC_FAR * This,
    /* [in] */ BSTR PropertyName,
    /* [retval][out] */ VARIANT __RPC_FAR *pPropertyValue);


void __RPC_STUB ISOAPClient_get_ConnectorProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPClient_put_ConnectorProperty_Proxy( 
    ISOAPClient __RPC_FAR * This,
    /* [in] */ BSTR PropertyName,
    /* [in] */ VARIANT PropertyValue);


void __RPC_STUB ISOAPClient_put_ConnectorProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPClient_INTERFACE_DEFINED__ */


#ifndef __ISOAPServer_INTERFACE_DEFINED__
#define __ISOAPServer_INTERFACE_DEFINED__

/* interface ISOAPServer */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISOAPServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E8685095-8543-4771-B2EE-E17C58379E47")
    ISOAPServer : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ BSTR pUrlWSDLFile,
            /* [in] */ BSTR bstrWSMLFileSpec) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SoapInvoke( 
            /* [in] */ VARIANT varInput,
            /* [in] */ IUnknown __RPC_FAR *pOutputStream,
            /* [defaultvalue][in] */ BSTR bstrSoapAction = L"") = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISOAPServer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISOAPServer __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISOAPServer __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ISOAPServer __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ISOAPServer __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ISOAPServer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ISOAPServer __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Init )( 
            ISOAPServer __RPC_FAR * This,
            /* [in] */ BSTR pUrlWSDLFile,
            /* [in] */ BSTR bstrWSMLFileSpec);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SoapInvoke )( 
            ISOAPServer __RPC_FAR * This,
            /* [in] */ VARIANT varInput,
            /* [in] */ IUnknown __RPC_FAR *pOutputStream,
            /* [defaultvalue][in] */ BSTR bstrSoapAction);
        
        END_INTERFACE
    } ISOAPServerVtbl;

    interface ISOAPServer
    {
        CONST_VTBL struct ISOAPServerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPServer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPServer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPServer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPServer_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISOAPServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISOAPServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISOAPServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISOAPServer_Init(This,pUrlWSDLFile,bstrWSMLFileSpec)	\
    (This)->lpVtbl -> Init(This,pUrlWSDLFile,bstrWSMLFileSpec)

#define ISOAPServer_SoapInvoke(This,varInput,pOutputStream,bstrSoapAction)	\
    (This)->lpVtbl -> SoapInvoke(This,varInput,pOutputStream,bstrSoapAction)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISOAPServer_Init_Proxy( 
    ISOAPServer __RPC_FAR * This,
    /* [in] */ BSTR pUrlWSDLFile,
    /* [in] */ BSTR bstrWSMLFileSpec);


void __RPC_STUB ISOAPServer_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISOAPServer_SoapInvoke_Proxy( 
    ISOAPServer __RPC_FAR * This,
    /* [in] */ VARIANT varInput,
    /* [in] */ IUnknown __RPC_FAR *pOutputStream,
    /* [defaultvalue][in] */ BSTR bstrSoapAction);


void __RPC_STUB ISOAPServer_SoapInvoke_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPServer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_mssoap_0148 */
/* [local] */ 

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_mssoap_0148_0001
    {	smInput	= -1,
	smOutput	= 0,
	smInOut	= 1
    }	smIsInputEnum;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_mssoap_0148_0002
    {	enXSDUndefined	= -1,
	enXSDDOM	= 0,
	enXSDstring	= enXSDDOM + 1,
	enXSDboolean	= enXSDstring + 1,
	enXSDfloat	= enXSDboolean + 1,
	enXSDDouble	= enXSDfloat + 1,
	enXSDdecimal	= enXSDDouble + 1,
	enXSDtimeDuration	= enXSDdecimal + 1,
	enXSDrecurringDuration	= enXSDtimeDuration + 1,
	enXSDbinary	= enXSDrecurringDuration + 1,
	enXSDuriReference	= enXSDbinary + 1,
	enXSDid	= enXSDuriReference + 1,
	enXSDidRef	= enXSDid + 1,
	enXSDentity	= enXSDidRef + 1,
	enXSDQName	= enXSDentity + 1,
	enXSDcdata	= enXSDQName + 1,
	enXSDtoken	= enXSDcdata + 1,
	enXSDlanguage	= enXSDtoken + 1,
	enXSDidRefs	= enXSDlanguage + 1,
	enXSDentities	= enXSDidRefs + 1,
	enXSDnmtoken	= enXSDentities + 1,
	enXSDnmtokens	= enXSDnmtoken + 1,
	enXSDname	= enXSDnmtokens + 1,
	enXSDncname	= enXSDname + 1,
	enXSDnotation	= enXSDncname + 1,
	enXSDinteger	= enXSDnotation + 1,
	enXSDnonpositiveInteger	= enXSDinteger + 1,
	enXSDlong	= enXSDnonpositiveInteger + 1,
	enXSDint	= enXSDlong + 1,
	enXSDshort	= enXSDint + 1,
	enXSDbyte	= enXSDshort + 1,
	enXSDnonNegativeInteger	= enXSDbyte + 1,
	enXSDnegativeInteger	= enXSDnonNegativeInteger + 1,
	enXSDunsignedLong	= enXSDnegativeInteger + 1,
	enXSDunsignedInt	= enXSDunsignedLong + 1,
	enXSDunsignedShort	= enXSDunsignedInt + 1,
	enXSDunsignedByte	= enXSDunsignedShort + 1,
	enXSDpositiveInteger	= enXSDunsignedByte + 1,
	enXSDtimeInstant	= enXSDpositiveInteger + 1,
	enXSDtime	= enXSDtimeInstant + 1,
	enXSDtimePeriod	= enXSDtime + 1,
	enXSDdate	= enXSDtimePeriod + 1,
	enXSDmonth	= enXSDdate + 1,
	enXSDyear	= enXSDmonth + 1,
	enXSDcentury	= enXSDyear + 1,
	enXSDrecurringDate	= enXSDcentury + 1,
	enXSDrecurringDay	= enXSDrecurringDate + 1,
	enXSDarray	= enXSDrecurringDay + 1,
	enXSDanyType	= enXSDarray + 1,
	enTKempty	= enXSDanyType + 1,
	enXSDEndOfBuildin	= enTKempty + 1
    }	enXSDType;

typedef /* [public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_mssoap_0148_0003
    {	enDocumentLiteral	= 0,
	enDocumentEncoded	= 0x1,
	enRPCLiteral	= 0x2,
	enRPCEncoded	= 0x4
    }	enEncodingStyle;




extern RPC_IF_HANDLE __MIDL_itf_mssoap_0148_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mssoap_0148_v0_0_s_ifspec;

#ifndef __IHeaderHandler_INTERFACE_DEFINED__
#define __IHeaderHandler_INTERFACE_DEFINED__

/* interface IHeaderHandler */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IHeaderHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("504D4B91-76B8-4D88-95EA-CEB5E0FE41F3")
    IHeaderHandler : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE willWriteHeaders( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbWillWriteHeaders) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE writeHeaders( 
            /* [in] */ ISoapSerializer __RPC_FAR *pSerializer,
            /* [in] */ IDispatch __RPC_FAR *pObject) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE readHeader( 
            /* [in] */ IXMLDOMNode __RPC_FAR *pHeaderNode,
            /* [in] */ IDispatch __RPC_FAR *pObject,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pUnderstood) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHeaderHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IHeaderHandler __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IHeaderHandler __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IHeaderHandler __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IHeaderHandler __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IHeaderHandler __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IHeaderHandler __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IHeaderHandler __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *willWriteHeaders )( 
            IHeaderHandler __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbWillWriteHeaders);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *writeHeaders )( 
            IHeaderHandler __RPC_FAR * This,
            /* [in] */ ISoapSerializer __RPC_FAR *pSerializer,
            /* [in] */ IDispatch __RPC_FAR *pObject);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *readHeader )( 
            IHeaderHandler __RPC_FAR * This,
            /* [in] */ IXMLDOMNode __RPC_FAR *pHeaderNode,
            /* [in] */ IDispatch __RPC_FAR *pObject,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pUnderstood);
        
        END_INTERFACE
    } IHeaderHandlerVtbl;

    interface IHeaderHandler
    {
        CONST_VTBL struct IHeaderHandlerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHeaderHandler_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHeaderHandler_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHeaderHandler_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHeaderHandler_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IHeaderHandler_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IHeaderHandler_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IHeaderHandler_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IHeaderHandler_willWriteHeaders(This,pbWillWriteHeaders)	\
    (This)->lpVtbl -> willWriteHeaders(This,pbWillWriteHeaders)

#define IHeaderHandler_writeHeaders(This,pSerializer,pObject)	\
    (This)->lpVtbl -> writeHeaders(This,pSerializer,pObject)

#define IHeaderHandler_readHeader(This,pHeaderNode,pObject,pUnderstood)	\
    (This)->lpVtbl -> readHeader(This,pHeaderNode,pObject,pUnderstood)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IHeaderHandler_willWriteHeaders_Proxy( 
    IHeaderHandler __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbWillWriteHeaders);


void __RPC_STUB IHeaderHandler_willWriteHeaders_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IHeaderHandler_writeHeaders_Proxy( 
    IHeaderHandler __RPC_FAR * This,
    /* [in] */ ISoapSerializer __RPC_FAR *pSerializer,
    /* [in] */ IDispatch __RPC_FAR *pObject);


void __RPC_STUB IHeaderHandler_writeHeaders_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IHeaderHandler_readHeader_Proxy( 
    IHeaderHandler __RPC_FAR * This,
    /* [in] */ IXMLDOMNode __RPC_FAR *pHeaderNode,
    /* [in] */ IDispatch __RPC_FAR *pObject,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pUnderstood);


void __RPC_STUB IHeaderHandler_readHeader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHeaderHandler_INTERFACE_DEFINED__ */


#ifndef __ISoapTypeMapper_INTERFACE_DEFINED__
#define __ISoapTypeMapper_INTERFACE_DEFINED__

/* interface ISoapTypeMapper */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapTypeMapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CEA11D8A-258D-4863-A91F-3B4D046039E2")
    ISoapTypeMapper : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE init( 
            /* [in] */ ISoapTypeMapperFactory __RPC_FAR *pFactory,
            /* [in] */ IXMLDOMNode __RPC_FAR *pSchema,
            /* [in] */ enXSDType xsdType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE read( 
            /* [in] */ IXMLDOMNode __RPC_FAR *pNode,
            /* [in] */ BSTR bstrEncoding,
            /* [in] */ enEncodingStyle encodingMode,
            /* [in] */ long lFlags,
            /* [retval][out] */ VARIANT __RPC_FAR *pvar) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE write( 
            /* [in] */ ISoapSerializer __RPC_FAR *pSoapSerializer,
            /* [in] */ BSTR bstrEncoding,
            /* [in] */ enEncodingStyle encodingMode,
            /* [in] */ long lFlags,
            /* [in] */ VARIANT __RPC_FAR *pvar) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE varType( 
            /* [retval][out] */ long __RPC_FAR *pvtType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapTypeMapperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISoapTypeMapper __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISoapTypeMapper __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISoapTypeMapper __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ISoapTypeMapper __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ISoapTypeMapper __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ISoapTypeMapper __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ISoapTypeMapper __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *init )( 
            ISoapTypeMapper __RPC_FAR * This,
            /* [in] */ ISoapTypeMapperFactory __RPC_FAR *pFactory,
            /* [in] */ IXMLDOMNode __RPC_FAR *pSchema,
            /* [in] */ enXSDType xsdType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *read )( 
            ISoapTypeMapper __RPC_FAR * This,
            /* [in] */ IXMLDOMNode __RPC_FAR *pNode,
            /* [in] */ BSTR bstrEncoding,
            /* [in] */ enEncodingStyle encodingMode,
            /* [in] */ long lFlags,
            /* [retval][out] */ VARIANT __RPC_FAR *pvar);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *write )( 
            ISoapTypeMapper __RPC_FAR * This,
            /* [in] */ ISoapSerializer __RPC_FAR *pSoapSerializer,
            /* [in] */ BSTR bstrEncoding,
            /* [in] */ enEncodingStyle encodingMode,
            /* [in] */ long lFlags,
            /* [in] */ VARIANT __RPC_FAR *pvar);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *varType )( 
            ISoapTypeMapper __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pvtType);
        
        END_INTERFACE
    } ISoapTypeMapperVtbl;

    interface ISoapTypeMapper
    {
        CONST_VTBL struct ISoapTypeMapperVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapTypeMapper_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISoapTypeMapper_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISoapTypeMapper_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISoapTypeMapper_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISoapTypeMapper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISoapTypeMapper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISoapTypeMapper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISoapTypeMapper_init(This,pFactory,pSchema,xsdType)	\
    (This)->lpVtbl -> init(This,pFactory,pSchema,xsdType)

#define ISoapTypeMapper_read(This,pNode,bstrEncoding,encodingMode,lFlags,pvar)	\
    (This)->lpVtbl -> read(This,pNode,bstrEncoding,encodingMode,lFlags,pvar)

#define ISoapTypeMapper_write(This,pSoapSerializer,bstrEncoding,encodingMode,lFlags,pvar)	\
    (This)->lpVtbl -> write(This,pSoapSerializer,bstrEncoding,encodingMode,lFlags,pvar)

#define ISoapTypeMapper_varType(This,pvtType)	\
    (This)->lpVtbl -> varType(This,pvtType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapper_init_Proxy( 
    ISoapTypeMapper __RPC_FAR * This,
    /* [in] */ ISoapTypeMapperFactory __RPC_FAR *pFactory,
    /* [in] */ IXMLDOMNode __RPC_FAR *pSchema,
    /* [in] */ enXSDType xsdType);


void __RPC_STUB ISoapTypeMapper_init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapper_read_Proxy( 
    ISoapTypeMapper __RPC_FAR * This,
    /* [in] */ IXMLDOMNode __RPC_FAR *pNode,
    /* [in] */ BSTR bstrEncoding,
    /* [in] */ enEncodingStyle encodingMode,
    /* [in] */ long lFlags,
    /* [retval][out] */ VARIANT __RPC_FAR *pvar);


void __RPC_STUB ISoapTypeMapper_read_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapper_write_Proxy( 
    ISoapTypeMapper __RPC_FAR * This,
    /* [in] */ ISoapSerializer __RPC_FAR *pSoapSerializer,
    /* [in] */ BSTR bstrEncoding,
    /* [in] */ enEncodingStyle encodingMode,
    /* [in] */ long lFlags,
    /* [in] */ VARIANT __RPC_FAR *pvar);


void __RPC_STUB ISoapTypeMapper_write_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapper_varType_Proxy( 
    ISoapTypeMapper __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pvtType);


void __RPC_STUB ISoapTypeMapper_varType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISoapTypeMapper_INTERFACE_DEFINED__ */


#ifndef __ISoapTypeMapper2_INTERFACE_DEFINED__
#define __ISoapTypeMapper2_INTERFACE_DEFINED__

/* interface ISoapTypeMapper2 */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapTypeMapper2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0571ce21-57ee-43d9-9ec7-36d7b4af5034")
    ISoapTypeMapper2 : public ISoapTypeMapper
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE iid( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrIIDAsString) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapTypeMapper2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISoapTypeMapper2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISoapTypeMapper2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISoapTypeMapper2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ISoapTypeMapper2 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ISoapTypeMapper2 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ISoapTypeMapper2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ISoapTypeMapper2 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *init )( 
            ISoapTypeMapper2 __RPC_FAR * This,
            /* [in] */ ISoapTypeMapperFactory __RPC_FAR *pFactory,
            /* [in] */ IXMLDOMNode __RPC_FAR *pSchema,
            /* [in] */ enXSDType xsdType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *read )( 
            ISoapTypeMapper2 __RPC_FAR * This,
            /* [in] */ IXMLDOMNode __RPC_FAR *pNode,
            /* [in] */ BSTR bstrEncoding,
            /* [in] */ enEncodingStyle encodingMode,
            /* [in] */ long lFlags,
            /* [retval][out] */ VARIANT __RPC_FAR *pvar);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *write )( 
            ISoapTypeMapper2 __RPC_FAR * This,
            /* [in] */ ISoapSerializer __RPC_FAR *pSoapSerializer,
            /* [in] */ BSTR bstrEncoding,
            /* [in] */ enEncodingStyle encodingMode,
            /* [in] */ long lFlags,
            /* [in] */ VARIANT __RPC_FAR *pvar);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *varType )( 
            ISoapTypeMapper2 __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pvtType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *iid )( 
            ISoapTypeMapper2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrIIDAsString);
        
        END_INTERFACE
    } ISoapTypeMapper2Vtbl;

    interface ISoapTypeMapper2
    {
        CONST_VTBL struct ISoapTypeMapper2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapTypeMapper2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISoapTypeMapper2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISoapTypeMapper2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISoapTypeMapper2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISoapTypeMapper2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISoapTypeMapper2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISoapTypeMapper2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISoapTypeMapper2_init(This,pFactory,pSchema,xsdType)	\
    (This)->lpVtbl -> init(This,pFactory,pSchema,xsdType)

#define ISoapTypeMapper2_read(This,pNode,bstrEncoding,encodingMode,lFlags,pvar)	\
    (This)->lpVtbl -> read(This,pNode,bstrEncoding,encodingMode,lFlags,pvar)

#define ISoapTypeMapper2_write(This,pSoapSerializer,bstrEncoding,encodingMode,lFlags,pvar)	\
    (This)->lpVtbl -> write(This,pSoapSerializer,bstrEncoding,encodingMode,lFlags,pvar)

#define ISoapTypeMapper2_varType(This,pvtType)	\
    (This)->lpVtbl -> varType(This,pvtType)


#define ISoapTypeMapper2_iid(This,bstrIIDAsString)	\
    (This)->lpVtbl -> iid(This,bstrIIDAsString)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapper2_iid_Proxy( 
    ISoapTypeMapper2 __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrIIDAsString);


void __RPC_STUB ISoapTypeMapper2_iid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISoapTypeMapper2_INTERFACE_DEFINED__ */


#ifndef __ISoapTypeMapperFactory_INTERFACE_DEFINED__
#define __ISoapTypeMapperFactory_INTERFACE_DEFINED__

/* interface ISoapTypeMapperFactory */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapTypeMapperFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B818238A-B709-4EB2-A4CE-6BA02C671F74")
    ISoapTypeMapperFactory : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addSchema( 
            /* [in] */ IXMLDOMNode __RPC_FAR *pSchemaNode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getElementMapperbyName( 
            /* [in] */ BSTR bstrElementName,
            /* [in] */ BSTR bstrElementNamespace,
            /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getTypeMapperbyName( 
            /* [in] */ BSTR bstrTypeName,
            /* [in] */ BSTR bstrTypeNamespace,
            /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getElementMapper( 
            /* [in] */ IXMLDOMNode __RPC_FAR *pElementNode,
            /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getTypeMapper( 
            /* [in] */ IXMLDOMNode __RPC_FAR *pTypeNode,
            /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addType( 
            /* [in] */ BSTR bstrTypeName,
            /* [in] */ BSTR bstrTypeNamespace,
            /* [in] */ BSTR bstrProgID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addElement( 
            /* [in] */ BSTR bstrElementName,
            /* [in] */ BSTR bstrElementNamespace,
            /* [in] */ BSTR bstrProgID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getMapper( 
            /* [in] */ enXSDType xsdType,
            /* [in] */ IXMLDOMNode __RPC_FAR *pSchemaNode,
            /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addTypeObjectMapper( 
            /* [in] */ BSTR bstrTypeName,
            /* [in] */ BSTR bstrTypeNamespace,
            /* [in] */ BSTR bstrProgID,
            /* [in] */ BSTR bstrIID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addElementObjectMapper( 
            /* [in] */ BSTR bstrElementName,
            /* [in] */ BSTR bstrElementNamespace,
            /* [in] */ BSTR bstrProgID,
            /* [in] */ BSTR bstrIID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapTypeMapperFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISoapTypeMapperFactory __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISoapTypeMapperFactory __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *addSchema )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [in] */ IXMLDOMNode __RPC_FAR *pSchemaNode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getElementMapperbyName )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [in] */ BSTR bstrElementName,
            /* [in] */ BSTR bstrElementNamespace,
            /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getTypeMapperbyName )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [in] */ BSTR bstrTypeName,
            /* [in] */ BSTR bstrTypeNamespace,
            /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getElementMapper )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [in] */ IXMLDOMNode __RPC_FAR *pElementNode,
            /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getTypeMapper )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [in] */ IXMLDOMNode __RPC_FAR *pTypeNode,
            /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *addType )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [in] */ BSTR bstrTypeName,
            /* [in] */ BSTR bstrTypeNamespace,
            /* [in] */ BSTR bstrProgID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *addElement )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [in] */ BSTR bstrElementName,
            /* [in] */ BSTR bstrElementNamespace,
            /* [in] */ BSTR bstrProgID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getMapper )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [in] */ enXSDType xsdType,
            /* [in] */ IXMLDOMNode __RPC_FAR *pSchemaNode,
            /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *addTypeObjectMapper )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [in] */ BSTR bstrTypeName,
            /* [in] */ BSTR bstrTypeNamespace,
            /* [in] */ BSTR bstrProgID,
            /* [in] */ BSTR bstrIID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *addElementObjectMapper )( 
            ISoapTypeMapperFactory __RPC_FAR * This,
            /* [in] */ BSTR bstrElementName,
            /* [in] */ BSTR bstrElementNamespace,
            /* [in] */ BSTR bstrProgID,
            /* [in] */ BSTR bstrIID);
        
        END_INTERFACE
    } ISoapTypeMapperFactoryVtbl;

    interface ISoapTypeMapperFactory
    {
        CONST_VTBL struct ISoapTypeMapperFactoryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapTypeMapperFactory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISoapTypeMapperFactory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISoapTypeMapperFactory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISoapTypeMapperFactory_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISoapTypeMapperFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISoapTypeMapperFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISoapTypeMapperFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISoapTypeMapperFactory_addSchema(This,pSchemaNode)	\
    (This)->lpVtbl -> addSchema(This,pSchemaNode)

#define ISoapTypeMapperFactory_getElementMapperbyName(This,bstrElementName,bstrElementNamespace,ppSoapTypeMapper)	\
    (This)->lpVtbl -> getElementMapperbyName(This,bstrElementName,bstrElementNamespace,ppSoapTypeMapper)

#define ISoapTypeMapperFactory_getTypeMapperbyName(This,bstrTypeName,bstrTypeNamespace,ppSoapTypeMapper)	\
    (This)->lpVtbl -> getTypeMapperbyName(This,bstrTypeName,bstrTypeNamespace,ppSoapTypeMapper)

#define ISoapTypeMapperFactory_getElementMapper(This,pElementNode,ppSoapTypeMapper)	\
    (This)->lpVtbl -> getElementMapper(This,pElementNode,ppSoapTypeMapper)

#define ISoapTypeMapperFactory_getTypeMapper(This,pTypeNode,ppSoapTypeMapper)	\
    (This)->lpVtbl -> getTypeMapper(This,pTypeNode,ppSoapTypeMapper)

#define ISoapTypeMapperFactory_addType(This,bstrTypeName,bstrTypeNamespace,bstrProgID)	\
    (This)->lpVtbl -> addType(This,bstrTypeName,bstrTypeNamespace,bstrProgID)

#define ISoapTypeMapperFactory_addElement(This,bstrElementName,bstrElementNamespace,bstrProgID)	\
    (This)->lpVtbl -> addElement(This,bstrElementName,bstrElementNamespace,bstrProgID)

#define ISoapTypeMapperFactory_getMapper(This,xsdType,pSchemaNode,ppSoapTypeMapper)	\
    (This)->lpVtbl -> getMapper(This,xsdType,pSchemaNode,ppSoapTypeMapper)

#define ISoapTypeMapperFactory_addTypeObjectMapper(This,bstrTypeName,bstrTypeNamespace,bstrProgID,bstrIID)	\
    (This)->lpVtbl -> addTypeObjectMapper(This,bstrTypeName,bstrTypeNamespace,bstrProgID,bstrIID)

#define ISoapTypeMapperFactory_addElementObjectMapper(This,bstrElementName,bstrElementNamespace,bstrProgID,bstrIID)	\
    (This)->lpVtbl -> addElementObjectMapper(This,bstrElementName,bstrElementNamespace,bstrProgID,bstrIID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapperFactory_addSchema_Proxy( 
    ISoapTypeMapperFactory __RPC_FAR * This,
    /* [in] */ IXMLDOMNode __RPC_FAR *pSchemaNode);


void __RPC_STUB ISoapTypeMapperFactory_addSchema_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapperFactory_getElementMapperbyName_Proxy( 
    ISoapTypeMapperFactory __RPC_FAR * This,
    /* [in] */ BSTR bstrElementName,
    /* [in] */ BSTR bstrElementNamespace,
    /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper);


void __RPC_STUB ISoapTypeMapperFactory_getElementMapperbyName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapperFactory_getTypeMapperbyName_Proxy( 
    ISoapTypeMapperFactory __RPC_FAR * This,
    /* [in] */ BSTR bstrTypeName,
    /* [in] */ BSTR bstrTypeNamespace,
    /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper);


void __RPC_STUB ISoapTypeMapperFactory_getTypeMapperbyName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapperFactory_getElementMapper_Proxy( 
    ISoapTypeMapperFactory __RPC_FAR * This,
    /* [in] */ IXMLDOMNode __RPC_FAR *pElementNode,
    /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper);


void __RPC_STUB ISoapTypeMapperFactory_getElementMapper_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapperFactory_getTypeMapper_Proxy( 
    ISoapTypeMapperFactory __RPC_FAR * This,
    /* [in] */ IXMLDOMNode __RPC_FAR *pTypeNode,
    /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper);


void __RPC_STUB ISoapTypeMapperFactory_getTypeMapper_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapperFactory_addType_Proxy( 
    ISoapTypeMapperFactory __RPC_FAR * This,
    /* [in] */ BSTR bstrTypeName,
    /* [in] */ BSTR bstrTypeNamespace,
    /* [in] */ BSTR bstrProgID);


void __RPC_STUB ISoapTypeMapperFactory_addType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapperFactory_addElement_Proxy( 
    ISoapTypeMapperFactory __RPC_FAR * This,
    /* [in] */ BSTR bstrElementName,
    /* [in] */ BSTR bstrElementNamespace,
    /* [in] */ BSTR bstrProgID);


void __RPC_STUB ISoapTypeMapperFactory_addElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapperFactory_getMapper_Proxy( 
    ISoapTypeMapperFactory __RPC_FAR * This,
    /* [in] */ enXSDType xsdType,
    /* [in] */ IXMLDOMNode __RPC_FAR *pSchemaNode,
    /* [retval][out] */ ISoapTypeMapper __RPC_FAR *__RPC_FAR *ppSoapTypeMapper);


void __RPC_STUB ISoapTypeMapperFactory_getMapper_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapperFactory_addTypeObjectMapper_Proxy( 
    ISoapTypeMapperFactory __RPC_FAR * This,
    /* [in] */ BSTR bstrTypeName,
    /* [in] */ BSTR bstrTypeNamespace,
    /* [in] */ BSTR bstrProgID,
    /* [in] */ BSTR bstrIID);


void __RPC_STUB ISoapTypeMapperFactory_addTypeObjectMapper_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISoapTypeMapperFactory_addElementObjectMapper_Proxy( 
    ISoapTypeMapperFactory __RPC_FAR * This,
    /* [in] */ BSTR bstrElementName,
    /* [in] */ BSTR bstrElementNamespace,
    /* [in] */ BSTR bstrProgID,
    /* [in] */ BSTR bstrIID);


void __RPC_STUB ISoapTypeMapperFactory_addElementObjectMapper_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISoapTypeMapperFactory_INTERFACE_DEFINED__ */


#ifndef __ISoapMapper_INTERFACE_DEFINED__
#define __ISoapMapper_INTERFACE_DEFINED__

/* interface ISoapMapper */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapMapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC2424F3-0A74-4231-AB31-4A037C9B22A3")
    ISoapMapper : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_messageName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrMessageName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_elementName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrElementName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_partName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrpartName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_elementType( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrElementType) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isInput( 
            /* [retval][out] */ smIsInputEnum __RPC_FAR *pbIsInput) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_encoding( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrEncodingStyle) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_comValue( 
            /* [retval][out] */ VARIANT __RPC_FAR *pVarOut) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_comValue( 
            /* [in] */ VARIANT varIn) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_callIndex( 
            /* [retval][out] */ LONG __RPC_FAR *plCallIndex) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_parameterOrder( 
            /* [retval][out] */ LONG __RPC_FAR *plparaOrder) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_xmlNameSpace( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrxmlNameSpace) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_variantType( 
            /* [retval][out] */ long __RPC_FAR *pvtType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ ISoapSerializer __RPC_FAR *pISoapSerializer,
            BSTR bstrEncoding,
            enEncodingStyle enSaveStyle,
            BSTR bstrMessageNamespace,
            long lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ IXMLDOMNode __RPC_FAR *pNode,
            BSTR bstrEncoding,
            enEncodingStyle enStyle,
            BSTR bstrMessageNamespace) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapMapperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISoapMapper __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISoapMapper __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISoapMapper __RPC_FAR * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_messageName )( 
            ISoapMapper __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrMessageName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_elementName )( 
            ISoapMapper __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrElementName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_partName )( 
            ISoapMapper __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrpartName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_elementType )( 
            ISoapMapper __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrElementType);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_isInput )( 
            ISoapMapper __RPC_FAR * This,
            /* [retval][out] */ smIsInputEnum __RPC_FAR *pbIsInput);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_encoding )( 
            ISoapMapper __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrEncodingStyle);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_comValue )( 
            ISoapMapper __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pVarOut);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_comValue )( 
            ISoapMapper __RPC_FAR * This,
            /* [in] */ VARIANT varIn);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_callIndex )( 
            ISoapMapper __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plCallIndex);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_parameterOrder )( 
            ISoapMapper __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plparaOrder);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_xmlNameSpace )( 
            ISoapMapper __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrxmlNameSpace);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_variantType )( 
            ISoapMapper __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pvtType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Save )( 
            ISoapMapper __RPC_FAR * This,
            /* [in] */ ISoapSerializer __RPC_FAR *pISoapSerializer,
            BSTR bstrEncoding,
            enEncodingStyle enSaveStyle,
            BSTR bstrMessageNamespace,
            long lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Load )( 
            ISoapMapper __RPC_FAR * This,
            /* [in] */ IXMLDOMNode __RPC_FAR *pNode,
            BSTR bstrEncoding,
            enEncodingStyle enStyle,
            BSTR bstrMessageNamespace);
        
        END_INTERFACE
    } ISoapMapperVtbl;

    interface ISoapMapper
    {
        CONST_VTBL struct ISoapMapperVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapMapper_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISoapMapper_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISoapMapper_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISoapMapper_get_messageName(This,pbstrMessageName)	\
    (This)->lpVtbl -> get_messageName(This,pbstrMessageName)

#define ISoapMapper_get_elementName(This,pbstrElementName)	\
    (This)->lpVtbl -> get_elementName(This,pbstrElementName)

#define ISoapMapper_get_partName(This,pbstrpartName)	\
    (This)->lpVtbl -> get_partName(This,pbstrpartName)

#define ISoapMapper_get_elementType(This,pbstrElementType)	\
    (This)->lpVtbl -> get_elementType(This,pbstrElementType)

#define ISoapMapper_get_isInput(This,pbIsInput)	\
    (This)->lpVtbl -> get_isInput(This,pbIsInput)

#define ISoapMapper_get_encoding(This,pbstrEncodingStyle)	\
    (This)->lpVtbl -> get_encoding(This,pbstrEncodingStyle)

#define ISoapMapper_get_comValue(This,pVarOut)	\
    (This)->lpVtbl -> get_comValue(This,pVarOut)

#define ISoapMapper_put_comValue(This,varIn)	\
    (This)->lpVtbl -> put_comValue(This,varIn)

#define ISoapMapper_get_callIndex(This,plCallIndex)	\
    (This)->lpVtbl -> get_callIndex(This,plCallIndex)

#define ISoapMapper_get_parameterOrder(This,plparaOrder)	\
    (This)->lpVtbl -> get_parameterOrder(This,plparaOrder)

#define ISoapMapper_get_xmlNameSpace(This,pbstrxmlNameSpace)	\
    (This)->lpVtbl -> get_xmlNameSpace(This,pbstrxmlNameSpace)

#define ISoapMapper_get_variantType(This,pvtType)	\
    (This)->lpVtbl -> get_variantType(This,pvtType)

#define ISoapMapper_Save(This,pISoapSerializer,bstrEncoding,enSaveStyle,bstrMessageNamespace,lFlags)	\
    (This)->lpVtbl -> Save(This,pISoapSerializer,bstrEncoding,enSaveStyle,bstrMessageNamespace,lFlags)

#define ISoapMapper_Load(This,pNode,bstrEncoding,enStyle,bstrMessageNamespace)	\
    (This)->lpVtbl -> Load(This,pNode,bstrEncoding,enStyle,bstrMessageNamespace)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapMapper_get_messageName_Proxy( 
    ISoapMapper __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrMessageName);


void __RPC_STUB ISoapMapper_get_messageName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapMapper_get_elementName_Proxy( 
    ISoapMapper __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrElementName);


void __RPC_STUB ISoapMapper_get_elementName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapMapper_get_partName_Proxy( 
    ISoapMapper __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrpartName);


void __RPC_STUB ISoapMapper_get_partName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapMapper_get_elementType_Proxy( 
    ISoapMapper __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrElementType);


void __RPC_STUB ISoapMapper_get_elementType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapMapper_get_isInput_Proxy( 
    ISoapMapper __RPC_FAR * This,
    /* [retval][out] */ smIsInputEnum __RPC_FAR *pbIsInput);


void __RPC_STUB ISoapMapper_get_isInput_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapMapper_get_encoding_Proxy( 
    ISoapMapper __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrEncodingStyle);


void __RPC_STUB ISoapMapper_get_encoding_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapMapper_get_comValue_Proxy( 
    ISoapMapper __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pVarOut);


void __RPC_STUB ISoapMapper_get_comValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISoapMapper_put_comValue_Proxy( 
    ISoapMapper __RPC_FAR * This,
    /* [in] */ VARIANT varIn);


void __RPC_STUB ISoapMapper_put_comValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapMapper_get_callIndex_Proxy( 
    ISoapMapper __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *plCallIndex);


void __RPC_STUB ISoapMapper_get_callIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapMapper_get_parameterOrder_Proxy( 
    ISoapMapper __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *plparaOrder);


void __RPC_STUB ISoapMapper_get_parameterOrder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapMapper_get_xmlNameSpace_Proxy( 
    ISoapMapper __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrxmlNameSpace);


void __RPC_STUB ISoapMapper_get_xmlNameSpace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISoapMapper_get_variantType_Proxy( 
    ISoapMapper __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pvtType);


void __RPC_STUB ISoapMapper_get_variantType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISoapMapper_Save_Proxy( 
    ISoapMapper __RPC_FAR * This,
    /* [in] */ ISoapSerializer __RPC_FAR *pISoapSerializer,
    BSTR bstrEncoding,
    enEncodingStyle enSaveStyle,
    BSTR bstrMessageNamespace,
    long lFlags);


void __RPC_STUB ISoapMapper_Save_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISoapMapper_Load_Proxy( 
    ISoapMapper __RPC_FAR * This,
    /* [in] */ IXMLDOMNode __RPC_FAR *pNode,
    BSTR bstrEncoding,
    enEncodingStyle enStyle,
    BSTR bstrMessageNamespace);


void __RPC_STUB ISoapMapper_Load_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISoapMapper_INTERFACE_DEFINED__ */


#ifndef __IEnumSoapMappers_INTERFACE_DEFINED__
#define __IEnumSoapMappers_INTERFACE_DEFINED__

/* interface IEnumSoapMappers */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IEnumSoapMappers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A8BF14B8-DBBA-45B5-A1ED-571697FACD4C")
    IEnumSoapMappers : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            long celt,
            /* [out] */ ISoapMapper __RPC_FAR *__RPC_FAR *ppSoapMapper,
            /* [out] */ long __RPC_FAR *pulFetched) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Skip( 
            long celt) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumSoapMappers __RPC_FAR *__RPC_FAR *ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumSoapMappersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEnumSoapMappers __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEnumSoapMappers __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEnumSoapMappers __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IEnumSoapMappers __RPC_FAR * This,
            long celt,
            /* [out] */ ISoapMapper __RPC_FAR *__RPC_FAR *ppSoapMapper,
            /* [out] */ long __RPC_FAR *pulFetched);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            IEnumSoapMappers __RPC_FAR * This,
            long celt);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IEnumSoapMappers __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IEnumSoapMappers __RPC_FAR * This,
            /* [out] */ IEnumSoapMappers __RPC_FAR *__RPC_FAR *ppenum);
        
        END_INTERFACE
    } IEnumSoapMappersVtbl;

    interface IEnumSoapMappers
    {
        CONST_VTBL struct IEnumSoapMappersVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSoapMappers_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumSoapMappers_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumSoapMappers_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumSoapMappers_Next(This,celt,ppSoapMapper,pulFetched)	\
    (This)->lpVtbl -> Next(This,celt,ppSoapMapper,pulFetched)

#define IEnumSoapMappers_Skip(This,celt)	\
    (This)->lpVtbl -> Skip(This,celt)

#define IEnumSoapMappers_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumSoapMappers_Clone(This,ppenum)	\
    (This)->lpVtbl -> Clone(This,ppenum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumSoapMappers_Next_Proxy( 
    IEnumSoapMappers __RPC_FAR * This,
    long celt,
    /* [out] */ ISoapMapper __RPC_FAR *__RPC_FAR *ppSoapMapper,
    /* [out] */ long __RPC_FAR *pulFetched);


void __RPC_STUB IEnumSoapMappers_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumSoapMappers_Skip_Proxy( 
    IEnumSoapMappers __RPC_FAR * This,
    long celt);


void __RPC_STUB IEnumSoapMappers_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumSoapMappers_Reset_Proxy( 
    IEnumSoapMappers __RPC_FAR * This);


void __RPC_STUB IEnumSoapMappers_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumSoapMappers_Clone_Proxy( 
    IEnumSoapMappers __RPC_FAR * This,
    /* [out] */ IEnumSoapMappers __RPC_FAR *__RPC_FAR *ppenum);


void __RPC_STUB IEnumSoapMappers_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumSoapMappers_INTERFACE_DEFINED__ */


#ifndef __IWSDLOperation_INTERFACE_DEFINED__
#define __IWSDLOperation_INTERFACE_DEFINED__

/* interface IWSDLOperation */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IWSDLOperation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2C713C3C-77FE-4997-AA30-38519C57FC15")
    IWSDLOperation : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_documentation( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrDocumentation) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrOperationName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_soapAction( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrSoapAction) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_objectProgID( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrobjectProgID) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_objectMethod( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrobjectMethod) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasHeader( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbHeader) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_style( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrstyle) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_preferredEncoding( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrpreferredEncoding) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetOperationParts( 
            /* [out] */ IEnumSoapMappers __RPC_FAR *__RPC_FAR *ppIEnumSoapMappers) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ExecuteOperation( 
            /* [in] */ ISoapReader __RPC_FAR *pISoapReader,
            /* [in] */ ISoapSerializer __RPC_FAR *pISoapSerializer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ ISoapSerializer __RPC_FAR *pISoapSerializer,
            VARIANT_BOOL vbInput) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveHeaders( 
            /* [in] */ ISoapSerializer __RPC_FAR *pISoapSerializer,
            VARIANT_BOOL vbOutput) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ ISoapReader __RPC_FAR *pISoapReader,
            VARIANT_BOOL vbInput) = 0;
        
        virtual /* [local][hidden][helpstring] */ const WCHAR __RPC_FAR *STDMETHODCALLTYPE getNameRef( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDLOperationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IWSDLOperation __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IWSDLOperation __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IWSDLOperation __RPC_FAR * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_documentation )( 
            IWSDLOperation __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrDocumentation);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_name )( 
            IWSDLOperation __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrOperationName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_soapAction )( 
            IWSDLOperation __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrSoapAction);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_objectProgID )( 
            IWSDLOperation __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrobjectProgID);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_objectMethod )( 
            IWSDLOperation __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrobjectMethod);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_hasHeader )( 
            IWSDLOperation __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbHeader);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_style )( 
            IWSDLOperation __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrstyle);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_preferredEncoding )( 
            IWSDLOperation __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrpreferredEncoding);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetOperationParts )( 
            IWSDLOperation __RPC_FAR * This,
            /* [out] */ IEnumSoapMappers __RPC_FAR *__RPC_FAR *ppIEnumSoapMappers);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExecuteOperation )( 
            IWSDLOperation __RPC_FAR * This,
            /* [in] */ ISoapReader __RPC_FAR *pISoapReader,
            /* [in] */ ISoapSerializer __RPC_FAR *pISoapSerializer);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Save )( 
            IWSDLOperation __RPC_FAR * This,
            /* [in] */ ISoapSerializer __RPC_FAR *pISoapSerializer,
            VARIANT_BOOL vbInput);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SaveHeaders )( 
            IWSDLOperation __RPC_FAR * This,
            /* [in] */ ISoapSerializer __RPC_FAR *pISoapSerializer,
            VARIANT_BOOL vbOutput);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Load )( 
            IWSDLOperation __RPC_FAR * This,
            /* [in] */ ISoapReader __RPC_FAR *pISoapReader,
            VARIANT_BOOL vbInput);
        
        /* [local][hidden][helpstring] */ const WCHAR __RPC_FAR *( STDMETHODCALLTYPE __RPC_FAR *getNameRef )( 
            IWSDLOperation __RPC_FAR * This);
        
        END_INTERFACE
    } IWSDLOperationVtbl;

    interface IWSDLOperation
    {
        CONST_VTBL struct IWSDLOperationVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDLOperation_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWSDLOperation_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWSDLOperation_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWSDLOperation_get_documentation(This,bstrDocumentation)	\
    (This)->lpVtbl -> get_documentation(This,bstrDocumentation)

#define IWSDLOperation_get_name(This,pbstrOperationName)	\
    (This)->lpVtbl -> get_name(This,pbstrOperationName)

#define IWSDLOperation_get_soapAction(This,pbstrSoapAction)	\
    (This)->lpVtbl -> get_soapAction(This,pbstrSoapAction)

#define IWSDLOperation_get_objectProgID(This,pbstrobjectProgID)	\
    (This)->lpVtbl -> get_objectProgID(This,pbstrobjectProgID)

#define IWSDLOperation_get_objectMethod(This,pbstrobjectMethod)	\
    (This)->lpVtbl -> get_objectMethod(This,pbstrobjectMethod)

#define IWSDLOperation_get_hasHeader(This,pbHeader)	\
    (This)->lpVtbl -> get_hasHeader(This,pbHeader)

#define IWSDLOperation_get_style(This,pbstrstyle)	\
    (This)->lpVtbl -> get_style(This,pbstrstyle)

#define IWSDLOperation_get_preferredEncoding(This,pbstrpreferredEncoding)	\
    (This)->lpVtbl -> get_preferredEncoding(This,pbstrpreferredEncoding)

#define IWSDLOperation_GetOperationParts(This,ppIEnumSoapMappers)	\
    (This)->lpVtbl -> GetOperationParts(This,ppIEnumSoapMappers)

#define IWSDLOperation_ExecuteOperation(This,pISoapReader,pISoapSerializer)	\
    (This)->lpVtbl -> ExecuteOperation(This,pISoapReader,pISoapSerializer)

#define IWSDLOperation_Save(This,pISoapSerializer,vbInput)	\
    (This)->lpVtbl -> Save(This,pISoapSerializer,vbInput)

#define IWSDLOperation_SaveHeaders(This,pISoapSerializer,vbOutput)	\
    (This)->lpVtbl -> SaveHeaders(This,pISoapSerializer,vbOutput)

#define IWSDLOperation_Load(This,pISoapReader,vbInput)	\
    (This)->lpVtbl -> Load(This,pISoapReader,vbInput)

#define IWSDLOperation_getNameRef(This)	\
    (This)->lpVtbl -> getNameRef(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLOperation_get_documentation_Proxy( 
    IWSDLOperation __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrDocumentation);


void __RPC_STUB IWSDLOperation_get_documentation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLOperation_get_name_Proxy( 
    IWSDLOperation __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrOperationName);


void __RPC_STUB IWSDLOperation_get_name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLOperation_get_soapAction_Proxy( 
    IWSDLOperation __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrSoapAction);


void __RPC_STUB IWSDLOperation_get_soapAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLOperation_get_objectProgID_Proxy( 
    IWSDLOperation __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrobjectProgID);


void __RPC_STUB IWSDLOperation_get_objectProgID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLOperation_get_objectMethod_Proxy( 
    IWSDLOperation __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrobjectMethod);


void __RPC_STUB IWSDLOperation_get_objectMethod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLOperation_get_hasHeader_Proxy( 
    IWSDLOperation __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbHeader);


void __RPC_STUB IWSDLOperation_get_hasHeader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLOperation_get_style_Proxy( 
    IWSDLOperation __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrstyle);


void __RPC_STUB IWSDLOperation_get_style_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLOperation_get_preferredEncoding_Proxy( 
    IWSDLOperation __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrpreferredEncoding);


void __RPC_STUB IWSDLOperation_get_preferredEncoding_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWSDLOperation_GetOperationParts_Proxy( 
    IWSDLOperation __RPC_FAR * This,
    /* [out] */ IEnumSoapMappers __RPC_FAR *__RPC_FAR *ppIEnumSoapMappers);


void __RPC_STUB IWSDLOperation_GetOperationParts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWSDLOperation_ExecuteOperation_Proxy( 
    IWSDLOperation __RPC_FAR * This,
    /* [in] */ ISoapReader __RPC_FAR *pISoapReader,
    /* [in] */ ISoapSerializer __RPC_FAR *pISoapSerializer);


void __RPC_STUB IWSDLOperation_ExecuteOperation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWSDLOperation_Save_Proxy( 
    IWSDLOperation __RPC_FAR * This,
    /* [in] */ ISoapSerializer __RPC_FAR *pISoapSerializer,
    VARIANT_BOOL vbInput);


void __RPC_STUB IWSDLOperation_Save_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWSDLOperation_SaveHeaders_Proxy( 
    IWSDLOperation __RPC_FAR * This,
    /* [in] */ ISoapSerializer __RPC_FAR *pISoapSerializer,
    VARIANT_BOOL vbOutput);


void __RPC_STUB IWSDLOperation_SaveHeaders_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWSDLOperation_Load_Proxy( 
    IWSDLOperation __RPC_FAR * This,
    /* [in] */ ISoapReader __RPC_FAR *pISoapReader,
    VARIANT_BOOL vbInput);


void __RPC_STUB IWSDLOperation_Load_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [local][hidden][helpstring] */ const WCHAR __RPC_FAR *STDMETHODCALLTYPE IWSDLOperation_getNameRef_Proxy( 
    IWSDLOperation __RPC_FAR * This);


void __RPC_STUB IWSDLOperation_getNameRef_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWSDLOperation_INTERFACE_DEFINED__ */


#ifndef __IEnumWSDLOperations_INTERFACE_DEFINED__
#define __IEnumWSDLOperations_INTERFACE_DEFINED__

/* interface IEnumWSDLOperations */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IEnumWSDLOperations;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C4618005-691F-41FE-A318-C37CEC14B867")
    IEnumWSDLOperations : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            long celt,
            /* [out] */ IWSDLOperation __RPC_FAR *__RPC_FAR *ppWSDLOperation,
            /* [out] */ long __RPC_FAR *pulFetched) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Skip( 
            long celt) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumWSDLOperations __RPC_FAR *__RPC_FAR *ppenum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            BSTR bstrOperationToFind,
            /* [out] */ IWSDLOperation __RPC_FAR *__RPC_FAR *ppIWSDLOperation) = 0;
        
        virtual /* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE Size( 
            /* [out] */ long __RPC_FAR *pSize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumWSDLOperationsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEnumWSDLOperations __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEnumWSDLOperations __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEnumWSDLOperations __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IEnumWSDLOperations __RPC_FAR * This,
            long celt,
            /* [out] */ IWSDLOperation __RPC_FAR *__RPC_FAR *ppWSDLOperation,
            /* [out] */ long __RPC_FAR *pulFetched);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            IEnumWSDLOperations __RPC_FAR * This,
            long celt);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IEnumWSDLOperations __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IEnumWSDLOperations __RPC_FAR * This,
            /* [out] */ IEnumWSDLOperations __RPC_FAR *__RPC_FAR *ppenum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Find )( 
            IEnumWSDLOperations __RPC_FAR * This,
            BSTR bstrOperationToFind,
            /* [out] */ IWSDLOperation __RPC_FAR *__RPC_FAR *ppIWSDLOperation);
        
        /* [hidden][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Size )( 
            IEnumWSDLOperations __RPC_FAR * This,
            /* [out] */ long __RPC_FAR *pSize);
        
        END_INTERFACE
    } IEnumWSDLOperationsVtbl;

    interface IEnumWSDLOperations
    {
        CONST_VTBL struct IEnumWSDLOperationsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumWSDLOperations_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumWSDLOperations_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumWSDLOperations_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumWSDLOperations_Next(This,celt,ppWSDLOperation,pulFetched)	\
    (This)->lpVtbl -> Next(This,celt,ppWSDLOperation,pulFetched)

#define IEnumWSDLOperations_Skip(This,celt)	\
    (This)->lpVtbl -> Skip(This,celt)

#define IEnumWSDLOperations_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumWSDLOperations_Clone(This,ppenum)	\
    (This)->lpVtbl -> Clone(This,ppenum)

#define IEnumWSDLOperations_Find(This,bstrOperationToFind,ppIWSDLOperation)	\
    (This)->lpVtbl -> Find(This,bstrOperationToFind,ppIWSDLOperation)

#define IEnumWSDLOperations_Size(This,pSize)	\
    (This)->lpVtbl -> Size(This,pSize)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLOperations_Next_Proxy( 
    IEnumWSDLOperations __RPC_FAR * This,
    long celt,
    /* [out] */ IWSDLOperation __RPC_FAR *__RPC_FAR *ppWSDLOperation,
    /* [out] */ long __RPC_FAR *pulFetched);


void __RPC_STUB IEnumWSDLOperations_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLOperations_Skip_Proxy( 
    IEnumWSDLOperations __RPC_FAR * This,
    long celt);


void __RPC_STUB IEnumWSDLOperations_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLOperations_Reset_Proxy( 
    IEnumWSDLOperations __RPC_FAR * This);


void __RPC_STUB IEnumWSDLOperations_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLOperations_Clone_Proxy( 
    IEnumWSDLOperations __RPC_FAR * This,
    /* [out] */ IEnumWSDLOperations __RPC_FAR *__RPC_FAR *ppenum);


void __RPC_STUB IEnumWSDLOperations_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLOperations_Find_Proxy( 
    IEnumWSDLOperations __RPC_FAR * This,
    BSTR bstrOperationToFind,
    /* [out] */ IWSDLOperation __RPC_FAR *__RPC_FAR *ppIWSDLOperation);


void __RPC_STUB IEnumWSDLOperations_Find_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLOperations_Size_Proxy( 
    IEnumWSDLOperations __RPC_FAR * This,
    /* [out] */ long __RPC_FAR *pSize);


void __RPC_STUB IEnumWSDLOperations_Size_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumWSDLOperations_INTERFACE_DEFINED__ */


#ifndef __IWSDLPort_INTERFACE_DEFINED__
#define __IWSDLPort_INTERFACE_DEFINED__

/* interface IWSDLPort */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IWSDLPort;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("94873e03-77df-455f-bc1c-e83b5ab8cf0f")
    IWSDLPort : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrPortName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_address( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrPortAddress) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_bindStyle( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrbindStyle) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_transport( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrtransport) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_documentation( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrDocumentation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSoapOperations( 
            /* [out] */ IEnumWSDLOperations __RPC_FAR *__RPC_FAR *ppIWSDLOperations) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDLPortVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IWSDLPort __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IWSDLPort __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IWSDLPort __RPC_FAR * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_name )( 
            IWSDLPort __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrPortName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_address )( 
            IWSDLPort __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrPortAddress);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_bindStyle )( 
            IWSDLPort __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrbindStyle);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_transport )( 
            IWSDLPort __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrtransport);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_documentation )( 
            IWSDLPort __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrDocumentation);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSoapOperations )( 
            IWSDLPort __RPC_FAR * This,
            /* [out] */ IEnumWSDLOperations __RPC_FAR *__RPC_FAR *ppIWSDLOperations);
        
        END_INTERFACE
    } IWSDLPortVtbl;

    interface IWSDLPort
    {
        CONST_VTBL struct IWSDLPortVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDLPort_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWSDLPort_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWSDLPort_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWSDLPort_get_name(This,pbstrPortName)	\
    (This)->lpVtbl -> get_name(This,pbstrPortName)

#define IWSDLPort_get_address(This,pbstrPortAddress)	\
    (This)->lpVtbl -> get_address(This,pbstrPortAddress)

#define IWSDLPort_get_bindStyle(This,pbstrbindStyle)	\
    (This)->lpVtbl -> get_bindStyle(This,pbstrbindStyle)

#define IWSDLPort_get_transport(This,pbstrtransport)	\
    (This)->lpVtbl -> get_transport(This,pbstrtransport)

#define IWSDLPort_get_documentation(This,bstrDocumentation)	\
    (This)->lpVtbl -> get_documentation(This,bstrDocumentation)

#define IWSDLPort_GetSoapOperations(This,ppIWSDLOperations)	\
    (This)->lpVtbl -> GetSoapOperations(This,ppIWSDLOperations)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLPort_get_name_Proxy( 
    IWSDLPort __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrPortName);


void __RPC_STUB IWSDLPort_get_name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLPort_get_address_Proxy( 
    IWSDLPort __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrPortAddress);


void __RPC_STUB IWSDLPort_get_address_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLPort_get_bindStyle_Proxy( 
    IWSDLPort __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrbindStyle);


void __RPC_STUB IWSDLPort_get_bindStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLPort_get_transport_Proxy( 
    IWSDLPort __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrtransport);


void __RPC_STUB IWSDLPort_get_transport_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLPort_get_documentation_Proxy( 
    IWSDLPort __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrDocumentation);


void __RPC_STUB IWSDLPort_get_documentation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWSDLPort_GetSoapOperations_Proxy( 
    IWSDLPort __RPC_FAR * This,
    /* [out] */ IEnumWSDLOperations __RPC_FAR *__RPC_FAR *ppIWSDLOperations);


void __RPC_STUB IWSDLPort_GetSoapOperations_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWSDLPort_INTERFACE_DEFINED__ */


#ifndef __IEnumWSDLPorts_INTERFACE_DEFINED__
#define __IEnumWSDLPorts_INTERFACE_DEFINED__

/* interface IEnumWSDLPorts */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IEnumWSDLPorts;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6deae1c2-789f-430c-94cb-703f24e25d52")
    IEnumWSDLPorts : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            long celt,
            /* [out] */ IWSDLPort __RPC_FAR *__RPC_FAR *ppWSDLPort,
            long __RPC_FAR *pulFetched) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Skip( 
            long celt) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumWSDLPorts __RPC_FAR *__RPC_FAR *ppenum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            BSTR bstrPortToFind,
            /* [out] */ IWSDLPort __RPC_FAR *__RPC_FAR *ppIWSDLPort) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumWSDLPortsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEnumWSDLPorts __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEnumWSDLPorts __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEnumWSDLPorts __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IEnumWSDLPorts __RPC_FAR * This,
            long celt,
            /* [out] */ IWSDLPort __RPC_FAR *__RPC_FAR *ppWSDLPort,
            long __RPC_FAR *pulFetched);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            IEnumWSDLPorts __RPC_FAR * This,
            long celt);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IEnumWSDLPorts __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IEnumWSDLPorts __RPC_FAR * This,
            /* [out] */ IEnumWSDLPorts __RPC_FAR *__RPC_FAR *ppenum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Find )( 
            IEnumWSDLPorts __RPC_FAR * This,
            BSTR bstrPortToFind,
            /* [out] */ IWSDLPort __RPC_FAR *__RPC_FAR *ppIWSDLPort);
        
        END_INTERFACE
    } IEnumWSDLPortsVtbl;

    interface IEnumWSDLPorts
    {
        CONST_VTBL struct IEnumWSDLPortsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumWSDLPorts_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumWSDLPorts_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumWSDLPorts_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumWSDLPorts_Next(This,celt,ppWSDLPort,pulFetched)	\
    (This)->lpVtbl -> Next(This,celt,ppWSDLPort,pulFetched)

#define IEnumWSDLPorts_Skip(This,celt)	\
    (This)->lpVtbl -> Skip(This,celt)

#define IEnumWSDLPorts_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumWSDLPorts_Clone(This,ppenum)	\
    (This)->lpVtbl -> Clone(This,ppenum)

#define IEnumWSDLPorts_Find(This,bstrPortToFind,ppIWSDLPort)	\
    (This)->lpVtbl -> Find(This,bstrPortToFind,ppIWSDLPort)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLPorts_Next_Proxy( 
    IEnumWSDLPorts __RPC_FAR * This,
    long celt,
    /* [out] */ IWSDLPort __RPC_FAR *__RPC_FAR *ppWSDLPort,
    long __RPC_FAR *pulFetched);


void __RPC_STUB IEnumWSDLPorts_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLPorts_Skip_Proxy( 
    IEnumWSDLPorts __RPC_FAR * This,
    long celt);


void __RPC_STUB IEnumWSDLPorts_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLPorts_Reset_Proxy( 
    IEnumWSDLPorts __RPC_FAR * This);


void __RPC_STUB IEnumWSDLPorts_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLPorts_Clone_Proxy( 
    IEnumWSDLPorts __RPC_FAR * This,
    /* [out] */ IEnumWSDLPorts __RPC_FAR *__RPC_FAR *ppenum);


void __RPC_STUB IEnumWSDLPorts_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLPorts_Find_Proxy( 
    IEnumWSDLPorts __RPC_FAR * This,
    BSTR bstrPortToFind,
    /* [out] */ IWSDLPort __RPC_FAR *__RPC_FAR *ppIWSDLPort);


void __RPC_STUB IEnumWSDLPorts_Find_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumWSDLPorts_INTERFACE_DEFINED__ */


#ifndef __IWSDLService_INTERFACE_DEFINED__
#define __IWSDLService_INTERFACE_DEFINED__

/* interface IWSDLService */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IWSDLService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C21A73B1-5655-4B36-BA3F-8E2DBABE82DF")
    IWSDLService : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrServiceName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_documentation( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrDocumentation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSoapPorts( 
            /* [out] */ IEnumWSDLPorts __RPC_FAR *__RPC_FAR *ppIWSDLPorts) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDLServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IWSDLService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IWSDLService __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IWSDLService __RPC_FAR * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_name )( 
            IWSDLService __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrServiceName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_documentation )( 
            IWSDLService __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrDocumentation);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSoapPorts )( 
            IWSDLService __RPC_FAR * This,
            /* [out] */ IEnumWSDLPorts __RPC_FAR *__RPC_FAR *ppIWSDLPorts);
        
        END_INTERFACE
    } IWSDLServiceVtbl;

    interface IWSDLService
    {
        CONST_VTBL struct IWSDLServiceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDLService_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWSDLService_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWSDLService_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWSDLService_get_name(This,bstrServiceName)	\
    (This)->lpVtbl -> get_name(This,bstrServiceName)

#define IWSDLService_get_documentation(This,bstrDocumentation)	\
    (This)->lpVtbl -> get_documentation(This,bstrDocumentation)

#define IWSDLService_GetSoapPorts(This,ppIWSDLPorts)	\
    (This)->lpVtbl -> GetSoapPorts(This,ppIWSDLPorts)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLService_get_name_Proxy( 
    IWSDLService __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrServiceName);


void __RPC_STUB IWSDLService_get_name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IWSDLService_get_documentation_Proxy( 
    IWSDLService __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrDocumentation);


void __RPC_STUB IWSDLService_get_documentation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWSDLService_GetSoapPorts_Proxy( 
    IWSDLService __RPC_FAR * This,
    /* [out] */ IEnumWSDLPorts __RPC_FAR *__RPC_FAR *ppIWSDLPorts);


void __RPC_STUB IWSDLService_GetSoapPorts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWSDLService_INTERFACE_DEFINED__ */


#ifndef __IEnumWSDLService_INTERFACE_DEFINED__
#define __IEnumWSDLService_INTERFACE_DEFINED__

/* interface IEnumWSDLService */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IEnumWSDLService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BD5965B7-F5BF-49F3-AE7B-F817D4B7CC99")
    IEnumWSDLService : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            long celt,
            /* [out] */ IWSDLService __RPC_FAR *__RPC_FAR *ppWSDLService,
            long __RPC_FAR *pulFetched) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Skip( 
            long celt) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumWSDLService __RPC_FAR *__RPC_FAR *ppenum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            BSTR bstrServiceToFind,
            /* [out] */ IWSDLService __RPC_FAR *__RPC_FAR *ppWSDLService) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumWSDLServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEnumWSDLService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEnumWSDLService __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEnumWSDLService __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IEnumWSDLService __RPC_FAR * This,
            long celt,
            /* [out] */ IWSDLService __RPC_FAR *__RPC_FAR *ppWSDLService,
            long __RPC_FAR *pulFetched);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            IEnumWSDLService __RPC_FAR * This,
            long celt);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IEnumWSDLService __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IEnumWSDLService __RPC_FAR * This,
            /* [out] */ IEnumWSDLService __RPC_FAR *__RPC_FAR *ppenum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Find )( 
            IEnumWSDLService __RPC_FAR * This,
            BSTR bstrServiceToFind,
            /* [out] */ IWSDLService __RPC_FAR *__RPC_FAR *ppWSDLService);
        
        END_INTERFACE
    } IEnumWSDLServiceVtbl;

    interface IEnumWSDLService
    {
        CONST_VTBL struct IEnumWSDLServiceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumWSDLService_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumWSDLService_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumWSDLService_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumWSDLService_Next(This,celt,ppWSDLService,pulFetched)	\
    (This)->lpVtbl -> Next(This,celt,ppWSDLService,pulFetched)

#define IEnumWSDLService_Skip(This,celt)	\
    (This)->lpVtbl -> Skip(This,celt)

#define IEnumWSDLService_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumWSDLService_Clone(This,ppenum)	\
    (This)->lpVtbl -> Clone(This,ppenum)

#define IEnumWSDLService_Find(This,bstrServiceToFind,ppWSDLService)	\
    (This)->lpVtbl -> Find(This,bstrServiceToFind,ppWSDLService)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLService_Next_Proxy( 
    IEnumWSDLService __RPC_FAR * This,
    long celt,
    /* [out] */ IWSDLService __RPC_FAR *__RPC_FAR *ppWSDLService,
    long __RPC_FAR *pulFetched);


void __RPC_STUB IEnumWSDLService_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLService_Skip_Proxy( 
    IEnumWSDLService __RPC_FAR * This,
    long celt);


void __RPC_STUB IEnumWSDLService_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLService_Reset_Proxy( 
    IEnumWSDLService __RPC_FAR * This);


void __RPC_STUB IEnumWSDLService_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLService_Clone_Proxy( 
    IEnumWSDLService __RPC_FAR * This,
    /* [out] */ IEnumWSDLService __RPC_FAR *__RPC_FAR *ppenum);


void __RPC_STUB IEnumWSDLService_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumWSDLService_Find_Proxy( 
    IEnumWSDLService __RPC_FAR * This,
    BSTR bstrServiceToFind,
    /* [out] */ IWSDLService __RPC_FAR *__RPC_FAR *ppWSDLService);


void __RPC_STUB IEnumWSDLService_Find_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumWSDLService_INTERFACE_DEFINED__ */


#ifndef __IWSDLReader_INTERFACE_DEFINED__
#define __IWSDLReader_INTERFACE_DEFINED__

/* interface IWSDLReader */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IWSDLReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77127B0C-C47E-4861-8429-4B6DA7401663")
    IWSDLReader : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Load( 
            BSTR bstrWSDLFileSpec,
            BSTR bstrWSMLFileSpec) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSoapServices( 
            /* [out] */ IEnumWSDLService __RPC_FAR *__RPC_FAR *ppWSDLServiceEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ParseRequest( 
            /* [in] */ ISoapReader __RPC_FAR *pSoapReader,
            /* [out] */ IWSDLPort __RPC_FAR *__RPC_FAR *ppIWSDLPort,
            /* [out] */ IWSDLOperation __RPC_FAR *__RPC_FAR *ppIWSDLOperation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE setProperty( 
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varPropValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDLReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IWSDLReader __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IWSDLReader __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IWSDLReader __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Load )( 
            IWSDLReader __RPC_FAR * This,
            BSTR bstrWSDLFileSpec,
            BSTR bstrWSMLFileSpec);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSoapServices )( 
            IWSDLReader __RPC_FAR * This,
            /* [out] */ IEnumWSDLService __RPC_FAR *__RPC_FAR *ppWSDLServiceEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ParseRequest )( 
            IWSDLReader __RPC_FAR * This,
            /* [in] */ ISoapReader __RPC_FAR *pSoapReader,
            /* [out] */ IWSDLPort __RPC_FAR *__RPC_FAR *ppIWSDLPort,
            /* [out] */ IWSDLOperation __RPC_FAR *__RPC_FAR *ppIWSDLOperation);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *setProperty )( 
            IWSDLReader __RPC_FAR * This,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varPropValue);
        
        END_INTERFACE
    } IWSDLReaderVtbl;

    interface IWSDLReader
    {
        CONST_VTBL struct IWSDLReaderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDLReader_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWSDLReader_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWSDLReader_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWSDLReader_Load(This,bstrWSDLFileSpec,bstrWSMLFileSpec)	\
    (This)->lpVtbl -> Load(This,bstrWSDLFileSpec,bstrWSMLFileSpec)

#define IWSDLReader_GetSoapServices(This,ppWSDLServiceEnum)	\
    (This)->lpVtbl -> GetSoapServices(This,ppWSDLServiceEnum)

#define IWSDLReader_ParseRequest(This,pSoapReader,ppIWSDLPort,ppIWSDLOperation)	\
    (This)->lpVtbl -> ParseRequest(This,pSoapReader,ppIWSDLPort,ppIWSDLOperation)

#define IWSDLReader_setProperty(This,bstrPropertyName,varPropValue)	\
    (This)->lpVtbl -> setProperty(This,bstrPropertyName,varPropValue)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWSDLReader_Load_Proxy( 
    IWSDLReader __RPC_FAR * This,
    BSTR bstrWSDLFileSpec,
    BSTR bstrWSMLFileSpec);


void __RPC_STUB IWSDLReader_Load_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWSDLReader_GetSoapServices_Proxy( 
    IWSDLReader __RPC_FAR * This,
    /* [out] */ IEnumWSDLService __RPC_FAR *__RPC_FAR *ppWSDLServiceEnum);


void __RPC_STUB IWSDLReader_GetSoapServices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWSDLReader_ParseRequest_Proxy( 
    IWSDLReader __RPC_FAR * This,
    /* [in] */ ISoapReader __RPC_FAR *pSoapReader,
    /* [out] */ IWSDLPort __RPC_FAR *__RPC_FAR *ppIWSDLPort,
    /* [out] */ IWSDLOperation __RPC_FAR *__RPC_FAR *ppIWSDLOperation);


void __RPC_STUB IWSDLReader_ParseRequest_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWSDLReader_setProperty_Proxy( 
    IWSDLReader __RPC_FAR * This,
    /* [in] */ BSTR bstrPropertyName,
    /* [in] */ VARIANT varPropValue);


void __RPC_STUB IWSDLReader_setProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWSDLReader_INTERFACE_DEFINED__ */


#ifndef __ISOAPError_INTERFACE_DEFINED__
#define __ISOAPError_INTERFACE_DEFINED__

/* interface ISOAPError */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISOAPError;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EDABBFA8-E126-402D-B65D-4EFAC1405F6E")
    ISOAPError : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_faultcode( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrFaultcode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_faultstring( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrFaultstring) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_faultactor( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrActor) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_detail( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrDetail) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_faultcodeNS( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrNamespace) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPErrorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISOAPError __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISOAPError __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISOAPError __RPC_FAR * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_faultcode )( 
            ISOAPError __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrFaultcode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_faultstring )( 
            ISOAPError __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrFaultstring);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_faultactor )( 
            ISOAPError __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrActor);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_detail )( 
            ISOAPError __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrDetail);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_faultcodeNS )( 
            ISOAPError __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrNamespace);
        
        END_INTERFACE
    } ISOAPErrorVtbl;

    interface ISOAPError
    {
        CONST_VTBL struct ISOAPErrorVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPError_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPError_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPError_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPError_get_faultcode(This,bstrFaultcode)	\
    (This)->lpVtbl -> get_faultcode(This,bstrFaultcode)

#define ISOAPError_get_faultstring(This,bstrFaultstring)	\
    (This)->lpVtbl -> get_faultstring(This,bstrFaultstring)

#define ISOAPError_get_faultactor(This,bstrActor)	\
    (This)->lpVtbl -> get_faultactor(This,bstrActor)

#define ISOAPError_get_detail(This,bstrDetail)	\
    (This)->lpVtbl -> get_detail(This,bstrDetail)

#define ISOAPError_get_faultcodeNS(This,bstrNamespace)	\
    (This)->lpVtbl -> get_faultcodeNS(This,bstrNamespace)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISOAPError_get_faultcode_Proxy( 
    ISOAPError __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrFaultcode);


void __RPC_STUB ISOAPError_get_faultcode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISOAPError_get_faultstring_Proxy( 
    ISOAPError __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrFaultstring);


void __RPC_STUB ISOAPError_get_faultstring_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISOAPError_get_faultactor_Proxy( 
    ISOAPError __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrActor);


void __RPC_STUB ISOAPError_get_faultactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISOAPError_get_detail_Proxy( 
    ISOAPError __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrDetail);


void __RPC_STUB ISOAPError_get_detail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISOAPError_get_faultcodeNS_Proxy( 
    ISOAPError __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrNamespace);


void __RPC_STUB ISOAPError_get_faultcodeNS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPError_INTERFACE_DEFINED__ */



#ifndef __MSSOAPLib_LIBRARY_DEFINED__
#define __MSSOAPLib_LIBRARY_DEFINED__

/* library MSSOAPLib */
/* [helpstring][version][uuid] */ 








EXTERN_C const IID LIBID_MSSOAPLib;

EXTERN_C const CLSID CLSID_SoapConnector;

#ifdef __cplusplus

class DECLSPEC_UUID("A295EAB4-73AC-4725-A7DE-51047843B421")
SoapConnector;
#endif

EXTERN_C const CLSID CLSID_SoapConnectorFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("4CE546FF-9128-465E-B5C5-5A36CFC2C285")
SoapConnectorFactory;
#endif

EXTERN_C const CLSID CLSID_HttpConnector;

#ifdef __cplusplus

class DECLSPEC_UUID("6205B8C9-75FF-4623-A50A-88E1F14EAFF2")
HttpConnector;
#endif

EXTERN_C const CLSID CLSID_SoapReader;

#ifdef __cplusplus

class DECLSPEC_UUID("FDE424F3-AA10-471D-8A0A-6875C17B5914")
SoapReader;
#endif

EXTERN_C const CLSID CLSID_SoapSerializer;

#ifdef __cplusplus

class DECLSPEC_UUID("ADE424F3-AA10-471D-8A0A-687534555900")
SoapSerializer;
#endif

EXTERN_C const CLSID CLSID_SoapServer;

#ifdef __cplusplus

class DECLSPEC_UUID("EBB2FF12-861A-42b6-B815-B1AF4D944916")
SoapServer;
#endif

EXTERN_C const CLSID CLSID_SoapClient;

#ifdef __cplusplus

class DECLSPEC_UUID("86D54F3D-652D-4ab3-A1A6-14D403F6C813")
SoapClient;
#endif

EXTERN_C const CLSID CLSID_WSDLReader;

#ifdef __cplusplus

class DECLSPEC_UUID("BB023FC5-AA10-47CE-8A0A-6875C17B5914")
WSDLReader;
#endif

EXTERN_C const CLSID CLSID_SoapTypeMapperFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("9C5754F7-ADF5-4D82-B181-0F8FC5EA882B")
SoapTypeMapperFactory;
#endif

EXTERN_C const CLSID CLSID_EnumWSDLService;

#ifdef __cplusplus

class DECLSPEC_UUID("86950840-D999-4902-B97A-1E80D2F31A51")
EnumWSDLService;
#endif

EXTERN_C const CLSID CLSID_WSDLService;

#ifdef __cplusplus

class DECLSPEC_UUID("C75F59D9-672E-42E0-B353-134E1EB27EEA")
WSDLService;
#endif

EXTERN_C const CLSID CLSID_EnumWSDLOperations;

#ifdef __cplusplus

class DECLSPEC_UUID("D39CBFF4-46AF-459D-A8F7-61A38A1DC285")
EnumWSDLOperations;
#endif

EXTERN_C const CLSID CLSID_WSDLOperation;

#ifdef __cplusplus

class DECLSPEC_UUID("61FC8C46-7102-4F1C-BFA0-30CD43AFF1BB")
WSDLOperation;
#endif

EXTERN_C const CLSID CLSID_SoapMapper;

#ifdef __cplusplus

class DECLSPEC_UUID("55429FCE-044E-4ADF-9322-2CFBFF9B7B5D")
SoapMapper;
#endif

EXTERN_C const CLSID CLSID_EnumSoapMappers;

#ifdef __cplusplus

class DECLSPEC_UUID("6b6b62b5-8f0a-46ad-aafa-11af2517ded1")
EnumSoapMappers;
#endif

EXTERN_C const CLSID CLSID_EnumWSDLPorts;

#ifdef __cplusplus

class DECLSPEC_UUID("bd283625-5931-40ca-b43b-8e8a8651dc70")
EnumWSDLPorts;
#endif

EXTERN_C const CLSID CLSID_WSDLPort;

#ifdef __cplusplus

class DECLSPEC_UUID("dba51e33-5d87-47aa-af2f-2a616527808a")
WSDLPort;
#endif
#endif /* __MSSOAPLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


