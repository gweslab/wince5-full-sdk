
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0286 */
/* at Thu Jun 24 18:49:59 2004
 */
/* Compiler settings for .\urlmki.idl:
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

#ifndef __urlmki_h__
#define __urlmki_h__

/* Forward Declarations */ 

#ifndef __IInternetCache_FWD_DEFINED__
#define __IInternetCache_FWD_DEFINED__
typedef interface IInternetCache IInternetCache;
#endif 	/* __IInternetCache_FWD_DEFINED__ */


#ifndef __IInternetBindClient_FWD_DEFINED__
#define __IInternetBindClient_FWD_DEFINED__
typedef interface IInternetBindClient IInternetBindClient;
#endif 	/* __IInternetBindClient_FWD_DEFINED__ */


#ifndef __IBindStatusCallbackMsg_FWD_DEFINED__
#define __IBindStatusCallbackMsg_FWD_DEFINED__
typedef interface IBindStatusCallbackMsg IBindStatusCallbackMsg;
#endif 	/* __IBindStatusCallbackMsg_FWD_DEFINED__ */


#ifndef __IBindStatusCallbackHolder_FWD_DEFINED__
#define __IBindStatusCallbackHolder_FWD_DEFINED__
typedef interface IBindStatusCallbackHolder IBindStatusCallbackHolder;
#endif 	/* __IBindStatusCallbackHolder_FWD_DEFINED__ */


#ifndef __IMediaHolder_FWD_DEFINED__
#define __IMediaHolder_FWD_DEFINED__
typedef interface IMediaHolder IMediaHolder;
#endif 	/* __IMediaHolder_FWD_DEFINED__ */


#ifndef __ITransactionData_FWD_DEFINED__
#define __ITransactionData_FWD_DEFINED__
typedef interface ITransactionData ITransactionData;
#endif 	/* __ITransactionData_FWD_DEFINED__ */


#ifndef __ITransProtocolSink_FWD_DEFINED__
#define __ITransProtocolSink_FWD_DEFINED__
typedef interface ITransProtocolSink ITransProtocolSink;
#endif 	/* __ITransProtocolSink_FWD_DEFINED__ */


/* header files for imported files */
#include "urlmon.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_urlmki_0000 */
/* [local] */ 

#define IID_IOInetBindClient     IID_IInternetBindClient  
#define IOInetBindClient     IInternetBindClient  


#ifndef _LPIINTERNETCACHE_DEFINED
#define _LPIINTERNETCACHE_DEFINED


extern RPC_IF_HANDLE __MIDL_itf_urlmki_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmki_0000_v0_0_s_ifspec;

#ifndef __IInternetCache_INTERFACE_DEFINED__
#define __IInternetCache_INTERFACE_DEFINED__

/* interface IInternetCache */
/* [unique][uuid][object][local] */ 

typedef /* [unique] */ IInternetCache __RPC_FAR *LPIINTERNETCACHE;


