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
/* at Thu Jun 24 18:49:45 2004
 */
/* Compiler settings for .\shappmgr.idl:
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

#ifndef __shappmgr_h__
#define __shappmgr_h__

/* Forward Declarations */ 

#ifndef __IADCCtl_FWD_DEFINED__
#define __IADCCtl_FWD_DEFINED__
typedef interface IADCCtl IADCCtl;
#endif 	/* __IADCCtl_FWD_DEFINED__ */


#ifndef __ADCCtl_FWD_DEFINED__
#define __ADCCtl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ADCCtl ADCCtl;
#else
typedef struct ADCCtl ADCCtl;
#endif /* __cplusplus */

#endif 	/* __ADCCtl_FWD_DEFINED__ */


#ifndef __IShellApp_FWD_DEFINED__
#define __IShellApp_FWD_DEFINED__
typedef interface IShellApp IShellApp;
#endif 	/* __IShellApp_FWD_DEFINED__ */


#ifndef __IInstalledApp_FWD_DEFINED__
#define __IInstalledApp_FWD_DEFINED__
typedef interface IInstalledApp IInstalledApp;
#endif 	/* __IInstalledApp_FWD_DEFINED__ */


#ifndef __IPublishedApp_FWD_DEFINED__
#define __IPublishedApp_FWD_DEFINED__
typedef interface IPublishedApp IPublishedApp;
#endif 	/* __IPublishedApp_FWD_DEFINED__ */


#ifndef __IEnumInstalledApps_FWD_DEFINED__
#define __IEnumInstalledApps_FWD_DEFINED__
typedef interface IEnumInstalledApps IEnumInstalledApps;
#endif 	/* __IEnumInstalledApps_FWD_DEFINED__ */


#ifndef __EnumInstalledApps_FWD_DEFINED__
#define __EnumInstalledApps_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnumInstalledApps EnumInstalledApps;
#else
typedef struct EnumInstalledApps EnumInstalledApps;
#endif /* __cplusplus */

#endif 	/* __EnumInstalledApps_FWD_DEFINED__ */


#ifndef __IEnumPublishedApps_FWD_DEFINED__
#define __IEnumPublishedApps_FWD_DEFINED__
typedef interface IEnumPublishedApps IEnumPublishedApps;
#endif 	/* __IEnumPublishedApps_FWD_DEFINED__ */


#ifndef __IAppPublisher_FWD_DEFINED__
#define __IAppPublisher_FWD_DEFINED__
typedef interface IAppPublisher IAppPublisher;
#endif 	/* __IAppPublisher_FWD_DEFINED__ */


#ifndef __IShellAppManager_FWD_DEFINED__
#define __IShellAppManager_FWD_DEFINED__
typedef interface IShellAppManager IShellAppManager;
#endif 	/* __IShellAppManager_FWD_DEFINED__ */


#ifndef __ShellAppManager_FWD_DEFINED__
#define __ShellAppManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellAppManager ShellAppManager;
#else
typedef struct ShellAppManager ShellAppManager;
#endif /* __cplusplus */

#endif 	/* __ShellAppManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "appmgmt.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_shappmgr_0000 */
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
#ifndef _SHAPPMGR_H_
#define _SHAPPMGR_H_


extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0000_v0_0_s_ifspec;


#ifndef __SHAPPMGRLib_LIBRARY_DEFINED__
#define __SHAPPMGRLib_LIBRARY_DEFINED__

/* library SHAPPMGRLib */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_SHAPPMGRLib;

#ifndef __IADCCtl_INTERFACE_DEFINED__
#define __IADCCtl_INTERFACE_DEFINED__

