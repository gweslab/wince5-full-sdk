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
/* at Thu Jun 24 18:49:50 2004
 */
/* Compiler settings for .\tlog.idl:
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

#ifndef __tlog_h__
#define __tlog_h__

/* Forward Declarations */ 

#ifndef __ITravelEntry_FWD_DEFINED__
#define __ITravelEntry_FWD_DEFINED__
typedef interface ITravelEntry ITravelEntry;
#endif 	/* __ITravelEntry_FWD_DEFINED__ */


#ifndef __ITravelLog_FWD_DEFINED__
#define __ITravelLog_FWD_DEFINED__
typedef interface ITravelLog ITravelLog;
#endif 	/* __ITravelLog_FWD_DEFINED__ */


#ifndef __ITravelLogEx_FWD_DEFINED__
#define __ITravelLogEx_FWD_DEFINED__
typedef interface ITravelLogEx ITravelLogEx;
#endif 	/* __ITravelLogEx_FWD_DEFINED__ */


#ifndef __ITravelLogClient_FWD_DEFINED__
#define __ITravelLogClient_FWD_DEFINED__
typedef interface ITravelLogClient ITravelLogClient;
#endif 	/* __ITravelLogClient_FWD_DEFINED__ */


#ifndef __ITravelLogClient2_FWD_DEFINED__
#define __ITravelLogClient2_FWD_DEFINED__
typedef interface ITravelLogClient2 ITravelLogClient2;
#endif 	/* __ITravelLogClient2_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"
#include "shtypes.h"
#include "tlogstg.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_tlog_0000 */
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
#define TLOG_BACK  -1
#define TLOG_FORE   1

#define TLMENUF_INCLUDECURRENT      0x00000001
#define TLMENUF_CHECKCURRENT        (TLMENUF_INCLUDECURRENT | 0x00000002)
#define TLMENUF_BACK                0x00000010  // Default
#define TLMENUF_FORE                0x00000020
#define TLMENUF_BACKANDFORTH        (TLMENUF_BACK | TLMENUF_FORE | TLMENUF_INCLUDECURRENT)

typedef struct _WINDOWDATA
    {
    DWORD dwWindowID;
    UINT uiCP;
    LPITEMIDLIST pidl;
    /* [string] */ LPOLESTR lpszUrl;
    /* [string] */ LPOLESTR lpszUrlLocation;
    /* [string] */ LPOLESTR lpszTitle;
    IStream __RPC_FAR *pStream;
    }	WINDOWDATA;

typedef WINDOWDATA __RPC_FAR *LPWINDOWDATA;

typedef const WINDOWDATA __RPC_FAR *LPCWINDOWDATA;



extern RPC_IF_HANDLE __MIDL_itf_tlog_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tlog_0000_v0_0_s_ifspec;

#ifndef __ITravelEntry_INTERFACE_DEFINED__
#define __ITravelEntry_INTERFACE_DEFINED__

/* interface ITravelEntry */
/* [helpcontext][helpstring][hidden][local][object][uuid] */ 


