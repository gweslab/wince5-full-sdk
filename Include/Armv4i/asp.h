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
/* at Thu Jun 24 19:10:09 2004
 */
/* Compiler settings for .\asp.idl:
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

#ifndef __asp_h__
#define __asp_h__

/* Forward Declarations */ 

#ifndef __IRequestDictionary_FWD_DEFINED__
#define __IRequestDictionary_FWD_DEFINED__
typedef interface IRequestDictionary IRequestDictionary;
#endif 	/* __IRequestDictionary_FWD_DEFINED__ */


#ifndef __IRequestStrList_FWD_DEFINED__
#define __IRequestStrList_FWD_DEFINED__
typedef interface IRequestStrList IRequestStrList;
#endif 	/* __IRequestStrList_FWD_DEFINED__ */


#ifndef __IRequest_FWD_DEFINED__
#define __IRequest_FWD_DEFINED__
typedef interface IRequest IRequest;
#endif 	/* __IRequest_FWD_DEFINED__ */


#ifndef __IResponse_FWD_DEFINED__
#define __IResponse_FWD_DEFINED__
typedef interface IResponse IResponse;
#endif 	/* __IResponse_FWD_DEFINED__ */


#ifndef __IServer_FWD_DEFINED__
#define __IServer_FWD_DEFINED__
typedef interface IServer IServer;
#endif 	/* __IServer_FWD_DEFINED__ */


#ifndef __Request_FWD_DEFINED__
#define __Request_FWD_DEFINED__

#ifdef __cplusplus
typedef class Request Request;
#else
typedef struct Request Request;
#endif /* __cplusplus */

#endif 	/* __Request_FWD_DEFINED__ */


#ifndef __Response_FWD_DEFINED__
#define __Response_FWD_DEFINED__

#ifdef __cplusplus
typedef class Response Response;
#else
typedef struct Response Response;
#endif /* __cplusplus */

#endif 	/* __Response_FWD_DEFINED__ */


#ifndef __Server_FWD_DEFINED__
#define __Server_FWD_DEFINED__

#ifdef __cplusplus
typedef class Server Server;
#else
typedef struct Server Server;
#endif /* __cplusplus */

#endif 	/* __Server_FWD_DEFINED__ */


#ifndef __RequestDictionary_FWD_DEFINED__
#define __RequestDictionary_FWD_DEFINED__

#ifdef __cplusplus
typedef class RequestDictionary RequestDictionary;
#else
typedef struct RequestDictionary RequestDictionary;
#endif /* __cplusplus */

#endif 	/* __RequestDictionary_FWD_DEFINED__ */


#ifndef __RequestStrList_FWD_DEFINED__
#define __RequestStrList_FWD_DEFINED__

#ifdef __cplusplus
typedef class RequestStrList RequestStrList;
#else
typedef struct RequestStrList RequestStrList;
#endif /* __cplusplus */

#endif 	/* __RequestStrList_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IRequestDictionary_INTERFACE_DEFINED__
#define __IRequestDictionary_INTERFACE_DEFINED__

/* interface IRequestDictionary */
/* [object][unique][oleautomation][dual][hidden][helpstring][uuid] */ 


