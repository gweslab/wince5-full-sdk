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
/* at Tue Feb 05 14:33:11 2002
 */
/* Compiler settings for .\oleext.idl:
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

#ifndef __oleext_h__
#define __oleext_h__

/* Forward Declarations */ 

#ifndef __IPropertySetContainer_FWD_DEFINED__
#define __IPropertySetContainer_FWD_DEFINED__
typedef interface IPropertySetContainer IPropertySetContainer;
#endif 	/* __IPropertySetContainer_FWD_DEFINED__ */


#ifndef __INotifyReplica_FWD_DEFINED__
#define __INotifyReplica_FWD_DEFINED__
typedef interface INotifyReplica INotifyReplica;
#endif 	/* __INotifyReplica_FWD_DEFINED__ */


#ifndef __IReconcilableObject_FWD_DEFINED__
#define __IReconcilableObject_FWD_DEFINED__
typedef interface IReconcilableObject IReconcilableObject;
#endif 	/* __IReconcilableObject_FWD_DEFINED__ */


#ifndef __IReconcileInitiator_FWD_DEFINED__
#define __IReconcileInitiator_FWD_DEFINED__
typedef interface IReconcileInitiator IReconcileInitiator;
#endif 	/* __IReconcileInitiator_FWD_DEFINED__ */


#ifndef __IDifferencing_FWD_DEFINED__
#define __IDifferencing_FWD_DEFINED__
typedef interface IDifferencing IDifferencing;
#endif 	/* __IDifferencing_FWD_DEFINED__ */


#ifndef __IMultiplePropertyAccess_FWD_DEFINED__
#define __IMultiplePropertyAccess_FWD_DEFINED__
typedef interface IMultiplePropertyAccess IMultiplePropertyAccess;
#endif 	/* __IMultiplePropertyAccess_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "propidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IPropertySetContainer_INTERFACE_DEFINED__
#define __IPropertySetContainer_INTERFACE_DEFINED__

