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


 /* File created by MIDL compiler version 5.03.0279 */
/* at Tue Feb 05 14:31:05 2002
 */
/* Compiler settings for .\msident.idl:
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

#ifndef __msident_h__
#define __msident_h__

/* Forward Declarations */ 

#ifndef __IUserIdentity_FWD_DEFINED__
#define __IUserIdentity_FWD_DEFINED__
typedef interface IUserIdentity IUserIdentity;
#endif 	/* __IUserIdentity_FWD_DEFINED__ */


#ifndef __IEnumUserIdentity_FWD_DEFINED__
#define __IEnumUserIdentity_FWD_DEFINED__
typedef interface IEnumUserIdentity IEnumUserIdentity;
#endif 	/* __IEnumUserIdentity_FWD_DEFINED__ */


#ifndef __IUserIdentityManager_FWD_DEFINED__
#define __IUserIdentityManager_FWD_DEFINED__
typedef interface IUserIdentityManager IUserIdentityManager;
#endif 	/* __IUserIdentityManager_FWD_DEFINED__ */


#ifndef __IIdentityChangeNotify_FWD_DEFINED__
#define __IIdentityChangeNotify_FWD_DEFINED__
typedef interface IIdentityChangeNotify IIdentityChangeNotify;
#endif 	/* __IIdentityChangeNotify_FWD_DEFINED__ */


#ifndef __IPrivateIdentityManager_FWD_DEFINED__
#define __IPrivateIdentityManager_FWD_DEFINED__
typedef interface IPrivateIdentityManager IPrivateIdentityManager;
#endif 	/* __IPrivateIdentityManager_FWD_DEFINED__ */


#ifndef __IPrivateIdentityManager2_FWD_DEFINED__
#define __IPrivateIdentityManager2_FWD_DEFINED__
typedef interface IPrivateIdentityManager2 IPrivateIdentityManager2;
#endif 	/* __IPrivateIdentityManager2_FWD_DEFINED__ */


#ifndef __IUserIdentity2_FWD_DEFINED__
#define __IUserIdentity2_FWD_DEFINED__
typedef interface IUserIdentity2 IUserIdentity2;
#endif 	/* __IUserIdentity2_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_msident_0000 */
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

#pragma comment(lib,"uuid.lib")

//---------------------------------------------------------------------------=
// Lightweight User Profile Interfaces.

