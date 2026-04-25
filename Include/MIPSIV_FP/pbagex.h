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
/* at Thu Jun 24 18:49:39 2004
 */
/* Compiler settings for .\pbagex.idl:
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

#ifndef __pbagex_h__
#define __pbagex_h__

/* Forward Declarations */ 

#ifndef __IPropertyBagEx_FWD_DEFINED__
#define __IPropertyBagEx_FWD_DEFINED__
typedef interface IPropertyBagEx IPropertyBagEx;
#endif 	/* __IPropertyBagEx_FWD_DEFINED__ */


#ifndef __IEnumSTATPROPBAG_FWD_DEFINED__
#define __IEnumSTATPROPBAG_FWD_DEFINED__
typedef interface IEnumSTATPROPBAG IEnumSTATPROPBAG;
#endif 	/* __IEnumSTATPROPBAG_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_pbagex_0000 */
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
#if ( _MSC_VER >= 1020 )
#pragma once
#endif
#include <pshpack8.h>

EXTERN_C const FMTID FMTID_PropertyBag;


extern RPC_IF_HANDLE __MIDL_itf_pbagex_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pbagex_0000_v0_0_s_ifspec;

#ifndef __IPropertyBagEx_INTERFACE_DEFINED__
#define __IPropertyBagEx_INTERFACE_DEFINED__

/* interface IPropertyBagEx */
/* [unique][uuid][object] */ 

typedef IPropertyBagEx __RPC_FAR *LPPROPERTYBAGEX;

#define	OPENPROPERTY_OVERWRITE	( 1 )