/* interface IADCCtl */
/* [dual][object][oleautomation][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IADCCtl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3964D99F-AC96-11D1-9851-00C04FD91972")
    IADCCtl : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Dirty( 
            /* [in] */ VARIANT_BOOL bDirty) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Dirty( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbDirty) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Category( 
            /* [in] */ BSTR bstrCategory) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Category( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrCategory) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Sort( 
            /* [in] */ BSTR bstrSortExpr) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Sort( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrSortExpr) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Forcex86( 
            /* [in] */ VARIANT_BOOL bForce) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Forcex86( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbForce) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowPostSetup( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbShow) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_OnDomain( 
            /* [in] */ VARIANT_BOOL bOnDomain) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OnDomain( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbOnDomain) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultCategory( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrCategory) = 0;
        
        virtual /* [id][restricted] */ HRESULT STDMETHODCALLTYPE msDataSourceObject( 
            /* [in] */ BSTR qualifier,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnk) = 0;
        
        virtual /* [id][restricted] */ HRESULT STDMETHODCALLTYPE addDataSourceListener( 
            /* [in] */ IUnknown __RPC_FAR *pEvent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( 
            BSTR bstrQualifier) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsRestricted( 
            /* [in] */ BSTR bstrPolicy,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRestricted) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Exec( 
            BSTR bstrQualifier,
            /* [in] */ BSTR bstrCmd,
            /* [in] */ LONG nRecord) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IADCCtlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IADCCtl __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IADCCtl __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IADCCtl __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IADCCtl __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IADCCtl __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IADCCtl __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IADCCtl __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Dirty )( 
            IADCCtl __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bDirty);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Dirty )( 
            IADCCtl __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbDirty);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Category )( 
            IADCCtl __RPC_FAR * This,
            /* [in] */ BSTR bstrCategory);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Category )( 
            IADCCtl __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrCategory);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Sort )( 
            IADCCtl __RPC_FAR * This,
            /* [in] */ BSTR bstrSortExpr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Sort )( 
            IADCCtl __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrSortExpr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Forcex86 )( 
            IADCCtl __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bForce);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Forcex86 )( 
            IADCCtl __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbForce);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ShowPostSetup )( 
            IADCCtl __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbShow);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_OnDomain )( 
            IADCCtl __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bOnDomain);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_OnDomain )( 
            IADCCtl __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbOnDomain);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DefaultCategory )( 
            IADCCtl __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrCategory);
        
        /* [id][restricted] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *msDataSourceObject )( 
            IADCCtl __RPC_FAR * This,
            /* [in] */ BSTR qualifier,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnk);
        
        /* [id][restricted] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *addDataSourceListener )( 
            IADCCtl __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pEvent);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IADCCtl __RPC_FAR * This,
            BSTR bstrQualifier);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsRestricted )( 
            IADCCtl __RPC_FAR * This,
            /* [in] */ BSTR bstrPolicy,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRestricted);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Exec )( 
            IADCCtl __RPC_FAR * This,
            BSTR bstrQualifier,
            /* [in] */ BSTR bstrCmd,
            /* [in] */ LONG nRecord);
        
        END_INTERFACE
    } IADCCtlVtbl;

    interface IADCCtl
    {
        CONST_VTBL struct IADCCtlVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IADCCtl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IADCCtl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IADCCtl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IADCCtl_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IADCCtl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IADCCtl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IADCCtl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IADCCtl_put_Dirty(This,bDirty)	\
    (This)->lpVtbl -> put_Dirty(This,bDirty)

#define IADCCtl_get_Dirty(This,pbDirty)	\
    (This)->lpVtbl -> get_Dirty(This,pbDirty)

#define IADCCtl_put_Category(This,bstrCategory)	\
    (This)->lpVtbl -> put_Category(This,bstrCategory)

#define IADCCtl_get_Category(This,pbstrCategory)	\
    (This)->lpVtbl -> get_Category(This,pbstrCategory)

#define IADCCtl_put_Sort(This,bstrSortExpr)	\
    (This)->lpVtbl -> put_Sort(This,bstrSortExpr)

#define IADCCtl_get_Sort(This,pbstrSortExpr)	\
    (This)->lpVtbl -> get_Sort(This,pbstrSortExpr)

#define IADCCtl_put_Forcex86(This,bForce)	\
    (This)->lpVtbl -> put_Forcex86(This,bForce)

#define IADCCtl_get_Forcex86(This,pbForce)	\
    (This)->lpVtbl -> get_Forcex86(This,pbForce)

#define IADCCtl_get_ShowPostSetup(This,pbShow)	\
    (This)->lpVtbl -> get_ShowPostSetup(This,pbShow)

#define IADCCtl_put_OnDomain(This,bOnDomain)	\
    (This)->lpVtbl -> put_OnDomain(This,bOnDomain)

#define IADCCtl_get_OnDomain(This,pbOnDomain)	\
    (This)->lpVtbl -> get_OnDomain(This,pbOnDomain)

#define IADCCtl_get_DefaultCategory(This,pbstrCategory)	\
    (This)->lpVtbl -> get_DefaultCategory(This,pbstrCategory)

#define IADCCtl_msDataSourceObject(This,qualifier,ppUnk)	\
    (This)->lpVtbl -> msDataSourceObject(This,qualifier,ppUnk)

#define IADCCtl_addDataSourceListener(This,pEvent)	\
    (This)->lpVtbl -> addDataSourceListener(This,pEvent)

#define IADCCtl_Reset(This,bstrQualifier)	\
    (This)->lpVtbl -> Reset(This,bstrQualifier)

#define IADCCtl_IsRestricted(This,bstrPolicy,pbRestricted)	\
    (This)->lpVtbl -> IsRestricted(This,bstrPolicy,pbRestricted)

#define IADCCtl_Exec(This,bstrQualifier,bstrCmd,nRecord)	\
    (This)->lpVtbl -> Exec(This,bstrQualifier,bstrCmd,nRecord)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propput] */ HRESULT STDMETHODCALLTYPE IADCCtl_put_Dirty_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bDirty);


