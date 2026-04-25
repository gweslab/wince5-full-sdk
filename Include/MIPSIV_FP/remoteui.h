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
/* at Thu Jun 24 19:15:27 2004
 */
/* Compiler settings for .\remoteui.idl:
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

#ifndef __remoteui_h__
#define __remoteui_h__

/* Forward Declarations */ 

#ifndef __IRemoteUI_Array_FWD_DEFINED__
#define __IRemoteUI_Array_FWD_DEFINED__
typedef interface IRemoteUI_Array IRemoteUI_Array;
#endif 	/* __IRemoteUI_Array_FWD_DEFINED__ */


#ifndef __IVariableContainer_FWD_DEFINED__
#define __IVariableContainer_FWD_DEFINED__
typedef interface IVariableContainer IVariableContainer;
#endif 	/* __IVariableContainer_FWD_DEFINED__ */


#ifndef __IRemoteUIModule_FWD_DEFINED__
#define __IRemoteUIModule_FWD_DEFINED__
typedef interface IRemoteUIModule IRemoteUIModule;
#endif 	/* __IRemoteUIModule_FWD_DEFINED__ */


#ifndef __PC_FWD_DEFINED__
#define __PC_FWD_DEFINED__

#ifdef __cplusplus
typedef class PC PC;
#else
typedef struct PC PC;
#endif /* __cplusplus */

#endif 	/* __PC_FWD_DEFINED__ */


#ifndef __Firewall_FWD_DEFINED__
#define __Firewall_FWD_DEFINED__

#ifdef __cplusplus
typedef class Firewall Firewall;
#else
typedef struct Firewall Firewall;
#endif /* __cplusplus */

#endif 	/* __Firewall_FWD_DEFINED__ */


#ifndef __HostName_FWD_DEFINED__
#define __HostName_FWD_DEFINED__

#ifdef __cplusplus
typedef class HostName HostName;
#else
typedef struct HostName HostName;
#endif /* __cplusplus */

#endif 	/* __HostName_FWD_DEFINED__ */


#ifndef __NAT_FWD_DEFINED__
#define __NAT_FWD_DEFINED__

#ifdef __cplusplus
typedef class NAT NAT;
#else
typedef struct NAT NAT;
#endif /* __cplusplus */

#endif 	/* __NAT_FWD_DEFINED__ */


#ifndef __NetLog_FWD_DEFINED__
#define __NetLog_FWD_DEFINED__

#ifdef __cplusplus
typedef class NetLog NetLog;
#else
typedef struct NetLog NetLog;
#endif /* __cplusplus */

#endif 	/* __NetLog_FWD_DEFINED__ */


#ifndef __Network_FWD_DEFINED__
#define __Network_FWD_DEFINED__

#ifdef __cplusplus
typedef class Network Network;
#else
typedef struct Network Network;
#endif /* __cplusplus */

#endif 	/* __Network_FWD_DEFINED__ */


#ifndef __Password_FWD_DEFINED__
#define __Password_FWD_DEFINED__

#ifdef __cplusplus
typedef class Password Password;
#else
typedef struct Password Password;
#endif /* __cplusplus */

#endif 	/* __Password_FWD_DEFINED__ */


#ifndef __PortForward_FWD_DEFINED__
#define __PortForward_FWD_DEFINED__

#ifdef __cplusplus
typedef class PortForward PortForward;
#else
typedef struct PortForward PortForward;
#endif /* __cplusplus */

#endif 	/* __PortForward_FWD_DEFINED__ */


#ifndef __RootDirs_FWD_DEFINED__
#define __RootDirs_FWD_DEFINED__

#ifdef __cplusplus
typedef class RootDirs RootDirs;
#else
typedef struct RootDirs RootDirs;
#endif /* __cplusplus */

#endif 	/* __RootDirs_FWD_DEFINED__ */


#ifndef __RAS_FWD_DEFINED__
#define __RAS_FWD_DEFINED__

#ifdef __cplusplus
typedef class RAS RAS;
#else
typedef struct RAS RAS;
#endif /* __cplusplus */

#endif 	/* __RAS_FWD_DEFINED__ */


#ifndef __SMBFile_FWD_DEFINED__
#define __SMBFile_FWD_DEFINED__

#ifdef __cplusplus
typedef class SMBFile SMBFile;
#else
typedef struct SMBFile SMBFile;
#endif /* __cplusplus */

#endif 	/* __SMBFile_FWD_DEFINED__ */