EXTERN_C const IID IID_ITravelEntry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F46EDB3B-BC2F-11d0-9412-00AA00A3EBD3")
    ITravelEntry : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ IUnknown __RPC_FAR *punk) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Update( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ BOOL fIsLocalAnchor) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetPidl( 
            /* [out] */ LPITEMIDLIST __RPC_FAR *ppidl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITravelEntryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITravelEntry __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITravelEntry __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITravelEntry __RPC_FAR * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITravelEntry __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Update )( 
            ITravelEntry __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ BOOL fIsLocalAnchor);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPidl )( 
            ITravelEntry __RPC_FAR * This,
            /* [out] */ LPITEMIDLIST __RPC_FAR *ppidl);
        
        END_INTERFACE
    } ITravelEntryVtbl;

    interface ITravelEntry
    {
        CONST_VTBL struct ITravelEntryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITravelEntry_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITravelEntry_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITravelEntry_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITravelEntry_Invoke(This,punk)	\
    (This)->lpVtbl -> Invoke(This,punk)

#define ITravelEntry_Update(This,punk,fIsLocalAnchor)	\
    (This)->lpVtbl -> Update(This,punk,fIsLocalAnchor)

#define ITravelEntry_GetPidl(This,ppidl)	\
    (This)->lpVtbl -> GetPidl(This,ppidl)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelEntry_Invoke_Proxy( 
    ITravelEntry __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk);


void __RPC_STUB ITravelEntry_Invoke_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelEntry_Update_Proxy( 
    ITravelEntry __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ BOOL fIsLocalAnchor);


void __RPC_STUB ITravelEntry_Update_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelEntry_GetPidl_Proxy( 
    ITravelEntry __RPC_FAR * This,
    /* [out] */ LPITEMIDLIST __RPC_FAR *ppidl);


void __RPC_STUB ITravelEntry_GetPidl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITravelEntry_INTERFACE_DEFINED__ */


#ifndef __ITravelLog_INTERFACE_DEFINED__
#define __ITravelLog_INTERFACE_DEFINED__

/* interface ITravelLog */
/* [helpcontext][helpstring][hidden][local][object][uuid] */ 


EXTERN_C const IID IID_ITravelLog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("66A9CB08-4802-11d2-A561-00A0C92DBFE8")
    ITravelLog : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE AddEntry( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ BOOL fIsLocalAnchor) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE UpdateEntry( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ BOOL fIsLocalAnchor) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE UpdateExternal( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ IUnknown __RPC_FAR *punkHLBrowseContext) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Travel( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ int iOffset) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetTravelEntry( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ int iOffset,
            /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FindTravelEntry( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ LPCITEMIDLIST pidl,
            /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetToolTipText( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ int iOffset,
            /* [in] */ int idsTemplate,
            /* [size_is][out] */ LPWSTR pwzText,
            /* [in] */ DWORD cchText) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE InsertMenuEntries( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ HMENU hmenu,
            /* [in] */ int nPos,
            /* [in] */ int idFirst,
            /* [in] */ int idLast,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ ITravelLog __RPC_FAR *__RPC_FAR *pptl) = 0;
        
        virtual /* [helpcontext][helpstring] */ DWORD STDMETHODCALLTYPE CountEntries( 
            /* [in] */ IUnknown __RPC_FAR *punk) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Revert( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITravelLogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITravelLog __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITravelLog __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITravelLog __RPC_FAR * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddEntry )( 
            ITravelLog __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ BOOL fIsLocalAnchor);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UpdateEntry )( 
            ITravelLog __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ BOOL fIsLocalAnchor);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UpdateExternal )( 
            ITravelLog __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ IUnknown __RPC_FAR *punkHLBrowseContext);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Travel )( 
            ITravelLog __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ int iOffset);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTravelEntry )( 
            ITravelLog __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ int iOffset,
            /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindTravelEntry )( 
            ITravelLog __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ LPCITEMIDLIST pidl,
            /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetToolTipText )( 
            ITravelLog __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ int iOffset,
            /* [in] */ int idsTemplate,
            /* [size_is][out] */ LPWSTR pwzText,
            /* [in] */ DWORD cchText);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InsertMenuEntries )( 
            ITravelLog __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ HMENU hmenu,
            /* [in] */ int nPos,
            /* [in] */ int idFirst,
            /* [in] */ int idLast,
            /* [in] */ DWORD dwFlags);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            ITravelLog __RPC_FAR * This,
            /* [out] */ ITravelLog __RPC_FAR *__RPC_FAR *pptl);
        
        /* [helpcontext][helpstring] */ DWORD ( STDMETHODCALLTYPE __RPC_FAR *CountEntries )( 
            ITravelLog __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Revert )( 
            ITravelLog __RPC_FAR * This);
        
        END_INTERFACE
    } ITravelLogVtbl;

    interface ITravelLog
    {
        CONST_VTBL struct ITravelLogVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITravelLog_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITravelLog_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITravelLog_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITravelLog_AddEntry(This,punk,fIsLocalAnchor)	\
    (This)->lpVtbl -> AddEntry(This,punk,fIsLocalAnchor)

#define ITravelLog_UpdateEntry(This,punk,fIsLocalAnchor)	\
    (This)->lpVtbl -> UpdateEntry(This,punk,fIsLocalAnchor)

#define ITravelLog_UpdateExternal(This,punk,punkHLBrowseContext)	\
    (This)->lpVtbl -> UpdateExternal(This,punk,punkHLBrowseContext)

#define ITravelLog_Travel(This,punk,iOffset)	\
    (This)->lpVtbl -> Travel(This,punk,iOffset)

#define ITravelLog_GetTravelEntry(This,punk,iOffset,ppte)	\
    (This)->lpVtbl -> GetTravelEntry(This,punk,iOffset,ppte)

#define ITravelLog_FindTravelEntry(This,punk,pidl,ppte)	\
    (This)->lpVtbl -> FindTravelEntry(This,punk,pidl,ppte)

#define ITravelLog_GetToolTipText(This,punk,iOffset,idsTemplate,pwzText,cchText)	\
    (This)->lpVtbl -> GetToolTipText(This,punk,iOffset,idsTemplate,pwzText,cchText)

#define ITravelLog_InsertMenuEntries(This,punk,hmenu,nPos,idFirst,idLast,dwFlags)	\
    (This)->lpVtbl -> InsertMenuEntries(This,punk,hmenu,nPos,idFirst,idLast,dwFlags)

#define ITravelLog_Clone(This,pptl)	\
    (This)->lpVtbl -> Clone(This,pptl)

#define ITravelLog_CountEntries(This,punk)	\
    (This)->lpVtbl -> CountEntries(This,punk)

#define ITravelLog_Revert(This)	\
    (This)->lpVtbl -> Revert(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_AddEntry_Proxy( 
    ITravelLog __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ BOOL fIsLocalAnchor);


void __RPC_STUB ITravelLog_AddEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_UpdateEntry_Proxy( 
    ITravelLog __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ BOOL fIsLocalAnchor);


void __RPC_STUB ITravelLog_UpdateEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_UpdateExternal_Proxy( 
    ITravelLog __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ IUnknown __RPC_FAR *punkHLBrowseContext);


void __RPC_STUB ITravelLog_UpdateExternal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_Travel_Proxy( 
    ITravelLog __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ int iOffset);


void __RPC_STUB ITravelLog_Travel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_GetTravelEntry_Proxy( 
    ITravelLog __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ int iOffset,
    /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte);


void __RPC_STUB ITravelLog_GetTravelEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_FindTravelEntry_Proxy( 
    ITravelLog __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ LPCITEMIDLIST pidl,
    /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte);


void __RPC_STUB ITravelLog_FindTravelEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_GetToolTipText_Proxy( 
    ITravelLog __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ int iOffset,
    /* [in] */ int idsTemplate,
    /* [size_is][out] */ LPWSTR pwzText,
    /* [in] */ DWORD cchText);


void __RPC_STUB ITravelLog_GetToolTipText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_InsertMenuEntries_Proxy( 
    ITravelLog __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ HMENU hmenu,
    /* [in] */ int nPos,
    /* [in] */ int idFirst,
    /* [in] */ int idLast,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB ITravelLog_InsertMenuEntries_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_Clone_Proxy( 
    ITravelLog __RPC_FAR * This,
    /* [out] */ ITravelLog __RPC_FAR *__RPC_FAR *pptl);


void __RPC_STUB ITravelLog_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ DWORD STDMETHODCALLTYPE ITravelLog_CountEntries_Proxy( 
    ITravelLog __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk);


void __RPC_STUB ITravelLog_CountEntries_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_Revert_Proxy( 
    ITravelLog __RPC_FAR * This);


void __RPC_STUB ITravelLog_Revert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITravelLog_INTERFACE_DEFINED__ */


#ifndef __ITravelLogEx_INTERFACE_DEFINED__
#define __ITravelLogEx_INTERFACE_DEFINED__

/* interface ITravelLogEx */
/* [helpcontext][helpstring][hidden][local][object][uuid] */ 


EXTERN_C const IID IID_ITravelLogEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f679-98b5-11cf-bb82-00aa00bdce0b")
    ITravelLogEx : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FindTravelEntryWithUrl( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ UINT uiCP,
            /* [in] */ LPOLESTR pszUrl,
            /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE TravelToUrl( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ UINT uiCP,
            /* [in] */ LPOLESTR pszUrl) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE DeleteIndexEntry( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ int index) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE DeleteUrlEntry( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ UINT uiCP,
            /* [in] */ LPOLESTR pszUrl) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CountEntryNodes( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ DWORD dwFlags,
            /* [out] */ DWORD __RPC_FAR *pdwCount) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CreateEnumEntry( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [out] */ IEnumTravelLogEntry __RPC_FAR *__RPC_FAR *ppEnum,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE DeleteEntry( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ ITravelLogEntry __RPC_FAR *pte) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE InsertEntry( 
            /* [in] */ IUnknown __RPC_FAR *punkBrowser,
            /* [in] */ ITravelLogEntry __RPC_FAR *pteRelativeTo,
            /* [in] */ BOOL fPrepend,
            /* [in] */ IUnknown __RPC_FAR *punkTLClient,
            /* [in] */ ITravelLogEntry __RPC_FAR *__RPC_FAR *ppEntry) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE TravelToEntry( 
            /* [in] */ IUnknown __RPC_FAR *punkBrowser,
            /* [in] */ ITravelLogEntry __RPC_FAR *pteDestination) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITravelLogExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITravelLogEx __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITravelLogEx __RPC_FAR * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindTravelEntryWithUrl )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ UINT uiCP,
            /* [in] */ LPOLESTR pszUrl,
            /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *TravelToUrl )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ UINT uiCP,
            /* [in] */ LPOLESTR pszUrl);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteIndexEntry )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ int index);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteUrlEntry )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ UINT uiCP,
            /* [in] */ LPOLESTR pszUrl);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CountEntryNodes )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ DWORD dwFlags,
            /* [out] */ DWORD __RPC_FAR *pdwCount);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateEnumEntry )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [out] */ IEnumTravelLogEntry __RPC_FAR *__RPC_FAR *ppEnum,
            /* [in] */ DWORD dwFlags);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteEntry )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ ITravelLogEntry __RPC_FAR *pte);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InsertEntry )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punkBrowser,
            /* [in] */ ITravelLogEntry __RPC_FAR *pteRelativeTo,
            /* [in] */ BOOL fPrepend,
            /* [in] */ IUnknown __RPC_FAR *punkTLClient,
            /* [in] */ ITravelLogEntry __RPC_FAR *__RPC_FAR *ppEntry);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *TravelToEntry )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punkBrowser,
            /* [in] */ ITravelLogEntry __RPC_FAR *pteDestination);
        
        END_INTERFACE
    } ITravelLogExVtbl;

    interface ITravelLogEx
    {
        CONST_VTBL struct ITravelLogExVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITravelLogEx_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITravelLogEx_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITravelLogEx_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITravelLogEx_FindTravelEntryWithUrl(This,punk,uiCP,pszUrl,ppte)	\
    (This)->lpVtbl -> FindTravelEntryWithUrl(This,punk,uiCP,pszUrl,ppte)

#define ITravelLogEx_TravelToUrl(This,punk,uiCP,pszUrl)	\
    (This)->lpVtbl -> TravelToUrl(This,punk,uiCP,pszUrl)

#define ITravelLogEx_DeleteIndexEntry(This,punk,index)	\
    (This)->lpVtbl -> DeleteIndexEntry(This,punk,index)

#define ITravelLogEx_DeleteUrlEntry(This,punk,uiCP,pszUrl)	\
    (This)->lpVtbl -> DeleteUrlEntry(This,punk,uiCP,pszUrl)

#define ITravelLogEx_CountEntryNodes(This,punk,dwFlags,pdwCount)	\
    (This)->lpVtbl -> CountEntryNodes(This,punk,dwFlags,pdwCount)

#define ITravelLogEx_CreateEnumEntry(This,punk,ppEnum,dwFlags)	\
    (This)->lpVtbl -> CreateEnumEntry(This,punk,ppEnum,dwFlags)

#define ITravelLogEx_DeleteEntry(This,punk,pte)	\
    (This)->lpVtbl -> DeleteEntry(This,punk,pte)

#define ITravelLogEx_InsertEntry(This,punkBrowser,pteRelativeTo,fPrepend,punkTLClient,ppEntry)	\
    (This)->lpVtbl -> InsertEntry(This,punkBrowser,pteRelativeTo,fPrepend,punkTLClient,ppEntry)

#define ITravelLogEx_TravelToEntry(This,punkBrowser,pteDestination)	\
    (This)->lpVtbl -> TravelToEntry(This,punkBrowser,pteDestination)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_FindTravelEntryWithUrl_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ UINT uiCP,
    /* [in] */ LPOLESTR pszUrl,
    /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte);