EXTERN_C const IID IID_IPropertyBagEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20011801-5DE6-11D1-8E38-00C04FB9386D")
    IPropertyBagEx : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReadMultiple( 
            /* [in] */ ULONG cprops,
            /* [size_is][in] */ const LPCOLESTR __RPC_FAR rgwszPropNames[  ],
            /* [size_is][out][in] */ PROPVARIANT __RPC_FAR rgvar[  ],
            /* [in] */ IErrorLog __RPC_FAR *pErrorLog) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteMultiple( 
            /* [in] */ ULONG cprops,
            /* [size_is][in] */ const LPCOLESTR __RPC_FAR rgwszPropNames[  ],
            /* [size_is][in] */ const PROPVARIANT __RPC_FAR rgvar[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteMultiple( 
            /* [in] */ ULONG cprops,
            /* [size_is][in] */ const LPCOLESTR __RPC_FAR rgwszPropNames[  ],
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ IUnknown __RPC_FAR *pUnkOuter,
            /* [in] */ LPCOLESTR wszPropName,
            /* [in] */ GUID guidPropertyType,
            /* [in] */ DWORD dwFlags,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Enum( 
            /* [in] */ LPCOLESTR wszPropNameMask,
            /* [in] */ DWORD dwFlags,
            /* [out] */ IEnumSTATPROPBAG __RPC_FAR *__RPC_FAR *ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyBagExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertyBagEx __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertyBagEx __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertyBagEx __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReadMultiple )( 
            IPropertyBagEx __RPC_FAR * This,
            /* [in] */ ULONG cprops,
            /* [size_is][in] */ const LPCOLESTR __RPC_FAR rgwszPropNames[  ],
            /* [size_is][out][in] */ PROPVARIANT __RPC_FAR rgvar[  ],
            /* [in] */ IErrorLog __RPC_FAR *pErrorLog);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *WriteMultiple )( 
            IPropertyBagEx __RPC_FAR * This,
            /* [in] */ ULONG cprops,
            /* [size_is][in] */ const LPCOLESTR __RPC_FAR rgwszPropNames[  ],
            /* [size_is][in] */ const PROPVARIANT __RPC_FAR rgvar[  ]);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteMultiple )( 
            IPropertyBagEx __RPC_FAR * This,
            /* [in] */ ULONG cprops,
            /* [size_is][in] */ const LPCOLESTR __RPC_FAR rgwszPropNames[  ],
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Open )( 
            IPropertyBagEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnkOuter,
            /* [in] */ LPCOLESTR wszPropName,
            /* [in] */ GUID guidPropertyType,
            /* [in] */ DWORD dwFlags,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnk);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Enum )( 
            IPropertyBagEx __RPC_FAR * This,
            /* [in] */ LPCOLESTR wszPropNameMask,
            /* [in] */ DWORD dwFlags,
            /* [out] */ IEnumSTATPROPBAG __RPC_FAR *__RPC_FAR *ppenum);
        
        END_INTERFACE
    } IPropertyBagExVtbl;

    interface IPropertyBagEx
    {
        CONST_VTBL struct IPropertyBagExVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyBagEx_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyBagEx_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyBagEx_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyBagEx_ReadMultiple(This,cprops,rgwszPropNames,rgvar,pErrorLog)	\
    (This)->lpVtbl -> ReadMultiple(This,cprops,rgwszPropNames,rgvar,pErrorLog)

#define IPropertyBagEx_WriteMultiple(This,cprops,rgwszPropNames,rgvar)	\
    (This)->lpVtbl -> WriteMultiple(This,cprops,rgwszPropNames,rgvar)

#define IPropertyBagEx_DeleteMultiple(This,cprops,rgwszPropNames,dwReserved)	\
    (This)->lpVtbl -> DeleteMultiple(This,cprops,rgwszPropNames,dwReserved)

#define IPropertyBagEx_Open(This,pUnkOuter,wszPropName,guidPropertyType,dwFlags,riid,ppUnk)	\
    (This)->lpVtbl -> Open(This,pUnkOuter,wszPropName,guidPropertyType,dwFlags,riid,ppUnk)

#define IPropertyBagEx_Enum(This,wszPropNameMask,dwFlags,ppenum)	\
    (This)->lpVtbl -> Enum(This,wszPropNameMask,dwFlags,ppenum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertyBagEx_ReadMultiple_Proxy( 
    IPropertyBagEx __RPC_FAR * This,
    /* [in] */ ULONG cprops,
    /* [size_is][in] */ const LPCOLESTR __RPC_FAR rgwszPropNames[  ],
    /* [size_is][out][in] */ PROPVARIANT __RPC_FAR rgvar[  ],
    /* [in] */ IErrorLog __RPC_FAR *pErrorLog);


void __RPC_STUB IPropertyBagEx_ReadMultiple_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyBagEx_WriteMultiple_Proxy( 
    IPropertyBagEx __RPC_FAR * This,
    /* [in] */ ULONG cprops,
    /* [size_is][in] */ const LPCOLESTR __RPC_FAR rgwszPropNames[  ],
    /* [size_is][in] */ const PROPVARIANT __RPC_FAR rgvar[  ]);


void __RPC_STUB IPropertyBagEx_WriteMultiple_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyBagEx_DeleteMultiple_Proxy( 
    IPropertyBagEx __RPC_FAR * This,
    /* [in] */ ULONG cprops,
    /* [size_is][in] */ const LPCOLESTR __RPC_FAR rgwszPropNames[  ],
    /* [in] */ DWORD dwReserved);


void __RPC_STUB IPropertyBagEx_DeleteMultiple_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyBagEx_Open_Proxy( 
    IPropertyBagEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnkOuter,
    /* [in] */ LPCOLESTR wszPropName,
    /* [in] */ GUID guidPropertyType,
    /* [in] */ DWORD dwFlags,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnk);


void __RPC_STUB IPropertyBagEx_Open_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyBagEx_Enum_Proxy( 
    IPropertyBagEx __RPC_FAR * This,
    /* [in] */ LPCOLESTR wszPropNameMask,
    /* [in] */ DWORD dwFlags,
    /* [out] */ IEnumSTATPROPBAG __RPC_FAR *__RPC_FAR *ppenum);


void __RPC_STUB IPropertyBagEx_Enum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyBagEx_INTERFACE_DEFINED__ */


#ifndef __IEnumSTATPROPBAG_INTERFACE_DEFINED__
#define __IEnumSTATPROPBAG_INTERFACE_DEFINED__

/* interface IEnumSTATPROPBAG */
/* [unique][uuid][object] */ 

typedef /* [unique] */ IEnumSTATPROPBAG __RPC_FAR *LPENUMSTATPROPBAG;

typedef struct tagSTATPROPBAG
    {
    LPOLESTR lpwstrName;
    VARTYPE vt;
    GUID guidPropertyType;
    }	STATPROPBAG;


EXTERN_C const IID IID_IEnumSTATPROPBAG;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20021801-5DE6-11D1-8E38-00C04FB9386D")
    IEnumSTATPROPBAG : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ STATPROPBAG __RPC_FAR *rgelt,
            /* [out] */ ULONG __RPC_FAR *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumSTATPROPBAG __RPC_FAR *__RPC_FAR *ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumSTATPROPBAGVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEnumSTATPROPBAG __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEnumSTATPROPBAG __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEnumSTATPROPBAG __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IEnumSTATPROPBAG __RPC_FAR * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ STATPROPBAG __RPC_FAR *rgelt,
            /* [out] */ ULONG __RPC_FAR *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            IEnumSTATPROPBAG __RPC_FAR * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IEnumSTATPROPBAG __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IEnumSTATPROPBAG __RPC_FAR * This,
            /* [out] */ IEnumSTATPROPBAG __RPC_FAR *__RPC_FAR *ppenum);
        
        END_INTERFACE
    } IEnumSTATPROPBAGVtbl;

    interface IEnumSTATPROPBAG
    {
        CONST_VTBL struct IEnumSTATPROPBAGVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTATPROPBAG_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumSTATPROPBAG_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumSTATPROPBAG_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumSTATPROPBAG_Next(This,celt,rgelt,pceltFetched)	\
    (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched)

#define IEnumSTATPROPBAG_Skip(This,celt)	\
    (This)->lpVtbl -> Skip(This,celt)

#define IEnumSTATPROPBAG_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumSTATPROPBAG_Clone(This,ppenum)	\
    (This)->lpVtbl -> Clone(This,ppenum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IEnumSTATPROPBAG_Next_Proxy( 
    IEnumSTATPROPBAG __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ STATPROPBAG __RPC_FAR *rgelt,
    /* [out] */ ULONG __RPC_FAR *pceltFetched);


void __RPC_STUB IEnumSTATPROPBAG_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumSTATPROPBAG_Skip_Proxy( 
    IEnumSTATPROPBAG __RPC_FAR * This,
    /* [in] */ ULONG celt);


void __RPC_STUB IEnumSTATPROPBAG_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumSTATPROPBAG_Reset_Proxy( 
    IEnumSTATPROPBAG __RPC_FAR * This);


void __RPC_STUB IEnumSTATPROPBAG_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumSTATPROPBAG_Clone_Proxy( 
    IEnumSTATPROPBAG __RPC_FAR * This,
    /* [out] */ IEnumSTATPROPBAG __RPC_FAR *__RPC_FAR *ppenum);


void __RPC_STUB IEnumSTATPROPBAG_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumSTATPROPBAG_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pbagex_0147 */
/* [local] */ 

#include <poppack.h>


extern RPC_IF_HANDLE __MIDL_itf_pbagex_0147_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pbagex_0147_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