// --------------------------------------------------------------------------------
// GUIDS
// --------------------------------------------------------------------------------
// {A9AE6C91-1D1B-11D2-B21A-00C04FA357FA}
DEFINE_GUID(CLSID_UserIdentityManager, 0xa9ae6C91, 0x1d1b, 0x11d2, 0xb2, 0x1a, 0x0, 0xc0, 0x4f, 0xa3, 0x57, 0xfa);
// {A9AE6C8E-1D1B-11D2-B21A-00C04FA357FA}
DEFINE_GUID(IID_IUserIdentity, 0xa9ae6C8e, 0x1d1b, 0x11d2, 0xb2, 0x1a, 0x0, 0xc0, 0x4f, 0xa3, 0x57, 0xfa);
// {A9AE6C8F-1D1B-11D2-B21A-00C04FA357FA}
DEFINE_GUID(IID_IEnumUserIdentity, 0xa9ae6C8f, 0x1d1b, 0x11d2, 0xb2, 0x1a, 0x0, 0xc0, 0x4f, 0xa3, 0x57, 0xfa);
// {A9AE6C90-1D1B-11D2-B21A-00C04FA357FA}
DEFINE_GUID(IID_IUserIdentityManager, 0xa9ae6C90, 0x1d1b, 0x11d2, 0xb2, 0x1a, 0x0, 0xc0, 0x4f, 0xa3, 0x57, 0xfa);
// {A9AE6C92-1D1B-11D2-B21A-00C04FA357FA}
DEFINE_GUID(IID_IIdentityChangeNotify, 0xa9ae6C92, 0x1d1b, 0x11d2, 0xb2, 0x1a, 0x0, 0xc0, 0x4f, 0xa3, 0x57, 0xfa);
// {A9AE6C93-1D1B-11D2-B21A-00C04FA357FA}
DEFINE_GUID(IID_IPrivateIdentityManager, 0xa9ae6C93, 0x1d1b, 0x11d2, 0xb2, 0x1a, 0x0, 0xc0, 0x4f, 0xa3, 0x57, 0xfa);
// {A9AE6C94-1D1B-11D2-B21A-00C04FA357FA}
DEFINE_GUID(IID_IUserIdentity2, 0xa9ae6C94, 0x1d1b, 0x11d2, 0xb2, 0x1a, 0x0, 0xc0, 0x4f, 0xa3, 0x57, 0xfa);
// {47172E6C-EA67-4ccd-B5CE-2EABBE051404}
DEFINE_GUID(IID_IPrivateIdentityManager2, 0x47172e6c, 0xea67, 0x4ccd, 0xb5, 0xce, 0x2e, 0xab, 0xbe, 0x5, 0x14, 0x4);
// {C28E26E6-219D-11d2-B200-0000F8085266}
DEFINE_GUID(UID_GIBC_DEFAULT_USER, 0xc28e26e6, 0x219d, 0x11d2, 0xb2, 0x0, 0x0, 0x0, 0xf8, 0x8, 0x52, 0x66);
// {C28E26E7-219D-11d2-B200-0000F8085266}
DEFINE_GUID(UID_GIBC_CURRENT_USER, 0xc28e26e7, 0x219d, 0x11d2, 0xb2, 0x0, 0x0, 0x0, 0xf8, 0x8, 0x52, 0x66);
// {C28E26E8-219D-11d2-B200-0000F8085266}
DEFINE_GUID(UID_GIBC_OUTGOING_USER, 0xc28e26e8, 0x219d, 0x11d2, 0xb2, 0x0, 0x0, 0x0, 0xf8, 0x8, 0x52, 0x66);
// {C28E26E9-219D-11d2-B200-0000F8085266}
DEFINE_GUID(UID_GIBC_INCOMING_USER, 0xc28e26e9, 0x219d, 0x11d2, 0xb2, 0x0, 0x0, 0x0, 0xf8, 0x8, 0x52, 0x66);

// --------------------------------------------------------------------------------
// ERROR CODES
// --------------------------------------------------------------------------------
#define E_IDENTITIES_DISABLED                           _HRESULT_TYPEDEF_(0x80007110L)
#define S_IDENTITIES_DISABLED                           _HRESULT_TYPEDEF_(0x00007110L)
#define E_NO_CURRENT_IDENTITY                           _HRESULT_TYPEDEF_(0x80007111L)
#define E_USER_CANCELLED                                _HRESULT_TYPEDEF_(0x80007112L)
#define E_PROCESS_CANCELLED_SWITCH                      _HRESULT_TYPEDEF_(0x80007113L)
#define E_IDENTITY_NOT_FOUND                            _HRESULT_TYPEDEF_(0x80007114L)
#define E_IDENTITY_EXISTS                               _HRESULT_TYPEDEF_(0x80007115L)
#define E_IDENTITY_CHANGING                             _HRESULT_TYPEDEF_(0x80007116L)

#define CCH_IDENTITY_NAME_MAX_LENGTH                         (63)


extern RPC_IF_HANDLE __MIDL_itf_msident_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msident_0000_v0_0_s_ifspec;

#ifndef __IUserIdentity_INTERFACE_DEFINED__
#define __IUserIdentity_INTERFACE_DEFINED__

/* interface IUserIdentity */
/* [object][helpstring][uuid] */ 

#define GIF_ROAMING_FOLDER            0x00000001
#define GIF_NON_ROAMING_FOLDER        0x00000002