EXTERN_C const IID IID_IRequestDictionary;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D97A6DA0-A85F-11DF-83AE-00A0C90C2BD8")
    IRequestDictionary : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [optional][in] */ VARIANT Var,
            /* [retval][out] */ VARIANT __RPC_FAR *pVariantReturn) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Item( 
            /* [optional][in] */ VARIANT Var,
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual /* [restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppEnumReturn) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ int __RPC_FAR *cStrRet) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Key( 
            /* [in] */ VARIANT VarKey,
            /* [retval][out] */ VARIANT __RPC_FAR *pvar) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRequestDictionaryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRequestDictionary __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRequestDictionary __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRequestDictionary __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IRequestDictionary __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IRequestDictionary __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IRequestDictionary __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IRequestDictionary __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Item )( 
            IRequestDictionary __RPC_FAR * This,
            /* [optional][in] */ VARIANT Var,
            /* [retval][out] */ VARIANT __RPC_FAR *pVariantReturn);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Item )( 
            IRequestDictionary __RPC_FAR * This,
            /* [optional][in] */ VARIANT Var,
            /* [in] */ BSTR bstrValue);
        
        /* [restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IRequestDictionary __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppEnumReturn);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IRequestDictionary __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *cStrRet);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Key )( 
            IRequestDictionary __RPC_FAR * This,
            /* [in] */ VARIANT VarKey,
            /* [retval][out] */ VARIANT __RPC_FAR *pvar);
        
        END_INTERFACE
    } IRequestDictionaryVtbl;

    interface IRequestDictionary
    {
        CONST_VTBL struct IRequestDictionaryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRequestDictionary_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRequestDictionary_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRequestDictionary_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRequestDictionary_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IRequestDictionary_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IRequestDictionary_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IRequestDictionary_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IRequestDictionary_get_Item(This,Var,pVariantReturn)	\
    (This)->lpVtbl -> get_Item(This,Var,pVariantReturn)

#define IRequestDictionary_put_Item(This,Var,bstrValue)	\
    (This)->lpVtbl -> put_Item(This,Var,bstrValue)

#define IRequestDictionary_get__NewEnum(This,ppEnumReturn)	\
    (This)->lpVtbl -> get__NewEnum(This,ppEnumReturn)

#define IRequestDictionary_get_Count(This,cStrRet)	\
    (This)->lpVtbl -> get_Count(This,cStrRet)

#define IRequestDictionary_get_Key(This,VarKey,pvar)	\
    (This)->lpVtbl -> get_Key(This,VarKey,pvar)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE IRequestDictionary_get_Item_Proxy( 
    IRequestDictionary __RPC_FAR * This,
    /* [optional][in] */ VARIANT Var,
    /* [retval][out] */ VARIANT __RPC_FAR *pVariantReturn);


void __RPC_STUB IRequestDictionary_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IRequestDictionary_put_Item_Proxy( 
    IRequestDictionary __RPC_FAR * This,
    /* [optional][in] */ VARIANT Var,
    /* [in] */ BSTR bstrValue);


void __RPC_STUB IRequestDictionary_put_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [restricted][propget][id] */ HRESULT STDMETHODCALLTYPE IRequestDictionary_get__NewEnum_Proxy( 
    IRequestDictionary __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppEnumReturn);


void __RPC_STUB IRequestDictionary_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IRequestDictionary_get_Count_Proxy( 
    IRequestDictionary __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *cStrRet);


void __RPC_STUB IRequestDictionary_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IRequestDictionary_get_Key_Proxy( 
    IRequestDictionary __RPC_FAR * This,
    /* [in] */ VARIANT VarKey,
    /* [retval][out] */ VARIANT __RPC_FAR *pvar);


void __RPC_STUB IRequestDictionary_get_Key_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRequestDictionary_INTERFACE_DEFINED__ */


#ifndef __IRequestStrList_INTERFACE_DEFINED__
#define __IRequestStrList_INTERFACE_DEFINED__

/* interface IRequestStrList */
/* [object][unique][oleautomation][hidden][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IRequestStrList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1C724F9A-FE6B-11D2-9C54-00C04F681EE7")
    IRequestStrList : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [optional][in] */ VARIANT Var,
            /* [retval][out] */ VARIANT __RPC_FAR *pVariantReturn) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Item( 
            /* [optional][in] */ VARIANT Var,
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual /* [restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppEnumReturn) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ int __RPC_FAR *cStrRet) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Key( 
            /* [in] */ VARIANT VarKey,
            /* [retval][out] */ VARIANT __RPC_FAR *pvar) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Expires( 
            /* [in] */ DATE dtExpires) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Domain( 
            /* [in] */ BSTR bstrDomain) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Path( 
            /* [in] */ BSTR bstrPath) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HasKeys( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfHasKeys) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRequestStrListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRequestStrList __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRequestStrList __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRequestStrList __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IRequestStrList __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IRequestStrList __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IRequestStrList __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IRequestStrList __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Item )( 
            IRequestStrList __RPC_FAR * This,
            /* [optional][in] */ VARIANT Var,
            /* [retval][out] */ VARIANT __RPC_FAR *pVariantReturn);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Item )( 
            IRequestStrList __RPC_FAR * This,
            /* [optional][in] */ VARIANT Var,
            /* [in] */ BSTR bstrValue);
        
        /* [restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IRequestStrList __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppEnumReturn);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IRequestStrList __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *cStrRet);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Key )( 
            IRequestStrList __RPC_FAR * This,
            /* [in] */ VARIANT VarKey,
            /* [retval][out] */ VARIANT __RPC_FAR *pvar);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Expires )( 
            IRequestStrList __RPC_FAR * This,
            /* [in] */ DATE dtExpires);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Domain )( 
            IRequestStrList __RPC_FAR * This,
            /* [in] */ BSTR bstrDomain);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Path )( 
            IRequestStrList __RPC_FAR * This,
            /* [in] */ BSTR bstrPath);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HasKeys )( 
            IRequestStrList __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfHasKeys);
        
        END_INTERFACE
    } IRequestStrListVtbl;

    interface IRequestStrList
    {
        CONST_VTBL struct IRequestStrListVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRequestStrList_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRequestStrList_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRequestStrList_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRequestStrList_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IRequestStrList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IRequestStrList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IRequestStrList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IRequestStrList_get_Item(This,Var,pVariantReturn)	\
    (This)->lpVtbl -> get_Item(This,Var,pVariantReturn)

#define IRequestStrList_put_Item(This,Var,bstrValue)	\
    (This)->lpVtbl -> put_Item(This,Var,bstrValue)

#define IRequestStrList_get__NewEnum(This,ppEnumReturn)	\
    (This)->lpVtbl -> get__NewEnum(This,ppEnumReturn)

#define IRequestStrList_get_Count(This,cStrRet)	\
    (This)->lpVtbl -> get_Count(This,cStrRet)

#define IRequestStrList_get_Key(This,VarKey,pvar)	\
    (This)->lpVtbl -> get_Key(This,VarKey,pvar)

#define IRequestStrList_put_Expires(This,dtExpires)	\
    (This)->lpVtbl -> put_Expires(This,dtExpires)

#define IRequestStrList_put_Domain(This,bstrDomain)	\
    (This)->lpVtbl -> put_Domain(This,bstrDomain)

#define IRequestStrList_put_Path(This,bstrPath)	\
    (This)->lpVtbl -> put_Path(This,bstrPath)

#define IRequestStrList_get_HasKeys(This,pfHasKeys)	\
    (This)->lpVtbl -> get_HasKeys(This,pfHasKeys)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE IRequestStrList_get_Item_Proxy( 
    IRequestStrList __RPC_FAR * This,
    /* [optional][in] */ VARIANT Var,
    /* [retval][out] */ VARIANT __RPC_FAR *pVariantReturn);


void __RPC_STUB IRequestStrList_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IRequestStrList_put_Item_Proxy( 
    IRequestStrList __RPC_FAR * This,
    /* [optional][in] */ VARIANT Var,
    /* [in] */ BSTR bstrValue);


void __RPC_STUB IRequestStrList_put_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [restricted][propget][id] */ HRESULT STDMETHODCALLTYPE IRequestStrList_get__NewEnum_Proxy( 
    IRequestStrList __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppEnumReturn);


void __RPC_STUB IRequestStrList_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IRequestStrList_get_Count_Proxy( 
    IRequestStrList __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *cStrRet);


void __RPC_STUB IRequestStrList_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IRequestStrList_get_Key_Proxy( 
    IRequestStrList __RPC_FAR * This,
    /* [in] */ VARIANT VarKey,
    /* [retval][out] */ VARIANT __RPC_FAR *pvar);


void __RPC_STUB IRequestStrList_get_Key_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IRequestStrList_put_Expires_Proxy( 
    IRequestStrList __RPC_FAR * This,
    /* [in] */ DATE dtExpires);


void __RPC_STUB IRequestStrList_put_Expires_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IRequestStrList_put_Domain_Proxy( 
    IRequestStrList __RPC_FAR * This,
    /* [in] */ BSTR bstrDomain);


void __RPC_STUB IRequestStrList_put_Domain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IRequestStrList_put_Path_Proxy( 
    IRequestStrList __RPC_FAR * This,
    /* [in] */ BSTR bstrPath);


void __RPC_STUB IRequestStrList_put_Path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IRequestStrList_get_HasKeys_Proxy( 
    IRequestStrList __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfHasKeys);


void __RPC_STUB IRequestStrList_get_HasKeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRequestStrList_INTERFACE_DEFINED__ */


#ifndef __IRequest_INTERFACE_DEFINED__
#define __IRequest_INTERFACE_DEFINED__

/* interface IRequest */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRequest;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D97A6DA0-A861-11CF-93AE-00A0C90C2BD8")
    IRequest : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TotalBytes( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ServerVariables( 
            /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_QueryString( 
            /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Form( 
            /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Cookies( 
            /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BinaryRead( 
            /* [out][in] */ VARIANT __RPC_FAR *pvarCountToRead,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarReturn) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRequestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRequest __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRequest __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRequest __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IRequest __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IRequest __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IRequest __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IRequest __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_TotalBytes )( 
            IRequest __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ServerVariables )( 
            IRequest __RPC_FAR * This,
            /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_QueryString )( 
            IRequest __RPC_FAR * This,
            /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Form )( 
            IRequest __RPC_FAR * This,
            /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Cookies )( 
            IRequest __RPC_FAR * This,
            /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BinaryRead )( 
            IRequest __RPC_FAR * This,
            /* [out][in] */ VARIANT __RPC_FAR *pvarCountToRead,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarReturn);
        
        END_INTERFACE
    } IRequestVtbl;

    interface IRequest
    {
        CONST_VTBL struct IRequestVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRequest_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRequest_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRequest_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRequest_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IRequest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IRequest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IRequest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IRequest_get_TotalBytes(This,pVal)	\
    (This)->lpVtbl -> get_TotalBytes(This,pVal)

#define IRequest_get_ServerVariables(This,ppDictReturn)	\
    (This)->lpVtbl -> get_ServerVariables(This,ppDictReturn)

#define IRequest_get_QueryString(This,ppDictReturn)	\
    (This)->lpVtbl -> get_QueryString(This,ppDictReturn)

#define IRequest_get_Form(This,ppDictReturn)	\
    (This)->lpVtbl -> get_Form(This,ppDictReturn)

#define IRequest_get_Cookies(This,ppDictReturn)	\
    (This)->lpVtbl -> get_Cookies(This,ppDictReturn)

#define IRequest_BinaryRead(This,pvarCountToRead,pvarReturn)	\
    (This)->lpVtbl -> BinaryRead(This,pvarCountToRead,pvarReturn)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IRequest_get_TotalBytes_Proxy( 
    IRequest __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IRequest_get_TotalBytes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IRequest_get_ServerVariables_Proxy( 
    IRequest __RPC_FAR * This,
    /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn);


void __RPC_STUB IRequest_get_ServerVariables_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IRequest_get_QueryString_Proxy( 
    IRequest __RPC_FAR * This,
    /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn);


void __RPC_STUB IRequest_get_QueryString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IRequest_get_Form_Proxy( 
    IRequest __RPC_FAR * This,
    /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn);


void __RPC_STUB IRequest_get_Form_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IRequest_get_Cookies_Proxy( 
    IRequest __RPC_FAR * This,
    /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn);


void __RPC_STUB IRequest_get_Cookies_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRequest_BinaryRead_Proxy( 
    IRequest __RPC_FAR * This,
    /* [out][in] */ VARIANT __RPC_FAR *pvarCountToRead,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarReturn);


void __RPC_STUB IRequest_BinaryRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRequest_INTERFACE_DEFINED__ */


#ifndef __IResponse_INTERFACE_DEFINED__
#define __IResponse_INTERFACE_DEFINED__

/* interface IResponse */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IResponse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D97A6DA0-A864-11CF-83BE-00A0C90C2BD8")
    IResponse : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Buffer( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Buffer( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Write( 
            VARIANT varData) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Expires( 
            /* [retval][out] */ VARIANT __RPC_FAR *pvarExpiresMinutesRet) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Expires( 
            /* [in] */ long lExpiresMinutes) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExpiresAbsolute( 
            /* [retval][out] */ VARIANT __RPC_FAR *pvarExpiresRet) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExpiresAbsolute( 
            /* [in] */ DATE dtExpires) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Cookies( 
            /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Status( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ContentType( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ContentType( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Charset( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Charset( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddHeader( 
            BSTR pszName,
            BSTR pszValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AppendToLog( 
            BSTR pszLogData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE End( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Flush( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Redirect( 
            BSTR pszURL) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BinaryWrite( 
            /* [in] */ VARIANT varData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IResponseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IResponse __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IResponse __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IResponse __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IResponse __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IResponse __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IResponse __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IResponse __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Buffer )( 
            IResponse __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Buffer )( 
            IResponse __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Write )( 
            IResponse __RPC_FAR * This,
            VARIANT varData);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Expires )( 
            IResponse __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarExpiresMinutesRet);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Expires )( 
            IResponse __RPC_FAR * This,
            /* [in] */ long lExpiresMinutes);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ExpiresAbsolute )( 
            IResponse __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarExpiresRet);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ExpiresAbsolute )( 
            IResponse __RPC_FAR * This,
            /* [in] */ DATE dtExpires);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Cookies )( 
            IResponse __RPC_FAR * This,
            /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Status )( 
            IResponse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Status )( 
            IResponse __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ContentType )( 
            IResponse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ContentType )( 
            IResponse __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Charset )( 
            IResponse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Charset )( 
            IResponse __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddHeader )( 
            IResponse __RPC_FAR * This,
            BSTR pszName,
            BSTR pszValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AppendToLog )( 
            IResponse __RPC_FAR * This,
            BSTR pszLogData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clear )( 
            IResponse __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *End )( 
            IResponse __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Flush )( 
            IResponse __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Redirect )( 
            IResponse __RPC_FAR * This,
            BSTR pszURL);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BinaryWrite )( 
            IResponse __RPC_FAR * This,
            /* [in] */ VARIANT varData);
        
        END_INTERFACE
    } IResponseVtbl;

    interface IResponse
    {
        CONST_VTBL struct IResponseVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IResponse_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IResponse_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IResponse_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IResponse_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IResponse_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IResponse_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IResponse_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IResponse_get_Buffer(This,pVal)	\
    (This)->lpVtbl -> get_Buffer(This,pVal)

#define IResponse_put_Buffer(This,newVal)	\
    (This)->lpVtbl -> put_Buffer(This,newVal)

#define IResponse_Write(This,varData)	\
    (This)->lpVtbl -> Write(This,varData)

#define IResponse_get_Expires(This,pvarExpiresMinutesRet)	\
    (This)->lpVtbl -> get_Expires(This,pvarExpiresMinutesRet)

#define IResponse_put_Expires(This,lExpiresMinutes)	\
    (This)->lpVtbl -> put_Expires(This,lExpiresMinutes)

#define IResponse_get_ExpiresAbsolute(This,pvarExpiresRet)	\
    (This)->lpVtbl -> get_ExpiresAbsolute(This,pvarExpiresRet)

#define IResponse_put_ExpiresAbsolute(This,dtExpires)	\
    (This)->lpVtbl -> put_ExpiresAbsolute(This,dtExpires)

#define IResponse_get_Cookies(This,ppDictReturn)	\
    (This)->lpVtbl -> get_Cookies(This,ppDictReturn)

#define IResponse_get_Status(This,pVal)	\
    (This)->lpVtbl -> get_Status(This,pVal)

#define IResponse_put_Status(This,newVal)	\
    (This)->lpVtbl -> put_Status(This,newVal)

#define IResponse_get_ContentType(This,pVal)	\
    (This)->lpVtbl -> get_ContentType(This,pVal)

#define IResponse_put_ContentType(This,newVal)	\
    (This)->lpVtbl -> put_ContentType(This,newVal)

#define IResponse_get_Charset(This,pVal)	\
    (This)->lpVtbl -> get_Charset(This,pVal)

#define IResponse_put_Charset(This,newVal)	\
    (This)->lpVtbl -> put_Charset(This,newVal)

#define IResponse_AddHeader(This,pszName,pszValue)	\
    (This)->lpVtbl -> AddHeader(This,pszName,pszValue)

#define IResponse_AppendToLog(This,pszLogData)	\
    (This)->lpVtbl -> AppendToLog(This,pszLogData)

#define IResponse_Clear(This)	\
    (This)->lpVtbl -> Clear(This)

#define IResponse_End(This)	\
    (This)->lpVtbl -> End(This)

#define IResponse_Flush(This)	\
    (This)->lpVtbl -> Flush(This)

#define IResponse_Redirect(This,pszURL)	\
    (This)->lpVtbl -> Redirect(This,pszURL)

#define IResponse_BinaryWrite(This,varData)	\
    (This)->lpVtbl -> BinaryWrite(This,varData)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IResponse_get_Buffer_Proxy( 
    IResponse __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);


void __RPC_STUB IResponse_get_Buffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IResponse_put_Buffer_Proxy( 
    IResponse __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IResponse_put_Buffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IResponse_Write_Proxy( 
    IResponse __RPC_FAR * This,
    VARIANT varData);


void __RPC_STUB IResponse_Write_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IResponse_get_Expires_Proxy( 
    IResponse __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarExpiresMinutesRet);


void __RPC_STUB IResponse_get_Expires_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IResponse_put_Expires_Proxy( 
    IResponse __RPC_FAR * This,
    /* [in] */ long lExpiresMinutes);


void __RPC_STUB IResponse_put_Expires_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IResponse_get_ExpiresAbsolute_Proxy( 
    IResponse __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarExpiresRet);


void __RPC_STUB IResponse_get_ExpiresAbsolute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IResponse_put_ExpiresAbsolute_Proxy( 
    IResponse __RPC_FAR * This,
    /* [in] */ DATE dtExpires);


void __RPC_STUB IResponse_put_ExpiresAbsolute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IResponse_get_Cookies_Proxy( 
    IResponse __RPC_FAR * This,
    /* [retval][out] */ IRequestDictionary __RPC_FAR *__RPC_FAR *ppDictReturn);


void __RPC_STUB IResponse_get_Cookies_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IResponse_get_Status_Proxy( 
    IResponse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IResponse_get_Status_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IResponse_put_Status_Proxy( 
    IResponse __RPC_FAR * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IResponse_put_Status_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IResponse_get_ContentType_Proxy( 
    IResponse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IResponse_get_ContentType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IResponse_put_ContentType_Proxy( 
    IResponse __RPC_FAR * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IResponse_put_ContentType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IResponse_get_Charset_Proxy( 
    IResponse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IResponse_get_Charset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IResponse_put_Charset_Proxy( 
    IResponse __RPC_FAR * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IResponse_put_Charset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IResponse_AddHeader_Proxy( 
    IResponse __RPC_FAR * This,
    BSTR pszName,
    BSTR pszValue);


void __RPC_STUB IResponse_AddHeader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IResponse_AppendToLog_Proxy( 
    IResponse __RPC_FAR * This,
    BSTR pszLogData);


void __RPC_STUB IResponse_AppendToLog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IResponse_Clear_Proxy( 
    IResponse __RPC_FAR * This);


void __RPC_STUB IResponse_Clear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IResponse_End_Proxy( 
    IResponse __RPC_FAR * This);


void __RPC_STUB IResponse_End_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IResponse_Flush_Proxy( 
    IResponse __RPC_FAR * This);


void __RPC_STUB IResponse_Flush_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IResponse_Redirect_Proxy( 
    IResponse __RPC_FAR * This,
    BSTR pszURL);


void __RPC_STUB IResponse_Redirect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IResponse_BinaryWrite_Proxy( 
    IResponse __RPC_FAR * This,
    /* [in] */ VARIANT varData);


void __RPC_STUB IResponse_BinaryWrite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IResponse_INTERFACE_DEFINED__ */


#ifndef __IServer_INTERFACE_DEFINED__
#define __IServer_INTERFACE_DEFINED__

/* interface IServer */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D97A6DA0-A867-11CF-83AE-01A0C90C2BD8")
    IServer : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_URLEncode( 
            /* [in] */ BSTR pszName,
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MapPath( 
            /* [in] */ BSTR pszName,
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IServer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IServer __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IServer __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IServer __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IServer __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IServer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IServer __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_URLEncode )( 
            IServer __RPC_FAR * This,
            /* [in] */ BSTR pszName,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MapPath )( 
            IServer __RPC_FAR * This,
            /* [in] */ BSTR pszName,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        END_INTERFACE
    } IServerVtbl;

    interface IServer
    {
        CONST_VTBL struct IServerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IServer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IServer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IServer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IServer_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IServer_get_URLEncode(This,pszName,pVal)	\
    (This)->lpVtbl -> get_URLEncode(This,pszName,pVal)

#define IServer_get_MapPath(This,pszName,pVal)	\
    (This)->lpVtbl -> get_MapPath(This,pszName,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IServer_get_URLEncode_Proxy( 
    IServer __RPC_FAR * This,
    /* [in] */ BSTR pszName,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IServer_get_URLEncode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IServer_get_MapPath_Proxy( 
    IServer __RPC_FAR * This,
    /* [in] */ BSTR pszName,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IServer_get_MapPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IServer_INTERFACE_DEFINED__ */



#ifndef __ASPLib_LIBRARY_DEFINED__
#define __ASPLib_LIBRARY_DEFINED__

/* library ASPLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ASPLib;

EXTERN_C const CLSID CLSID_Request;

#ifdef __cplusplus

class DECLSPEC_UUID("920C25D0-25D9-11D0-A55F-00A0C90C2091")
Request;
#endif

EXTERN_C const CLSID CLSID_Response;

#ifdef __cplusplus

class DECLSPEC_UUID("46E19BA0-25DD-11D0-A55F-00A0C90C2091")
Response;
#endif

EXTERN_C const CLSID CLSID_Server;

#ifdef __cplusplus

class DECLSPEC_UUID("A506D160-25E0-11D0-A55F-00A0C90C2091")
Server;
#endif

EXTERN_C const CLSID CLSID_RequestDictionary;

#ifdef __cplusplus

class DECLSPEC_UUID("38999595-F9B2-11D2-9C53-00C04F681EE7")
RequestDictionary;
#endif

EXTERN_C const CLSID CLSID_RequestStrList;

#ifdef __cplusplus

class DECLSPEC_UUID("1C724F9B-FE6B-11D2-9C54-00C04F681EE7")
RequestStrList;
#endif
#endif /* __ASPLib_LIBRARY_DEFINED__ */

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