void __RPC_STUB ITravelLogEx_FindTravelEntryWithUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_TravelToUrl_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ UINT uiCP,
    /* [in] */ LPOLESTR pszUrl);


void __RPC_STUB ITravelLogEx_TravelToUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_DeleteIndexEntry_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ int index);


void __RPC_STUB ITravelLogEx_DeleteIndexEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_DeleteUrlEntry_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ UINT uiCP,
    /* [in] */ LPOLESTR pszUrl);


void __RPC_STUB ITravelLogEx_DeleteUrlEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_CountEntryNodes_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ DWORD dwFlags,
    /* [out] */ DWORD __RPC_FAR *pdwCount);


void __RPC_STUB ITravelLogEx_CountEntryNodes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_CreateEnumEntry_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [out] */ IEnumTravelLogEntry __RPC_FAR *__RPC_FAR *ppEnum,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB ITravelLogEx_CreateEnumEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_DeleteEntry_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ ITravelLogEntry __RPC_FAR *pte);


void __RPC_STUB ITravelLogEx_DeleteEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_InsertEntry_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punkBrowser,
    /* [in] */ ITravelLogEntry __RPC_FAR *pteRelativeTo,
    /* [in] */ BOOL fPrepend,
    /* [in] */ IUnknown __RPC_FAR *punkTLClient,
    /* [in] */ ITravelLogEntry __RPC_FAR *__RPC_FAR *ppEntry);