void __RPC_STUB IADCCtl_put_Dirty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IADCCtl_get_Dirty_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbDirty);


void __RPC_STUB IADCCtl_get_Dirty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IADCCtl_put_Category_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [in] */ BSTR bstrCategory);


void __RPC_STUB IADCCtl_put_Category_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IADCCtl_get_Category_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrCategory);


void __RPC_STUB IADCCtl_get_Category_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IADCCtl_put_Sort_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [in] */ BSTR bstrSortExpr);


void __RPC_STUB IADCCtl_put_Sort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IADCCtl_get_Sort_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrSortExpr);


void __RPC_STUB IADCCtl_get_Sort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IADCCtl_put_Forcex86_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bForce);


void __RPC_STUB IADCCtl_put_Forcex86_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IADCCtl_get_Forcex86_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbForce);


void __RPC_STUB IADCCtl_get_Forcex86_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IADCCtl_get_ShowPostSetup_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbShow);


void __RPC_STUB IADCCtl_get_ShowPostSetup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IADCCtl_put_OnDomain_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bOnDomain);


void __RPC_STUB IADCCtl_put_OnDomain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IADCCtl_get_OnDomain_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbOnDomain);


void __RPC_STUB IADCCtl_get_OnDomain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IADCCtl_get_DefaultCategory_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrCategory);


void __RPC_STUB IADCCtl_get_DefaultCategory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][restricted] */ HRESULT STDMETHODCALLTYPE IADCCtl_msDataSourceObject_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [in] */ BSTR qualifier,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnk);


void __RPC_STUB IADCCtl_msDataSourceObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][restricted] */ HRESULT STDMETHODCALLTYPE IADCCtl_addDataSourceListener_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pEvent);


void __RPC_STUB IADCCtl_addDataSourceListener_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IADCCtl_Reset_Proxy( 
    IADCCtl __RPC_FAR * This,
    BSTR bstrQualifier);


void __RPC_STUB IADCCtl_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IADCCtl_IsRestricted_Proxy( 
    IADCCtl __RPC_FAR * This,
    /* [in] */ BSTR bstrPolicy,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRestricted);


void __RPC_STUB IADCCtl_IsRestricted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IADCCtl_Exec_Proxy( 
    IADCCtl __RPC_FAR * This,
    BSTR bstrQualifier,
    /* [in] */ BSTR bstrCmd,
    /* [in] */ LONG nRecord);


void __RPC_STUB IADCCtl_Exec_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IADCCtl_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ADCCtl;

#ifdef __cplusplus

class DECLSPEC_UUID("3964D9A0-AC96-11D1-9851-00C04FD91972")
ADCCtl;
#endif

#ifndef __IShellApp_INTERFACE_DEFINED__
#define __IShellApp_INTERFACE_DEFINED__

/* interface IShellApp */
/* [object][helpstring][uuid] */ 

typedef 
enum _tagAppInfoFlags
    {	AIM_DISPLAYNAME	= 0x1,
	AIM_VERSION	= 0x2,
	AIM_PUBLISHER	= 0x4,
	AIM_PRODUCTID	= 0x8,
	AIM_REGISTEREDOWNER	= 0x10,
	AIM_REGISTEREDCOMPANY	= 0x20,
	AIM_LANGUAGE	= 0x40,
	AIM_SUPPORTURL	= 0x80,
	AIM_SUPPORTTELEPHONE	= 0x100,
	AIM_HELPLINK	= 0x200,
	AIM_INSTALLLOCATION	= 0x400,
	AIM_INSTALLSOURCE	= 0x800,
	AIM_INSTALLDATE	= 0x1000,
	AIM_CONTACT	= 0x4000,
	AIM_COMMENTS	= 0x8000,
	AIM_IMAGE	= 0x20000,
	AIM_READMEURL	= 0x40000,
	AIM_UPDATEINFOURL	= 0x80000
    }	APPINFODATAFLAGS;

typedef struct _AppInfoData
    {
    DWORD cbSize;
    DWORD dwMask;
    LPWSTR pszDisplayName;
    LPWSTR pszVersion;
    LPWSTR pszPublisher;
    LPWSTR pszProductID;
    LPWSTR pszRegisteredOwner;
    LPWSTR pszRegisteredCompany;
    LPWSTR pszLanguage;
    LPWSTR pszSupportUrl;
    LPWSTR pszSupportTelephone;
    LPWSTR pszHelpLink;
    LPWSTR pszInstallLocation;
    LPWSTR pszInstallSource;
    LPWSTR pszInstallDate;
    LPWSTR pszContact;
    LPWSTR pszComments;
    LPWSTR pszImage;
    LPWSTR pszReadmeUrl;
    LPWSTR pszUpdateInfoUrl;
    }	APPINFODATA;

