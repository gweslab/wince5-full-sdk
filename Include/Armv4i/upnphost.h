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
/* at Thu Jun 24 19:10:10 2004
 */
/* Compiler settings for .\upnphost.idl:
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

#ifndef __upnphost_h__
#define __upnphost_h__

/* Forward Declarations */ 

#ifndef __IUPnPEventSink_FWD_DEFINED__
#define __IUPnPEventSink_FWD_DEFINED__
typedef interface IUPnPEventSink IUPnPEventSink;
#endif 	/* __IUPnPEventSink_FWD_DEFINED__ */


#ifndef __IUPnPEventSource_FWD_DEFINED__
#define __IUPnPEventSource_FWD_DEFINED__
typedef interface IUPnPEventSource IUPnPEventSource;
#endif 	/* __IUPnPEventSource_FWD_DEFINED__ */


#ifndef __IUPnPRegistrar_FWD_DEFINED__
#define __IUPnPRegistrar_FWD_DEFINED__
typedef interface IUPnPRegistrar IUPnPRegistrar;
#endif 	/* __IUPnPRegistrar_FWD_DEFINED__ */


#ifndef __IUPnPReregistrar_FWD_DEFINED__
#define __IUPnPReregistrar_FWD_DEFINED__
typedef interface IUPnPReregistrar IUPnPReregistrar;
#endif 	/* __IUPnPReregistrar_FWD_DEFINED__ */


#ifndef __IUPnPDeviceControl_FWD_DEFINED__
#define __IUPnPDeviceControl_FWD_DEFINED__
typedef interface IUPnPDeviceControl IUPnPDeviceControl;
#endif 	/* __IUPnPDeviceControl_FWD_DEFINED__ */


#ifndef __IUPnPDeviceProvider_FWD_DEFINED__
#define __IUPnPDeviceProvider_FWD_DEFINED__
typedef interface IUPnPDeviceProvider IUPnPDeviceProvider;
#endif 	/* __IUPnPDeviceProvider_FWD_DEFINED__ */


#ifndef __IUPnPEventSink_FWD_DEFINED__
#define __IUPnPEventSink_FWD_DEFINED__
typedef interface IUPnPEventSink IUPnPEventSink;
#endif 	/* __IUPnPEventSink_FWD_DEFINED__ */


#ifndef __IUPnPEventSource_FWD_DEFINED__
#define __IUPnPEventSource_FWD_DEFINED__
typedef interface IUPnPEventSource IUPnPEventSource;
#endif 	/* __IUPnPEventSource_FWD_DEFINED__ */


#ifndef __IUPnPRegistrar_FWD_DEFINED__
#define __IUPnPRegistrar_FWD_DEFINED__
typedef interface IUPnPRegistrar IUPnPRegistrar;
#endif 	/* __IUPnPRegistrar_FWD_DEFINED__ */


#ifndef __IUPnPReregistrar_FWD_DEFINED__
#define __IUPnPReregistrar_FWD_DEFINED__
typedef interface IUPnPReregistrar IUPnPReregistrar;
#endif 	/* __IUPnPReregistrar_FWD_DEFINED__ */


#ifndef __IUPnPDeviceControl_FWD_DEFINED__
#define __IUPnPDeviceControl_FWD_DEFINED__
typedef interface IUPnPDeviceControl IUPnPDeviceControl;
#endif 	/* __IUPnPDeviceControl_FWD_DEFINED__ */


#ifndef __IUPnPDeviceProvider_FWD_DEFINED__
#define __IUPnPDeviceProvider_FWD_DEFINED__
typedef interface IUPnPDeviceProvider IUPnPDeviceProvider;
#endif 	/* __IUPnPDeviceProvider_FWD_DEFINED__ */


#ifndef __UPnPRegistrar_FWD_DEFINED__
#define __UPnPRegistrar_FWD_DEFINED__

#ifdef __cplusplus
typedef class UPnPRegistrar UPnPRegistrar;
#else
typedef struct UPnPRegistrar UPnPRegistrar;
#endif /* __cplusplus */

#endif 	/* __UPnPRegistrar_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_upnphost_0000 */
/* [local] */ 







