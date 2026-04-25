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
/* at Thu Jun 24 18:49:42 2004
 */
/* Compiler settings for .\recalc.idl:
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

#ifndef __recalc_h__
#define __recalc_h__

/* Forward Declarations */ 

#ifndef __IRecalcEngine_FWD_DEFINED__
#define __IRecalcEngine_FWD_DEFINED__
typedef interface IRecalcEngine IRecalcEngine;
#endif 	/* __IRecalcEngine_FWD_DEFINED__ */


#ifndef __IRecalcHost_FWD_DEFINED__
#define __IRecalcHost_FWD_DEFINED__
typedef interface IRecalcHost IRecalcHost;
#endif 	/* __IRecalcHost_FWD_DEFINED__ */


#ifndef __IRecalcProperty_FWD_DEFINED__
#define __IRecalcProperty_FWD_DEFINED__
typedef interface IRecalcProperty IRecalcProperty;
#endif 	/* __IRecalcProperty_FWD_DEFINED__ */


#ifndef __IRecalcHostDebug_FWD_DEFINED__
#define __IRecalcHostDebug_FWD_DEFINED__
typedef interface IRecalcHostDebug IRecalcHostDebug;
#endif 	/* __IRecalcHostDebug_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "oleidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_recalc_0000 */
/* [local] */ 

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
#define SID_SRecalcEngine IID_IRecalcEngine




extern RPC_IF_HANDLE __MIDL_itf_recalc_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_recalc_0000_v0_0_s_ifspec;

#ifndef __IRecalcEngine_INTERFACE_DEFINED__
#define __IRecalcEngine_INTERFACE_DEFINED__

/* interface IRecalcEngine */
/* [version][local][unique][uuid][object] */ 