#ifndef __SMBPrint_FWD_DEFINED__
#define __SMBPrint_FWD_DEFINED__

#ifdef __cplusplus
typedef class SMBPrint SMBPrint;
#else
typedef struct SMBPrint SMBPrint;
#endif /* __cplusplus */

#endif 	/* __SMBPrint_FWD_DEFINED__ */


#ifndef __UserManager_FWD_DEFINED__
#define __UserManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class UserManager UserManager;
#else
typedef struct UserManager UserManager;
#endif /* __cplusplus */

#endif 	/* __UserManager_FWD_DEFINED__ */


#ifndef __Version_FWD_DEFINED__
#define __Version_FWD_DEFINED__

#ifdef __cplusplus
typedef class Version Version;
#else
typedef struct Version Version;
#endif /* __cplusplus */

#endif 	/* __Version_FWD_DEFINED__ */


#ifndef __TimeService_FWD_DEFINED__
#define __TimeService_FWD_DEFINED__

#ifdef __cplusplus
typedef class TimeService TimeService;
#else
typedef struct TimeService TimeService;
#endif /* __cplusplus */

#endif 	/* __TimeService_FWD_DEFINED__ */


#ifndef __Loc_FWD_DEFINED__
#define __Loc_FWD_DEFINED__

#ifdef __cplusplus
typedef class Loc Loc;
#else
typedef struct Loc Loc;
#endif /* __cplusplus */

#endif 	/* __Loc_FWD_DEFINED__ */


#ifndef __NWIFI_FWD_DEFINED__
#define __NWIFI_FWD_DEFINED__

#ifdef __cplusplus
typedef class NWIFI NWIFI;
#else
typedef struct NWIFI NWIFI;
#endif /* __cplusplus */

#endif 	/* __NWIFI_FWD_DEFINED__ */


#ifndef __EventLog_FWD_DEFINED__
#define __EventLog_FWD_DEFINED__

#ifdef __cplusplus
typedef class EventLog EventLog;
#else
typedef struct EventLog EventLog;
#endif /* __cplusplus */

#endif 	/* __EventLog_FWD_DEFINED__ */


#ifndef __Watson_FWD_DEFINED__
#define __Watson_FWD_DEFINED__

#ifdef __cplusplus
typedef class Watson Watson;
#else
typedef struct Watson Watson;
#endif /* __cplusplus */

#endif 	/* __Watson_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_remoteui_0000 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_remoteui_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_remoteui_0000_v0_0_s_ifspec;

#ifndef __IRemoteUI_Array_INTERFACE_DEFINED__
#define __IRemoteUI_Array_INTERFACE_DEFINED__