EXTERN_C const IID IID_IUserIdentity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9AE6C8E-1D1B-11D2-B21A-00C04FA357FA")
    IUserIdentity : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCookie( 
            /* [out] */ GUID __RPC_FAR *puidCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ WCHAR __RPC_FAR *pszName,
            /* [in] */ ULONG ulBuffSize) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE OpenIdentityRegKey( 
            /* [in] */ DWORD dwDesiredAccess,
            /* [out] */ HKEY __RPC_FAR *phKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIdentityFolder( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ WCHAR __RPC_FAR *pszPath,
            /* [in] */ ULONG ulBuffSize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUserIdentityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUserIdentity __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUserIdentity __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUserIdentity __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCookie )( 
            IUserIdentity __RPC_FAR * This,
            /* [out] */ GUID __RPC_FAR *puidCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetName )( 
            IUserIdentity __RPC_FAR * This,
            /* [in] */ WCHAR __RPC_FAR *pszName,
            /* [in] */ ULONG ulBuffSize);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OpenIdentityRegKey )( 
            IUserIdentity __RPC_FAR * This,
            /* [in] */ DWORD dwDesiredAccess,
            /* [out] */ HKEY __RPC_FAR *phKey);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIdentityFolder )( 
            IUserIdentity __RPC_FAR * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ WCHAR __RPC_FAR *pszPath,
            /* [in] */ ULONG ulBuffSize);
        
        END_INTERFACE
    } IUserIdentityVtbl;

    interface IUserIdentity
    {
        CONST_VTBL struct IUserIdentityVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUserIdentity_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUserIdentity_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUserIdentity_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUserIdentity_GetCookie(This,puidCookie)	\
    (This)->lpVtbl -> GetCookie(This,puidCookie)

#define IUserIdentity_GetName(This,pszName,ulBuffSize)	\
    (This)->lpVtbl -> GetName(This,pszName,ulBuffSize)

#define IUserIdentity_OpenIdentityRegKey(This,dwDesiredAccess,phKey)	\
    (This)->lpVtbl -> OpenIdentityRegKey(This,dwDesiredAccess,phKey)

#define IUserIdentity_GetIdentityFolder(This,dwFlags,pszPath,ulBuffSize)	\
    (This)->lpVtbl -> GetIdentityFolder(This,dwFlags,pszPath,ulBuffSize)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IUserIdentity_GetCookie_Proxy( 
    IUserIdentity __RPC_FAR * This,
    /* [out] */ GUID __RPC_FAR *puidCookie);


void __RPC_STUB IUserIdentity_GetCookie_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUserIdentity_GetName_Proxy( 
    IUserIdentity __RPC_FAR * This,
    /* [in] */ WCHAR __RPC_FAR *pszName,
    /* [in] */ ULONG ulBuffSize);


void __RPC_STUB IUserIdentity_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [local] */ HRESULT STDMETHODCALLTYPE IUserIdentity_OpenIdentityRegKey_Proxy( 
    IUserIdentity __RPC_FAR * This,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ HKEY __RPC_FAR *phKey);


void __RPC_STUB IUserIdentity_OpenIdentityRegKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUserIdentity_GetIdentityFolder_Proxy( 
    IUserIdentity __RPC_FAR * This,
    /* [in] */ DWORD dwFlags,
    /* [in] */ WCHAR __RPC_FAR *pszPath,
    /* [in] */ ULONG ulBuffSize);


void __RPC_STUB IUserIdentity_GetIdentityFolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUserIdentity_INTERFACE_DEFINED__ */


#ifndef __IEnumUserIdentity_INTERFACE_DEFINED__
#define __IEnumUserIdentity_INTERFACE_DEFINED__

/* interface IEnumUserIdentity */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IEnumUserIdentity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9AE6C8F-1D1B-11D2-B21A-00C04FA357FA")
    IEnumUserIdentity : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *rgelt,
            /* [out] */ ULONG __RPC_FAR *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumUserIdentity __RPC_FAR *__RPC_FAR *ppenum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ ULONG __RPC_FAR *pnCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumUserIdentityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEnumUserIdentity __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEnumUserIdentity __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEnumUserIdentity __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IEnumUserIdentity __RPC_FAR * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *rgelt,
            /* [out] */ ULONG __RPC_FAR *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            IEnumUserIdentity __RPC_FAR * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IEnumUserIdentity __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IEnumUserIdentity __RPC_FAR * This,
            /* [out] */ IEnumUserIdentity __RPC_FAR *__RPC_FAR *ppenum);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCount )( 
            IEnumUserIdentity __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pnCount);
        
        END_INTERFACE
    } IEnumUserIdentityVtbl;

    interface IEnumUserIdentity
    {
        CONST_VTBL struct IEnumUserIdentityVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumUserIdentity_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumUserIdentity_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumUserIdentity_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumUserIdentity_Next(This,celt,rgelt,pceltFetched)	\
    (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched)

#define IEnumUserIdentity_Skip(This,celt)	\
    (This)->lpVtbl -> Skip(This,celt)

#define IEnumUserIdentity_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumUserIdentity_Clone(This,ppenum)	\
    (This)->lpVtbl -> Clone(This,ppenum)

#define IEnumUserIdentity_GetCount(This,pnCount)	\
    (This)->lpVtbl -> GetCount(This,pnCount)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IEnumUserIdentity_Next_Proxy( 
    IEnumUserIdentity __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *rgelt,
    /* [out] */ ULONG __RPC_FAR *pceltFetched);


void __RPC_STUB IEnumUserIdentity_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumUserIdentity_Skip_Proxy( 
    IEnumUserIdentity __RPC_FAR * This,
    /* [in] */ ULONG celt);


void __RPC_STUB IEnumUserIdentity_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumUserIdentity_Reset_Proxy( 
    IEnumUserIdentity __RPC_FAR * This);


void __RPC_STUB IEnumUserIdentity_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumUserIdentity_Clone_Proxy( 
    IEnumUserIdentity __RPC_FAR * This,
    /* [out] */ IEnumUserIdentity __RPC_FAR *__RPC_FAR *ppenum);


void __RPC_STUB IEnumUserIdentity_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumUserIdentity_GetCount_Proxy( 
    IEnumUserIdentity __RPC_FAR * This,
    /* [out] */ ULONG __RPC_FAR *pnCount);


void __RPC_STUB IEnumUserIdentity_GetCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumUserIdentity_INTERFACE_DEFINED__ */


#ifndef __IUserIdentityManager_INTERFACE_DEFINED__
#define __IUserIdentityManager_INTERFACE_DEFINED__

/* interface IUserIdentityManager */
/* [object][helpstring][uuid] */ 

#define UIMI_CREATE_NEW_IDENTITY        0x00000001
#define UIL_FORCE_UI        0x80000001

EXTERN_C const IID IID_IUserIdentityManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9AE6C90-1D1B-11D2-B21A-00C04FA357FA")
    IUserIdentityManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumIdentities( 
            /* [out] */ IEnumUserIdentity __RPC_FAR *__RPC_FAR *ppEnumUser) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ManageIdentities( 
            /* [in] */ HWND hwndParent,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Logon( 
            /* [in] */ HWND hwndParent,
            /* [in] */ DWORD dwFlags,
            /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Logoff( 
            /* [in] */ HWND hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIdentityByCookie( 
            /* [in] */ GUID __RPC_FAR *uidCookie,
            /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUserIdentityManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUserIdentityManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUserIdentityManager __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUserIdentityManager __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumIdentities )( 
            IUserIdentityManager __RPC_FAR * This,
            /* [out] */ IEnumUserIdentity __RPC_FAR *__RPC_FAR *ppEnumUser);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ManageIdentities )( 
            IUserIdentityManager __RPC_FAR * This,
            /* [in] */ HWND hwndParent,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Logon )( 
            IUserIdentityManager __RPC_FAR * This,
            /* [in] */ HWND hwndParent,
            /* [in] */ DWORD dwFlags,
            /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Logoff )( 
            IUserIdentityManager __RPC_FAR * This,
            /* [in] */ HWND hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIdentityByCookie )( 
            IUserIdentityManager __RPC_FAR * This,
            /* [in] */ GUID __RPC_FAR *uidCookie,
            /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity);
        
        END_INTERFACE
    } IUserIdentityManagerVtbl;

    interface IUserIdentityManager
    {
        CONST_VTBL struct IUserIdentityManagerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUserIdentityManager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUserIdentityManager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUserIdentityManager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUserIdentityManager_EnumIdentities(This,ppEnumUser)	\
    (This)->lpVtbl -> EnumIdentities(This,ppEnumUser)

#define IUserIdentityManager_ManageIdentities(This,hwndParent,dwFlags)	\
    (This)->lpVtbl -> ManageIdentities(This,hwndParent,dwFlags)

#define IUserIdentityManager_Logon(This,hwndParent,dwFlags,ppIdentity)	\
    (This)->lpVtbl -> Logon(This,hwndParent,dwFlags,ppIdentity)

#define IUserIdentityManager_Logoff(This,hwndParent)	\
    (This)->lpVtbl -> Logoff(This,hwndParent)

#define IUserIdentityManager_GetIdentityByCookie(This,uidCookie,ppIdentity)	\
    (This)->lpVtbl -> GetIdentityByCookie(This,uidCookie,ppIdentity)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IUserIdentityManager_EnumIdentities_Proxy( 
    IUserIdentityManager __RPC_FAR * This,
    /* [out] */ IEnumUserIdentity __RPC_FAR *__RPC_FAR *ppEnumUser);


void __RPC_STUB IUserIdentityManager_EnumIdentities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUserIdentityManager_ManageIdentities_Proxy( 
    IUserIdentityManager __RPC_FAR * This,
    /* [in] */ HWND hwndParent,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IUserIdentityManager_ManageIdentities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUserIdentityManager_Logon_Proxy( 
    IUserIdentityManager __RPC_FAR * This,
    /* [in] */ HWND hwndParent,
    /* [in] */ DWORD dwFlags,
    /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity);


void __RPC_STUB IUserIdentityManager_Logon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUserIdentityManager_Logoff_Proxy( 
    IUserIdentityManager __RPC_FAR * This,
    /* [in] */ HWND hwndParent);


void __RPC_STUB IUserIdentityManager_Logoff_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUserIdentityManager_GetIdentityByCookie_Proxy( 
    IUserIdentityManager __RPC_FAR * This,
    /* [in] */ GUID __RPC_FAR *uidCookie,
    /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity);


void __RPC_STUB IUserIdentityManager_GetIdentityByCookie_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUserIdentityManager_INTERFACE_DEFINED__ */


#ifndef __IIdentityChangeNotify_INTERFACE_DEFINED__
#define __IIdentityChangeNotify_INTERFACE_DEFINED__

/* interface IIdentityChangeNotify */
/* [object][helpstring][uuid] */ 

#define IIC_CURRENT_IDENTITY_CHANGED      0x00000001
#define IIC_IDENTITY_CHANGED              0x00000002
#define IIC_IDENTITY_DELETED              0x00000004
#define IIC_IDENTITY_ADDED                0x00000008

EXTERN_C const IID IID_IIdentityChangeNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9AE6C92-1D1B-11D2-B21A-00C04FA357FA")
    IIdentityChangeNotify : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QuerySwitchIdentities( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SwitchIdentities( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IdentityInformationChanged( 
            DWORD dwType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IIdentityChangeNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IIdentityChangeNotify __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IIdentityChangeNotify __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IIdentityChangeNotify __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QuerySwitchIdentities )( 
            IIdentityChangeNotify __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SwitchIdentities )( 
            IIdentityChangeNotify __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IdentityInformationChanged )( 
            IIdentityChangeNotify __RPC_FAR * This,
            DWORD dwType);
        
        END_INTERFACE
    } IIdentityChangeNotifyVtbl;

    interface IIdentityChangeNotify
    {
        CONST_VTBL struct IIdentityChangeNotifyVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIdentityChangeNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IIdentityChangeNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IIdentityChangeNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IIdentityChangeNotify_QuerySwitchIdentities(This)	\
    (This)->lpVtbl -> QuerySwitchIdentities(This)

#define IIdentityChangeNotify_SwitchIdentities(This)	\
    (This)->lpVtbl -> SwitchIdentities(This)

#define IIdentityChangeNotify_IdentityInformationChanged(This,dwType)	\
    (This)->lpVtbl -> IdentityInformationChanged(This,dwType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IIdentityChangeNotify_QuerySwitchIdentities_Proxy( 
    IIdentityChangeNotify __RPC_FAR * This);


void __RPC_STUB IIdentityChangeNotify_QuerySwitchIdentities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IIdentityChangeNotify_SwitchIdentities_Proxy( 
    IIdentityChangeNotify __RPC_FAR * This);


void __RPC_STUB IIdentityChangeNotify_SwitchIdentities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IIdentityChangeNotify_IdentityInformationChanged_Proxy( 
    IIdentityChangeNotify __RPC_FAR * This,
    DWORD dwType);


void __RPC_STUB IIdentityChangeNotify_IdentityInformationChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IIdentityChangeNotify_INTERFACE_DEFINED__ */


#ifndef __IPrivateIdentityManager_INTERFACE_DEFINED__
#define __IPrivateIdentityManager_INTERFACE_DEFINED__

/* interface IPrivateIdentityManager */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IPrivateIdentityManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9AE6C93-1D1B-11D2-B21A-00C04FA357FA")
    IPrivateIdentityManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateIdentity( 
            /* [in] */ WCHAR __RPC_FAR *pszName,
            /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfirmPassword( 
            /* [in] */ GUID __RPC_FAR *uidCookie,
            /* [in] */ WCHAR __RPC_FAR *pszPassword) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPrivateIdentityManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPrivateIdentityManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPrivateIdentityManager __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPrivateIdentityManager __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateIdentity )( 
            IPrivateIdentityManager __RPC_FAR * This,
            /* [in] */ WCHAR __RPC_FAR *pszName,
            /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ConfirmPassword )( 
            IPrivateIdentityManager __RPC_FAR * This,
            /* [in] */ GUID __RPC_FAR *uidCookie,
            /* [in] */ WCHAR __RPC_FAR *pszPassword);
        
        END_INTERFACE
    } IPrivateIdentityManagerVtbl;

    interface IPrivateIdentityManager
    {
        CONST_VTBL struct IPrivateIdentityManagerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPrivateIdentityManager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPrivateIdentityManager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPrivateIdentityManager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPrivateIdentityManager_CreateIdentity(This,pszName,ppIdentity)	\
    (This)->lpVtbl -> CreateIdentity(This,pszName,ppIdentity)

#define IPrivateIdentityManager_ConfirmPassword(This,uidCookie,pszPassword)	\
    (This)->lpVtbl -> ConfirmPassword(This,uidCookie,pszPassword)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPrivateIdentityManager_CreateIdentity_Proxy( 
    IPrivateIdentityManager __RPC_FAR * This,
    /* [in] */ WCHAR __RPC_FAR *pszName,
    /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity);


void __RPC_STUB IPrivateIdentityManager_CreateIdentity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPrivateIdentityManager_ConfirmPassword_Proxy( 
    IPrivateIdentityManager __RPC_FAR * This,
    /* [in] */ GUID __RPC_FAR *uidCookie,
    /* [in] */ WCHAR __RPC_FAR *pszPassword);


void __RPC_STUB IPrivateIdentityManager_ConfirmPassword_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPrivateIdentityManager_INTERFACE_DEFINED__ */


#ifndef __IPrivateIdentityManager2_INTERFACE_DEFINED__
#define __IPrivateIdentityManager2_INTERFACE_DEFINED__

/* interface IPrivateIdentityManager2 */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IPrivateIdentityManager2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("15E84C92-2E4D-11d3-9C92-00104B35E7F9")
    IPrivateIdentityManager2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateIdentity2( 
            /* [in] */ WCHAR __RPC_FAR *pszName,
            /* [in] */ WCHAR __RPC_FAR *pszPassword,
            /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DestroyIdentity( 
            /* [in] */ GUID __RPC_FAR *uidCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LogonAs( 
            /* [in] */ WCHAR __RPC_FAR *pszName,
            /* [in] */ WCHAR __RPC_FAR *pszPassword,
            /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDefaultIdentity( 
            /* [in] */ GUID __RPC_FAR *puidCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultIdentity( 
            /* [out] */ GUID __RPC_FAR *puidCookie) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPrivateIdentityManager2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPrivateIdentityManager2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPrivateIdentityManager2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPrivateIdentityManager2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateIdentity2 )( 
            IPrivateIdentityManager2 __RPC_FAR * This,
            /* [in] */ WCHAR __RPC_FAR *pszName,
            /* [in] */ WCHAR __RPC_FAR *pszPassword,
            /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DestroyIdentity )( 
            IPrivateIdentityManager2 __RPC_FAR * This,
            /* [in] */ GUID __RPC_FAR *uidCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LogonAs )( 
            IPrivateIdentityManager2 __RPC_FAR * This,
            /* [in] */ WCHAR __RPC_FAR *pszName,
            /* [in] */ WCHAR __RPC_FAR *pszPassword,
            /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetDefaultIdentity )( 
            IPrivateIdentityManager2 __RPC_FAR * This,
            /* [in] */ GUID __RPC_FAR *puidCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDefaultIdentity )( 
            IPrivateIdentityManager2 __RPC_FAR * This,
            /* [out] */ GUID __RPC_FAR *puidCookie);
        
        END_INTERFACE
    } IPrivateIdentityManager2Vtbl;

    interface IPrivateIdentityManager2
    {
        CONST_VTBL struct IPrivateIdentityManager2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPrivateIdentityManager2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPrivateIdentityManager2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPrivateIdentityManager2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPrivateIdentityManager2_CreateIdentity2(This,pszName,pszPassword,ppIdentity)	\
    (This)->lpVtbl -> CreateIdentity2(This,pszName,pszPassword,ppIdentity)

#define IPrivateIdentityManager2_DestroyIdentity(This,uidCookie)	\
    (This)->lpVtbl -> DestroyIdentity(This,uidCookie)

#define IPrivateIdentityManager2_LogonAs(This,pszName,pszPassword,ppIdentity)	\
    (This)->lpVtbl -> LogonAs(This,pszName,pszPassword,ppIdentity)

#define IPrivateIdentityManager2_SetDefaultIdentity(This,puidCookie)	\
    (This)->lpVtbl -> SetDefaultIdentity(This,puidCookie)

#define IPrivateIdentityManager2_GetDefaultIdentity(This,puidCookie)	\
    (This)->lpVtbl -> GetDefaultIdentity(This,puidCookie)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPrivateIdentityManager2_CreateIdentity2_Proxy( 
    IPrivateIdentityManager2 __RPC_FAR * This,
    /* [in] */ WCHAR __RPC_FAR *pszName,
    /* [in] */ WCHAR __RPC_FAR *pszPassword,
    /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity);


void __RPC_STUB IPrivateIdentityManager2_CreateIdentity2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPrivateIdentityManager2_DestroyIdentity_Proxy( 
    IPrivateIdentityManager2 __RPC_FAR * This,
    /* [in] */ GUID __RPC_FAR *uidCookie);


void __RPC_STUB IPrivateIdentityManager2_DestroyIdentity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPrivateIdentityManager2_LogonAs_Proxy( 
    IPrivateIdentityManager2 __RPC_FAR * This,
    /* [in] */ WCHAR __RPC_FAR *pszName,
    /* [in] */ WCHAR __RPC_FAR *pszPassword,
    /* [out] */ IUserIdentity __RPC_FAR *__RPC_FAR *ppIdentity);


void __RPC_STUB IPrivateIdentityManager2_LogonAs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPrivateIdentityManager2_SetDefaultIdentity_Proxy( 
    IPrivateIdentityManager2 __RPC_FAR * This,
    /* [in] */ GUID __RPC_FAR *puidCookie);


void __RPC_STUB IPrivateIdentityManager2_SetDefaultIdentity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPrivateIdentityManager2_GetDefaultIdentity_Proxy( 
    IPrivateIdentityManager2 __RPC_FAR * This,
    /* [out] */ GUID __RPC_FAR *puidCookie);


void __RPC_STUB IPrivateIdentityManager2_GetDefaultIdentity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPrivateIdentityManager2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msident_0153 */
/* [local] */ 

extern const IID CLSID_UserIdentityManager;


extern RPC_IF_HANDLE __MIDL_itf_msident_0153_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msident_0153_v0_0_s_ifspec;

#ifndef __IUserIdentity2_INTERFACE_DEFINED__
#define __IUserIdentity2_INTERFACE_DEFINED__

/* interface IUserIdentity2 */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IUserIdentity2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9AE6C94-1D1B-11D2-B21A-00C04FA357FA")
    IUserIdentity2 : public IUserIdentity
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetOrdinal( 
            /* [out] */ DWORD __RPC_FAR *dwOrdinal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ WCHAR __RPC_FAR *pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ChangePassword( 
            /* [in] */ WCHAR __RPC_FAR *szOldPass,
            /* [in] */ WCHAR __RPC_FAR *szNewPass) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUserIdentity2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUserIdentity2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUserIdentity2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUserIdentity2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCookie )( 
            IUserIdentity2 __RPC_FAR * This,
            /* [out] */ GUID __RPC_FAR *puidCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetName )( 
            IUserIdentity2 __RPC_FAR * This,
            /* [in] */ WCHAR __RPC_FAR *pszName,
            /* [in] */ ULONG ulBuffSize);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OpenIdentityRegKey )( 
            IUserIdentity2 __RPC_FAR * This,
            /* [in] */ DWORD dwDesiredAccess,
            /* [out] */ HKEY __RPC_FAR *phKey);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIdentityFolder )( 
            IUserIdentity2 __RPC_FAR * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ WCHAR __RPC_FAR *pszPath,
            /* [in] */ ULONG ulBuffSize);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetOrdinal )( 
            IUserIdentity2 __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *dwOrdinal);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetName )( 
            IUserIdentity2 __RPC_FAR * This,
            /* [in] */ WCHAR __RPC_FAR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ChangePassword )( 
            IUserIdentity2 __RPC_FAR * This,
            /* [in] */ WCHAR __RPC_FAR *szOldPass,
            /* [in] */ WCHAR __RPC_FAR *szNewPass);
        
        END_INTERFACE
    } IUserIdentity2Vtbl;

    interface IUserIdentity2
    {
        CONST_VTBL struct IUserIdentity2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUserIdentity2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUserIdentity2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUserIdentity2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUserIdentity2_GetCookie(This,puidCookie)	\
    (This)->lpVtbl -> GetCookie(This,puidCookie)

#define IUserIdentity2_GetName(This,pszName,ulBuffSize)	\
    (This)->lpVtbl -> GetName(This,pszName,ulBuffSize)

#define IUserIdentity2_OpenIdentityRegKey(This,dwDesiredAccess,phKey)	\
    (This)->lpVtbl -> OpenIdentityRegKey(This,dwDesiredAccess,phKey)

#define IUserIdentity2_GetIdentityFolder(This,dwFlags,pszPath,ulBuffSize)	\
    (This)->lpVtbl -> GetIdentityFolder(This,dwFlags,pszPath,ulBuffSize)


#define IUserIdentity2_GetOrdinal(This,dwOrdinal)	\
    (This)->lpVtbl -> GetOrdinal(This,dwOrdinal)

#define IUserIdentity2_SetName(This,pszName)	\
    (This)->lpVtbl -> SetName(This,pszName)

#define IUserIdentity2_ChangePassword(This,szOldPass,szNewPass)	\
    (This)->lpVtbl -> ChangePassword(This,szOldPass,szNewPass)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IUserIdentity2_GetOrdinal_Proxy( 
    IUserIdentity2 __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *dwOrdinal);


void __RPC_STUB IUserIdentity2_GetOrdinal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUserIdentity2_SetName_Proxy( 
    IUserIdentity2 __RPC_FAR * This,
    /* [in] */ WCHAR __RPC_FAR *pszName);


void __RPC_STUB IUserIdentity2_SetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUserIdentity2_ChangePassword_Proxy( 
    IUserIdentity2 __RPC_FAR * This,
    /* [in] */ WCHAR __RPC_FAR *szOldPass,
    /* [in] */ WCHAR __RPC_FAR *szNewPass);


void __RPC_STUB IUserIdentity2_ChangePassword_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUserIdentity2_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long __RPC_FAR *, unsigned long            , HWND __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HWND_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HWND __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HWND_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HWND __RPC_FAR * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long __RPC_FAR *, HWND __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