EXTERN_C const IID IID_IRecalcEngine;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f496-98b5-11cf-bb82-00aa00bdce0b")
    IRecalcEngine : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RecalcAll( 
            /* [in] */ BOOL fForce) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnNameSpaceChange( 
            /* [in] */ IUnknown __RPC_FAR *pUnk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetExpression( 
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid,
            /* [in] */ LPOLESTR strExpression,
            LPOLESTR language) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExpression( 
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid,
            /* [out] */ BSTR __RPC_FAR *pstrExpression,
            /* [out] */ BSTR __RPC_FAR *pstrLanguage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearExpression( 
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginStyle( 
            /* [in] */ IUnknown __RPC_FAR *pObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndStyle( 
            /* [in] */ IUnknown __RPC_FAR *pObject) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRecalcEngineVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRecalcEngine __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRecalcEngine __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRecalcEngine __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RecalcAll )( 
            IRecalcEngine __RPC_FAR * This,
            /* [in] */ BOOL fForce);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnNameSpaceChange )( 
            IRecalcEngine __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnk);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetExpression )( 
            IRecalcEngine __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid,
            /* [in] */ LPOLESTR strExpression,
            LPOLESTR language);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetExpression )( 
            IRecalcEngine __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid,
            /* [out] */ BSTR __RPC_FAR *pstrExpression,
            /* [out] */ BSTR __RPC_FAR *pstrLanguage);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ClearExpression )( 
            IRecalcEngine __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BeginStyle )( 
            IRecalcEngine __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pObject);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EndStyle )( 
            IRecalcEngine __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pObject);
        
        END_INTERFACE
    } IRecalcEngineVtbl;

    interface IRecalcEngine
    {
        CONST_VTBL struct IRecalcEngineVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecalcEngine_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRecalcEngine_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRecalcEngine_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRecalcEngine_RecalcAll(This,fForce)	\
    (This)->lpVtbl -> RecalcAll(This,fForce)

#define IRecalcEngine_OnNameSpaceChange(This,pUnk)	\
    (This)->lpVtbl -> OnNameSpaceChange(This,pUnk)

#define IRecalcEngine_SetExpression(This,pUnk,dispid,strExpression,language)	\
    (This)->lpVtbl -> SetExpression(This,pUnk,dispid,strExpression,language)

#define IRecalcEngine_GetExpression(This,pUnk,dispid,pstrExpression,pstrLanguage)	\
    (This)->lpVtbl -> GetExpression(This,pUnk,dispid,pstrExpression,pstrLanguage)

#define IRecalcEngine_ClearExpression(This,pUnk,dispid)	\
    (This)->lpVtbl -> ClearExpression(This,pUnk,dispid)

#define IRecalcEngine_BeginStyle(This,pObject)	\
    (This)->lpVtbl -> BeginStyle(This,pObject)

#define IRecalcEngine_EndStyle(This,pObject)	\
    (This)->lpVtbl -> EndStyle(This,pObject)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRecalcEngine_RecalcAll_Proxy( 
    IRecalcEngine __RPC_FAR * This,
    /* [in] */ BOOL fForce);


void __RPC_STUB IRecalcEngine_RecalcAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRecalcEngine_OnNameSpaceChange_Proxy( 
    IRecalcEngine __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnk);


void __RPC_STUB IRecalcEngine_OnNameSpaceChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRecalcEngine_SetExpression_Proxy( 
    IRecalcEngine __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnk,
    /* [in] */ DISPID dispid,
    /* [in] */ LPOLESTR strExpression,
    LPOLESTR language);


void __RPC_STUB IRecalcEngine_SetExpression_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRecalcEngine_GetExpression_Proxy( 
    IRecalcEngine __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnk,
    /* [in] */ DISPID dispid,
    /* [out] */ BSTR __RPC_FAR *pstrExpression,
    /* [out] */ BSTR __RPC_FAR *pstrLanguage);


void __RPC_STUB IRecalcEngine_GetExpression_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRecalcEngine_ClearExpression_Proxy( 
    IRecalcEngine __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnk,
    /* [in] */ DISPID dispid);


void __RPC_STUB IRecalcEngine_ClearExpression_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRecalcEngine_BeginStyle_Proxy( 
    IRecalcEngine __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pObject);


void __RPC_STUB IRecalcEngine_BeginStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRecalcEngine_EndStyle_Proxy( 
    IRecalcEngine __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pObject);


void __RPC_STUB IRecalcEngine_EndStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRecalcEngine_INTERFACE_DEFINED__ */


#ifndef __IRecalcHost_INTERFACE_DEFINED__
#define __IRecalcHost_INTERFACE_DEFINED__

/* interface IRecalcHost */
/* [version][local][unique][uuid][object] */ 


EXTERN_C const IID IID_IRecalcHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f497-98b5-11cf-bb82-00aa00bdce0b")
    IRecalcHost : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CompileExpression( 
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid,
            /* [in] */ LPOLESTR strExpression,
            /* [in] */ LPOLESTR strLanguage,
            /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppExpressionObject,
            /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppThis) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EvalExpression( 
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid,
            /* [in] */ LPOLESTR strExpression,
            /* [in] */ LPOLESTR strLanguage,
            /* [out] */ VARIANT __RPC_FAR *pvResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResolveNames( 
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid,
            /* [in] */ unsigned int cNames,
            /* [in] */ BSTR __RPC_FAR *pstrNames,
            /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppObjects,
            /* [out] */ DISPID __RPC_FAR *pDispids) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RequestRecalc( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid,
            /* [in] */ VARIANT __RPC_FAR *pv,
            /* [in] */ BOOL fStyle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveValue( 
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetScriptTextAttributes( 
            /* [in] */ LPCOLESTR szLanguage,
            /* [in] */ LPCOLESTR pchCode,
            /* [in] */ ULONG cchCode,
            /* [in] */ LPCOLESTR szDelim,
            /* [in] */ DWORD dwFlags,
            /* [out] */ WORD __RPC_FAR *pwAttr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRecalcHostVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRecalcHost __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRecalcHost __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRecalcHost __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CompileExpression )( 
            IRecalcHost __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid,
            /* [in] */ LPOLESTR strExpression,
            /* [in] */ LPOLESTR strLanguage,
            /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppExpressionObject,
            /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppThis);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EvalExpression )( 
            IRecalcHost __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid,
            /* [in] */ LPOLESTR strExpression,
            /* [in] */ LPOLESTR strLanguage,
            /* [out] */ VARIANT __RPC_FAR *pvResult);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ResolveNames )( 
            IRecalcHost __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid,
            /* [in] */ unsigned int cNames,
            /* [in] */ BSTR __RPC_FAR *pstrNames,
            /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppObjects,
            /* [out] */ DISPID __RPC_FAR *pDispids);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RequestRecalc )( 
            IRecalcHost __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetValue )( 
            IRecalcHost __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid,
            /* [in] */ VARIANT __RPC_FAR *pv,
            /* [in] */ BOOL fStyle);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveValue )( 
            IRecalcHost __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetScriptTextAttributes )( 
            IRecalcHost __RPC_FAR * This,
            /* [in] */ LPCOLESTR szLanguage,
            /* [in] */ LPCOLESTR pchCode,
            /* [in] */ ULONG cchCode,
            /* [in] */ LPCOLESTR szDelim,
            /* [in] */ DWORD dwFlags,
            /* [out] */ WORD __RPC_FAR *pwAttr);
        
        END_INTERFACE
    } IRecalcHostVtbl;

    interface IRecalcHost
    {
        CONST_VTBL struct IRecalcHostVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecalcHost_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRecalcHost_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRecalcHost_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRecalcHost_CompileExpression(This,pUnk,dispid,strExpression,strLanguage,ppExpressionObject,ppThis)	\
    (This)->lpVtbl -> CompileExpression(This,pUnk,dispid,strExpression,strLanguage,ppExpressionObject,ppThis)

#define IRecalcHost_EvalExpression(This,pUnk,dispid,strExpression,strLanguage,pvResult)	\
    (This)->lpVtbl -> EvalExpression(This,pUnk,dispid,strExpression,strLanguage,pvResult)

#define IRecalcHost_ResolveNames(This,pUnk,dispid,cNames,pstrNames,ppObjects,pDispids)	\
    (This)->lpVtbl -> ResolveNames(This,pUnk,dispid,cNames,pstrNames,ppObjects,pDispids)

#define IRecalcHost_RequestRecalc(This)	\
    (This)->lpVtbl -> RequestRecalc(This)

#define IRecalcHost_SetValue(This,pUnk,dispid,pv,fStyle)	\
    (This)->lpVtbl -> SetValue(This,pUnk,dispid,pv,fStyle)

#define IRecalcHost_RemoveValue(This,pUnk,dispid)	\
    (This)->lpVtbl -> RemoveValue(This,pUnk,dispid)

#define IRecalcHost_GetScriptTextAttributes(This,szLanguage,pchCode,cchCode,szDelim,dwFlags,pwAttr)	\
    (This)->lpVtbl -> GetScriptTextAttributes(This,szLanguage,pchCode,cchCode,szDelim,dwFlags,pwAttr)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRecalcHost_CompileExpression_Proxy( 
    IRecalcHost __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnk,
    /* [in] */ DISPID dispid,
    /* [in] */ LPOLESTR strExpression,
    /* [in] */ LPOLESTR strLanguage,
    /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppExpressionObject,
    /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppThis);


void __RPC_STUB IRecalcHost_CompileExpression_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRecalcHost_EvalExpression_Proxy( 
    IRecalcHost __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnk,
    /* [in] */ DISPID dispid,
    /* [in] */ LPOLESTR strExpression,
    /* [in] */ LPOLESTR strLanguage,
    /* [out] */ VARIANT __RPC_FAR *pvResult);


void __RPC_STUB IRecalcHost_EvalExpression_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRecalcHost_ResolveNames_Proxy( 
    IRecalcHost __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnk,
    /* [in] */ DISPID dispid,
    /* [in] */ unsigned int cNames,
    /* [in] */ BSTR __RPC_FAR *pstrNames,
    /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppObjects,
    /* [out] */ DISPID __RPC_FAR *pDispids);


void __RPC_STUB IRecalcHost_ResolveNames_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRecalcHost_RequestRecalc_Proxy( 
    IRecalcHost __RPC_FAR * This);


void __RPC_STUB IRecalcHost_RequestRecalc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRecalcHost_SetValue_Proxy( 
    IRecalcHost __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnk,
    /* [in] */ DISPID dispid,
    /* [in] */ VARIANT __RPC_FAR *pv,
    /* [in] */ BOOL fStyle);


void __RPC_STUB IRecalcHost_SetValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRecalcHost_RemoveValue_Proxy( 
    IRecalcHost __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnk,
    /* [in] */ DISPID dispid);


void __RPC_STUB IRecalcHost_RemoveValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRecalcHost_GetScriptTextAttributes_Proxy( 
    IRecalcHost __RPC_FAR * This,
    /* [in] */ LPCOLESTR szLanguage,
    /* [in] */ LPCOLESTR pchCode,
    /* [in] */ ULONG cchCode,
    /* [in] */ LPCOLESTR szDelim,
    /* [in] */ DWORD dwFlags,
    /* [out] */ WORD __RPC_FAR *pwAttr);


void __RPC_STUB IRecalcHost_GetScriptTextAttributes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRecalcHost_INTERFACE_DEFINED__ */


#ifndef __IRecalcProperty_INTERFACE_DEFINED__
#define __IRecalcProperty_INTERFACE_DEFINED__

/* interface IRecalcProperty */
/* [version][local][unique][uuid][object] */ 


EXTERN_C const IID IID_IRecalcProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f5d6-98b5-11cf-bb82-00aa00bdce0b")
    IRecalcProperty : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCanonicalProperty( 
            DISPID dispid,
            IUnknown __RPC_FAR *__RPC_FAR *ppUnk,
            DISPID __RPC_FAR *pdispid) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRecalcPropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRecalcProperty __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRecalcProperty __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRecalcProperty __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCanonicalProperty )( 
            IRecalcProperty __RPC_FAR * This,
            DISPID dispid,
            IUnknown __RPC_FAR *__RPC_FAR *ppUnk,
            DISPID __RPC_FAR *pdispid);
        
        END_INTERFACE
    } IRecalcPropertyVtbl;

    interface IRecalcProperty
    {
        CONST_VTBL struct IRecalcPropertyVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecalcProperty_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRecalcProperty_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRecalcProperty_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRecalcProperty_GetCanonicalProperty(This,dispid,ppUnk,pdispid)	\
    (This)->lpVtbl -> GetCanonicalProperty(This,dispid,ppUnk,pdispid)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRecalcProperty_GetCanonicalProperty_Proxy( 
    IRecalcProperty __RPC_FAR * This,
    DISPID dispid,
    IUnknown __RPC_FAR *__RPC_FAR *ppUnk,
    DISPID __RPC_FAR *pdispid);


void __RPC_STUB IRecalcProperty_GetCanonicalProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRecalcProperty_INTERFACE_DEFINED__ */


#ifndef __IRecalcHostDebug_INTERFACE_DEFINED__
#define __IRecalcHostDebug_INTERFACE_DEFINED__

/* interface IRecalcHostDebug */
/* [version][local][unique][uuid][object] */ 


EXTERN_C const IID IID_IRecalcHostDebug;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f5f7-98b5-11cf-bb82-00aa00bdce0b")
    IRecalcHostDebug : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetObjectInfo( 
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid,
            /* [out] */ BSTR __RPC_FAR *pbstrID,
            /* [out] */ BSTR __RPC_FAR *pbstrMember,
            /* [out] */ BSTR __RPC_FAR *pbstrTag) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRecalcHostDebugVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRecalcHostDebug __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRecalcHostDebug __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRecalcHostDebug __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetObjectInfo )( 
            IRecalcHostDebug __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ DISPID dispid,
            /* [out] */ BSTR __RPC_FAR *pbstrID,
            /* [out] */ BSTR __RPC_FAR *pbstrMember,
            /* [out] */ BSTR __RPC_FAR *pbstrTag);
        
        END_INTERFACE
    } IRecalcHostDebugVtbl;

    interface IRecalcHostDebug
    {
        CONST_VTBL struct IRecalcHostDebugVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecalcHostDebug_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRecalcHostDebug_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRecalcHostDebug_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRecalcHostDebug_GetObjectInfo(This,pUnk,dispid,pbstrID,pbstrMember,pbstrTag)	\
    (This)->lpVtbl -> GetObjectInfo(This,pUnk,dispid,pbstrID,pbstrMember,pbstrTag)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRecalcHostDebug_GetObjectInfo_Proxy( 
    IRecalcHostDebug __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnk,
    /* [in] */ DISPID dispid,
    /* [out] */ BSTR __RPC_FAR *pbstrID,
    /* [out] */ BSTR __RPC_FAR *pbstrMember,
    /* [out] */ BSTR __RPC_FAR *pbstrTag);


void __RPC_STUB IRecalcHostDebug_GetObjectInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRecalcHostDebug_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


