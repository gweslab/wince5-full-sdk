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
/* at Thu Jun 24 18:49:25 2004
 */
/* Compiler settings for .\netcon.idl:
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

#ifndef __netcon_h__
#define __netcon_h__

/* Forward Declarations */ 

#ifndef __IEnumNetConnection_FWD_DEFINED__
#define __IEnumNetConnection_FWD_DEFINED__
typedef interface IEnumNetConnection IEnumNetConnection;
#endif 	/* __IEnumNetConnection_FWD_DEFINED__ */


#ifndef __INetConnection_FWD_DEFINED__
#define __INetConnection_FWD_DEFINED__
typedef interface INetConnection INetConnection;
#endif 	/* __INetConnection_FWD_DEFINED__ */


#ifndef __INetConnectionManager_FWD_DEFINED__
#define __INetConnectionManager_FWD_DEFINED__
typedef interface INetConnectionManager INetConnectionManager;
#endif 	/* __INetConnectionManager_FWD_DEFINED__ */


#ifndef __INetConnectionConnectUi_FWD_DEFINED__
#define __INetConnectionConnectUi_FWD_DEFINED__
typedef interface INetConnectionConnectUi INetConnectionConnectUi;
#endif 	/* __INetConnectionConnectUi_FWD_DEFINED__ */


#ifndef __INetConnectionPropertyUi_FWD_DEFINED__
#define __INetConnectionPropertyUi_FWD_DEFINED__
typedef interface INetConnectionPropertyUi INetConnectionPropertyUi;
#endif 	/* __INetConnectionPropertyUi_FWD_DEFINED__ */


#ifndef __INetConnectionCommonUi_FWD_DEFINED__
#define __INetConnectionCommonUi_FWD_DEFINED__
typedef interface INetConnectionCommonUi INetConnectionCommonUi;
#endif 	/* __INetConnectionCommonUi_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "prsht.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_netcon_0000 */
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
#if ( _MSC_VER >= 800 )
#pragma warning(disable:4201)
#endif

EXTERN_C const CLSID CLSID_ConnectionManager;
EXTERN_C const CLSID CLSID_ConnectionCommonUi;

//These strings reference the HKEY_CURRENT_USER registry which
//retains whether shortcuts are created on the desktop.
#define NETCON_HKEYCURRENTUSERPATH      TEXT("Software\\Microsoft\\Windows NT\\CurrentVersion\\Network\\Network Connections")
#define NETCON_DESKTOPSHORTCUT          TEXT("DesktopShortcut")
#define NETCON_MAX_NAME_LEN 246










extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_v0_0_s_ifspec;

#ifndef __IEnumNetConnection_INTERFACE_DEFINED__
#define __IEnumNetConnection_INTERFACE_DEFINED__