void __RPC_STUB ITravelLogEx_InsertEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_TravelToEntry_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punkBrowser,
    /* [in] */ ITravelLogEntry __RPC_FAR *pteDestination);


void __RPC_STUB ITravelLogEx_TravelToEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITravelLogEx_INTERFACE_DEFINED__ */


#ifndef __ITravelLogClient_INTERFACE_DEFINED__
#define __ITravelLogClient_INTERFACE_DEFINED__

/* interface ITravelLogClient */
/* [helpcontext][helpstring][hidden][local][object][uuid] */ 


EXTERN_C const IID IID_ITravelLogClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f67A-98b5-11cf-bb82-00aa00bdce0b")
    ITravelLogClient : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FindWindowByIndex( 
            /* [in] */ DWORD dwID,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetWindowData( 
            /* [out][in] */ LPWINDOWDATA pWinData) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE LoadHistoryPosition( 
            /* [in] */ LPOLESTR pszUrlLocation,
            /* [in] */ DWORD dwPosition) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITravelLogClientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITravelLogClient __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITravelLogClient __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITravelLogClient __RPC_FAR * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindWindowByIndex )( 
            ITravelLogClient __RPC_FAR * This,
            /* [in] */ DWORD dwID,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetWindowData )( 
            ITravelLogClient __RPC_FAR * This,
            /* [out][in] */ LPWINDOWDATA pWinData);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LoadHistoryPosition )( 
            ITravelLogClient __RPC_FAR * This,
            /* [in] */ LPOLESTR pszUrlLocation,
            /* [in] */ DWORD dwPosition);
        
        END_INTERFACE
    } ITravelLogClientVtbl;

    interface ITravelLogClient
    {
        CONST_VTBL struct ITravelLogClientVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITravelLogClient_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITravelLogClient_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITravelLogClient_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITravelLogClient_FindWindowByIndex(This,dwID,ppunk)	\
    (This)->lpVtbl -> FindWindowByIndex(This,dwID,ppunk)

#define ITravelLogClient_GetWindowData(This,pWinData)	\
    (This)->lpVtbl -> GetWindowData(This,pWinData)

#define ITravelLogClient_LoadHistoryPosition(This,pszUrlLocation,dwPosition)	\
    (This)->lpVtbl -> LoadHistoryPosition(This,pszUrlLocation,dwPosition)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogClient_FindWindowByIndex_Proxy( 
    ITravelLogClient __RPC_FAR * This,
    /* [in] */ DWORD dwID,
    /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk);


void __RPC_STUB ITravelLogClient_FindWindowByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogClient_GetWindowData_Proxy( 
    ITravelLogClient __RPC_FAR * This,
    /* [out][in] */ LPWINDOWDATA pWinData);


void __RPC_STUB ITravelLogClient_GetWindowData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogClient_LoadHistoryPosition_Proxy( 
    ITravelLogClient __RPC_FAR * This,
    /* [in] */ LPOLESTR pszUrlLocation,
    /* [in] */ DWORD dwPosition);


void __RPC_STUB ITravelLogClient_LoadHistoryPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITravelLogClient_INTERFACE_DEFINED__ */


#ifndef __ITravelLogClient2_INTERFACE_DEFINED__
#define __ITravelLogClient2_INTERFACE_DEFINED__

/* interface ITravelLogClient2 */
/* [helpcontext][helpstring][hidden][local][object][uuid] */ 


EXTERN_C const IID IID_ITravelLogClient2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0AD364CE-ADCB-11d3-8269-00805FC732C0")
    ITravelLogClient2 : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDummyWindowData( 
            /* [in] */ LPWSTR pszUrl,
            /* [in] */ LPWSTR pszTitle,
            /* [out][in] */ LPWINDOWDATA pWinData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITravelLogClient2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITravelLogClient2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITravelLogClient2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITravelLogClient2 __RPC_FAR * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDummyWindowData )( 
            ITravelLogClient2 __RPC_FAR * This,
            /* [in] */ LPWSTR pszUrl,
            /* [in] */ LPWSTR pszTitle,
            /* [out][in] */ LPWINDOWDATA pWinData);
        
        END_INTERFACE
    } ITravelLogClient2Vtbl;

    interface ITravelLogClient2
    {
        CONST_VTBL struct ITravelLogClient2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITravelLogClient2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITravelLogClient2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITravelLogClient2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITravelLogClient2_GetDummyWindowData(This,pszUrl,pszTitle,pWinData)	\
    (This)->lpVtbl -> GetDummyWindowData(This,pszUrl,pszTitle,pWinData)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogClient2_GetDummyWindowData_Proxy( 
    ITravelLogClient2 __RPC_FAR * This,
    /* [in] */ LPWSTR pszUrl,
    /* [in] */ LPWSTR pszTitle,
    /* [out][in] */ LPWINDOWDATA pWinData);


void __RPC_STUB ITravelLogClient2_GetDummyWindowData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITravelLogClient2_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