typedef struct _AppInfoData __RPC_FAR *PAPPINFODATA;

typedef 
enum _tagAppActionFlags
    {	APPACTION_INSTALL	= 0x1,
	APPACTION_UNINSTALL	= 0x2,
	APPACTION_MODIFY	= 0x4,
	APPACTION_REPAIR	= 0x8,
	APPACTION_UPGRADE	= 0x10,
	APPACTION_CANGETSIZE	= 0x20,
	APPACTION_MODIFYREMOVE	= 0x80,
	APPACTION_ADDLATER	= 0x100,
	APPACTION_UNSCHEDULE	= 0x200
    }	APPACTIONFLAGS;

typedef struct _tagSlowAppInfo
    {
    ULONGLONG ullSize;
    FILETIME ftLastUsed;
    int iTimesUsed;
    LPWSTR pszImage;
    }	SLOWAPPINFO;

typedef struct _tagSlowAppInfo __RPC_FAR *PSLOWAPPINFO;


EXTERN_C const IID IID_IShellApp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A3E14960-935F-11D1-B8B8-006008059382")
    IShellApp : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAppInfo( 
            /* [out][in] */ PAPPINFODATA pai) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPossibleActions( 
            /* [out] */ DWORD __RPC_FAR *pdwActions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSlowAppInfo( 
            /* [in] */ PSLOWAPPINFO psaid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedSlowAppInfo( 
            /* [in] */ PSLOWAPPINFO psaid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsInstalled( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellAppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IShellApp __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IShellApp __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IShellApp __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAppInfo )( 
            IShellApp __RPC_FAR * This,
            /* [out][in] */ PAPPINFODATA pai);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPossibleActions )( 
            IShellApp __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwActions);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSlowAppInfo )( 
            IShellApp __RPC_FAR * This,
            /* [in] */ PSLOWAPPINFO psaid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCachedSlowAppInfo )( 
            IShellApp __RPC_FAR * This,
            /* [in] */ PSLOWAPPINFO psaid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsInstalled )( 
            IShellApp __RPC_FAR * This);
        
        END_INTERFACE
    } IShellAppVtbl;

    interface IShellApp
    {
        CONST_VTBL struct IShellAppVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellApp_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IShellApp_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IShellApp_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IShellApp_GetAppInfo(This,pai)	\
    (This)->lpVtbl -> GetAppInfo(This,pai)

#define IShellApp_GetPossibleActions(This,pdwActions)	\
    (This)->lpVtbl -> GetPossibleActions(This,pdwActions)

#define IShellApp_GetSlowAppInfo(This,psaid)	\
    (This)->lpVtbl -> GetSlowAppInfo(This,psaid)

#define IShellApp_GetCachedSlowAppInfo(This,psaid)	\
    (This)->lpVtbl -> GetCachedSlowAppInfo(This,psaid)

#define IShellApp_IsInstalled(This)	\
    (This)->lpVtbl -> IsInstalled(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IShellApp_GetAppInfo_Proxy( 
    IShellApp __RPC_FAR * This,
    /* [out][in] */ PAPPINFODATA pai);


void __RPC_STUB IShellApp_GetAppInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellApp_GetPossibleActions_Proxy( 
    IShellApp __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwActions);


void __RPC_STUB IShellApp_GetPossibleActions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellApp_GetSlowAppInfo_Proxy( 
    IShellApp __RPC_FAR * This,
    /* [in] */ PSLOWAPPINFO psaid);


void __RPC_STUB IShellApp_GetSlowAppInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellApp_GetCachedSlowAppInfo_Proxy( 
    IShellApp __RPC_FAR * This,
    /* [in] */ PSLOWAPPINFO psaid);


void __RPC_STUB IShellApp_GetCachedSlowAppInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellApp_IsInstalled_Proxy( 
    IShellApp __RPC_FAR * This);


void __RPC_STUB IShellApp_IsInstalled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IShellApp_INTERFACE_DEFINED__ */


#ifndef __IInstalledApp_INTERFACE_DEFINED__
#define __IInstalledApp_INTERFACE_DEFINED__

/* interface IInstalledApp */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IInstalledApp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1BC752DF-9046-11D1-B8B3-006008059382")
    IInstalledApp : public IShellApp
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Uninstall( 
            HWND hwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Modify( 
            HWND hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Repair( 
            /* [in] */ BOOL bReinstall) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Upgrade( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInstalledAppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IInstalledApp __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IInstalledApp __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IInstalledApp __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAppInfo )( 
            IInstalledApp __RPC_FAR * This,
            /* [out][in] */ PAPPINFODATA pai);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPossibleActions )( 
            IInstalledApp __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwActions);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSlowAppInfo )( 
            IInstalledApp __RPC_FAR * This,
            /* [in] */ PSLOWAPPINFO psaid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCachedSlowAppInfo )( 
            IInstalledApp __RPC_FAR * This,
            /* [in] */ PSLOWAPPINFO psaid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsInstalled )( 
            IInstalledApp __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Uninstall )( 
            IInstalledApp __RPC_FAR * This,
            HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Modify )( 
            IInstalledApp __RPC_FAR * This,
            HWND hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Repair )( 
            IInstalledApp __RPC_FAR * This,
            /* [in] */ BOOL bReinstall);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Upgrade )( 
            IInstalledApp __RPC_FAR * This);
        
        END_INTERFACE
    } IInstalledAppVtbl;

    interface IInstalledApp
    {
        CONST_VTBL struct IInstalledAppVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInstalledApp_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IInstalledApp_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IInstalledApp_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IInstalledApp_GetAppInfo(This,pai)	\
    (This)->lpVtbl -> GetAppInfo(This,pai)

#define IInstalledApp_GetPossibleActions(This,pdwActions)	\
    (This)->lpVtbl -> GetPossibleActions(This,pdwActions)

#define IInstalledApp_GetSlowAppInfo(This,psaid)	\
    (This)->lpVtbl -> GetSlowAppInfo(This,psaid)

#define IInstalledApp_GetCachedSlowAppInfo(This,psaid)	\
    (This)->lpVtbl -> GetCachedSlowAppInfo(This,psaid)

#define IInstalledApp_IsInstalled(This)	\
    (This)->lpVtbl -> IsInstalled(This)


#define IInstalledApp_Uninstall(This,hwnd)	\
    (This)->lpVtbl -> Uninstall(This,hwnd)

#define IInstalledApp_Modify(This,hwndParent)	\
    (This)->lpVtbl -> Modify(This,hwndParent)

#define IInstalledApp_Repair(This,bReinstall)	\
    (This)->lpVtbl -> Repair(This,bReinstall)

#define IInstalledApp_Upgrade(This)	\
    (This)->lpVtbl -> Upgrade(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IInstalledApp_Uninstall_Proxy( 
    IInstalledApp __RPC_FAR * This,
    HWND hwnd);


void __RPC_STUB IInstalledApp_Uninstall_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IInstalledApp_Modify_Proxy( 
    IInstalledApp __RPC_FAR * This,
    HWND hwndParent);


void __RPC_STUB IInstalledApp_Modify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IInstalledApp_Repair_Proxy( 
    IInstalledApp __RPC_FAR * This,
    /* [in] */ BOOL bReinstall);


void __RPC_STUB IInstalledApp_Repair_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IInstalledApp_Upgrade_Proxy( 
    IInstalledApp __RPC_FAR * This);


void __RPC_STUB IInstalledApp_Upgrade_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IInstalledApp_INTERFACE_DEFINED__ */


#ifndef __IPublishedApp_INTERFACE_DEFINED__
#define __IPublishedApp_INTERFACE_DEFINED__

/* interface IPublishedApp */
/* [object][helpstring][uuid] */ 

typedef 
enum _tagPublishedAppInfoFlags
    {	PAI_SOURCE	= 0x1,
	PAI_ASSIGNEDTIME	= 0x2,
	PAI_PUBLISHEDTIME	= 0x4,
	PAI_SCHEDULEDTIME	= 0x8,
	PAI_EXPIRETIME	= 0x10
    }	PUBAPPINFOFLAGS;

typedef struct _PubAppInfo
    {
    DWORD cbSize;
    DWORD dwMask;
    LPWSTR pszSource;
    SYSTEMTIME stAssigned;
    SYSTEMTIME stPublished;
    SYSTEMTIME stScheduled;
    SYSTEMTIME stExpire;
    }	PUBAPPINFO;

typedef struct _PubAppInfo __RPC_FAR *PPUBAPPINFO;


EXTERN_C const IID IID_IPublishedApp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1BC752E0-9046-11D1-B8B3-006008059382")
    IPublishedApp : public IShellApp
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Install( 
            /* [in] */ LPSYSTEMTIME pstInstall) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPublishedAppInfo( 
            /* [out][in] */ PPUBAPPINFO ppai) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unschedule( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPublishedAppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPublishedApp __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPublishedApp __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPublishedApp __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAppInfo )( 
            IPublishedApp __RPC_FAR * This,
            /* [out][in] */ PAPPINFODATA pai);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPossibleActions )( 
            IPublishedApp __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwActions);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSlowAppInfo )( 
            IPublishedApp __RPC_FAR * This,
            /* [in] */ PSLOWAPPINFO psaid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCachedSlowAppInfo )( 
            IPublishedApp __RPC_FAR * This,
            /* [in] */ PSLOWAPPINFO psaid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsInstalled )( 
            IPublishedApp __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Install )( 
            IPublishedApp __RPC_FAR * This,
            /* [in] */ LPSYSTEMTIME pstInstall);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPublishedAppInfo )( 
            IPublishedApp __RPC_FAR * This,
            /* [out][in] */ PPUBAPPINFO ppai);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Unschedule )( 
            IPublishedApp __RPC_FAR * This);
        
        END_INTERFACE
    } IPublishedAppVtbl;

    interface IPublishedApp
    {
        CONST_VTBL struct IPublishedAppVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPublishedApp_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPublishedApp_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPublishedApp_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPublishedApp_GetAppInfo(This,pai)	\
    (This)->lpVtbl -> GetAppInfo(This,pai)

#define IPublishedApp_GetPossibleActions(This,pdwActions)	\
    (This)->lpVtbl -> GetPossibleActions(This,pdwActions)

#define IPublishedApp_GetSlowAppInfo(This,psaid)	\
    (This)->lpVtbl -> GetSlowAppInfo(This,psaid)

#define IPublishedApp_GetCachedSlowAppInfo(This,psaid)	\
    (This)->lpVtbl -> GetCachedSlowAppInfo(This,psaid)

#define IPublishedApp_IsInstalled(This)	\
    (This)->lpVtbl -> IsInstalled(This)


#define IPublishedApp_Install(This,pstInstall)	\
    (This)->lpVtbl -> Install(This,pstInstall)

#define IPublishedApp_GetPublishedAppInfo(This,ppai)	\
    (This)->lpVtbl -> GetPublishedAppInfo(This,ppai)

#define IPublishedApp_Unschedule(This)	\
    (This)->lpVtbl -> Unschedule(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPublishedApp_Install_Proxy( 
    IPublishedApp __RPC_FAR * This,
    /* [in] */ LPSYSTEMTIME pstInstall);


void __RPC_STUB IPublishedApp_Install_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPublishedApp_GetPublishedAppInfo_Proxy( 
    IPublishedApp __RPC_FAR * This,
    /* [out][in] */ PPUBAPPINFO ppai);


void __RPC_STUB IPublishedApp_GetPublishedAppInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPublishedApp_Unschedule_Proxy( 
    IPublishedApp __RPC_FAR * This);


void __RPC_STUB IPublishedApp_Unschedule_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPublishedApp_INTERFACE_DEFINED__ */


#ifndef __IEnumInstalledApps_INTERFACE_DEFINED__
#define __IEnumInstalledApps_INTERFACE_DEFINED__

/* interface IEnumInstalledApps */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IEnumInstalledApps;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1BC752E1-9046-11D1-B8B3-006008059382")
    IEnumInstalledApps : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IInstalledApp __RPC_FAR *__RPC_FAR *pia) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumInstalledAppsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEnumInstalledApps __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEnumInstalledApps __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEnumInstalledApps __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IEnumInstalledApps __RPC_FAR * This,
            /* [out] */ IInstalledApp __RPC_FAR *__RPC_FAR *pia);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IEnumInstalledApps __RPC_FAR * This);
        
        END_INTERFACE
    } IEnumInstalledAppsVtbl;

    interface IEnumInstalledApps
    {
        CONST_VTBL struct IEnumInstalledAppsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumInstalledApps_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumInstalledApps_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumInstalledApps_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumInstalledApps_Next(This,pia)	\
    (This)->lpVtbl -> Next(This,pia)

#define IEnumInstalledApps_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IEnumInstalledApps_Next_Proxy( 
    IEnumInstalledApps __RPC_FAR * This,
    /* [out] */ IInstalledApp __RPC_FAR *__RPC_FAR *pia);