/* interface IPropertySetContainer */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPropertySetContainer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b4ffae60-a7ca-11cd-b58b-00006b829156")
    IPropertySetContainer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropset( 
            /* [in] */ REFGUID rguidName,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppvObj) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPropset( 
            /* [in] */ IPersist __RPC_FAR *pPropset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeletePropset( 
            /* [in] */ REFGUID rguidName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertySetContainerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertySetContainer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertySetContainer __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertySetContainer __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropset )( 
            IPropertySetContainer __RPC_FAR * This,
            /* [in] */ REFGUID rguidName,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppvObj);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddPropset )( 
            IPropertySetContainer __RPC_FAR * This,
            /* [in] */ IPersist __RPC_FAR *pPropset);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeletePropset )( 
            IPropertySetContainer __RPC_FAR * This,
            /* [in] */ REFGUID rguidName);
        
        END_INTERFACE
    } IPropertySetContainerVtbl;

    interface IPropertySetContainer
    {
        CONST_VTBL struct IPropertySetContainerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertySetContainer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertySetContainer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertySetContainer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertySetContainer_GetPropset(This,rguidName,riid,ppvObj)	\
    (This)->lpVtbl -> GetPropset(This,rguidName,riid,ppvObj)

#define IPropertySetContainer_AddPropset(This,pPropset)	\
    (This)->lpVtbl -> AddPropset(This,pPropset)

#define IPropertySetContainer_DeletePropset(This,rguidName)	\
    (This)->lpVtbl -> DeletePropset(This,rguidName)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertySetContainer_GetPropset_Proxy( 
    IPropertySetContainer __RPC_FAR * This,
    /* [in] */ REFGUID rguidName,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppvObj);


void __RPC_STUB IPropertySetContainer_GetPropset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertySetContainer_AddPropset_Proxy( 
    IPropertySetContainer __RPC_FAR * This,
    /* [in] */ IPersist __RPC_FAR *pPropset);


void __RPC_STUB IPropertySetContainer_AddPropset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertySetContainer_DeletePropset_Proxy( 
    IPropertySetContainer __RPC_FAR * This,
    /* [in] */ REFGUID rguidName);


void __RPC_STUB IPropertySetContainer_DeletePropset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertySetContainer_INTERFACE_DEFINED__ */


#ifndef __INotifyReplica_INTERFACE_DEFINED__
#define __INotifyReplica_INTERFACE_DEFINED__

/* interface INotifyReplica */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_INotifyReplica;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99180163-DA16-101A-935C-444553540000")
    INotifyReplica : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE YouAreAReplica( 
            /* [in] */ ULONG cOtherReplicas,
            /* [unique][in][size_is][size_is] */ IMoniker __RPC_FAR *__RPC_FAR *rgpOtherReplicas) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INotifyReplicaVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            INotifyReplica __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            INotifyReplica __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            INotifyReplica __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *YouAreAReplica )( 
            INotifyReplica __RPC_FAR * This,
            /* [in] */ ULONG cOtherReplicas,
            /* [unique][in][size_is][size_is] */ IMoniker __RPC_FAR *__RPC_FAR *rgpOtherReplicas);
        
        END_INTERFACE
    } INotifyReplicaVtbl;

    interface INotifyReplica
    {
        CONST_VTBL struct INotifyReplicaVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INotifyReplica_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define INotifyReplica_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define INotifyReplica_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define INotifyReplica_YouAreAReplica(This,cOtherReplicas,rgpOtherReplicas)	\
    (This)->lpVtbl -> YouAreAReplica(This,cOtherReplicas,rgpOtherReplicas)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE INotifyReplica_YouAreAReplica_Proxy( 
    INotifyReplica __RPC_FAR * This,
    /* [in] */ ULONG cOtherReplicas,
    /* [unique][in][size_is][size_is] */ IMoniker __RPC_FAR *__RPC_FAR *rgpOtherReplicas);


void __RPC_STUB INotifyReplica_YouAreAReplica_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __INotifyReplica_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_oleext_0084 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_oleext_0084_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleext_0084_v0_0_s_ifspec;

#ifndef __IReconcilableObject_INTERFACE_DEFINED__
#define __IReconcilableObject_INTERFACE_DEFINED__

/* interface IReconcilableObject */
/* [unique][uuid][object] */ 

typedef 
enum _reconcilef
    {	RECONCILEF_MAYBOTHERUSER	= 0x1,
	RECONCILEF_FEEDBACKWINDOWVALID	= 0x2,
	RECONCILEF_NORESIDUESOK	= 0x4,
	RECONCILEF_OMITSELFRESIDUE	= 0x8,
	RECONCILEF_RESUMERECONCILIATION	= 0x10,
	RECONCILEF_YOUMAYDOTHEUPDATES	= 0x20,
	RECONCILEF_ONLYYOUWERECHANGED	= 0x40,
	ALL_RECONCILE_FLAGS	= RECONCILEF_MAYBOTHERUSER | RECONCILEF_FEEDBACKWINDOWVALID | RECONCILEF_NORESIDUESOK | RECONCILEF_OMITSELFRESIDUE | RECONCILEF_RESUMERECONCILIATION | RECONCILEF_YOUMAYDOTHEUPDATES | RECONCILEF_ONLYYOUWERECHANGED
    }	RECONCILEF;


EXTERN_C const IID IID_IReconcilableObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99180162-DA16-101A-935C-444553540000")
    IReconcilableObject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Reconcile( 
            /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
            /* [in] */ DWORD dwFlags,
            /* [in] */ HWND hwndOwner,
            /* [in] */ HWND hwndProgressFeedback,
            /* [in] */ ULONG cInput,
            /* [size_is][size_is][unique][in] */ LPMONIKER __RPC_FAR *rgpmkOtherInput,
            /* [out] */ LONG __RPC_FAR *plOutIndex,
            /* [unique][in] */ IStorage __RPC_FAR *pstgNewResidues,
            /* [unique][in] */ ULONG __RPC_FAR *pvReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgressFeedbackMaxEstimate( 
            /* [out] */ ULONG __RPC_FAR *pulProgressMax) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IReconcilableObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IReconcilableObject __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IReconcilableObject __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IReconcilableObject __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reconcile )( 
            IReconcilableObject __RPC_FAR * This,
            /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
            /* [in] */ DWORD dwFlags,
            /* [in] */ HWND hwndOwner,
            /* [in] */ HWND hwndProgressFeedback,
            /* [in] */ ULONG cInput,
            /* [size_is][size_is][unique][in] */ LPMONIKER __RPC_FAR *rgpmkOtherInput,
            /* [out] */ LONG __RPC_FAR *plOutIndex,
            /* [unique][in] */ IStorage __RPC_FAR *pstgNewResidues,
            /* [unique][in] */ ULONG __RPC_FAR *pvReserved);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetProgressFeedbackMaxEstimate )( 
            IReconcilableObject __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pulProgressMax);
        
        END_INTERFACE
    } IReconcilableObjectVtbl;

    interface IReconcilableObject
    {
        CONST_VTBL struct IReconcilableObjectVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReconcilableObject_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IReconcilableObject_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IReconcilableObject_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IReconcilableObject_Reconcile(This,pInitiator,dwFlags,hwndOwner,hwndProgressFeedback,cInput,rgpmkOtherInput,plOutIndex,pstgNewResidues,pvReserved)	\
    (This)->lpVtbl -> Reconcile(This,pInitiator,dwFlags,hwndOwner,hwndProgressFeedback,cInput,rgpmkOtherInput,plOutIndex,pstgNewResidues,pvReserved)

#define IReconcilableObject_GetProgressFeedbackMaxEstimate(This,pulProgressMax)	\
    (This)->lpVtbl -> GetProgressFeedbackMaxEstimate(This,pulProgressMax)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IReconcilableObject_Reconcile_Proxy( 
    IReconcilableObject __RPC_FAR * This,
    /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
    /* [in] */ DWORD dwFlags,
    /* [in] */ HWND hwndOwner,
    /* [in] */ HWND hwndProgressFeedback,
    /* [in] */ ULONG cInput,
    /* [size_is][size_is][unique][in] */ LPMONIKER __RPC_FAR *rgpmkOtherInput,
    /* [out] */ LONG __RPC_FAR *plOutIndex,
    /* [unique][in] */ IStorage __RPC_FAR *pstgNewResidues,
    /* [unique][in] */ ULONG __RPC_FAR *pvReserved);


void __RPC_STUB IReconcilableObject_Reconcile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IReconcilableObject_GetProgressFeedbackMaxEstimate_Proxy( 
    IReconcilableObject __RPC_FAR * This,
    /* [out] */ ULONG __RPC_FAR *pulProgressMax);


void __RPC_STUB IReconcilableObject_GetProgressFeedbackMaxEstimate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IReconcilableObject_INTERFACE_DEFINED__ */


#ifndef __Versioning_INTERFACE_DEFINED__
#define __Versioning_INTERFACE_DEFINED__

/* interface Versioning */
/* [auto_handle][unique][uuid] */ 


#pragma pack(4)
typedef GUID VERID;

typedef struct tagVERIDARRAY
    {
    DWORD cVerid;
    /* [size_is] */ GUID verid[ 1 ];
    }	VERIDARRAY;

typedef struct tagVERBLOCK
    {
    ULONG iveridFirst;
    ULONG iveridMax;
    ULONG cblockPrev;
    /* [size_is] */ ULONG __RPC_FAR *rgiblockPrev;
    }	VERBLOCK;

typedef struct tagVERCONNECTIONINFO
    {
    DWORD cBlock;
    /* [size_is] */ VERBLOCK __RPC_FAR *rgblock;
    }	VERCONNECTIONINFO;

typedef struct tagVERGRAPH
    {
    VERCONNECTIONINFO blocks;
    VERIDARRAY nodes;
    }	VERGRAPH;


#pragma pack()


extern RPC_IF_HANDLE Versioning_v0_0_c_ifspec;
extern RPC_IF_HANDLE Versioning_v0_0_s_ifspec;
#endif /* __Versioning_INTERFACE_DEFINED__ */

#ifndef __IReconcileInitiator_INTERFACE_DEFINED__
#define __IReconcileInitiator_INTERFACE_DEFINED__

/* interface IReconcileInitiator */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IReconcileInitiator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99180161-DA16-101A-935C-444553540000")
    IReconcileInitiator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAbortCallback( 
            /* [unique][in] */ IUnknown __RPC_FAR *pUnkForAbort) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgressFeedback( 
            /* [in] */ ULONG ulProgress,
            /* [in] */ ULONG ulProgressMax) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindVersion( 
            /* [in] */ VERID __RPC_FAR *pverid,
            /* [out] */ IMoniker __RPC_FAR *__RPC_FAR *ppmk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindVersionFromGraph( 
            /* [in] */ VERGRAPH __RPC_FAR *pvergraph,
            /* [out] */ VERID __RPC_FAR *pverid,
            /* [out] */ IMoniker __RPC_FAR *__RPC_FAR *ppmk) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IReconcileInitiatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IReconcileInitiator __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IReconcileInitiator __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IReconcileInitiator __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetAbortCallback )( 
            IReconcileInitiator __RPC_FAR * This,
            /* [unique][in] */ IUnknown __RPC_FAR *pUnkForAbort);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetProgressFeedback )( 
            IReconcileInitiator __RPC_FAR * This,
            /* [in] */ ULONG ulProgress,
            /* [in] */ ULONG ulProgressMax);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindVersion )( 
            IReconcileInitiator __RPC_FAR * This,
            /* [in] */ VERID __RPC_FAR *pverid,
            /* [out] */ IMoniker __RPC_FAR *__RPC_FAR *ppmk);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindVersionFromGraph )( 
            IReconcileInitiator __RPC_FAR * This,
            /* [in] */ VERGRAPH __RPC_FAR *pvergraph,
            /* [out] */ VERID __RPC_FAR *pverid,
            /* [out] */ IMoniker __RPC_FAR *__RPC_FAR *ppmk);
        
        END_INTERFACE
    } IReconcileInitiatorVtbl;

    interface IReconcileInitiator
    {
        CONST_VTBL struct IReconcileInitiatorVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReconcileInitiator_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IReconcileInitiator_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IReconcileInitiator_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IReconcileInitiator_SetAbortCallback(This,pUnkForAbort)	\
    (This)->lpVtbl -> SetAbortCallback(This,pUnkForAbort)

#define IReconcileInitiator_SetProgressFeedback(This,ulProgress,ulProgressMax)	\
    (This)->lpVtbl -> SetProgressFeedback(This,ulProgress,ulProgressMax)

#define IReconcileInitiator_FindVersion(This,pverid,ppmk)	\
    (This)->lpVtbl -> FindVersion(This,pverid,ppmk)

#define IReconcileInitiator_FindVersionFromGraph(This,pvergraph,pverid,ppmk)	\
    (This)->lpVtbl -> FindVersionFromGraph(This,pvergraph,pverid,ppmk)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IReconcileInitiator_SetAbortCallback_Proxy( 
    IReconcileInitiator __RPC_FAR * This,
    /* [unique][in] */ IUnknown __RPC_FAR *pUnkForAbort);


void __RPC_STUB IReconcileInitiator_SetAbortCallback_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IReconcileInitiator_SetProgressFeedback_Proxy( 
    IReconcileInitiator __RPC_FAR * This,
    /* [in] */ ULONG ulProgress,
    /* [in] */ ULONG ulProgressMax);


void __RPC_STUB IReconcileInitiator_SetProgressFeedback_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IReconcileInitiator_FindVersion_Proxy( 
    IReconcileInitiator __RPC_FAR * This,
    /* [in] */ VERID __RPC_FAR *pverid,
    /* [out] */ IMoniker __RPC_FAR *__RPC_FAR *ppmk);


void __RPC_STUB IReconcileInitiator_FindVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IReconcileInitiator_FindVersionFromGraph_Proxy( 
    IReconcileInitiator __RPC_FAR * This,
    /* [in] */ VERGRAPH __RPC_FAR *pvergraph,
    /* [out] */ VERID __RPC_FAR *pverid,
    /* [out] */ IMoniker __RPC_FAR *__RPC_FAR *ppmk);


void __RPC_STUB IReconcileInitiator_FindVersionFromGraph_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IReconcileInitiator_INTERFACE_DEFINED__ */


#ifndef __IDifferencing_INTERFACE_DEFINED__
#define __IDifferencing_INTERFACE_DEFINED__

/* interface IDifferencing */
/* [unique][uuid][object] */ 

typedef /* [public][public][public][public] */ 
enum __MIDL_IDifferencing_0001
    {	DIFF_TYPE_Ordinary	= 0,
	DIFF_TYPE_Urgent	= DIFF_TYPE_Ordinary + 1
    }	DifferenceType;


EXTERN_C const IID IID_IDifferencing;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("994f0af0-2977-11ce-bb80-08002b36b2b0")
    IDifferencing : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SubtractMoniker( 
            /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
            /* [in] */ IMoniker __RPC_FAR *pOtherStg,
            /* [in] */ DifferenceType diffType,
            /* [out][in] */ STGMEDIUM __RPC_FAR *pStgMedium,
            /* [in] */ DWORD reserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SubtractVerid( 
            /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
            /* [in] */ VERID __RPC_FAR *pVerid,
            /* [in] */ DifferenceType diffType,
            /* [out][in] */ STGMEDIUM __RPC_FAR *pStgMedium,
            /* [in] */ DWORD reserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SubtractTimeStamp( 
            /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
            /* [in] */ FILETIME __RPC_FAR *pTimeStamp,
            /* [in] */ DifferenceType diffType,
            /* [out][in] */ STGMEDIUM __RPC_FAR *pStgMedium,
            /* [in] */ DWORD reserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
            /* [in] */ STGMEDIUM __RPC_FAR *pStgMedium) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDifferencingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDifferencing __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDifferencing __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDifferencing __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SubtractMoniker )( 
            IDifferencing __RPC_FAR * This,
            /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
            /* [in] */ IMoniker __RPC_FAR *pOtherStg,
            /* [in] */ DifferenceType diffType,
            /* [out][in] */ STGMEDIUM __RPC_FAR *pStgMedium,
            /* [in] */ DWORD reserved);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SubtractVerid )( 
            IDifferencing __RPC_FAR * This,
            /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
            /* [in] */ VERID __RPC_FAR *pVerid,
            /* [in] */ DifferenceType diffType,
            /* [out][in] */ STGMEDIUM __RPC_FAR *pStgMedium,
            /* [in] */ DWORD reserved);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SubtractTimeStamp )( 
            IDifferencing __RPC_FAR * This,
            /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
            /* [in] */ FILETIME __RPC_FAR *pTimeStamp,
            /* [in] */ DifferenceType diffType,
            /* [out][in] */ STGMEDIUM __RPC_FAR *pStgMedium,
            /* [in] */ DWORD reserved);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IDifferencing __RPC_FAR * This,
            /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
            /* [in] */ STGMEDIUM __RPC_FAR *pStgMedium);
        
        END_INTERFACE
    } IDifferencingVtbl;

    interface IDifferencing
    {
        CONST_VTBL struct IDifferencingVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDifferencing_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDifferencing_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDifferencing_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDifferencing_SubtractMoniker(This,pInitiator,pOtherStg,diffType,pStgMedium,reserved)	\
    (This)->lpVtbl -> SubtractMoniker(This,pInitiator,pOtherStg,diffType,pStgMedium,reserved)

#define IDifferencing_SubtractVerid(This,pInitiator,pVerid,diffType,pStgMedium,reserved)	\
    (This)->lpVtbl -> SubtractVerid(This,pInitiator,pVerid,diffType,pStgMedium,reserved)

#define IDifferencing_SubtractTimeStamp(This,pInitiator,pTimeStamp,diffType,pStgMedium,reserved)	\
    (This)->lpVtbl -> SubtractTimeStamp(This,pInitiator,pTimeStamp,diffType,pStgMedium,reserved)

#define IDifferencing_Add(This,pInitiator,pStgMedium)	\
    (This)->lpVtbl -> Add(This,pInitiator,pStgMedium)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDifferencing_SubtractMoniker_Proxy( 
    IDifferencing __RPC_FAR * This,
    /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
    /* [in] */ IMoniker __RPC_FAR *pOtherStg,
    /* [in] */ DifferenceType diffType,
    /* [out][in] */ STGMEDIUM __RPC_FAR *pStgMedium,
    /* [in] */ DWORD reserved);


void __RPC_STUB IDifferencing_SubtractMoniker_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDifferencing_SubtractVerid_Proxy( 
    IDifferencing __RPC_FAR * This,
    /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
    /* [in] */ VERID __RPC_FAR *pVerid,
    /* [in] */ DifferenceType diffType,
    /* [out][in] */ STGMEDIUM __RPC_FAR *pStgMedium,
    /* [in] */ DWORD reserved);


void __RPC_STUB IDifferencing_SubtractVerid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDifferencing_SubtractTimeStamp_Proxy( 
    IDifferencing __RPC_FAR * This,
    /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
    /* [in] */ FILETIME __RPC_FAR *pTimeStamp,
    /* [in] */ DifferenceType diffType,
    /* [out][in] */ STGMEDIUM __RPC_FAR *pStgMedium,
    /* [in] */ DWORD reserved);


void __RPC_STUB IDifferencing_SubtractTimeStamp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDifferencing_Add_Proxy( 
    IDifferencing __RPC_FAR * This,
    /* [in] */ IReconcileInitiator __RPC_FAR *pInitiator,
    /* [in] */ STGMEDIUM __RPC_FAR *pStgMedium);


void __RPC_STUB IDifferencing_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDifferencing_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_oleext_0088 */
/* [local] */ 

#include <iaccess.h>


extern RPC_IF_HANDLE __MIDL_itf_oleext_0088_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleext_0088_v0_0_s_ifspec;

#ifndef __IMultiplePropertyAccess_INTERFACE_DEFINED__
#define __IMultiplePropertyAccess_INTERFACE_DEFINED__

/* interface IMultiplePropertyAccess */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMultiplePropertyAccess;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ec81fede-d432-11ce-9244-0020af6e72db")
    IMultiplePropertyAccess : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIDsOfProperties( 
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ ULONG cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ HRESULT __RPC_FAR *rghresult,
            /* [size_is][out] */ DISPID __RPC_FAR *rgdispid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMultiple( 
            /* [size_is][in] */ DISPID __RPC_FAR *rgdispidMembers,
            /* [in] */ ULONG cMembers,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ BOOL fAtomic,
            /* [size_is][out] */ VARIANT __RPC_FAR *rgvarValues,
            /* [size_is][out] */ HRESULT __RPC_FAR *rghresult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PutMultiple( 
            /* [size_is][in] */ DISPID __RPC_FAR *rgdispidMembers,
            /* [size_is][in] */ USHORT __RPC_FAR *rgusFlags,
            /* [in] */ ULONG cMembers,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ BOOL fAtomic,
            /* [size_is][in] */ VARIANT __RPC_FAR *rgvarValues,
            /* [size_is][out] */ HRESULT __RPC_FAR *rghresult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMultiplePropertyAccessVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMultiplePropertyAccess __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMultiplePropertyAccess __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMultiplePropertyAccess __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfProperties )( 
            IMultiplePropertyAccess __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ ULONG cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ HRESULT __RPC_FAR *rghresult,
            /* [size_is][out] */ DISPID __RPC_FAR *rgdispid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetMultiple )( 
            IMultiplePropertyAccess __RPC_FAR * This,
            /* [size_is][in] */ DISPID __RPC_FAR *rgdispidMembers,
            /* [in] */ ULONG cMembers,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ BOOL fAtomic,
            /* [size_is][out] */ VARIANT __RPC_FAR *rgvarValues,
            /* [size_is][out] */ HRESULT __RPC_FAR *rghresult);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PutMultiple )( 
            IMultiplePropertyAccess __RPC_FAR * This,
            /* [size_is][in] */ DISPID __RPC_FAR *rgdispidMembers,
            /* [size_is][in] */ USHORT __RPC_FAR *rgusFlags,
            /* [in] */ ULONG cMembers,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ BOOL fAtomic,
            /* [size_is][in] */ VARIANT __RPC_FAR *rgvarValues,
            /* [size_is][out] */ HRESULT __RPC_FAR *rghresult);
        
        END_INTERFACE
    } IMultiplePropertyAccessVtbl;

    interface IMultiplePropertyAccess
    {
        CONST_VTBL struct IMultiplePropertyAccessVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMultiplePropertyAccess_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMultiplePropertyAccess_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMultiplePropertyAccess_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMultiplePropertyAccess_GetIDsOfProperties(This,riid,rgszNames,cNames,lcid,rghresult,rgdispid)	\
    (This)->lpVtbl -> GetIDsOfProperties(This,riid,rgszNames,cNames,lcid,rghresult,rgdispid)

#define IMultiplePropertyAccess_GetMultiple(This,rgdispidMembers,cMembers,riid,lcid,fAtomic,rgvarValues,rghresult)	\
    (This)->lpVtbl -> GetMultiple(This,rgdispidMembers,cMembers,riid,lcid,fAtomic,rgvarValues,rghresult)

#define IMultiplePropertyAccess_PutMultiple(This,rgdispidMembers,rgusFlags,cMembers,riid,lcid,fAtomic,rgvarValues,rghresult)	\
    (This)->lpVtbl -> PutMultiple(This,rgdispidMembers,rgusFlags,cMembers,riid,lcid,fAtomic,rgvarValues,rghresult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMultiplePropertyAccess_GetIDsOfProperties_Proxy( 
    IMultiplePropertyAccess __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
    /* [in] */ ULONG cNames,
    /* [in] */ LCID lcid,
    /* [size_is][out] */ HRESULT __RPC_FAR *rghresult,
    /* [size_is][out] */ DISPID __RPC_FAR *rgdispid);


void __RPC_STUB IMultiplePropertyAccess_GetIDsOfProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMultiplePropertyAccess_GetMultiple_Proxy( 
    IMultiplePropertyAccess __RPC_FAR * This,
    /* [size_is][in] */ DISPID __RPC_FAR *rgdispidMembers,
    /* [in] */ ULONG cMembers,
    /* [in] */ REFIID riid,
    /* [in] */ LCID lcid,
    /* [in] */ BOOL fAtomic,
    /* [size_is][out] */ VARIANT __RPC_FAR *rgvarValues,
    /* [size_is][out] */ HRESULT __RPC_FAR *rghresult);


void __RPC_STUB IMultiplePropertyAccess_GetMultiple_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMultiplePropertyAccess_PutMultiple_Proxy( 
    IMultiplePropertyAccess __RPC_FAR * This,
    /* [size_is][in] */ DISPID __RPC_FAR *rgdispidMembers,
    /* [size_is][in] */ USHORT __RPC_FAR *rgusFlags,
    /* [in] */ ULONG cMembers,
    /* [in] */ REFIID riid,
    /* [in] */ LCID lcid,
    /* [in] */ BOOL fAtomic,
    /* [size_is][in] */ VARIANT __RPC_FAR *rgvarValues,
    /* [size_is][out] */ HRESULT __RPC_FAR *rghresult);


void __RPC_STUB IMultiplePropertyAccess_PutMultiple_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMultiplePropertyAccess_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_oleext_0089 */
/* [local] */ 

#if defined(_DCOM_) || defined(_CAIROSTG_)
#include <olecairo.h>
#endif // if defined(_DCOM_) || defined(_CAIROSTG_)
#if !defined(_TAGFULLPROPSPEC_DEFINED_)
#define _TAGFULLPROPSPEC_DEFINED_
typedef struct tagFULLPROPSPEC
    {
    GUID guidPropSet;
    PROPSPEC psProperty;
    }	FULLPROPSPEC;

#endif // #if !defined(_TAGFULLPROPSPEC_DEFINED_)


extern RPC_IF_HANDLE __MIDL_itf_oleext_0089_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleext_0089_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long __RPC_FAR *, unsigned long            , HWND __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HWND_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HWND __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HWND_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HWND __RPC_FAR * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long __RPC_FAR *, HWND __RPC_FAR * ); 

unsigned long             __RPC_USER  STGMEDIUM_UserSize(     unsigned long __RPC_FAR *, unsigned long            , STGMEDIUM __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  STGMEDIUM_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, STGMEDIUM __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  STGMEDIUM_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, STGMEDIUM __RPC_FAR * ); 
void                      __RPC_USER  STGMEDIUM_UserFree(     unsigned long __RPC_FAR *, STGMEDIUM __RPC_FAR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


