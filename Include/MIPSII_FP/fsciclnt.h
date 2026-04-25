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
/* at Tue Feb 05 14:33:29 2002
 */
/* Compiler settings for .\fsciclnt.idl:
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

#ifndef __fsciclnt_h__
#define __fsciclnt_h__

/* Forward Declarations */ 

#ifndef __IFsCiAdmin_FWD_DEFINED__
#define __IFsCiAdmin_FWD_DEFINED__
typedef interface IFsCiAdmin IFsCiAdmin;
#endif 	/* __IFsCiAdmin_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "filter.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_fsciclnt_0000 */
/* [local] */ 

//
//
//
// Use of this source code is subject to the terms of the Microsoft end-user
// license agreement (EULA) under which you licensed this SOFTWARE PRODUCT.
// If you did not accept the terms of the EULA, you are not authorized to use
// this source code. For a copy of the EULA, please see the LICENSE.RTF on your
// install media.
//
#define CLSID_StorageDocStoreLocator  {0x2A488070, 0x6FD9, 0x11D0, {0xA8,0x08,0x00,0xA0,0xC9,0x06,0x24,0x1A} }
typedef ULONG PARTITIONID;

#ifndef CI_STATE_DEFINED
#define CI_STATE_DEFINED
#include <pshpack4.h>
typedef struct _CI_STATE
    {
    DWORD cbStruct;
    DWORD cWordList;
    DWORD cPersistentIndex;
    DWORD cQueries;
    DWORD cDocuments;
    DWORD cFreshTest;
    DWORD dwMergeProgress;
    DWORD eState;
    DWORD cFilteredDocuments;
    DWORD cTotalDocuments;
    DWORD cPendingScans;
    DWORD dwIndexSize;
    DWORD cUniqueKeys;
    DWORD cSecQDocuments;
    DWORD dwPropCacheSize;
    }	CI_STATE;

#include <poppack.h>
#endif   // CI_STATE_DEFINED


extern RPC_IF_HANDLE __MIDL_itf_fsciclnt_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsciclnt_0000_v0_0_s_ifspec;

#ifndef __IFsCiAdmin_INTERFACE_DEFINED__
#define __IFsCiAdmin_INTERFACE_DEFINED__