/* interface IEnumNetConnection */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumNetConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C08956A0-1CD3-11D1-B1C5-00805FC1270E")
    IEnumNetConnection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ INetConnection __RPC_FAR *__RPC_FAR *rgelt,
            /* [out] */ ULONG __RPC_FAR *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumNetConnection __RPC_FAR *__RPC_FAR *ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumNetConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEnumNetConnection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEnumNetConnection __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEnumNetConnection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IEnumNetConnection __RPC_FAR * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ INetConnection __RPC_FAR *__RPC_FAR *rgelt,
            /* [out] */ ULONG __RPC_FAR *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            IEnumNetConnection __RPC_FAR * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IEnumNetConnection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IEnumNetConnection __RPC_FAR * This,
            /* [out] */ IEnumNetConnection __RPC_FAR *__RPC_FAR *ppenum);
        
        END_INTERFACE
    } IEnumNetConnectionVtbl;

    interface IEnumNetConnection
    {
        CONST_VTBL struct IEnumNetConnectionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumNetConnection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumNetConnection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumNetConnection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumNetConnection_Next(This,celt,rgelt,pceltFetched)	\
    (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched)

#define IEnumNetConnection_Skip(This,celt)	\
    (This)->lpVtbl -> Skip(This,celt)

#define IEnumNetConnection_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumNetConnection_Clone(This,ppenum)	\
    (This)->lpVtbl -> Clone(This,ppenum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IEnumNetConnection_Next_Proxy( 
    IEnumNetConnection __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ INetConnection __RPC_FAR *__RPC_FAR *rgelt,
    /* [out] */ ULONG __RPC_FAR *pceltFetched);


void __RPC_STUB IEnumNetConnection_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumNetConnection_Skip_Proxy( 
    IEnumNetConnection __RPC_FAR * This,
    /* [in] */ ULONG celt);


void __RPC_STUB IEnumNetConnection_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumNetConnection_Reset_Proxy( 
    IEnumNetConnection __RPC_FAR * This);


void __RPC_STUB IEnumNetConnection_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumNetConnection_Clone_Proxy( 
    IEnumNetConnection __RPC_FAR * This,
    /* [out] */ IEnumNetConnection __RPC_FAR *__RPC_FAR *ppenum);


void __RPC_STUB IEnumNetConnection_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumNetConnection_INTERFACE_DEFINED__ */


#ifndef __INetConnection_INTERFACE_DEFINED__
#define __INetConnection_INTERFACE_DEFINED__

/* interface INetConnection */
/* [unique][uuid][object] */ 

typedef 
enum tagNETCON_CHARACTERISTIC_FLAGS
    {	NCCF_NONE	= 0,
	NCCF_ALL_USERS	= 0x1,
	NCCF_ALLOW_DUPLICATION	= 0x2,
	NCCF_ALLOW_REMOVAL	= 0x4,
	NCCF_ALLOW_RENAME	= 0x8,
	NCCF_SHOW_ICON	= 0x10,
	NCCF_INCOMING_ONLY	= 0x20,
	NCCF_OUTGOING_ONLY	= 0x40,
	NCCF_BRANDED	= 0x80
    }	NETCON_CHARACTERISTIC_FLAGS;

typedef 
enum tagNETCON_STATUS
    {	NCS_DISCONNECTED	= 0,
	NCS_CONNECTING	= NCS_DISCONNECTED + 1,
	NCS_CONNECTED	= NCS_CONNECTING + 1,
	NCS_DISCONNECTING	= NCS_CONNECTED + 1,
	NCS_HARDWARE_NOT_PRESENT	= NCS_DISCONNECTING + 1,
	NCS_HARDWARE_DISABLED	= NCS_HARDWARE_NOT_PRESENT + 1,
	NCS_HARDWARE_MALFUNCTION	= NCS_HARDWARE_DISABLED + 1,
	NCS_MEDIA_DISCONNECTED	= NCS_HARDWARE_MALFUNCTION + 1
    }	NETCON_STATUS;

typedef 
enum tagNETCON_TYPE
    {	NCT_DIRECT_CONNECT	= 0,
	NCT_INBOUND	= NCT_DIRECT_CONNECT + 1,
	NCT_INTERNET	= NCT_INBOUND + 1,
	NCT_LAN	= NCT_INTERNET + 1,
	NCT_PHONE	= NCT_LAN + 1,
	NCT_TUNNEL	= NCT_PHONE + 1
    }	NETCON_TYPE;

typedef 
enum tagNETCON_MEDIATYPE
    {	NCM_NONE	= 0,
	NCM_DIRECT	= NCM_NONE + 1,
	NCM_ISDN	= NCM_DIRECT + 1,
	NCM_LAN	= NCM_ISDN + 1,
	NCM_PHONE	= NCM_LAN + 1,
	NCM_TUNNEL	= NCM_PHONE + 1
    }	NETCON_MEDIATYPE;

typedef struct tagNETCON_PROPERTIES
    {
    GUID guidId;
    /* [string] */ LPWSTR pszwName;
    /* [string] */ LPWSTR pszwDeviceName;
    NETCON_STATUS Status;
    NETCON_MEDIATYPE MediaType;
    DWORD dwCharacter;
    CLSID clsidThisObject;
    CLSID clsidUiObject;
    }	NETCON_PROPERTIES;

#define S_OBJECT_NO_LONGER_VALID ((HRESULT)0x00000002L)

EXTERN_C const IID IID_INetConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C08956A1-1CD3-11D1-B1C5-00805FC1270E")
    INetConnection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Connect( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Duplicate( 
            /* [string][in] */ LPCWSTR pszwDuplicateName,
            /* [out] */ INetConnection __RPC_FAR *__RPC_FAR *ppCon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ NETCON_PROPERTIES __RPC_FAR *__RPC_FAR *ppProps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUiObjectClassId( 
            /* [ref][out] */ CLSID __RPC_FAR *pclsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Rename( 
            /* [string][in] */ LPCWSTR pszwNewName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INetConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            INetConnection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            INetConnection __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            INetConnection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Connect )( 
            INetConnection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Disconnect )( 
            INetConnection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Delete )( 
            INetConnection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Duplicate )( 
            INetConnection __RPC_FAR * This,
            /* [string][in] */ LPCWSTR pszwDuplicateName,
            /* [out] */ INetConnection __RPC_FAR *__RPC_FAR *ppCon);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetProperties )( 
            INetConnection __RPC_FAR * This,
            /* [out] */ NETCON_PROPERTIES __RPC_FAR *__RPC_FAR *ppProps);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetUiObjectClassId )( 
            INetConnection __RPC_FAR * This,
            /* [ref][out] */ CLSID __RPC_FAR *pclsid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Rename )( 
            INetConnection __RPC_FAR * This,
            /* [string][in] */ LPCWSTR pszwNewName);
        
        END_INTERFACE
    } INetConnectionVtbl;

    interface INetConnection
    {
        CONST_VTBL struct INetConnectionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetConnection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define INetConnection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define INetConnection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define INetConnection_Connect(This)	\
    (This)->lpVtbl -> Connect(This)

#define INetConnection_Disconnect(This)	\
    (This)->lpVtbl -> Disconnect(This)

#define INetConnection_Delete(This)	\
    (This)->lpVtbl -> Delete(This)

#define INetConnection_Duplicate(This,pszwDuplicateName,ppCon)	\
    (This)->lpVtbl -> Duplicate(This,pszwDuplicateName,ppCon)

#define INetConnection_GetProperties(This,ppProps)	\
    (This)->lpVtbl -> GetProperties(This,ppProps)

#define INetConnection_GetUiObjectClassId(This,pclsid)	\
    (This)->lpVtbl -> GetUiObjectClassId(This,pclsid)

#define INetConnection_Rename(This,pszwNewName)	\
    (This)->lpVtbl -> Rename(This,pszwNewName)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE INetConnection_Connect_Proxy( 
    INetConnection __RPC_FAR * This);


void __RPC_STUB INetConnection_Connect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INetConnection_Disconnect_Proxy( 
    INetConnection __RPC_FAR * This);


void __RPC_STUB INetConnection_Disconnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INetConnection_Delete_Proxy( 
    INetConnection __RPC_FAR * This);


void __RPC_STUB INetConnection_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INetConnection_Duplicate_Proxy( 
    INetConnection __RPC_FAR * This,
    /* [string][in] */ LPCWSTR pszwDuplicateName,
    /* [out] */ INetConnection __RPC_FAR *__RPC_FAR *ppCon);


void __RPC_STUB INetConnection_Duplicate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INetConnection_GetProperties_Proxy( 
    INetConnection __RPC_FAR * This,
    /* [out] */ NETCON_PROPERTIES __RPC_FAR *__RPC_FAR *ppProps);


void __RPC_STUB INetConnection_GetProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INetConnection_GetUiObjectClassId_Proxy( 
    INetConnection __RPC_FAR * This,
    /* [ref][out] */ CLSID __RPC_FAR *pclsid);


void __RPC_STUB INetConnection_GetUiObjectClassId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INetConnection_Rename_Proxy( 
    INetConnection __RPC_FAR * This,
    /* [string][in] */ LPCWSTR pszwNewName);


void __RPC_STUB INetConnection_Rename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __INetConnection_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_netcon_0011 */
/* [local] */ 


STDAPI_(VOID) NcFreeNetconProperties (NETCON_PROPERTIES* pProps);


STDAPI_(BOOL) NcIsValidConnectionName (PCWSTR pszwName);



extern RPC_IF_HANDLE __MIDL_itf_netcon_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netcon_0011_v0_0_s_ifspec;

#ifndef __INetConnectionManager_INTERFACE_DEFINED__
#define __INetConnectionManager_INTERFACE_DEFINED__

/* interface INetConnectionManager */
/* [unique][uuid][object] */ 

typedef 
enum tagNETCONMGR_ENUM_FLAGS
    {	NCME_DEFAULT	= 0
    }	NETCONMGR_ENUM_FLAGS;


EXTERN_C const IID IID_INetConnectionManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C08956A2-1CD3-11D1-B1C5-00805FC1270E")
    INetConnectionManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumConnections( 
            /* [in] */ NETCONMGR_ENUM_FLAGS Flags,
            /* [out] */ IEnumNetConnection __RPC_FAR *__RPC_FAR *ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INetConnectionManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            INetConnectionManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            INetConnectionManager __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            INetConnectionManager __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumConnections )( 
            INetConnectionManager __RPC_FAR * This,
            /* [in] */ NETCONMGR_ENUM_FLAGS Flags,
            /* [out] */ IEnumNetConnection __RPC_FAR *__RPC_FAR *ppEnum);
        
        END_INTERFACE
    } INetConnectionManagerVtbl;

    interface INetConnectionManager
    {
        CONST_VTBL struct INetConnectionManagerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetConnectionManager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define INetConnectionManager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define INetConnectionManager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define INetConnectionManager_EnumConnections(This,Flags,ppEnum)	\
    (This)->lpVtbl -> EnumConnections(This,Flags,ppEnum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE INetConnectionManager_EnumConnections_Proxy( 
    INetConnectionManager __RPC_FAR * This,
    /* [in] */ NETCONMGR_ENUM_FLAGS Flags,
    /* [out] */ IEnumNetConnection __RPC_FAR *__RPC_FAR *ppEnum);


void __RPC_STUB INetConnectionManager_EnumConnections_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __INetConnectionManager_INTERFACE_DEFINED__ */


#ifndef __INetConnectionConnectUi_INTERFACE_DEFINED__
#define __INetConnectionConnectUi_INTERFACE_DEFINED__

/* interface INetConnectionConnectUi */
/* [unique][uuid][object][local] */ 

typedef 
enum tagNETCONUI_CONNECT_FLAGS
    {	NCUC_DEFAULT	= 0,
	NCUC_NO_UI	= 0x1
    }	NETCONUI_CONNECT_FLAGS;


EXTERN_C const IID IID_INetConnectionConnectUi;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C08956A3-1CD3-11D1-B1C5-00805FC1270E")
    INetConnectionConnectUi : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetConnection( 
            /* [in] */ INetConnection __RPC_FAR *pCon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Connect( 
            /* [in] */ HWND hwndParent,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Disconnect( 
            /* [in] */ HWND hwndParent,
            /* [in] */ DWORD dwFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INetConnectionConnectUiVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            INetConnectionConnectUi __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            INetConnectionConnectUi __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            INetConnectionConnectUi __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetConnection )( 
            INetConnectionConnectUi __RPC_FAR * This,
            /* [in] */ INetConnection __RPC_FAR *pCon);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Connect )( 
            INetConnectionConnectUi __RPC_FAR * This,
            /* [in] */ HWND hwndParent,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Disconnect )( 
            INetConnectionConnectUi __RPC_FAR * This,
            /* [in] */ HWND hwndParent,
            /* [in] */ DWORD dwFlags);
        
        END_INTERFACE
    } INetConnectionConnectUiVtbl;

    interface INetConnectionConnectUi
    {
        CONST_VTBL struct INetConnectionConnectUiVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetConnectionConnectUi_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define INetConnectionConnectUi_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define INetConnectionConnectUi_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define INetConnectionConnectUi_SetConnection(This,pCon)	\
    (This)->lpVtbl -> SetConnection(This,pCon)

#define INetConnectionConnectUi_Connect(This,hwndParent,dwFlags)	\
    (This)->lpVtbl -> Connect(This,hwndParent,dwFlags)

#define INetConnectionConnectUi_Disconnect(This,hwndParent,dwFlags)	\
    (This)->lpVtbl -> Disconnect(This,hwndParent,dwFlags)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE INetConnectionConnectUi_SetConnection_Proxy( 
    INetConnectionConnectUi __RPC_FAR * This,
    /* [in] */ INetConnection __RPC_FAR *pCon);


void __RPC_STUB INetConnectionConnectUi_SetConnection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INetConnectionConnectUi_Connect_Proxy( 
    INetConnectionConnectUi __RPC_FAR * This,
    /* [in] */ HWND hwndParent,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB INetConnectionConnectUi_Connect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INetConnectionConnectUi_Disconnect_Proxy( 
    INetConnectionConnectUi __RPC_FAR * This,
    /* [in] */ HWND hwndParent,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB INetConnectionConnectUi_Disconnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __INetConnectionConnectUi_INTERFACE_DEFINED__ */


#ifndef __INetConnectionPropertyUi_INTERFACE_DEFINED__
#define __INetConnectionPropertyUi_INTERFACE_DEFINED__

/* interface INetConnectionPropertyUi */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_INetConnectionPropertyUi;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C08956A4-1CD3-11D1-B1C5-00805FC1270E")
    INetConnectionPropertyUi : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetConnection( 
            /* [in] */ INetConnection __RPC_FAR *pCon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPages( 
            /* [in] */ HWND hwndParent,
            /* [in] */ LPFNADDPROPSHEETPAGE pfnAddPage,
            /* [in] */ LPARAM lParam) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INetConnectionPropertyUiVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            INetConnectionPropertyUi __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            INetConnectionPropertyUi __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            INetConnectionPropertyUi __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetConnection )( 
            INetConnectionPropertyUi __RPC_FAR * This,
            /* [in] */ INetConnection __RPC_FAR *pCon);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddPages )( 
            INetConnectionPropertyUi __RPC_FAR * This,
            /* [in] */ HWND hwndParent,
            /* [in] */ LPFNADDPROPSHEETPAGE pfnAddPage,
            /* [in] */ LPARAM lParam);
        
        END_INTERFACE
    } INetConnectionPropertyUiVtbl;

    interface INetConnectionPropertyUi
    {
        CONST_VTBL struct INetConnectionPropertyUiVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetConnectionPropertyUi_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define INetConnectionPropertyUi_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define INetConnectionPropertyUi_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define INetConnectionPropertyUi_SetConnection(This,pCon)	\
    (This)->lpVtbl -> SetConnection(This,pCon)

#define INetConnectionPropertyUi_AddPages(This,hwndParent,pfnAddPage,lParam)	\
    (This)->lpVtbl -> AddPages(This,hwndParent,pfnAddPage,lParam)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE INetConnectionPropertyUi_SetConnection_Proxy( 
    INetConnectionPropertyUi __RPC_FAR * This,
    /* [in] */ INetConnection __RPC_FAR *pCon);


void __RPC_STUB INetConnectionPropertyUi_SetConnection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INetConnectionPropertyUi_AddPages_Proxy( 
    INetConnectionPropertyUi __RPC_FAR * This,
    /* [in] */ HWND hwndParent,
    /* [in] */ LPFNADDPROPSHEETPAGE pfnAddPage,
    /* [in] */ LPARAM lParam);


void __RPC_STUB INetConnectionPropertyUi_AddPages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __INetConnectionPropertyUi_INTERFACE_DEFINED__ */


#ifndef __INetConnectionCommonUi_INTERFACE_DEFINED__
#define __INetConnectionCommonUi_INTERFACE_DEFINED__

/* interface INetConnectionCommonUi */
/* [unique][uuid][object][local] */ 

typedef 
enum tagNETCON_CHOOSEFLAGS
    {	NCCHF_CONNECT	= 0x1,
	NCCHF_CAPTION	= 0x2,
	NCCHF_OKBTTNTEXT	= 0x4,
	NCCHF_DISABLENEW	= 0x8,
	NCCHF_AUTOSELECT	= 0x10
    }	NETCON_CHOOSEFLAGS;

typedef 
enum tagNETCON_CHOOSETYPE
    {	NCCHT_DIRECT_CONNECT	= 0x1,
	NCCHT_LAN	= 0x2,
	NCCHT_PHONE	= 0x4,
	NCCHT_TUNNEL	= 0x8,
	NCCHT_ISDN	= 0x10,
	NCCHT_ALL	= 0x1f
    }	NETCON_CHOOSETYPE;

typedef struct tagNETCON_CHOOSECONN
    {
    DWORD lStructSize;
    HWND hwndParent;
    DWORD dwFlags;
    DWORD dwTypeMask;
    LPCWSTR lpstrCaption;
    LPCWSTR lpstrOkBttnText;
    }	NETCON_CHOOSECONN;


EXTERN_C const IID IID_INetConnectionCommonUi;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C08956A5-1CD3-11D1-B1C5-00805FC1270E")
    INetConnectionCommonUi : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ChooseConnection( 
            /* [in] */ NETCON_CHOOSECONN __RPC_FAR *pChooseConn,
            /* [out] */ INetConnection __RPC_FAR *__RPC_FAR *ppCon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowConnectionProperties( 
            /* [in] */ HWND hwndParent,
            /* [in] */ INetConnection __RPC_FAR *pCon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartNewConnectionWizard( 
            /* [in] */ HWND hwndParent,
            /* [out] */ INetConnection __RPC_FAR *__RPC_FAR *ppCon) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INetConnectionCommonUiVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            INetConnectionCommonUi __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            INetConnectionCommonUi __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            INetConnectionCommonUi __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ChooseConnection )( 
            INetConnectionCommonUi __RPC_FAR * This,
            /* [in] */ NETCON_CHOOSECONN __RPC_FAR *pChooseConn,
            /* [out] */ INetConnection __RPC_FAR *__RPC_FAR *ppCon);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ShowConnectionProperties )( 
            INetConnectionCommonUi __RPC_FAR * This,
            /* [in] */ HWND hwndParent,
            /* [in] */ INetConnection __RPC_FAR *pCon);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StartNewConnectionWizard )( 
            INetConnectionCommonUi __RPC_FAR * This,
            /* [in] */ HWND hwndParent,
            /* [out] */ INetConnection __RPC_FAR *__RPC_FAR *ppCon);
        
        END_INTERFACE
    } INetConnectionCommonUiVtbl;

    interface INetConnectionCommonUi
    {
        CONST_VTBL struct INetConnectionCommonUiVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetConnectionCommonUi_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define INetConnectionCommonUi_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define INetConnectionCommonUi_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define INetConnectionCommonUi_ChooseConnection(This,pChooseConn,ppCon)	\
    (This)->lpVtbl -> ChooseConnection(This,pChooseConn,ppCon)

#define INetConnectionCommonUi_ShowConnectionProperties(This,hwndParent,pCon)	\
    (This)->lpVtbl -> ShowConnectionProperties(This,hwndParent,pCon)

#define INetConnectionCommonUi_StartNewConnectionWizard(This,hwndParent,ppCon)	\
    (This)->lpVtbl -> StartNewConnectionWizard(This,hwndParent,ppCon)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE INetConnectionCommonUi_ChooseConnection_Proxy( 
    INetConnectionCommonUi __RPC_FAR * This,
    /* [in] */ NETCON_CHOOSECONN __RPC_FAR *pChooseConn,
    /* [out] */ INetConnection __RPC_FAR *__RPC_FAR *ppCon);


void __RPC_STUB INetConnectionCommonUi_ChooseConnection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INetConnectionCommonUi_ShowConnectionProperties_Proxy( 
    INetConnectionCommonUi __RPC_FAR * This,
    /* [in] */ HWND hwndParent,
    /* [in] */ INetConnection __RPC_FAR *pCon);


void __RPC_STUB INetConnectionCommonUi_ShowConnectionProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INetConnectionCommonUi_StartNewConnectionWizard_Proxy( 
    INetConnectionCommonUi __RPC_FAR * This,
    /* [in] */ HWND hwndParent,
    /* [out] */ INetConnection __RPC_FAR *__RPC_FAR *ppCon);


void __RPC_STUB INetConnectionCommonUi_StartNewConnectionWizard_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __INetConnectionCommonUi_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