#define UPNP_E_REQUIRED_ELEMENT_ERROR        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA020)
#define UPNP_E_DUPLICATE_NOT_ALLOWED         MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA021)
#define UPNP_E_DUPLICATE_SERVICE_ID          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA022)
#define UPNP_E_INVALID_DESCRIPTION           MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA023)
#define UPNP_E_INVALID_SERVICE               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA024)
#define UPNP_E_INVALID_ICON                  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA025)
#define UPNP_E_INVALID_XML                   MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA026)
#define UPNP_E_INVALID_ROOT_NAMESPACE        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA027)
#define UPNP_E_SUFFIX_TOO_LONG               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA028)
#define UPNP_E_URLBASE_PRESENT               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA029)
#define UPNP_E_VALUE_TOO_LONG                MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA030)


extern RPC_IF_HANDLE __MIDL_itf_upnphost_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_upnphost_0000_v0_0_s_ifspec;

#ifndef __IUPnPEventSink_INTERFACE_DEFINED__
#define __IUPnPEventSink_INTERFACE_DEFINED__

/* interface IUPnPEventSink */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IUPnPEventSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("204810b4-73b2-11d4-bf42-00b0d0118b56")
    IUPnPEventSink : public IUnknown
    {
    public:
        virtual /* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE OnStateChanged( 
            /* [in] */ DWORD cChanges,
            /* [size_is][in] */ DISPID __RPC_FAR rgdispidChanges[  ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnStateChangedSafe( 
            /* [in] */ VARIANT varsadispidChanges) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPEventSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPEventSink __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPEventSink __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPEventSink __RPC_FAR * This);
        
        /* [hidden][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnStateChanged )( 
            IUPnPEventSink __RPC_FAR * This,
            /* [in] */ DWORD cChanges,
            /* [size_is][in] */ DISPID __RPC_FAR rgdispidChanges[  ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnStateChangedSafe )( 
            IUPnPEventSink __RPC_FAR * This,
            /* [in] */ VARIANT varsadispidChanges);
        
        END_INTERFACE
    } IUPnPEventSinkVtbl;

    interface IUPnPEventSink
    {
        CONST_VTBL struct IUPnPEventSinkVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPEventSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPEventSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPEventSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPEventSink_OnStateChanged(This,cChanges,rgdispidChanges)	\
    (This)->lpVtbl -> OnStateChanged(This,cChanges,rgdispidChanges)

#define IUPnPEventSink_OnStateChangedSafe(This,varsadispidChanges)	\
    (This)->lpVtbl -> OnStateChangedSafe(This,varsadispidChanges)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE IUPnPEventSink_OnStateChanged_Proxy( 
    IUPnPEventSink __RPC_FAR * This,
    /* [in] */ DWORD cChanges,
    /* [size_is][in] */ DISPID __RPC_FAR rgdispidChanges[  ]);


void __RPC_STUB IUPnPEventSink_OnStateChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IUPnPEventSink_OnStateChangedSafe_Proxy( 
    IUPnPEventSink __RPC_FAR * This,
    /* [in] */ VARIANT varsadispidChanges);


void __RPC_STUB IUPnPEventSink_OnStateChangedSafe_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPEventSink_INTERFACE_DEFINED__ */


#ifndef __IUPnPEventSource_INTERFACE_DEFINED__
#define __IUPnPEventSource_INTERFACE_DEFINED__

/* interface IUPnPEventSource */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IUPnPEventSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("204810b5-73b2-11d4-bf42-00b0d0118b56")
    IUPnPEventSource : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ IUPnPEventSink __RPC_FAR *pesSubscriber) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ IUPnPEventSink __RPC_FAR *pesSubscriber) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPEventSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPEventSource __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPEventSource __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPEventSource __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Advise )( 
            IUPnPEventSource __RPC_FAR * This,
            /* [in] */ IUPnPEventSink __RPC_FAR *pesSubscriber);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Unadvise )( 
            IUPnPEventSource __RPC_FAR * This,
            /* [in] */ IUPnPEventSink __RPC_FAR *pesSubscriber);
        
        END_INTERFACE
    } IUPnPEventSourceVtbl;

    interface IUPnPEventSource
    {
        CONST_VTBL struct IUPnPEventSourceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPEventSource_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPEventSource_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPEventSource_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPEventSource_Advise(This,pesSubscriber)	\
    (This)->lpVtbl -> Advise(This,pesSubscriber)

#define IUPnPEventSource_Unadvise(This,pesSubscriber)	\
    (This)->lpVtbl -> Unadvise(This,pesSubscriber)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IUPnPEventSource_Advise_Proxy( 
    IUPnPEventSource __RPC_FAR * This,
    /* [in] */ IUPnPEventSink __RPC_FAR *pesSubscriber);


void __RPC_STUB IUPnPEventSource_Advise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IUPnPEventSource_Unadvise_Proxy( 
    IUPnPEventSource __RPC_FAR * This,
    /* [in] */ IUPnPEventSink __RPC_FAR *pesSubscriber);


void __RPC_STUB IUPnPEventSource_Unadvise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPEventSource_INTERFACE_DEFINED__ */


#ifndef __IUPnPRegistrar_INTERFACE_DEFINED__
#define __IUPnPRegistrar_INTERFACE_DEFINED__

/* interface IUPnPRegistrar */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IUPnPRegistrar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("204810b6-73b2-11d4-bf42-00b0d0118b56")
    IUPnPRegistrar : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterDevice( 
            /* [in] */ BSTR bstrXMLDesc,
            /* [in] */ BSTR bstrProgIDDeviceControlClass,
            /* [in] */ BSTR bstrInitString,
            /* [in] */ BSTR bstrContainerId,
            /* [in] */ BSTR bstrResourcePath,
            /* [in] */ long nLifeTime,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrDeviceIdentifier) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterRunningDevice( 
            /* [in] */ BSTR bstrXMLDesc,
            /* [in] */ IUnknown __RPC_FAR *punkDeviceControl,
            /* [in] */ BSTR bstrInitString,
            /* [in] */ BSTR bstrResourcePath,
            /* [in] */ long nLifeTime,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrDeviceIdentifier) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterDeviceProvider( 
            /* [in] */ BSTR bstrProviderName,
            /* [in] */ BSTR bstrProgIDProviderClass,
            /* [in] */ BSTR bstrInitString,
            /* [in] */ BSTR bstrContainerId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUniqueDeviceName( 
            /* [in] */ BSTR bstrDeviceIdentifier,
            /* [in] */ BSTR bstrTemplateUDN,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrUDN) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterDevice( 
            /* [in] */ BSTR bstrDeviceIdentifier,
            /* [in] */ BOOL fPermanent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterDeviceProvider( 
            /* [in] */ BSTR bstrProviderName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPRegistrarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPRegistrar __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPRegistrar __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPRegistrar __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RegisterDevice )( 
            IUPnPRegistrar __RPC_FAR * This,
            /* [in] */ BSTR bstrXMLDesc,
            /* [in] */ BSTR bstrProgIDDeviceControlClass,
            /* [in] */ BSTR bstrInitString,
            /* [in] */ BSTR bstrContainerId,
            /* [in] */ BSTR bstrResourcePath,
            /* [in] */ long nLifeTime,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrDeviceIdentifier);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RegisterRunningDevice )( 
            IUPnPRegistrar __RPC_FAR * This,
            /* [in] */ BSTR bstrXMLDesc,
            /* [in] */ IUnknown __RPC_FAR *punkDeviceControl,
            /* [in] */ BSTR bstrInitString,
            /* [in] */ BSTR bstrResourcePath,
            /* [in] */ long nLifeTime,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrDeviceIdentifier);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RegisterDeviceProvider )( 
            IUPnPRegistrar __RPC_FAR * This,
            /* [in] */ BSTR bstrProviderName,
            /* [in] */ BSTR bstrProgIDProviderClass,
            /* [in] */ BSTR bstrInitString,
            /* [in] */ BSTR bstrContainerId);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetUniqueDeviceName )( 
            IUPnPRegistrar __RPC_FAR * This,
            /* [in] */ BSTR bstrDeviceIdentifier,
            /* [in] */ BSTR bstrTemplateUDN,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrUDN);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UnregisterDevice )( 
            IUPnPRegistrar __RPC_FAR * This,
            /* [in] */ BSTR bstrDeviceIdentifier,
            /* [in] */ BOOL fPermanent);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UnregisterDeviceProvider )( 
            IUPnPRegistrar __RPC_FAR * This,
            /* [in] */ BSTR bstrProviderName);
        
        END_INTERFACE
    } IUPnPRegistrarVtbl;

    interface IUPnPRegistrar
    {
        CONST_VTBL struct IUPnPRegistrarVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPRegistrar_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPRegistrar_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPRegistrar_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPRegistrar_RegisterDevice(This,bstrXMLDesc,bstrProgIDDeviceControlClass,bstrInitString,bstrContainerId,bstrResourcePath,nLifeTime,pbstrDeviceIdentifier)	\
    (This)->lpVtbl -> RegisterDevice(This,bstrXMLDesc,bstrProgIDDeviceControlClass,bstrInitString,bstrContainerId,bstrResourcePath,nLifeTime,pbstrDeviceIdentifier)

#define IUPnPRegistrar_RegisterRunningDevice(This,bstrXMLDesc,punkDeviceControl,bstrInitString,bstrResourcePath,nLifeTime,pbstrDeviceIdentifier)	\
    (This)->lpVtbl -> RegisterRunningDevice(This,bstrXMLDesc,punkDeviceControl,bstrInitString,bstrResourcePath,nLifeTime,pbstrDeviceIdentifier)

#define IUPnPRegistrar_RegisterDeviceProvider(This,bstrProviderName,bstrProgIDProviderClass,bstrInitString,bstrContainerId)	\
    (This)->lpVtbl -> RegisterDeviceProvider(This,bstrProviderName,bstrProgIDProviderClass,bstrInitString,bstrContainerId)

#define IUPnPRegistrar_GetUniqueDeviceName(This,bstrDeviceIdentifier,bstrTemplateUDN,pbstrUDN)	\
    (This)->lpVtbl -> GetUniqueDeviceName(This,bstrDeviceIdentifier,bstrTemplateUDN,pbstrUDN)

#define IUPnPRegistrar_UnregisterDevice(This,bstrDeviceIdentifier,fPermanent)	\
    (This)->lpVtbl -> UnregisterDevice(This,bstrDeviceIdentifier,fPermanent)

#define IUPnPRegistrar_UnregisterDeviceProvider(This,bstrProviderName)	\
    (This)->lpVtbl -> UnregisterDeviceProvider(This,bstrProviderName)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IUPnPRegistrar_RegisterDevice_Proxy( 
    IUPnPRegistrar __RPC_FAR * This,
    /* [in] */ BSTR bstrXMLDesc,
    /* [in] */ BSTR bstrProgIDDeviceControlClass,
    /* [in] */ BSTR bstrInitString,
    /* [in] */ BSTR bstrContainerId,
    /* [in] */ BSTR bstrResourcePath,
    /* [in] */ long nLifeTime,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrDeviceIdentifier);


void __RPC_STUB IUPnPRegistrar_RegisterDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUPnPRegistrar_RegisterRunningDevice_Proxy( 
    IUPnPRegistrar __RPC_FAR * This,
    /* [in] */ BSTR bstrXMLDesc,
    /* [in] */ IUnknown __RPC_FAR *punkDeviceControl,
    /* [in] */ BSTR bstrInitString,
    /* [in] */ BSTR bstrResourcePath,
    /* [in] */ long nLifeTime,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrDeviceIdentifier);


void __RPC_STUB IUPnPRegistrar_RegisterRunningDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUPnPRegistrar_RegisterDeviceProvider_Proxy( 
    IUPnPRegistrar __RPC_FAR * This,
    /* [in] */ BSTR bstrProviderName,
    /* [in] */ BSTR bstrProgIDProviderClass,
    /* [in] */ BSTR bstrInitString,
    /* [in] */ BSTR bstrContainerId);


void __RPC_STUB IUPnPRegistrar_RegisterDeviceProvider_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUPnPRegistrar_GetUniqueDeviceName_Proxy( 
    IUPnPRegistrar __RPC_FAR * This,
    /* [in] */ BSTR bstrDeviceIdentifier,
    /* [in] */ BSTR bstrTemplateUDN,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrUDN);


void __RPC_STUB IUPnPRegistrar_GetUniqueDeviceName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUPnPRegistrar_UnregisterDevice_Proxy( 
    IUPnPRegistrar __RPC_FAR * This,
    /* [in] */ BSTR bstrDeviceIdentifier,
    /* [in] */ BOOL fPermanent);


void __RPC_STUB IUPnPRegistrar_UnregisterDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUPnPRegistrar_UnregisterDeviceProvider_Proxy( 
    IUPnPRegistrar __RPC_FAR * This,
    /* [in] */ BSTR bstrProviderName);


void __RPC_STUB IUPnPRegistrar_UnregisterDeviceProvider_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPRegistrar_INTERFACE_DEFINED__ */


#ifndef __IUPnPReregistrar_INTERFACE_DEFINED__
#define __IUPnPReregistrar_INTERFACE_DEFINED__

/* interface IUPnPReregistrar */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IUPnPReregistrar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("204810b7-73b2-11d4-bf42-00b0d0118b56")
    IUPnPReregistrar : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReregisterDevice( 
            /* [in] */ BSTR bstrDeviceIdentifier,
            /* [in] */ BSTR bstrXMLDesc,
            /* [in] */ BSTR bstrProgIDDeviceControlClass,
            /* [in] */ BSTR bstrInitString,
            /* [in] */ BSTR bstrContainerId,
            /* [in] */ BSTR bstrResourcePath,
            /* [in] */ long nLifeTime) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReregisterRunningDevice( 
            /* [in] */ BSTR bstrDeviceIdentifier,
            /* [in] */ BSTR bstrXMLDesc,
            /* [in] */ IUnknown __RPC_FAR *punkDeviceControl,
            /* [in] */ BSTR bstrInitString,
            /* [in] */ BSTR bstrResourcePath,
            /* [in] */ long nLifeTime) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPReregistrarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPReregistrar __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPReregistrar __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPReregistrar __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReregisterDevice )( 
            IUPnPReregistrar __RPC_FAR * This,
            /* [in] */ BSTR bstrDeviceIdentifier,
            /* [in] */ BSTR bstrXMLDesc,
            /* [in] */ BSTR bstrProgIDDeviceControlClass,
            /* [in] */ BSTR bstrInitString,
            /* [in] */ BSTR bstrContainerId,
            /* [in] */ BSTR bstrResourcePath,
            /* [in] */ long nLifeTime);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReregisterRunningDevice )( 
            IUPnPReregistrar __RPC_FAR * This,
            /* [in] */ BSTR bstrDeviceIdentifier,
            /* [in] */ BSTR bstrXMLDesc,
            /* [in] */ IUnknown __RPC_FAR *punkDeviceControl,
            /* [in] */ BSTR bstrInitString,
            /* [in] */ BSTR bstrResourcePath,
            /* [in] */ long nLifeTime);
        
        END_INTERFACE
    } IUPnPReregistrarVtbl;

    interface IUPnPReregistrar
    {
        CONST_VTBL struct IUPnPReregistrarVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPReregistrar_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPReregistrar_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPReregistrar_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPReregistrar_ReregisterDevice(This,bstrDeviceIdentifier,bstrXMLDesc,bstrProgIDDeviceControlClass,bstrInitString,bstrContainerId,bstrResourcePath,nLifeTime)	\
    (This)->lpVtbl -> ReregisterDevice(This,bstrDeviceIdentifier,bstrXMLDesc,bstrProgIDDeviceControlClass,bstrInitString,bstrContainerId,bstrResourcePath,nLifeTime)

#define IUPnPReregistrar_ReregisterRunningDevice(This,bstrDeviceIdentifier,bstrXMLDesc,punkDeviceControl,bstrInitString,bstrResourcePath,nLifeTime)	\
    (This)->lpVtbl -> ReregisterRunningDevice(This,bstrDeviceIdentifier,bstrXMLDesc,punkDeviceControl,bstrInitString,bstrResourcePath,nLifeTime)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IUPnPReregistrar_ReregisterDevice_Proxy( 
    IUPnPReregistrar __RPC_FAR * This,
    /* [in] */ BSTR bstrDeviceIdentifier,
    /* [in] */ BSTR bstrXMLDesc,
    /* [in] */ BSTR bstrProgIDDeviceControlClass,
    /* [in] */ BSTR bstrInitString,
    /* [in] */ BSTR bstrContainerId,
    /* [in] */ BSTR bstrResourcePath,
    /* [in] */ long nLifeTime);


void __RPC_STUB IUPnPReregistrar_ReregisterDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUPnPReregistrar_ReregisterRunningDevice_Proxy( 
    IUPnPReregistrar __RPC_FAR * This,
    /* [in] */ BSTR bstrDeviceIdentifier,
    /* [in] */ BSTR bstrXMLDesc,
    /* [in] */ IUnknown __RPC_FAR *punkDeviceControl,
    /* [in] */ BSTR bstrInitString,
    /* [in] */ BSTR bstrResourcePath,
    /* [in] */ long nLifeTime);


void __RPC_STUB IUPnPReregistrar_ReregisterRunningDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPReregistrar_INTERFACE_DEFINED__ */


#ifndef __IUPnPDeviceControl_INTERFACE_DEFINED__
#define __IUPnPDeviceControl_INTERFACE_DEFINED__

/* interface IUPnPDeviceControl */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IUPnPDeviceControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("204810ba-73b2-11d4-bf42-00b0d0118b56")
    IUPnPDeviceControl : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ BSTR bstrXMLDesc,
            /* [in] */ BSTR bstrDeviceIdentifier,
            /* [in] */ BSTR bstrInitString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetServiceObject( 
            /* [in] */ BSTR bstrUDN,
            /* [in] */ BSTR bstrServiceId,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdispService) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPDeviceControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPDeviceControl __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPDeviceControl __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPDeviceControl __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IUPnPDeviceControl __RPC_FAR * This,
            /* [in] */ BSTR bstrXMLDesc,
            /* [in] */ BSTR bstrDeviceIdentifier,
            /* [in] */ BSTR bstrInitString);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetServiceObject )( 
            IUPnPDeviceControl __RPC_FAR * This,
            /* [in] */ BSTR bstrUDN,
            /* [in] */ BSTR bstrServiceId,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdispService);
        
        END_INTERFACE
    } IUPnPDeviceControlVtbl;

    interface IUPnPDeviceControl
    {
        CONST_VTBL struct IUPnPDeviceControlVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPDeviceControl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPDeviceControl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPDeviceControl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPDeviceControl_Initialize(This,bstrXMLDesc,bstrDeviceIdentifier,bstrInitString)	\
    (This)->lpVtbl -> Initialize(This,bstrXMLDesc,bstrDeviceIdentifier,bstrInitString)

#define IUPnPDeviceControl_GetServiceObject(This,bstrUDN,bstrServiceId,ppdispService)	\
    (This)->lpVtbl -> GetServiceObject(This,bstrUDN,bstrServiceId,ppdispService)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IUPnPDeviceControl_Initialize_Proxy( 
    IUPnPDeviceControl __RPC_FAR * This,
    /* [in] */ BSTR bstrXMLDesc,
    /* [in] */ BSTR bstrDeviceIdentifier,
    /* [in] */ BSTR bstrInitString);


void __RPC_STUB IUPnPDeviceControl_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUPnPDeviceControl_GetServiceObject_Proxy( 
    IUPnPDeviceControl __RPC_FAR * This,
    /* [in] */ BSTR bstrUDN,
    /* [in] */ BSTR bstrServiceId,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdispService);


void __RPC_STUB IUPnPDeviceControl_GetServiceObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPDeviceControl_INTERFACE_DEFINED__ */


#ifndef __IUPnPDeviceProvider_INTERFACE_DEFINED__
#define __IUPnPDeviceProvider_INTERFACE_DEFINED__

/* interface IUPnPDeviceProvider */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IUPnPDeviceProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("204810b8-73b2-11d4-bf42-00b0d0118b56")
    IUPnPDeviceProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Start( 
            /* [in] */ BSTR bstrInitString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPDeviceProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IUPnPDeviceProvider __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IUPnPDeviceProvider __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IUPnPDeviceProvider __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Start )( 
            IUPnPDeviceProvider __RPC_FAR * This,
            /* [in] */ BSTR bstrInitString);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Stop )( 
            IUPnPDeviceProvider __RPC_FAR * This);
        
        END_INTERFACE
    } IUPnPDeviceProviderVtbl;

    interface IUPnPDeviceProvider
    {
        CONST_VTBL struct IUPnPDeviceProviderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPDeviceProvider_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IUPnPDeviceProvider_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IUPnPDeviceProvider_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IUPnPDeviceProvider_Start(This,bstrInitString)	\
    (This)->lpVtbl -> Start(This,bstrInitString)

#define IUPnPDeviceProvider_Stop(This)	\
    (This)->lpVtbl -> Stop(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IUPnPDeviceProvider_Start_Proxy( 
    IUPnPDeviceProvider __RPC_FAR * This,
    /* [in] */ BSTR bstrInitString);


void __RPC_STUB IUPnPDeviceProvider_Start_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUPnPDeviceProvider_Stop_Proxy( 
    IUPnPDeviceProvider __RPC_FAR * This);


void __RPC_STUB IUPnPDeviceProvider_Stop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUPnPDeviceProvider_INTERFACE_DEFINED__ */



#ifndef __UPnPHostLib_LIBRARY_DEFINED__
#define __UPnPHostLib_LIBRARY_DEFINED__

/* library UPnPHostLib */
/* [helpstring][version][uuid] */ 








EXTERN_C const IID LIBID_UPnPHostLib;

EXTERN_C const CLSID CLSID_UPnPRegistrar;

#ifdef __cplusplus

class DECLSPEC_UUID("204810b9-73b2-11d4-bf42-00b0d0118b56")
UPnPRegistrar;
#endif
#endif /* __UPnPHostLib_LIBRARY_DEFINED__ */

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