EXTERN_C const IID IID_IInternetCache;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("79eac9ea-baf9-11ce-8c82-00aa004ba90b")
    IInternetCache : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IInternetCacheVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IInternetCache __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IInternetCache __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IInternetCache __RPC_FAR * This);
        
        END_INTERFACE
    } IInternetCacheVtbl;

    interface IInternetCache
    {
        CONST_VTBL struct IInternetCacheVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInternetCache_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IInternetCache_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IInternetCache_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInternetCache_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_urlmki_0207 */
/* [local] */ 

#endif
#ifndef _LPIINTERNETBINDCLIENT
#define _LPIINTERNETBINDCLIENT


extern RPC_IF_HANDLE __MIDL_itf_urlmki_0207_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmki_0207_v0_0_s_ifspec;

#ifndef __IInternetBindClient_INTERFACE_DEFINED__
#define __IInternetBindClient_INTERFACE_DEFINED__

/* interface IInternetBindClient */
/* [unique][uuid][object][local] */ 

typedef /* [unique] */ IInternetBindClient __RPC_FAR *LPIINTERNETBINDCLIENT;


EXTERN_C const IID IID_IInternetBindClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("79eac9e2-baf9-11ce-8c82-00aa004ba90b")
    IInternetBindClient : public IInternetBindInfo
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetClassFileOrMime( 
            /* [in] */ LPBC pBC,
            /* [in] */ LPCWSTR szFilename,
            /* [in] */ LPVOID pBuffer,
            /* [in] */ DWORD cbSize,
            /* [in] */ LPCWSTR szMime,
            /* [in] */ DWORD dwReserved,
            /* [out][in] */ LPCLSID pclsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindMimeFromData( 
            /* [in] */ LPBC pBC,
            /* [in] */ LPCWSTR szFilename,
            /* [in] */ LPVOID pBuffer,
            /* [in] */ DWORD cbSize,
            /* [in] */ LPCWSTR szMime,
            /* [out] */ LPWSTR pwzResult,
            /* [in] */ DWORD cchResult,
            /* [out] */ DWORD __RPC_FAR *pcchResult,
            /* [in] */ DWORD dwReserved) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInternetBindClientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IInternetBindClient __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IInternetBindClient __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IInternetBindClient __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetBindInfo )( 
            IInternetBindClient __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *grfBINDF,
            /* [unique][out][in] */ BINDINFO __RPC_FAR *pbindinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetBindString )( 
            IInternetBindClient __RPC_FAR * This,
            /* [in] */ ULONG ulStringType,
            /* [out][in] */ LPOLESTR __RPC_FAR *ppwzStr,
            /* [in] */ ULONG cEl,
            /* [out][in] */ ULONG __RPC_FAR *pcElFetched);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetClassFileOrMime )( 
            IInternetBindClient __RPC_FAR * This,
            /* [in] */ LPBC pBC,
            /* [in] */ LPCWSTR szFilename,
            /* [in] */ LPVOID pBuffer,
            /* [in] */ DWORD cbSize,
            /* [in] */ LPCWSTR szMime,
            /* [in] */ DWORD dwReserved,
            /* [out][in] */ LPCLSID pclsid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindMimeFromData )( 
            IInternetBindClient __RPC_FAR * This,
            /* [in] */ LPBC pBC,
            /* [in] */ LPCWSTR szFilename,
            /* [in] */ LPVOID pBuffer,
            /* [in] */ DWORD cbSize,
            /* [in] */ LPCWSTR szMime,
            /* [out] */ LPWSTR pwzResult,
            /* [in] */ DWORD cchResult,
            /* [out] */ DWORD __RPC_FAR *pcchResult,
            /* [in] */ DWORD dwReserved);
        
        END_INTERFACE
    } IInternetBindClientVtbl;

    interface IInternetBindClient
    {
        CONST_VTBL struct IInternetBindClientVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInternetBindClient_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IInternetBindClient_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IInternetBindClient_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IInternetBindClient_GetBindInfo(This,grfBINDF,pbindinfo)	\
    (This)->lpVtbl -> GetBindInfo(This,grfBINDF,pbindinfo)

#define IInternetBindClient_GetBindString(This,ulStringType,ppwzStr,cEl,pcElFetched)	\
    (This)->lpVtbl -> GetBindString(This,ulStringType,ppwzStr,cEl,pcElFetched)


#define IInternetBindClient_GetClassFileOrMime(This,pBC,szFilename,pBuffer,cbSize,szMime,dwReserved,pclsid)	\
    (This)->lpVtbl -> GetClassFileOrMime(This,pBC,szFilename,pBuffer,cbSize,szMime,dwReserved,pclsid)

#define IInternetBindClient_FindMimeFromData(This,pBC,szFilename,pBuffer,cbSize,szMime,pwzResult,cchResult,pcchResult,dwReserved)	\
    (This)->lpVtbl -> FindMimeFromData(This,pBC,szFilename,pBuffer,cbSize,szMime,pwzResult,cchResult,pcchResult,dwReserved)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IInternetBindClient_GetClassFileOrMime_Proxy( 
    IInternetBindClient __RPC_FAR * This,
    /* [in] */ LPBC pBC,
    /* [in] */ LPCWSTR szFilename,
    /* [in] */ LPVOID pBuffer,
    /* [in] */ DWORD cbSize,
    /* [in] */ LPCWSTR szMime,
    /* [in] */ DWORD dwReserved,
    /* [out][in] */ LPCLSID pclsid);


void __RPC_STUB IInternetBindClient_GetClassFileOrMime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IInternetBindClient_FindMimeFromData_Proxy( 
    IInternetBindClient __RPC_FAR * This,
    /* [in] */ LPBC pBC,
    /* [in] */ LPCWSTR szFilename,
    /* [in] */ LPVOID pBuffer,
    /* [in] */ DWORD cbSize,
    /* [in] */ LPCWSTR szMime,
    /* [out] */ LPWSTR pwzResult,
    /* [in] */ DWORD cchResult,
    /* [out] */ DWORD __RPC_FAR *pcchResult,
    /* [in] */ DWORD dwReserved);


void __RPC_STUB IInternetBindClient_FindMimeFromData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IInternetBindClient_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_urlmki_0208 */
/* [local] */ 

#endif
#ifndef _LPBINDSTATUSCALLBACKMSG_DEFINED
#define _LPBINDSTATUSCALLBACKMSG_DEFINED


extern RPC_IF_HANDLE __MIDL_itf_urlmki_0208_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmki_0208_v0_0_s_ifspec;

#ifndef __IBindStatusCallbackMsg_INTERFACE_DEFINED__
#define __IBindStatusCallbackMsg_INTERFACE_DEFINED__

/* interface IBindStatusCallbackMsg */
/* [unique][uuid][object] */ 

typedef /* [unique] */ IBindStatusCallbackMsg __RPC_FAR *LPBINDSTATUSCALLBACKMSG;

typedef 
enum tagMSGCALLTYPE
    {	IBSCLEVEL_TOPLEVEL	= 1,
	IBSCLEVEL_NESTED	= 2
    }	IBSCLEVEL;

typedef 
enum tagIBSCPENDINGMSG
    {	IBSCPENDINGMSG_WAITDEFPROCESS	= 0,
	IBSCPENDINGMSG_WAITNOPROCESS	= 1,
	IBSCPENDINGMSG_CANCELCALL	= 2
    }	IBSCPENDINGMSG;


EXTERN_C const IID IID_IBindStatusCallbackMsg;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("79eac9d5-baf9-11ce-8c82-00aa004ba90b")
    IBindStatusCallbackMsg : public IBindStatusCallback
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MessagePending( 
            /* [in] */ DWORD dwPendingType,
            /* [in] */ DWORD dwPendingRecursion,
            /* [in] */ DWORD dwReserved) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBindStatusCallbackMsgVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IBindStatusCallbackMsg __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IBindStatusCallbackMsg __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IBindStatusCallbackMsg __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnStartBinding )( 
            IBindStatusCallbackMsg __RPC_FAR * This,
            /* [in] */ DWORD dwReserved,
            /* [in] */ IBinding __RPC_FAR *pib);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPriority )( 
            IBindStatusCallbackMsg __RPC_FAR * This,
            /* [out] */ LONG __RPC_FAR *pnPriority);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnLowResource )( 
            IBindStatusCallbackMsg __RPC_FAR * This,
            /* [in] */ DWORD reserved);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnProgress )( 
            IBindStatusCallbackMsg __RPC_FAR * This,
            /* [in] */ ULONG ulProgress,
            /* [in] */ ULONG ulProgressMax,
            /* [in] */ ULONG ulStatusCode,
            /* [in] */ LPCWSTR szStatusText);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnStopBinding )( 
            IBindStatusCallbackMsg __RPC_FAR * This,
            /* [in] */ HRESULT hresult,
            /* [unique][in] */ LPCWSTR szError);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetBindInfo )( 
            IBindStatusCallbackMsg __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *grfBINDF,
            /* [unique][out][in] */ BINDINFO __RPC_FAR *pbindinfo);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnDataAvailable )( 
            IBindStatusCallbackMsg __RPC_FAR * This,
            /* [in] */ DWORD grfBSCF,
            /* [in] */ DWORD dwSize,
            /* [in] */ FORMATETC __RPC_FAR *pformatetc,
            /* [in] */ STGMEDIUM __RPC_FAR *pstgmed);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnObjectAvailable )( 
            IBindStatusCallbackMsg __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][in] */ IUnknown __RPC_FAR *punk);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MessagePending )( 
            IBindStatusCallbackMsg __RPC_FAR * This,
            /* [in] */ DWORD dwPendingType,
            /* [in] */ DWORD dwPendingRecursion,
            /* [in] */ DWORD dwReserved);
        
        END_INTERFACE
    } IBindStatusCallbackMsgVtbl;

    interface IBindStatusCallbackMsg
    {
        CONST_VTBL struct IBindStatusCallbackMsgVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBindStatusCallbackMsg_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBindStatusCallbackMsg_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBindStatusCallbackMsg_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IBindStatusCallbackMsg_OnStartBinding(This,dwReserved,pib)	\
    (This)->lpVtbl -> OnStartBinding(This,dwReserved,pib)

#define IBindStatusCallbackMsg_GetPriority(This,pnPriority)	\
    (This)->lpVtbl -> GetPriority(This,pnPriority)

#define IBindStatusCallbackMsg_OnLowResource(This,reserved)	\
    (This)->lpVtbl -> OnLowResource(This,reserved)

#define IBindStatusCallbackMsg_OnProgress(This,ulProgress,ulProgressMax,ulStatusCode,szStatusText)	\
    (This)->lpVtbl -> OnProgress(This,ulProgress,ulProgressMax,ulStatusCode,szStatusText)

#define IBindStatusCallbackMsg_OnStopBinding(This,hresult,szError)	\
    (This)->lpVtbl -> OnStopBinding(This,hresult,szError)

#define IBindStatusCallbackMsg_GetBindInfo(This,grfBINDF,pbindinfo)	\
    (This)->lpVtbl -> GetBindInfo(This,grfBINDF,pbindinfo)

#define IBindStatusCallbackMsg_OnDataAvailable(This,grfBSCF,dwSize,pformatetc,pstgmed)	\
    (This)->lpVtbl -> OnDataAvailable(This,grfBSCF,dwSize,pformatetc,pstgmed)

#define IBindStatusCallbackMsg_OnObjectAvailable(This,riid,punk)	\
    (This)->lpVtbl -> OnObjectAvailable(This,riid,punk)


#define IBindStatusCallbackMsg_MessagePending(This,dwPendingType,dwPendingRecursion,dwReserved)	\
    (This)->lpVtbl -> MessagePending(This,dwPendingType,dwPendingRecursion,dwReserved)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IBindStatusCallbackMsg_MessagePending_Proxy( 
    IBindStatusCallbackMsg __RPC_FAR * This,
    /* [in] */ DWORD dwPendingType,
    /* [in] */ DWORD dwPendingRecursion,
    /* [in] */ DWORD dwReserved);


void __RPC_STUB IBindStatusCallbackMsg_MessagePending_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IBindStatusCallbackMsg_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_urlmki_0209 */
/* [local] */ 

#endif
#ifndef _LPBINDSTATUSCALLBACKHOLDER_DEFINED
#define _LPBINDSTATUSCALLBACKHOLDER_DEFINED


extern RPC_IF_HANDLE __MIDL_itf_urlmki_0209_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmki_0209_v0_0_s_ifspec;

#ifndef __IBindStatusCallbackHolder_INTERFACE_DEFINED__
#define __IBindStatusCallbackHolder_INTERFACE_DEFINED__

/* interface IBindStatusCallbackHolder */
/* [unique][uuid][object][local] */ 

typedef /* [unique] */ IBindStatusCallbackHolder __RPC_FAR *LPBINDSTATUSCALLBACKHOLDER;


EXTERN_C const IID IID_IBindStatusCallbackHolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("79eac9cc-baf9-11ce-8c82-00aa004ba90b")
    IBindStatusCallbackHolder : public IBindStatusCallback
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IBindStatusCallbackHolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IBindStatusCallbackHolder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IBindStatusCallbackHolder __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IBindStatusCallbackHolder __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnStartBinding )( 
            IBindStatusCallbackHolder __RPC_FAR * This,
            /* [in] */ DWORD dwReserved,
            /* [in] */ IBinding __RPC_FAR *pib);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPriority )( 
            IBindStatusCallbackHolder __RPC_FAR * This,
            /* [out] */ LONG __RPC_FAR *pnPriority);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnLowResource )( 
            IBindStatusCallbackHolder __RPC_FAR * This,
            /* [in] */ DWORD reserved);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnProgress )( 
            IBindStatusCallbackHolder __RPC_FAR * This,
            /* [in] */ ULONG ulProgress,
            /* [in] */ ULONG ulProgressMax,
            /* [in] */ ULONG ulStatusCode,
            /* [in] */ LPCWSTR szStatusText);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnStopBinding )( 
            IBindStatusCallbackHolder __RPC_FAR * This,
            /* [in] */ HRESULT hresult,
            /* [unique][in] */ LPCWSTR szError);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetBindInfo )( 
            IBindStatusCallbackHolder __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *grfBINDF,
            /* [unique][out][in] */ BINDINFO __RPC_FAR *pbindinfo);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnDataAvailable )( 
            IBindStatusCallbackHolder __RPC_FAR * This,
            /* [in] */ DWORD grfBSCF,
            /* [in] */ DWORD dwSize,
            /* [in] */ FORMATETC __RPC_FAR *pformatetc,
            /* [in] */ STGMEDIUM __RPC_FAR *pstgmed);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnObjectAvailable )( 
            IBindStatusCallbackHolder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][in] */ IUnknown __RPC_FAR *punk);
        
        END_INTERFACE
    } IBindStatusCallbackHolderVtbl;

    interface IBindStatusCallbackHolder
    {
        CONST_VTBL struct IBindStatusCallbackHolderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBindStatusCallbackHolder_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBindStatusCallbackHolder_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBindStatusCallbackHolder_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IBindStatusCallbackHolder_OnStartBinding(This,dwReserved,pib)	\
    (This)->lpVtbl -> OnStartBinding(This,dwReserved,pib)

#define IBindStatusCallbackHolder_GetPriority(This,pnPriority)	\
    (This)->lpVtbl -> GetPriority(This,pnPriority)

#define IBindStatusCallbackHolder_OnLowResource(This,reserved)	\
    (This)->lpVtbl -> OnLowResource(This,reserved)

#define IBindStatusCallbackHolder_OnProgress(This,ulProgress,ulProgressMax,ulStatusCode,szStatusText)	\
    (This)->lpVtbl -> OnProgress(This,ulProgress,ulProgressMax,ulStatusCode,szStatusText)

#define IBindStatusCallbackHolder_OnStopBinding(This,hresult,szError)	\
    (This)->lpVtbl -> OnStopBinding(This,hresult,szError)

#define IBindStatusCallbackHolder_GetBindInfo(This,grfBINDF,pbindinfo)	\
    (This)->lpVtbl -> GetBindInfo(This,grfBINDF,pbindinfo)

#define IBindStatusCallbackHolder_OnDataAvailable(This,grfBSCF,dwSize,pformatetc,pstgmed)	\
    (This)->lpVtbl -> OnDataAvailable(This,grfBSCF,dwSize,pformatetc,pstgmed)

#define IBindStatusCallbackHolder_OnObjectAvailable(This,riid,punk)	\
    (This)->lpVtbl -> OnObjectAvailable(This,riid,punk)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBindStatusCallbackHolder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_urlmki_0210 */
/* [local] */ 

#endif
#ifndef _LPMEDIAHOLDER_DEFINED
#define _LPMEDIAHOLDER_DEFINED


extern RPC_IF_HANDLE __MIDL_itf_urlmki_0210_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmki_0210_v0_0_s_ifspec;

#ifndef __IMediaHolder_INTERFACE_DEFINED__
#define __IMediaHolder_INTERFACE_DEFINED__

/* interface IMediaHolder */
/* [unique][uuid][object] */ 

typedef /* [unique] */ IMediaHolder __RPC_FAR *LPMEDIAHOLDER;


EXTERN_C const IID IID_IMediaHolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("79eac9ce-baf9-11ce-8c82-00aa004ba90b")
    IMediaHolder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterClassMapping( 
            /* [in] */ DWORD ctypes,
            /* [size_is][in] */ LPCSTR __RPC_FAR rgszNames[  ],
            /* [size_is][in] */ CLSID __RPC_FAR rgClsIDs[  ],
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindClassMapping( 
            /* [in] */ LPCSTR szMime,
            /* [out] */ CLSID __RPC_FAR *pClassID,
            /* [in] */ DWORD dwReserved) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMediaHolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMediaHolder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMediaHolder __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMediaHolder __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RegisterClassMapping )( 
            IMediaHolder __RPC_FAR * This,
            /* [in] */ DWORD ctypes,
            /* [size_is][in] */ LPCSTR __RPC_FAR rgszNames[  ],
            /* [size_is][in] */ CLSID __RPC_FAR rgClsIDs[  ],
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindClassMapping )( 
            IMediaHolder __RPC_FAR * This,
            /* [in] */ LPCSTR szMime,
            /* [out] */ CLSID __RPC_FAR *pClassID,
            /* [in] */ DWORD dwReserved);
        
        END_INTERFACE
    } IMediaHolderVtbl;

    interface IMediaHolder
    {
        CONST_VTBL struct IMediaHolderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaHolder_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMediaHolder_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMediaHolder_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMediaHolder_RegisterClassMapping(This,ctypes,rgszNames,rgClsIDs,dwReserved)	\
    (This)->lpVtbl -> RegisterClassMapping(This,ctypes,rgszNames,rgClsIDs,dwReserved)

#define IMediaHolder_FindClassMapping(This,szMime,pClassID,dwReserved)	\
    (This)->lpVtbl -> FindClassMapping(This,szMime,pClassID,dwReserved)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMediaHolder_RegisterClassMapping_Proxy( 
    IMediaHolder __RPC_FAR * This,
    /* [in] */ DWORD ctypes,
    /* [size_is][in] */ LPCSTR __RPC_FAR rgszNames[  ],
    /* [size_is][in] */ CLSID __RPC_FAR rgClsIDs[  ],
    /* [in] */ DWORD dwReserved);


void __RPC_STUB IMediaHolder_RegisterClassMapping_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMediaHolder_FindClassMapping_Proxy( 
    IMediaHolder __RPC_FAR * This,
    /* [in] */ LPCSTR szMime,
    /* [out] */ CLSID __RPC_FAR *pClassID,
    /* [in] */ DWORD dwReserved);


void __RPC_STUB IMediaHolder_FindClassMapping_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMediaHolder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_urlmki_0211 */
/* [local] */ 

#endif
#ifndef _LPTRANSACTIONDATA_DEFINED
#define _LPTRANSACTIONDATA_DEFINED


extern RPC_IF_HANDLE __MIDL_itf_urlmki_0211_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmki_0211_v0_0_s_ifspec;

#ifndef __ITransactionData_INTERFACE_DEFINED__
#define __ITransactionData_INTERFACE_DEFINED__

/* interface ITransactionData */
/* [unique][uuid][object] */ 

typedef /* [unique] */ ITransactionData __RPC_FAR *LPTRANSACTIONDATA;


EXTERN_C const IID IID_ITransactionData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("79eac9cf-baf9-11ce-8c82-00aa004ba90b")
    ITransactionData : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTransactionData( 
            /* [in] */ LPCWSTR szUrl,
            /* [out] */ LPOLESTR __RPC_FAR *pszFilename,
            /* [out] */ LPOLESTR __RPC_FAR *pszMime,
            /* [out] */ DWORD __RPC_FAR *pdwSizeTotal,
            /* [out] */ DWORD __RPC_FAR *pdwSizeAvailable,
            /* [in] */ DWORD dwReserved) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITransactionDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITransactionData __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITransactionData __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITransactionData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTransactionData )( 
            ITransactionData __RPC_FAR * This,
            /* [in] */ LPCWSTR szUrl,
            /* [out] */ LPOLESTR __RPC_FAR *pszFilename,
            /* [out] */ LPOLESTR __RPC_FAR *pszMime,
            /* [out] */ DWORD __RPC_FAR *pdwSizeTotal,
            /* [out] */ DWORD __RPC_FAR *pdwSizeAvailable,
            /* [in] */ DWORD dwReserved);
        
        END_INTERFACE
    } ITransactionDataVtbl;

    interface ITransactionData
    {
        CONST_VTBL struct ITransactionDataVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransactionData_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITransactionData_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITransactionData_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITransactionData_GetTransactionData(This,szUrl,pszFilename,pszMime,pdwSizeTotal,pdwSizeAvailable,dwReserved)	\
    (This)->lpVtbl -> GetTransactionData(This,szUrl,pszFilename,pszMime,pdwSizeTotal,pdwSizeAvailable,dwReserved)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITransactionData_GetTransactionData_Proxy( 
    ITransactionData __RPC_FAR * This,
    /* [in] */ LPCWSTR szUrl,
    /* [out] */ LPOLESTR __RPC_FAR *pszFilename,
    /* [out] */ LPOLESTR __RPC_FAR *pszMime,
    /* [out] */ DWORD __RPC_FAR *pdwSizeTotal,
    /* [out] */ DWORD __RPC_FAR *pdwSizeAvailable,
    /* [in] */ DWORD dwReserved);


void __RPC_STUB ITransactionData_GetTransactionData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITransactionData_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_urlmki_0212 */
/* [local] */ 

#endif
#ifndef _LPTRANSPROTOCOLSINK_DEFINED
#define _LPTRANSPROTOCOLSINK_DEFINED


extern RPC_IF_HANDLE __MIDL_itf_urlmki_0212_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmki_0212_v0_0_s_ifspec;

#ifndef __ITransProtocolSink_INTERFACE_DEFINED__
#define __ITransProtocolSink_INTERFACE_DEFINED__

/* interface ITransProtocolSink */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_ITransProtocolSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7291765a-a83f-401d-81a6-112c3a468a7b")
    ITransProtocolSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryBindFlags( 
            /* [out] */ DWORD __RPC_FAR *pdwResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITransProtocolSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITransProtocolSink __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITransProtocolSink __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITransProtocolSink __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryBindFlags )( 
            ITransProtocolSink __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwResult);
        
        END_INTERFACE
    } ITransProtocolSinkVtbl;

    interface ITransProtocolSink
    {
        CONST_VTBL struct ITransProtocolSinkVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransProtocolSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITransProtocolSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITransProtocolSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITransProtocolSink_QueryBindFlags(This,pdwResult)	\
    (This)->lpVtbl -> QueryBindFlags(This,pdwResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITransProtocolSink_QueryBindFlags_Proxy( 
    ITransProtocolSink __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwResult);


void __RPC_STUB ITransProtocolSink_QueryBindFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITransProtocolSink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_urlmki_0213 */
/* [local] */ 

#endif
#define BINDF_IGNOREMIMECLSID           0x80000000     
#define BINDF_COMPLETEDOWNLOAD          0x01000000     


extern RPC_IF_HANDLE __MIDL_itf_urlmki_0213_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlmki_0213_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