void __RPC_STUB IEnumInstalledApps_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumInstalledApps_Reset_Proxy( 
    IEnumInstalledApps __RPC_FAR * This);


void __RPC_STUB IEnumInstalledApps_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumInstalledApps_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_EnumInstalledApps;

#ifdef __cplusplus

class DECLSPEC_UUID("0B124F8F-91F0-11D1-B8B5-006008059382")
EnumInstalledApps;
#endif

#ifndef __IEnumPublishedApps_INTERFACE_DEFINED__
#define __IEnumPublishedApps_INTERFACE_DEFINED__

/* interface IEnumPublishedApps */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IEnumPublishedApps;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0B124F8C-91F0-11D1-B8B5-006008059382")
    IEnumPublishedApps : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IPublishedApp __RPC_FAR *__RPC_FAR *pia) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumPublishedAppsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEnumPublishedApps __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEnumPublishedApps __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEnumPublishedApps __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IEnumPublishedApps __RPC_FAR * This,
            /* [out] */ IPublishedApp __RPC_FAR *__RPC_FAR *pia);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IEnumPublishedApps __RPC_FAR * This);
        
        END_INTERFACE
    } IEnumPublishedAppsVtbl;

    interface IEnumPublishedApps
    {
        CONST_VTBL struct IEnumPublishedAppsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumPublishedApps_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumPublishedApps_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumPublishedApps_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumPublishedApps_Next(This,pia)	\
    (This)->lpVtbl -> Next(This,pia)

#define IEnumPublishedApps_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IEnumPublishedApps_Next_Proxy( 
    IEnumPublishedApps __RPC_FAR * This,
    /* [out] */ IPublishedApp __RPC_FAR *__RPC_FAR *pia);