/* interface IFsCiAdmin */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IFsCiAdmin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("75398C30-7A26-11D0-A80A-00A0C906241A")
    IFsCiAdmin : public IUnknown
    {
    public:
        virtual SCODE STDMETHODCALLTYPE ForceMerge( 
            /* [in] */ PARTITIONID partId) = 0;
        
        virtual SCODE STDMETHODCALLTYPE AbortMerge( 
            /* [in] */ PARTITIONID partId) = 0;
        
        virtual SCODE STDMETHODCALLTYPE CiState( 
            /* [out] */ CI_STATE __RPC_FAR *pCiState) = 0;
        
        virtual SCODE STDMETHODCALLTYPE UpdateDocuments( 
            /* [in][string] */ const WCHAR __RPC_FAR *rootPath,
            /* [in] */ ULONG flag) = 0;
        
        virtual SCODE STDMETHODCALLTYPE AddScopeToCI( 
            /* [in][string] */ const WCHAR __RPC_FAR *rootPath) = 0;
        
        virtual SCODE STDMETHODCALLTYPE RemoveScopeFromCI( 
            /* [in][string] */ const WCHAR __RPC_FAR *rootPath) = 0;
        
        virtual SCODE STDMETHODCALLTYPE BeginCacheTransaction( 
            /* [out] */ ULONG_PTR __RPC_FAR *pulToken) = 0;
        
        virtual SCODE STDMETHODCALLTYPE SetupCache( 
            /* [in] */ const FULLPROPSPEC __RPC_FAR *ps,
            /* [in] */ ULONG vt,
            /* [in] */ ULONG cbMaxLen,
            /* [in] */ ULONG_PTR ulToken,
            /* [in] */ BOOL fCanBeModified,
            /* [in] */ DWORD dwStoreLevel) = 0;
        
        virtual SCODE STDMETHODCALLTYPE EndCacheTransaction( 
            /* [in] */ ULONG_PTR ulToken,
            /* [in] */ BOOL fCommit) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsCiAdminVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFsCiAdmin __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFsCiAdmin __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFsCiAdmin __RPC_FAR * This);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *ForceMerge )( 
            IFsCiAdmin __RPC_FAR * This,
            /* [in] */ PARTITIONID partId);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *AbortMerge )( 
            IFsCiAdmin __RPC_FAR * This,
            /* [in] */ PARTITIONID partId);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *CiState )( 
            IFsCiAdmin __RPC_FAR * This,
            /* [out] */ CI_STATE __RPC_FAR *pCiState);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *UpdateDocuments )( 
            IFsCiAdmin __RPC_FAR * This,
            /* [in][string] */ const WCHAR __RPC_FAR *rootPath,
            /* [in] */ ULONG flag);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *AddScopeToCI )( 
            IFsCiAdmin __RPC_FAR * This,
            /* [in][string] */ const WCHAR __RPC_FAR *rootPath);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *RemoveScopeFromCI )( 
            IFsCiAdmin __RPC_FAR * This,
            /* [in][string] */ const WCHAR __RPC_FAR *rootPath);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *BeginCacheTransaction )( 
            IFsCiAdmin __RPC_FAR * This,
            /* [out] */ ULONG_PTR __RPC_FAR *pulToken);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *SetupCache )( 
            IFsCiAdmin __RPC_FAR * This,
            /* [in] */ const FULLPROPSPEC __RPC_FAR *ps,
            /* [in] */ ULONG vt,
            /* [in] */ ULONG cbMaxLen,
            /* [in] */ ULONG_PTR ulToken,
            /* [in] */ BOOL fCanBeModified,
            /* [in] */ DWORD dwStoreLevel);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *EndCacheTransaction )( 
            IFsCiAdmin __RPC_FAR * This,
            /* [in] */ ULONG_PTR ulToken,
            /* [in] */ BOOL fCommit);
        
        END_INTERFACE
    } IFsCiAdminVtbl;

    interface IFsCiAdmin
    {
        CONST_VTBL struct IFsCiAdminVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsCiAdmin_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFsCiAdmin_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFsCiAdmin_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFsCiAdmin_ForceMerge(This,partId)	\
    (This)->lpVtbl -> ForceMerge(This,partId)

#define IFsCiAdmin_AbortMerge(This,partId)	\
    (This)->lpVtbl -> AbortMerge(This,partId)

#define IFsCiAdmin_CiState(This,pCiState)	\
    (This)->lpVtbl -> CiState(This,pCiState)

#define IFsCiAdmin_UpdateDocuments(This,rootPath,flag)	\
    (This)->lpVtbl -> UpdateDocuments(This,rootPath,flag)

#define IFsCiAdmin_AddScopeToCI(This,rootPath)	\
    (This)->lpVtbl -> AddScopeToCI(This,rootPath)

#define IFsCiAdmin_RemoveScopeFromCI(This,rootPath)	\
    (This)->lpVtbl -> RemoveScopeFromCI(This,rootPath)

#define IFsCiAdmin_BeginCacheTransaction(This,pulToken)	\
    (This)->lpVtbl -> BeginCacheTransaction(This,pulToken)

#define IFsCiAdmin_SetupCache(This,ps,vt,cbMaxLen,ulToken,fCanBeModified,dwStoreLevel)	\
    (This)->lpVtbl -> SetupCache(This,ps,vt,cbMaxLen,ulToken,fCanBeModified,dwStoreLevel)

#define IFsCiAdmin_EndCacheTransaction(This,ulToken,fCommit)	\
    (This)->lpVtbl -> EndCacheTransaction(This,ulToken,fCommit)

#endif /* COBJMACROS */


#endif 	/* C style interface */



SCODE STDMETHODCALLTYPE IFsCiAdmin_ForceMerge_Proxy( 
    IFsCiAdmin __RPC_FAR * This,
    /* [in] */ PARTITIONID partId);


void __RPC_STUB IFsCiAdmin_ForceMerge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IFsCiAdmin_AbortMerge_Proxy( 
    IFsCiAdmin __RPC_FAR * This,
    /* [in] */ PARTITIONID partId);


void __RPC_STUB IFsCiAdmin_AbortMerge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IFsCiAdmin_CiState_Proxy( 
    IFsCiAdmin __RPC_FAR * This,
    /* [out] */ CI_STATE __RPC_FAR *pCiState);


void __RPC_STUB IFsCiAdmin_CiState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IFsCiAdmin_UpdateDocuments_Proxy( 
    IFsCiAdmin __RPC_FAR * This,
    /* [in][string] */ const WCHAR __RPC_FAR *rootPath,
    /* [in] */ ULONG flag);


void __RPC_STUB IFsCiAdmin_UpdateDocuments_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IFsCiAdmin_AddScopeToCI_Proxy( 
    IFsCiAdmin __RPC_FAR * This,
    /* [in][string] */ const WCHAR __RPC_FAR *rootPath);


void __RPC_STUB IFsCiAdmin_AddScopeToCI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IFsCiAdmin_RemoveScopeFromCI_Proxy( 
    IFsCiAdmin __RPC_FAR * This,
    /* [in][string] */ const WCHAR __RPC_FAR *rootPath);


void __RPC_STUB IFsCiAdmin_RemoveScopeFromCI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IFsCiAdmin_BeginCacheTransaction_Proxy( 
    IFsCiAdmin __RPC_FAR * This,
    /* [out] */ ULONG_PTR __RPC_FAR *pulToken);


void __RPC_STUB IFsCiAdmin_BeginCacheTransaction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IFsCiAdmin_SetupCache_Proxy( 
    IFsCiAdmin __RPC_FAR * This,
    /* [in] */ const FULLPROPSPEC __RPC_FAR *ps,
    /* [in] */ ULONG vt,
    /* [in] */ ULONG cbMaxLen,
    /* [in] */ ULONG_PTR ulToken,
    /* [in] */ BOOL fCanBeModified,
    /* [in] */ DWORD dwStoreLevel);


void __RPC_STUB IFsCiAdmin_SetupCache_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IFsCiAdmin_EndCacheTransaction_Proxy( 
    IFsCiAdmin __RPC_FAR * This,
    /* [in] */ ULONG_PTR ulToken,
    /* [in] */ BOOL fCommit);


void __RPC_STUB IFsCiAdmin_EndCacheTransaction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFsCiAdmin_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