/* interface IRemoteUI_Array */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRemoteUI_Array;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5863AB80-48BB-4962-A015-442806B7F470")
    IRemoteUI_Array : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetName( 
            /* [out] */ char __RPC_FAR *__RPC_FAR *pName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddValue( 
            /* [in] */ const char __RPC_FAR *pIndex,
            /* [in] */ VARIANT __RPC_FAR *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ const char __RPC_FAR *pIndex,
            /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindFirstVar( 
            /* [out] */ char __RPC_FAR *__RPC_FAR *pIndex,
            /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindNextVar( 
            /* [out] */ char __RPC_FAR *__RPC_FAR *pIndex,
            /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRemoteUI_ArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRemoteUI_Array __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRemoteUI_Array __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRemoteUI_Array __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetName )( 
            IRemoteUI_Array __RPC_FAR * This,
            /* [out] */ char __RPC_FAR *__RPC_FAR *pName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddValue )( 
            IRemoteUI_Array __RPC_FAR * This,
            /* [in] */ const char __RPC_FAR *pIndex,
            /* [in] */ VARIANT __RPC_FAR *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetValue )( 
            IRemoteUI_Array __RPC_FAR * This,
            /* [in] */ const char __RPC_FAR *pIndex,
            /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindFirstVar )( 
            IRemoteUI_Array __RPC_FAR * This,
            /* [out] */ char __RPC_FAR *__RPC_FAR *pIndex,
            /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindNextVar )( 
            IRemoteUI_Array __RPC_FAR * This,
            /* [out] */ char __RPC_FAR *__RPC_FAR *pIndex,
            /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue);
        
        END_INTERFACE
    } IRemoteUI_ArrayVtbl;

    interface IRemoteUI_Array
    {
        CONST_VTBL struct IRemoteUI_ArrayVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRemoteUI_Array_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRemoteUI_Array_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRemoteUI_Array_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRemoteUI_Array_GetName(This,pName)	\
    (This)->lpVtbl -> GetName(This,pName)

#define IRemoteUI_Array_AddValue(This,pIndex,pValue)	\
    (This)->lpVtbl -> AddValue(This,pIndex,pValue)

#define IRemoteUI_Array_GetValue(This,pIndex,pValue)	\
    (This)->lpVtbl -> GetValue(This,pIndex,pValue)

#define IRemoteUI_Array_FindFirstVar(This,pIndex,pValue)	\
    (This)->lpVtbl -> FindFirstVar(This,pIndex,pValue)

#define IRemoteUI_Array_FindNextVar(This,pIndex,pValue)	\
    (This)->lpVtbl -> FindNextVar(This,pIndex,pValue)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRemoteUI_Array_GetName_Proxy( 
    IRemoteUI_Array __RPC_FAR * This,
    /* [out] */ char __RPC_FAR *__RPC_FAR *pName);


void __RPC_STUB IRemoteUI_Array_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRemoteUI_Array_AddValue_Proxy( 
    IRemoteUI_Array __RPC_FAR * This,
    /* [in] */ const char __RPC_FAR *pIndex,
    /* [in] */ VARIANT __RPC_FAR *pValue);


void __RPC_STUB IRemoteUI_Array_AddValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRemoteUI_Array_GetValue_Proxy( 
    IRemoteUI_Array __RPC_FAR * This,
    /* [in] */ const char __RPC_FAR *pIndex,
    /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue);


void __RPC_STUB IRemoteUI_Array_GetValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRemoteUI_Array_FindFirstVar_Proxy( 
    IRemoteUI_Array __RPC_FAR * This,
    /* [out] */ char __RPC_FAR *__RPC_FAR *pIndex,
    /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue);


void __RPC_STUB IRemoteUI_Array_FindFirstVar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRemoteUI_Array_FindNextVar_Proxy( 
    IRemoteUI_Array __RPC_FAR * This,
    /* [out] */ char __RPC_FAR *__RPC_FAR *pIndex,
    /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue);


void __RPC_STUB IRemoteUI_Array_FindNextVar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRemoteUI_Array_INTERFACE_DEFINED__ */


#ifndef __IVariableContainer_INTERFACE_DEFINED__
#define __IVariableContainer_INTERFACE_DEFINED__

/* interface IVariableContainer */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IVariableContainer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0FDACCB6-6ADE-49ff-B281-93E9470211BD")
    IVariableContainer : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddArray( 
            /* [in] */ const char __RPC_FAR *pName,
            /* [out] */ IRemoteUI_Array __RPC_FAR *__RPC_FAR *pArray) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetArray( 
            /* [in] */ const char __RPC_FAR *pName,
            /* [out] */ IRemoteUI_Array __RPC_FAR *__RPC_FAR *pArray) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddValue( 
            /* [in] */ const char __RPC_FAR *pName,
            /* [in] */ VARIANT __RPC_FAR *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ const char __RPC_FAR *pName,
            /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindFirstVar( 
            /* [out] */ char __RPC_FAR *__RPC_FAR *pName,
            /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindNextVar( 
            /* [out] */ char __RPC_FAR *__RPC_FAR *pName,
            /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindFirstArray( 
            /* [out] */ IRemoteUI_Array __RPC_FAR *__RPC_FAR *pArray) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindNextArray( 
            /* [out] */ IRemoteUI_Array __RPC_FAR *__RPC_FAR *pArray) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVariableContainerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IVariableContainer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IVariableContainer __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IVariableContainer __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddArray )( 
            IVariableContainer __RPC_FAR * This,
            /* [in] */ const char __RPC_FAR *pName,
            /* [out] */ IRemoteUI_Array __RPC_FAR *__RPC_FAR *pArray);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetArray )( 
            IVariableContainer __RPC_FAR * This,
            /* [in] */ const char __RPC_FAR *pName,
            /* [out] */ IRemoteUI_Array __RPC_FAR *__RPC_FAR *pArray);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddValue )( 
            IVariableContainer __RPC_FAR * This,
            /* [in] */ const char __RPC_FAR *pName,
            /* [in] */ VARIANT __RPC_FAR *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetValue )( 
            IVariableContainer __RPC_FAR * This,
            /* [in] */ const char __RPC_FAR *pName,
            /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindFirstVar )( 
            IVariableContainer __RPC_FAR * This,
            /* [out] */ char __RPC_FAR *__RPC_FAR *pName,
            /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindNextVar )( 
            IVariableContainer __RPC_FAR * This,
            /* [out] */ char __RPC_FAR *__RPC_FAR *pName,
            /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindFirstArray )( 
            IVariableContainer __RPC_FAR * This,
            /* [out] */ IRemoteUI_Array __RPC_FAR *__RPC_FAR *pArray);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindNextArray )( 
            IVariableContainer __RPC_FAR * This,
            /* [out] */ IRemoteUI_Array __RPC_FAR *__RPC_FAR *pArray);
        
        END_INTERFACE
    } IVariableContainerVtbl;

    interface IVariableContainer
    {
        CONST_VTBL struct IVariableContainerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVariableContainer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IVariableContainer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IVariableContainer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IVariableContainer_AddArray(This,pName,pArray)	\
    (This)->lpVtbl -> AddArray(This,pName,pArray)

#define IVariableContainer_GetArray(This,pName,pArray)	\
    (This)->lpVtbl -> GetArray(This,pName,pArray)

#define IVariableContainer_AddValue(This,pName,pValue)	\
    (This)->lpVtbl -> AddValue(This,pName,pValue)

#define IVariableContainer_GetValue(This,pName,pValue)	\
    (This)->lpVtbl -> GetValue(This,pName,pValue)

#define IVariableContainer_FindFirstVar(This,pName,pValue)	\
    (This)->lpVtbl -> FindFirstVar(This,pName,pValue)

#define IVariableContainer_FindNextVar(This,pName,pValue)	\
    (This)->lpVtbl -> FindNextVar(This,pName,pValue)

#define IVariableContainer_FindFirstArray(This,pArray)	\
    (This)->lpVtbl -> FindFirstArray(This,pArray)

#define IVariableContainer_FindNextArray(This,pArray)	\
    (This)->lpVtbl -> FindNextArray(This,pArray)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVariableContainer_AddArray_Proxy( 
    IVariableContainer __RPC_FAR * This,
    /* [in] */ const char __RPC_FAR *pName,
    /* [out] */ IRemoteUI_Array __RPC_FAR *__RPC_FAR *pArray);


void __RPC_STUB IVariableContainer_AddArray_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVariableContainer_GetArray_Proxy( 
    IVariableContainer __RPC_FAR * This,
    /* [in] */ const char __RPC_FAR *pName,
    /* [out] */ IRemoteUI_Array __RPC_FAR *__RPC_FAR *pArray);


void __RPC_STUB IVariableContainer_GetArray_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVariableContainer_AddValue_Proxy( 
    IVariableContainer __RPC_FAR * This,
    /* [in] */ const char __RPC_FAR *pName,
    /* [in] */ VARIANT __RPC_FAR *pValue);


void __RPC_STUB IVariableContainer_AddValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVariableContainer_GetValue_Proxy( 
    IVariableContainer __RPC_FAR * This,
    /* [in] */ const char __RPC_FAR *pName,
    /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue);


void __RPC_STUB IVariableContainer_GetValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVariableContainer_FindFirstVar_Proxy( 
    IVariableContainer __RPC_FAR * This,
    /* [out] */ char __RPC_FAR *__RPC_FAR *pName,
    /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue);


void __RPC_STUB IVariableContainer_FindFirstVar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVariableContainer_FindNextVar_Proxy( 
    IVariableContainer __RPC_FAR * This,
    /* [out] */ char __RPC_FAR *__RPC_FAR *pName,
    /* [out] */ VARIANT __RPC_FAR *__RPC_FAR *pValue);


void __RPC_STUB IVariableContainer_FindNextVar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVariableContainer_FindFirstArray_Proxy( 
    IVariableContainer __RPC_FAR * This,
    /* [out] */ IRemoteUI_Array __RPC_FAR *__RPC_FAR *pArray);


void __RPC_STUB IVariableContainer_FindFirstArray_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVariableContainer_FindNextArray_Proxy( 
    IVariableContainer __RPC_FAR * This,
    /* [out] */ IRemoteUI_Array __RPC_FAR *__RPC_FAR *pArray);


void __RPC_STUB IVariableContainer_FindNextArray_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IVariableContainer_INTERFACE_DEFINED__ */


#ifndef __IRemoteUIModule_INTERFACE_DEFINED__
#define __IRemoteUIModule_INTERFACE_DEFINED__

/* interface IRemoteUIModule */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRemoteUIModule;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0C4CD7CF-D667-4198-86E8-5254545311E9")
    IRemoteUIModule : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ BOOL fForBackup,
            /* [in] */ IVariableContainer __RPC_FAR *pToServer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Put( 
            /* [in] */ BOOL fForRestore,
            /* [in] */ IVariableContainer __RPC_FAR *pFromServer,
            /* [in] */ IVariableContainer __RPC_FAR *pReturn) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NeedNetworkRestart( 
            /* [out] */ BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NeedHTTPDRestart( 
            /* [out] */ BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ModuleName( 
            /* [out] */ char __RPC_FAR *__RPC_FAR *pModuleName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ const char __RPC_FAR *pInitArgs) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRemoteUIModuleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRemoteUIModule __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRemoteUIModule __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRemoteUIModule __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Get )( 
            IRemoteUIModule __RPC_FAR * This,
            /* [in] */ BOOL fForBackup,
            /* [in] */ IVariableContainer __RPC_FAR *pToServer);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Put )( 
            IRemoteUIModule __RPC_FAR * This,
            /* [in] */ BOOL fForRestore,
            /* [in] */ IVariableContainer __RPC_FAR *pFromServer,
            /* [in] */ IVariableContainer __RPC_FAR *pReturn);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NeedNetworkRestart )( 
            IRemoteUIModule __RPC_FAR * This,
            /* [out] */ BOOL __RPC_FAR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NeedHTTPDRestart )( 
            IRemoteUIModule __RPC_FAR * This,
            /* [out] */ BOOL __RPC_FAR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ModuleName )( 
            IRemoteUIModule __RPC_FAR * This,
            /* [out] */ char __RPC_FAR *__RPC_FAR *pModuleName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IRemoteUIModule __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Init )( 
            IRemoteUIModule __RPC_FAR * This,
            /* [in] */ const char __RPC_FAR *pInitArgs);
        
        END_INTERFACE
    } IRemoteUIModuleVtbl;

    interface IRemoteUIModule
    {
        CONST_VTBL struct IRemoteUIModuleVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRemoteUIModule_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRemoteUIModule_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRemoteUIModule_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRemoteUIModule_Get(This,fForBackup,pToServer)	\
    (This)->lpVtbl -> Get(This,fForBackup,pToServer)

#define IRemoteUIModule_Put(This,fForRestore,pFromServer,pReturn)	\
    (This)->lpVtbl -> Put(This,fForRestore,pFromServer,pReturn)

#define IRemoteUIModule_NeedNetworkRestart(This,pVal)	\
    (This)->lpVtbl -> NeedNetworkRestart(This,pVal)

#define IRemoteUIModule_NeedHTTPDRestart(This,pVal)	\
    (This)->lpVtbl -> NeedHTTPDRestart(This,pVal)

#define IRemoteUIModule_ModuleName(This,pModuleName)	\
    (This)->lpVtbl -> ModuleName(This,pModuleName)

#define IRemoteUIModule_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IRemoteUIModule_Init(This,pInitArgs)	\
    (This)->lpVtbl -> Init(This,pInitArgs)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRemoteUIModule_Get_Proxy( 
    IRemoteUIModule __RPC_FAR * This,
    /* [in] */ BOOL fForBackup,
    /* [in] */ IVariableContainer __RPC_FAR *pToServer);


void __RPC_STUB IRemoteUIModule_Get_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRemoteUIModule_Put_Proxy( 
    IRemoteUIModule __RPC_FAR * This,
    /* [in] */ BOOL fForRestore,
    /* [in] */ IVariableContainer __RPC_FAR *pFromServer,
    /* [in] */ IVariableContainer __RPC_FAR *pReturn);


void __RPC_STUB IRemoteUIModule_Put_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRemoteUIModule_NeedNetworkRestart_Proxy( 
    IRemoteUIModule __RPC_FAR * This,
    /* [out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB IRemoteUIModule_NeedNetworkRestart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRemoteUIModule_NeedHTTPDRestart_Proxy( 
    IRemoteUIModule __RPC_FAR * This,
    /* [out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB IRemoteUIModule_NeedHTTPDRestart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRemoteUIModule_ModuleName_Proxy( 
    IRemoteUIModule __RPC_FAR * This,
    /* [out] */ char __RPC_FAR *__RPC_FAR *pModuleName);


void __RPC_STUB IRemoteUIModule_ModuleName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRemoteUIModule_Reset_Proxy( 
    IRemoteUIModule __RPC_FAR * This);


void __RPC_STUB IRemoteUIModule_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRemoteUIModule_Init_Proxy( 
    IRemoteUIModule __RPC_FAR * This,
    /* [in] */ const char __RPC_FAR *pInitArgs);


void __RPC_STUB IRemoteUIModule_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRemoteUIModule_INTERFACE_DEFINED__ */



#ifndef __ModulesLib_LIBRARY_DEFINED__
#define __ModulesLib_LIBRARY_DEFINED__

/* library ModulesLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ModulesLib;

EXTERN_C const CLSID CLSID_PC;

#ifdef __cplusplus

class DECLSPEC_UUID("47994745-090f-4d1d-85f3-ce2a48b09c6d")
PC;
#endif

EXTERN_C const CLSID CLSID_Firewall;

#ifdef __cplusplus

class DECLSPEC_UUID("DE65D164-B2B5-4406-8B75-949DAAC17AA7")
Firewall;
#endif

EXTERN_C const CLSID CLSID_HostName;

#ifdef __cplusplus

class DECLSPEC_UUID("BB37C343-7B67-4036-AA6E-1FEF373FBF20")
HostName;
#endif

EXTERN_C const CLSID CLSID_NAT;

#ifdef __cplusplus

class DECLSPEC_UUID("D0AF5AA8-A2DC-42de-9D76-4C54DAFC9FA4")
NAT;
#endif

EXTERN_C const CLSID CLSID_NetLog;

#ifdef __cplusplus

class DECLSPEC_UUID("3333E916-2E01-400d-9635-DC70EE608B69")
NetLog;
#endif

EXTERN_C const CLSID CLSID_Network;

#ifdef __cplusplus

class DECLSPEC_UUID("D81B0FA6-930A-4dbb-9530-81FA0CD184FC")
Network;
#endif

EXTERN_C const CLSID CLSID_Password;

#ifdef __cplusplus

class DECLSPEC_UUID("FF4CF2D7-608A-487a-82EF-B3714191FA59")
Password;
#endif

EXTERN_C const CLSID CLSID_PortForward;

#ifdef __cplusplus

class DECLSPEC_UUID("31BE9AC6-AF5B-4f8a-83C5-65512CA9974E")
PortForward;
#endif

EXTERN_C const CLSID CLSID_RootDirs;

#ifdef __cplusplus

class DECLSPEC_UUID("E6020113-0323-421e-BCA3-84E2D1EDC3EA")
RootDirs;
#endif

EXTERN_C const CLSID CLSID_RAS;

#ifdef __cplusplus

class DECLSPEC_UUID("834ea022-ea02-41e6-95d9-314608e2a023")
RAS;
#endif

EXTERN_C const CLSID CLSID_SMBFile;

#ifdef __cplusplus

class DECLSPEC_UUID("BE7DB45C-0C6E-4c93-A575-CED8319B0B17")
SMBFile;
#endif

EXTERN_C const CLSID CLSID_SMBPrint;

#ifdef __cplusplus

class DECLSPEC_UUID("729017DF-7E9A-45e7-9EEE-BFDD378B21BF")
SMBPrint;
#endif

EXTERN_C const CLSID CLSID_UserManager;

#ifdef __cplusplus

class DECLSPEC_UUID("C1E176E4-0A1F-45f2-B8CC-A9CB177FA44E")
UserManager;
#endif

EXTERN_C const CLSID CLSID_Version;

#ifdef __cplusplus

class DECLSPEC_UUID("E178FF56-18A3-437f-AAA9-DB9E12FAB808")
Version;
#endif

EXTERN_C const CLSID CLSID_TimeService;

#ifdef __cplusplus

class DECLSPEC_UUID("0F4901FF-317D-45b1-B2EC-529570FD8571")
TimeService;
#endif

EXTERN_C const CLSID CLSID_Loc;

#ifdef __cplusplus

class DECLSPEC_UUID("9D752B54-CCD8-4916-B953-1D28CA614BC5")
Loc;
#endif

EXTERN_C const CLSID CLSID_NWIFI;

#ifdef __cplusplus

class DECLSPEC_UUID("763f0f42-0ced-4e9f-9623-0c2835c86609")
NWIFI;
#endif

EXTERN_C const CLSID CLSID_EventLog;

#ifdef __cplusplus

class DECLSPEC_UUID("734040d9-a825-4640-8c09-52273e5108cd")
EventLog;
#endif

EXTERN_C const CLSID CLSID_Watson;

#ifdef __cplusplus

class DECLSPEC_UUID("F3563900-D4A7-48e7-AFE8-D444BCFEEDC2")
Watson;
#endif
#endif /* __ModulesLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