void __RPC_STUB IEnumPublishedApps_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumPublishedApps_Reset_Proxy( 
    IEnumPublishedApps __RPC_FAR * This);


void __RPC_STUB IEnumPublishedApps_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumPublishedApps_INTERFACE_DEFINED__ */


#ifndef __IAppPublisher_INTERFACE_DEFINED__
#define __IAppPublisher_INTERFACE_DEFINED__

/* interface IAppPublisher */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IAppPublisher;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07250A10-9CF9-11D1-9076-006008059382")
    IAppPublisher : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNumberOfCategories( 
            DWORD __RPC_FAR *pdwCat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCategories( 
            APPCATEGORYINFOLIST __RPC_FAR *pAppCategoryList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumberOfApps( 
            DWORD __RPC_FAR *pdwApps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumApps( 
            GUID __RPC_FAR *pAppCategoryId,
            IEnumPublishedApps __RPC_FAR *__RPC_FAR *ppepa) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAppPublisherVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IAppPublisher __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IAppPublisher __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IAppPublisher __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNumberOfCategories )( 
            IAppPublisher __RPC_FAR * This,
            DWORD __RPC_FAR *pdwCat);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCategories )( 
            IAppPublisher __RPC_FAR * This,
            APPCATEGORYINFOLIST __RPC_FAR *pAppCategoryList);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNumberOfApps )( 
            IAppPublisher __RPC_FAR * This,
            DWORD __RPC_FAR *pdwApps);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumApps )( 
            IAppPublisher __RPC_FAR * This,
            GUID __RPC_FAR *pAppCategoryId,
            IEnumPublishedApps __RPC_FAR *__RPC_FAR *ppepa);
        
        END_INTERFACE
    } IAppPublisherVtbl;

    interface IAppPublisher
    {
        CONST_VTBL struct IAppPublisherVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppPublisher_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAppPublisher_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAppPublisher_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAppPublisher_GetNumberOfCategories(This,pdwCat)	\
    (This)->lpVtbl -> GetNumberOfCategories(This,pdwCat)

#define IAppPublisher_GetCategories(This,pAppCategoryList)	\
    (This)->lpVtbl -> GetCategories(This,pAppCategoryList)

#define IAppPublisher_GetNumberOfApps(This,pdwApps)	\
    (This)->lpVtbl -> GetNumberOfApps(This,pdwApps)

#define IAppPublisher_EnumApps(This,pAppCategoryId,ppepa)	\
    (This)->lpVtbl -> EnumApps(This,pAppCategoryId,ppepa)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IAppPublisher_GetNumberOfCategories_Proxy( 
    IAppPublisher __RPC_FAR * This,
    DWORD __RPC_FAR *pdwCat);


void __RPC_STUB IAppPublisher_GetNumberOfCategories_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAppPublisher_GetCategories_Proxy( 
    IAppPublisher __RPC_FAR * This,
    APPCATEGORYINFOLIST __RPC_FAR *pAppCategoryList);


void __RPC_STUB IAppPublisher_GetCategories_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAppPublisher_GetNumberOfApps_Proxy( 
    IAppPublisher __RPC_FAR * This,
    DWORD __RPC_FAR *pdwApps);


void __RPC_STUB IAppPublisher_GetNumberOfApps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAppPublisher_EnumApps_Proxy( 
    IAppPublisher __RPC_FAR * This,
    GUID __RPC_FAR *pAppCategoryId,
    IEnumPublishedApps __RPC_FAR *__RPC_FAR *ppepa);


void __RPC_STUB IAppPublisher_EnumApps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAppPublisher_INTERFACE_DEFINED__ */


#ifndef __IShellAppManager_INTERFACE_DEFINED__
#define __IShellAppManager_INTERFACE_DEFINED__

/* interface IShellAppManager */
/* [object][helpstring][uuid] */ 

typedef struct _ShellAppCategory
    {
    LPWSTR pszCategory;
    UINT idCategory;
    }	SHELLAPPCATEGORY;

typedef struct _ShellAppCategory __RPC_FAR *PSHELLAPPCATEGORY;

typedef struct _ShellAppCategoryList
    {
    UINT cCategories;
    SHELLAPPCATEGORY __RPC_FAR *pCategory;
    }	SHELLAPPCATEGORYLIST;

typedef struct _ShellAppCategoryList __RPC_FAR *PSHELLAPPCATEGORYLIST;


EXTERN_C const IID IID_IShellAppManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("352EC2B8-8B9A-11D1-B8AE-006008059382")
    IShellAppManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNumberofInstalledApps( 
            DWORD __RPC_FAR *pdwResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumInstalledApps( 
            IEnumInstalledApps __RPC_FAR *__RPC_FAR *peia) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPublishedAppCategories( 
            PSHELLAPPCATEGORYLIST pCategoryList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumPublishedApps( 
            LPCWSTR pszCategory,
            IEnumPublishedApps __RPC_FAR *__RPC_FAR *ppepa) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InstallFromFloppyOrCDROM( 
            HWND hwndParent) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellAppManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IShellAppManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IShellAppManager __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IShellAppManager __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNumberofInstalledApps )( 
            IShellAppManager __RPC_FAR * This,
            DWORD __RPC_FAR *pdwResult);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumInstalledApps )( 
            IShellAppManager __RPC_FAR * This,
            IEnumInstalledApps __RPC_FAR *__RPC_FAR *peia);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPublishedAppCategories )( 
            IShellAppManager __RPC_FAR * This,
            PSHELLAPPCATEGORYLIST pCategoryList);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumPublishedApps )( 
            IShellAppManager __RPC_FAR * This,
            LPCWSTR pszCategory,
            IEnumPublishedApps __RPC_FAR *__RPC_FAR *ppepa);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InstallFromFloppyOrCDROM )( 
            IShellAppManager __RPC_FAR * This,
            HWND hwndParent);
        
        END_INTERFACE
    } IShellAppManagerVtbl;

    interface IShellAppManager
    {
        CONST_VTBL struct IShellAppManagerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellAppManager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IShellAppManager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IShellAppManager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IShellAppManager_GetNumberofInstalledApps(This,pdwResult)	\
    (This)->lpVtbl -> GetNumberofInstalledApps(This,pdwResult)

#define IShellAppManager_EnumInstalledApps(This,peia)	\
    (This)->lpVtbl -> EnumInstalledApps(This,peia)

#define IShellAppManager_GetPublishedAppCategories(This,pCategoryList)	\
    (This)->lpVtbl -> GetPublishedAppCategories(This,pCategoryList)

#define IShellAppManager_EnumPublishedApps(This,pszCategory,ppepa)	\
    (This)->lpVtbl -> EnumPublishedApps(This,pszCategory,ppepa)

#define IShellAppManager_InstallFromFloppyOrCDROM(This,hwndParent)	\
    (This)->lpVtbl -> InstallFromFloppyOrCDROM(This,hwndParent)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IShellAppManager_GetNumberofInstalledApps_Proxy( 
    IShellAppManager __RPC_FAR * This,
    DWORD __RPC_FAR *pdwResult);


void __RPC_STUB IShellAppManager_GetNumberofInstalledApps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellAppManager_EnumInstalledApps_Proxy( 
    IShellAppManager __RPC_FAR * This,
    IEnumInstalledApps __RPC_FAR *__RPC_FAR *peia);


void __RPC_STUB IShellAppManager_EnumInstalledApps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellAppManager_GetPublishedAppCategories_Proxy( 
    IShellAppManager __RPC_FAR * This,
    PSHELLAPPCATEGORYLIST pCategoryList);


void __RPC_STUB IShellAppManager_GetPublishedAppCategories_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellAppManager_EnumPublishedApps_Proxy( 
    IShellAppManager __RPC_FAR * This,
    LPCWSTR pszCategory,
    IEnumPublishedApps __RPC_FAR *__RPC_FAR *ppepa);


void __RPC_STUB IShellAppManager_EnumPublishedApps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellAppManager_InstallFromFloppyOrCDROM_Proxy( 
    IShellAppManager __RPC_FAR * This,
    HWND hwndParent);


void __RPC_STUB IShellAppManager_InstallFromFloppyOrCDROM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IShellAppManager_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ShellAppManager;

#ifdef __cplusplus

class DECLSPEC_UUID("352EC2B7-8B9A-11D1-B8AE-006008059382")
ShellAppManager;
#endif
#endif /* __SHAPPMGRLib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_shappmgr_0155 */
/* [local] */ 

#endif // _SHAPPMGR_H_


extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0155_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0155_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


