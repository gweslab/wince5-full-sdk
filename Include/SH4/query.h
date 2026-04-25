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
/* at Tue Feb 05 14:33:26 2002
 */
/* Compiler settings for .\query.idl:
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

#ifndef __query_h__
#define __query_h__

/* Forward Declarations */ 

#ifndef __ISearchQueryHits_FWD_DEFINED__
#define __ISearchQueryHits_FWD_DEFINED__
typedef interface ISearchQueryHits ISearchQueryHits;
#endif 	/* __ISearchQueryHits_FWD_DEFINED__ */


#ifndef __IPhraseSink_FWD_DEFINED__
#define __IPhraseSink_FWD_DEFINED__
typedef interface IPhraseSink IPhraseSink;
#endif 	/* __IPhraseSink_FWD_DEFINED__ */


#ifndef __IWordSink_FWD_DEFINED__
#define __IWordSink_FWD_DEFINED__
typedef interface IWordSink IWordSink;
#endif 	/* __IWordSink_FWD_DEFINED__ */


#ifndef __IWordBreaker_FWD_DEFINED__
#define __IWordBreaker_FWD_DEFINED__
typedef interface IWordBreaker IWordBreaker;
#endif 	/* __IWordBreaker_FWD_DEFINED__ */


#ifndef __IStemSink_FWD_DEFINED__
#define __IStemSink_FWD_DEFINED__
typedef interface IStemSink IStemSink;
#endif 	/* __IStemSink_FWD_DEFINED__ */


#ifndef __IStemmer_FWD_DEFINED__
#define __IStemmer_FWD_DEFINED__
typedef interface IStemmer IStemmer;
#endif 	/* __IStemmer_FWD_DEFINED__ */


#ifndef __IRowsetQueryStatus_FWD_DEFINED__
#define __IRowsetQueryStatus_FWD_DEFINED__
typedef interface IRowsetQueryStatus IRowsetQueryStatus;
#endif 	/* __IRowsetQueryStatus_FWD_DEFINED__ */


#ifndef __IColumnMapper_FWD_DEFINED__
#define __IColumnMapper_FWD_DEFINED__
typedef interface IColumnMapper IColumnMapper;
#endif 	/* __IColumnMapper_FWD_DEFINED__ */


#ifndef __IColumnMapperCreator_FWD_DEFINED__
#define __IColumnMapperCreator_FWD_DEFINED__
typedef interface IColumnMapperCreator IColumnMapperCreator;
#endif 	/* __IColumnMapperCreator_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "filter.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_query_0000 */
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


extern RPC_IF_HANDLE __MIDL_itf_query_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_query_0000_v0_0_s_ifspec;

#ifndef __IQueryStructures_INTERFACE_DEFINED__
#define __IQueryStructures_INTERFACE_DEFINED__

/* interface IQueryStructures */
/* [auto_handle][unique][uuid] */ 

#define DBQUERYGUID  { 0x49691C90, \
                       0x7E17, 0x101A, \
                       0xA9, 0x1C, 0x08, 0x00, 0x2B, \
                       0x2E, 0xCD, 0xA9 } 
#define	DISPID_QUERY_RANKVECTOR	( 2 )

#define	DISPID_QUERY_RANK	( 3 )

#define	DISPID_QUERY_HITCOUNT	( 4 )

#define	DISPID_QUERY_WORKID	( 5 )

#define	DISPID_QUERY_ALL	( 6 )

#define	DISPID_QUERY_UNFILTERED	( 7 )

#define	DISPID_QUERY_REVNAME	( 8 )

#define	DISPID_QUERY_VIRTUALPATH	( 9 )

#define	DISPID_QUERY_LASTSEENTIME	( 10 )

#define	CQUERYDISPIDS	( 11 )

#define PSGUID_QUERY_METADATA { 0x624C9360, \
                                0x93D0, 0x11CF, \
                                0xA7, 0x87, 0x00, 0x00, 0x4C, \
                                0x75, 0x27, 0x52 } 
#define	DISPID_QUERY_METADATA_VROOTUSED	( 2 )

#define	DISPID_QUERY_METADATA_VROOTAUTOMATIC	( 3 )

#define	DISPID_QUERY_METADATA_VROOTMANUAL	( 4 )

#define	DISPID_QUERY_METADATA_PROPGUID	( 5 )

#define	DISPID_QUERY_METADATA_PROPDISPID	( 6 )

#define	DISPID_QUERY_METADATA_PROPNAME	( 7 )

#define	DISPID_QUERY_METADATA_STORELEVEL	( 8 )

#define	DISPID_QUERY_METADATA_PROPMODIFIABLE	( 9 )

#define	CQUERYMETADISPIDS	( 10 )

#define DBBMKGUID { 0xC8B52232L, \
                 0x5CF3, 0x11CE, \
                 {0xAD, 0xE5, 0x00, 0xAA, 0x00, \
                  0x44, 0x77, 0x3D } }
#define	PROPID_DBBMK_BOOKMARK	( 2 )

#define	PROPID_DBBMK_CHAPTER	( 3 )

#define	CDBBMKDISPIDS	( 8 )

#define DBSELFGUID {0xc8b52231,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
#define	PROPID_DBSELF_SELF	( 2 )

#define	CDBSELFDISPIDS	( 8 )

#define	CDBCOLDISPIDS	( 28 )

#define	CQUERYPROPERTY	( 64 )

#define PSGUID_CHARACTERIZATION { 0x560c36c0, \
                                  0x503a, 0x11cf, \
                                  0xba, 0xa1, 0x00, 0x00, \
                                  0x4c, 0x75, 0x2a, 0x9a } 
#define	QUERY_VALIDBITS	( 3 )

#define	RTNone	( 0 )

#define	RTAnd	( 1 )

#define	RTOr	( 2 )

#define	RTNot	( 3 )

#define	RTContent	( 4 )

#define	RTProperty	( 5 )

#define	RTProximity	( 6 )

#define	RTVector	( 7 )

#define	RTNatLanguage	( 8 )

typedef struct tagRESTRICTION RESTRICTION;

typedef struct tagNOTRESTRICTION
    {
    RESTRICTION __RPC_FAR *pRes;
    }	NOTRESTRICTION;

typedef struct tagNODERESTRICTION
    {
    ULONG cRes;
    /* [size_is] */ RESTRICTION __RPC_FAR *__RPC_FAR *paRes;
    ULONG reserved;
    }	NODERESTRICTION;

#define	VECTOR_RANK_MIN	( 0 )

#define	VECTOR_RANK_MAX	( 1 )

#define	VECTOR_RANK_INNER	( 2 )

#define	VECTOR_RANK_DICE	( 3 )

#define	VECTOR_RANK_JACCARD	( 4 )

typedef struct tagVECTORRESTRICTION
    {
    NODERESTRICTION Node;
    ULONG RankMethod;
    }	VECTORRESTRICTION;

#define	GENERATE_METHOD_EXACT	( 0 )

#define	GENERATE_METHOD_PREFIXMATCH	( 1 )

#define	GENERATE_METHOD_STEMMED	( 2 )

typedef struct tagCONTENTRESTRICTION
    {
    FULLPROPSPEC prop;
    /* [string] */ WCHAR __RPC_FAR *pwcsPhrase;
    LCID lcid;
    ULONG ulGenerateMethod;
    }	CONTENTRESTRICTION;

typedef struct tagNATLANGUAGERESTRICTION
    {
    FULLPROPSPEC prop;
    /* [string] */ WCHAR __RPC_FAR *pwcsPhrase;
    LCID lcid;
    }	NATLANGUAGERESTRICTION;

#define	PRLT	( 0 )

#define	PRLE	( 1 )

#define	PRGT	( 2 )

#define	PRGE	( 3 )

#define	PREQ	( 4 )

#define	PRNE	( 5 )

#define	PRRE	( 6 )

#define	PRAllBits	( 7 )

#define	PRSomeBits	( 8 )

#define	PRAll	( 0x100 )

#define	PRAny	( 0x200 )

typedef struct tagPROPERTYRESTRICTION
    {
    ULONG rel;
    FULLPROPSPEC prop;
    PROPVARIANT prval;
    }	PROPERTYRESTRICTION;


struct tagRESTRICTION
    {
    ULONG rt;
    ULONG weight;
    /* [switch_is][switch_type] */ union _URes
        {
        /* [case()] */ NODERESTRICTION ar;
        /* [case()] */ NODERESTRICTION or;
        /* [case()] */ NODERESTRICTION pxr;
        /* [case()] */ VECTORRESTRICTION vr;
        /* [case()] */ NOTRESTRICTION nr;
        /* [case()] */ CONTENTRESTRICTION cr;
        /* [case()] */ NATLANGUAGERESTRICTION nlr;
        /* [case()] */ PROPERTYRESTRICTION pr;
        /* [default] */  /* Empty union arm */ 
        }	res;
    };
typedef struct tagCOLUMNSET
    {
    ULONG cCol;
    /* [size_is] */ FULLPROPSPEC __RPC_FAR *aCol;
    }	COLUMNSET;

#define	QUERY_SORTASCEND	( 0 )

#define	QUERY_SORTDESCEND	( 1 )

#define	QUERY_SORTXASCEND	( 2 )

#define	QUERY_SORTXDESCEND	( 3 )

#define	QUERY_SORTDEFAULT	( 4 )

typedef struct tagSORTKEY
    {
    FULLPROPSPEC propColumn;
    ULONG dwOrder;
    LCID locale;
    }	SORTKEY;

typedef struct tagSORTSET
    {
    ULONG cCol;
    /* [size_is] */ SORTKEY __RPC_FAR *aCol;
    }	SORTSET;

#define	CATEGORIZE_UNIQUE	( 0 )

#define	CATEGORIZE_CLUSTER	( 1 )

#define	CATEGORIZE_BUCKETS	( 2 )

#define	BUCKET_LINEAR	( 0 )

#define	BUCKET_EXPONENTIAL	( 1 )

typedef struct tagBUCKETCATEGORIZE
    {
    ULONG cBuckets;
    ULONG Distribution;
    }	BUCKETCATEGORIZE;

#define	CATEGORIZE_RANGE	( 3 )

typedef struct tagRANGECATEGORIZE
    {
    ULONG cRange;
    /* [size_is] */ PROPVARIANT __RPC_FAR *aRangeBegin;
    }	RANGECATEGORIZE;

typedef struct tagCATEGORIZATION
    {
    ULONG ulCatType;
    /* [switch_is][switch_type] */ union 
        {
        /* [case()] */ ULONG cClusters;
        /* [case()] */ BUCKETCATEGORIZE bucket;
        /* [case()] */ RANGECATEGORIZE range;
        /* [case()] */  /* Empty union arm */ 
        }	;
    COLUMNSET csColumns;
    }	CATEGORIZATION;

typedef struct tagCATEGORIZATIONSET
    {
    ULONG cCat;
    /* [size_is] */ CATEGORIZATION __RPC_FAR *aCat;
    }	CATEGORIZATIONSET;

typedef unsigned long OCCURRENCE;

#define	OCC_INVALID	( 0xffffffff )

#define	MAX_QUERY_RANK	( 1000 )



extern RPC_IF_HANDLE IQueryStructures_v0_0_c_ifspec;
extern RPC_IF_HANDLE IQueryStructures_v0_0_s_ifspec;
#endif /* __IQueryStructures_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_query_0087 */
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


extern RPC_IF_HANDLE __MIDL_itf_query_0087_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_query_0087_v0_0_s_ifspec;

#ifndef __ISearchQueryHits_INTERFACE_DEFINED__
#define __ISearchQueryHits_INTERFACE_DEFINED__

/* interface ISearchQueryHits */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_ISearchQueryHits;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ed8ce7e0-106c-11ce-84e2-00aa004b9986")
    ISearchQueryHits : public IUnknown
    {
    public:
        virtual SCODE STDMETHODCALLTYPE Init( 
            /* [in] */ IFilter __RPC_FAR *pflt,
            /* [in] */ ULONG ulFlags) = 0;
        
        virtual SCODE STDMETHODCALLTYPE NextHitMoniker( 
            /* [out][in] */ ULONG __RPC_FAR *pcMnk,
            /* [size_is][out] */ IMoniker __RPC_FAR *__RPC_FAR *__RPC_FAR *papMnk) = 0;
        
        virtual SCODE STDMETHODCALLTYPE NextHitOffset( 
            /* [out][in] */ ULONG __RPC_FAR *pcRegion,
            /* [size_is][out] */ FILTERREGION __RPC_FAR *__RPC_FAR *paRegion) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISearchQueryHitsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISearchQueryHits __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISearchQueryHits __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISearchQueryHits __RPC_FAR * This);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *Init )( 
            ISearchQueryHits __RPC_FAR * This,
            /* [in] */ IFilter __RPC_FAR *pflt,
            /* [in] */ ULONG ulFlags);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *NextHitMoniker )( 
            ISearchQueryHits __RPC_FAR * This,
            /* [out][in] */ ULONG __RPC_FAR *pcMnk,
            /* [size_is][out] */ IMoniker __RPC_FAR *__RPC_FAR *__RPC_FAR *papMnk);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *NextHitOffset )( 
            ISearchQueryHits __RPC_FAR * This,
            /* [out][in] */ ULONG __RPC_FAR *pcRegion,
            /* [size_is][out] */ FILTERREGION __RPC_FAR *__RPC_FAR *paRegion);
        
        END_INTERFACE
    } ISearchQueryHitsVtbl;

    interface ISearchQueryHits
    {
        CONST_VTBL struct ISearchQueryHitsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISearchQueryHits_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISearchQueryHits_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISearchQueryHits_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISearchQueryHits_Init(This,pflt,ulFlags)	\
    (This)->lpVtbl -> Init(This,pflt,ulFlags)

#define ISearchQueryHits_NextHitMoniker(This,pcMnk,papMnk)	\
    (This)->lpVtbl -> NextHitMoniker(This,pcMnk,papMnk)

#define ISearchQueryHits_NextHitOffset(This,pcRegion,paRegion)	\
    (This)->lpVtbl -> NextHitOffset(This,pcRegion,paRegion)

#endif /* COBJMACROS */


#endif 	/* C style interface */



SCODE STDMETHODCALLTYPE ISearchQueryHits_Init_Proxy( 
    ISearchQueryHits __RPC_FAR * This,
    /* [in] */ IFilter __RPC_FAR *pflt,
    /* [in] */ ULONG ulFlags);


void __RPC_STUB ISearchQueryHits_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE ISearchQueryHits_NextHitMoniker_Proxy( 
    ISearchQueryHits __RPC_FAR * This,
    /* [out][in] */ ULONG __RPC_FAR *pcMnk,
    /* [size_is][out] */ IMoniker __RPC_FAR *__RPC_FAR *__RPC_FAR *papMnk);


void __RPC_STUB ISearchQueryHits_NextHitMoniker_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE ISearchQueryHits_NextHitOffset_Proxy( 
    ISearchQueryHits __RPC_FAR * This,
    /* [out][in] */ ULONG __RPC_FAR *pcRegion,
    /* [size_is][out] */ FILTERREGION __RPC_FAR *__RPC_FAR *paRegion);


void __RPC_STUB ISearchQueryHits_NextHitOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISearchQueryHits_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_query_0088 */
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


extern RPC_IF_HANDLE __MIDL_itf_query_0088_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_query_0088_v0_0_s_ifspec;

#ifndef __IPhraseSink_INTERFACE_DEFINED__
#define __IPhraseSink_INTERFACE_DEFINED__

/* interface IPhraseSink */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IPhraseSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC906FF0-C058-101A-B554-08002B33B0E6")
    IPhraseSink : public IUnknown
    {
    public:
        virtual SCODE STDMETHODCALLTYPE PutSmallPhrase( 
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcNoun,
            /* [in] */ ULONG cwcNoun,
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcModifier,
            /* [in] */ ULONG cwcModifier,
            /* [in] */ ULONG ulAttachmentType) = 0;
        
        virtual SCODE STDMETHODCALLTYPE PutPhrase( 
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcPhrase,
            /* [in] */ ULONG cwcPhrase) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPhraseSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPhraseSink __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPhraseSink __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPhraseSink __RPC_FAR * This);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *PutSmallPhrase )( 
            IPhraseSink __RPC_FAR * This,
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcNoun,
            /* [in] */ ULONG cwcNoun,
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcModifier,
            /* [in] */ ULONG cwcModifier,
            /* [in] */ ULONG ulAttachmentType);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *PutPhrase )( 
            IPhraseSink __RPC_FAR * This,
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcPhrase,
            /* [in] */ ULONG cwcPhrase);
        
        END_INTERFACE
    } IPhraseSinkVtbl;

    interface IPhraseSink
    {
        CONST_VTBL struct IPhraseSinkVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPhraseSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPhraseSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPhraseSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPhraseSink_PutSmallPhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType)	\
    (This)->lpVtbl -> PutSmallPhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType)

#define IPhraseSink_PutPhrase(This,pwcPhrase,cwcPhrase)	\
    (This)->lpVtbl -> PutPhrase(This,pwcPhrase,cwcPhrase)

#endif /* COBJMACROS */


#endif 	/* C style interface */



SCODE STDMETHODCALLTYPE IPhraseSink_PutSmallPhrase_Proxy( 
    IPhraseSink __RPC_FAR * This,
    /* [size_is][in] */ const WCHAR __RPC_FAR *pwcNoun,
    /* [in] */ ULONG cwcNoun,
    /* [size_is][in] */ const WCHAR __RPC_FAR *pwcModifier,
    /* [in] */ ULONG cwcModifier,
    /* [in] */ ULONG ulAttachmentType);


void __RPC_STUB IPhraseSink_PutSmallPhrase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IPhraseSink_PutPhrase_Proxy( 
    IPhraseSink __RPC_FAR * This,
    /* [size_is][in] */ const WCHAR __RPC_FAR *pwcPhrase,
    /* [in] */ ULONG cwcPhrase);


void __RPC_STUB IPhraseSink_PutPhrase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPhraseSink_INTERFACE_DEFINED__ */


#ifndef __IWordSink_INTERFACE_DEFINED__
#define __IWordSink_INTERFACE_DEFINED__

/* interface IWordSink */
/* [unique][uuid][object][local] */ 

#ifndef _tagWORDREP_BREAK_TYPE_DEFINED
typedef 
enum tagWORDREP_BREAK_TYPE
    {	WORDREP_BREAK_EOW	= 0,
	WORDREP_BREAK_EOS	= 1,
	WORDREP_BREAK_EOP	= 2,
	WORDREP_BREAK_EOC	= 3
    }	WORDREP_BREAK_TYPE;

#define _tagWORDREP_BREAK_TYPE_DEFINED
#define _WORDREP_BREAK_TYPE_DEFINED
#endif

EXTERN_C const IID IID_IWordSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC907054-C058-101A-B554-08002B33B0E6")
    IWordSink : public IUnknown
    {
    public:
        virtual SCODE STDMETHODCALLTYPE PutWord( 
            /* [in] */ ULONG cwc,
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcInBuf,
            /* [in] */ ULONG cwcSrcLen,
            /* [in] */ ULONG cwcSrcPos) = 0;
        
        virtual SCODE STDMETHODCALLTYPE PutAltWord( 
            /* [in] */ ULONG cwc,
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcInBuf,
            /* [in] */ ULONG cwcSrcLen,
            /* [in] */ ULONG cwcSrcPos) = 0;
        
        virtual SCODE STDMETHODCALLTYPE StartAltPhrase( void) = 0;
        
        virtual SCODE STDMETHODCALLTYPE EndAltPhrase( void) = 0;
        
        virtual SCODE STDMETHODCALLTYPE PutBreak( 
            /* [in] */ WORDREP_BREAK_TYPE breakType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWordSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IWordSink __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IWordSink __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IWordSink __RPC_FAR * This);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *PutWord )( 
            IWordSink __RPC_FAR * This,
            /* [in] */ ULONG cwc,
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcInBuf,
            /* [in] */ ULONG cwcSrcLen,
            /* [in] */ ULONG cwcSrcPos);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *PutAltWord )( 
            IWordSink __RPC_FAR * This,
            /* [in] */ ULONG cwc,
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcInBuf,
            /* [in] */ ULONG cwcSrcLen,
            /* [in] */ ULONG cwcSrcPos);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *StartAltPhrase )( 
            IWordSink __RPC_FAR * This);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *EndAltPhrase )( 
            IWordSink __RPC_FAR * This);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *PutBreak )( 
            IWordSink __RPC_FAR * This,
            /* [in] */ WORDREP_BREAK_TYPE breakType);
        
        END_INTERFACE
    } IWordSinkVtbl;

    interface IWordSink
    {
        CONST_VTBL struct IWordSinkVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWordSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWordSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWordSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWordSink_PutWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos)	\
    (This)->lpVtbl -> PutWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos)

#define IWordSink_PutAltWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos)	\
    (This)->lpVtbl -> PutAltWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos)

#define IWordSink_StartAltPhrase(This)	\
    (This)->lpVtbl -> StartAltPhrase(This)

#define IWordSink_EndAltPhrase(This)	\
    (This)->lpVtbl -> EndAltPhrase(This)

#define IWordSink_PutBreak(This,breakType)	\
    (This)->lpVtbl -> PutBreak(This,breakType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



SCODE STDMETHODCALLTYPE IWordSink_PutWord_Proxy( 
    IWordSink __RPC_FAR * This,
    /* [in] */ ULONG cwc,
    /* [size_is][in] */ const WCHAR __RPC_FAR *pwcInBuf,
    /* [in] */ ULONG cwcSrcLen,
    /* [in] */ ULONG cwcSrcPos);


void __RPC_STUB IWordSink_PutWord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IWordSink_PutAltWord_Proxy( 
    IWordSink __RPC_FAR * This,
    /* [in] */ ULONG cwc,
    /* [size_is][in] */ const WCHAR __RPC_FAR *pwcInBuf,
    /* [in] */ ULONG cwcSrcLen,
    /* [in] */ ULONG cwcSrcPos);


void __RPC_STUB IWordSink_PutAltWord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IWordSink_StartAltPhrase_Proxy( 
    IWordSink __RPC_FAR * This);


void __RPC_STUB IWordSink_StartAltPhrase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IWordSink_EndAltPhrase_Proxy( 
    IWordSink __RPC_FAR * This);


void __RPC_STUB IWordSink_EndAltPhrase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IWordSink_PutBreak_Proxy( 
    IWordSink __RPC_FAR * This,
    /* [in] */ WORDREP_BREAK_TYPE breakType);


void __RPC_STUB IWordSink_PutBreak_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWordSink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_query_0090 */
/* [local] */ 

#ifndef _tagTEXT_SOURCE_DEFINED

typedef SCODE ( __stdcall __RPC_FAR *PFNFILLTEXTBUFFER )( 
    struct tagTEXT_SOURCE __RPC_FAR *pTextSource);

typedef struct tagTEXT_SOURCE
    {
    PFNFILLTEXTBUFFER pfnFillTextBuffer;
    const WCHAR __RPC_FAR *awcBuffer;
    ULONG iEnd;
    ULONG iCur;
    }	TEXT_SOURCE;

#define _tagTEXT_SOURCE_DEFINED
#define _TEXT_SOURCE_DEFINED
#endif


extern RPC_IF_HANDLE __MIDL_itf_query_0090_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_query_0090_v0_0_s_ifspec;

#ifndef __IWordBreaker_INTERFACE_DEFINED__
#define __IWordBreaker_INTERFACE_DEFINED__

/* interface IWordBreaker */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IWordBreaker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D53552C8-77E3-101A-B552-08002B33B0E6")
    IWordBreaker : public IUnknown
    {
    public:
        virtual SCODE STDMETHODCALLTYPE Init( 
            /* [in] */ BOOL fQuery,
            /* [in] */ ULONG ulMaxTokenSize,
            /* [out] */ BOOL __RPC_FAR *pfLicense) = 0;
        
        virtual SCODE STDMETHODCALLTYPE BreakText( 
            /* [in] */ TEXT_SOURCE __RPC_FAR *pTextSource,
            /* [in] */ IWordSink __RPC_FAR *pWordSink,
            /* [in] */ IPhraseSink __RPC_FAR *pPhraseSink) = 0;
        
        virtual SCODE STDMETHODCALLTYPE ComposePhrase( 
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcNoun,
            /* [in] */ ULONG cwcNoun,
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcModifier,
            /* [in] */ ULONG cwcModifier,
            /* [in] */ ULONG ulAttachmentType,
            /* [size_is][out] */ WCHAR __RPC_FAR *pwcPhrase,
            /* [out][in] */ ULONG __RPC_FAR *pcwcPhrase) = 0;
        
        virtual SCODE STDMETHODCALLTYPE GetLicenseToUse( 
            /* [string][out] */ const WCHAR __RPC_FAR *__RPC_FAR *ppwcsLicense) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWordBreakerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IWordBreaker __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IWordBreaker __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IWordBreaker __RPC_FAR * This);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *Init )( 
            IWordBreaker __RPC_FAR * This,
            /* [in] */ BOOL fQuery,
            /* [in] */ ULONG ulMaxTokenSize,
            /* [out] */ BOOL __RPC_FAR *pfLicense);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *BreakText )( 
            IWordBreaker __RPC_FAR * This,
            /* [in] */ TEXT_SOURCE __RPC_FAR *pTextSource,
            /* [in] */ IWordSink __RPC_FAR *pWordSink,
            /* [in] */ IPhraseSink __RPC_FAR *pPhraseSink);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *ComposePhrase )( 
            IWordBreaker __RPC_FAR * This,
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcNoun,
            /* [in] */ ULONG cwcNoun,
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcModifier,
            /* [in] */ ULONG cwcModifier,
            /* [in] */ ULONG ulAttachmentType,
            /* [size_is][out] */ WCHAR __RPC_FAR *pwcPhrase,
            /* [out][in] */ ULONG __RPC_FAR *pcwcPhrase);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *GetLicenseToUse )( 
            IWordBreaker __RPC_FAR * This,
            /* [string][out] */ const WCHAR __RPC_FAR *__RPC_FAR *ppwcsLicense);
        
        END_INTERFACE
    } IWordBreakerVtbl;

    interface IWordBreaker
    {
        CONST_VTBL struct IWordBreakerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWordBreaker_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWordBreaker_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWordBreaker_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWordBreaker_Init(This,fQuery,ulMaxTokenSize,pfLicense)	\
    (This)->lpVtbl -> Init(This,fQuery,ulMaxTokenSize,pfLicense)

#define IWordBreaker_BreakText(This,pTextSource,pWordSink,pPhraseSink)	\
    (This)->lpVtbl -> BreakText(This,pTextSource,pWordSink,pPhraseSink)

#define IWordBreaker_ComposePhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType,pwcPhrase,pcwcPhrase)	\
    (This)->lpVtbl -> ComposePhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType,pwcPhrase,pcwcPhrase)

#define IWordBreaker_GetLicenseToUse(This,ppwcsLicense)	\
    (This)->lpVtbl -> GetLicenseToUse(This,ppwcsLicense)

#endif /* COBJMACROS */


#endif 	/* C style interface */



SCODE STDMETHODCALLTYPE IWordBreaker_Init_Proxy( 
    IWordBreaker __RPC_FAR * This,
    /* [in] */ BOOL fQuery,
    /* [in] */ ULONG ulMaxTokenSize,
    /* [out] */ BOOL __RPC_FAR *pfLicense);


void __RPC_STUB IWordBreaker_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IWordBreaker_BreakText_Proxy( 
    IWordBreaker __RPC_FAR * This,
    /* [in] */ TEXT_SOURCE __RPC_FAR *pTextSource,
    /* [in] */ IWordSink __RPC_FAR *pWordSink,
    /* [in] */ IPhraseSink __RPC_FAR *pPhraseSink);


void __RPC_STUB IWordBreaker_BreakText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IWordBreaker_ComposePhrase_Proxy( 
    IWordBreaker __RPC_FAR * This,
    /* [size_is][in] */ const WCHAR __RPC_FAR *pwcNoun,
    /* [in] */ ULONG cwcNoun,
    /* [size_is][in] */ const WCHAR __RPC_FAR *pwcModifier,
    /* [in] */ ULONG cwcModifier,
    /* [in] */ ULONG ulAttachmentType,
    /* [size_is][out] */ WCHAR __RPC_FAR *pwcPhrase,
    /* [out][in] */ ULONG __RPC_FAR *pcwcPhrase);


void __RPC_STUB IWordBreaker_ComposePhrase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IWordBreaker_GetLicenseToUse_Proxy( 
    IWordBreaker __RPC_FAR * This,
    /* [string][out] */ const WCHAR __RPC_FAR *__RPC_FAR *ppwcsLicense);


void __RPC_STUB IWordBreaker_GetLicenseToUse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWordBreaker_INTERFACE_DEFINED__ */


#ifndef __IStemSink_INTERFACE_DEFINED__
#define __IStemSink_INTERFACE_DEFINED__

/* interface IStemSink */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IStemSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fe77c330-7f42-11ce-be57-00aa0051fe20")
    IStemSink : public IUnknown
    {
    public:
        virtual SCODE STDMETHODCALLTYPE PutAltWord( 
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcInBuf,
            /* [in] */ ULONG cwc) = 0;
        
        virtual SCODE STDMETHODCALLTYPE PutWord( 
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcInBuf,
            /* [in] */ ULONG cwc) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStemSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IStemSink __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IStemSink __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IStemSink __RPC_FAR * This);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *PutAltWord )( 
            IStemSink __RPC_FAR * This,
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcInBuf,
            /* [in] */ ULONG cwc);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *PutWord )( 
            IStemSink __RPC_FAR * This,
            /* [size_is][in] */ const WCHAR __RPC_FAR *pwcInBuf,
            /* [in] */ ULONG cwc);
        
        END_INTERFACE
    } IStemSinkVtbl;

    interface IStemSink
    {
        CONST_VTBL struct IStemSinkVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStemSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IStemSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IStemSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IStemSink_PutAltWord(This,pwcInBuf,cwc)	\
    (This)->lpVtbl -> PutAltWord(This,pwcInBuf,cwc)

#define IStemSink_PutWord(This,pwcInBuf,cwc)	\
    (This)->lpVtbl -> PutWord(This,pwcInBuf,cwc)

#endif /* COBJMACROS */


#endif 	/* C style interface */



SCODE STDMETHODCALLTYPE IStemSink_PutAltWord_Proxy( 
    IStemSink __RPC_FAR * This,
    /* [size_is][in] */ const WCHAR __RPC_FAR *pwcInBuf,
    /* [in] */ ULONG cwc);


void __RPC_STUB IStemSink_PutAltWord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IStemSink_PutWord_Proxy( 
    IStemSink __RPC_FAR * This,
    /* [size_is][in] */ const WCHAR __RPC_FAR *pwcInBuf,
    /* [in] */ ULONG cwc);


void __RPC_STUB IStemSink_PutWord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IStemSink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_query_0092 */
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


extern RPC_IF_HANDLE __MIDL_itf_query_0092_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_query_0092_v0_0_s_ifspec;

#ifndef __IStemmer_INTERFACE_DEFINED__
#define __IStemmer_INTERFACE_DEFINED__

/* interface IStemmer */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IStemmer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("efbaf140-7f42-11ce-be57-00aa0051fe20")
    IStemmer : public IUnknown
    {
    public:
        virtual SCODE STDMETHODCALLTYPE Init( 
            /* [in] */ ULONG ulMaxTokenSize,
            /* [out] */ BOOL __RPC_FAR *pfLicense) = 0;
        
        virtual SCODE STDMETHODCALLTYPE StemWord( 
            /* [in] */ const WCHAR __RPC_FAR *pwcInBuf,
            /* [in] */ ULONG cwc,
            /* [in] */ IStemSink __RPC_FAR *pStemSink) = 0;
        
        virtual SCODE STDMETHODCALLTYPE GetLicenseToUse( 
            /* [string][out] */ const WCHAR __RPC_FAR *__RPC_FAR *ppwcsLicense) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStemmerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IStemmer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IStemmer __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IStemmer __RPC_FAR * This);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *Init )( 
            IStemmer __RPC_FAR * This,
            /* [in] */ ULONG ulMaxTokenSize,
            /* [out] */ BOOL __RPC_FAR *pfLicense);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *StemWord )( 
            IStemmer __RPC_FAR * This,
            /* [in] */ const WCHAR __RPC_FAR *pwcInBuf,
            /* [in] */ ULONG cwc,
            /* [in] */ IStemSink __RPC_FAR *pStemSink);
        
        SCODE ( STDMETHODCALLTYPE __RPC_FAR *GetLicenseToUse )( 
            IStemmer __RPC_FAR * This,
            /* [string][out] */ const WCHAR __RPC_FAR *__RPC_FAR *ppwcsLicense);
        
        END_INTERFACE
    } IStemmerVtbl;

    interface IStemmer
    {
        CONST_VTBL struct IStemmerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStemmer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IStemmer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IStemmer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IStemmer_Init(This,ulMaxTokenSize,pfLicense)	\
    (This)->lpVtbl -> Init(This,ulMaxTokenSize,pfLicense)

#define IStemmer_StemWord(This,pwcInBuf,cwc,pStemSink)	\
    (This)->lpVtbl -> StemWord(This,pwcInBuf,cwc,pStemSink)

#define IStemmer_GetLicenseToUse(This,ppwcsLicense)	\
    (This)->lpVtbl -> GetLicenseToUse(This,ppwcsLicense)

#endif /* COBJMACROS */


#endif 	/* C style interface */



SCODE STDMETHODCALLTYPE IStemmer_Init_Proxy( 
    IStemmer __RPC_FAR * This,
    /* [in] */ ULONG ulMaxTokenSize,
    /* [out] */ BOOL __RPC_FAR *pfLicense);


void __RPC_STUB IStemmer_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IStemmer_StemWord_Proxy( 
    IStemmer __RPC_FAR * This,
    /* [in] */ const WCHAR __RPC_FAR *pwcInBuf,
    /* [in] */ ULONG cwc,
    /* [in] */ IStemSink __RPC_FAR *pStemSink);


void __RPC_STUB IStemmer_StemWord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


SCODE STDMETHODCALLTYPE IStemmer_GetLicenseToUse_Proxy( 
    IStemmer __RPC_FAR * This,
    /* [string][out] */ const WCHAR __RPC_FAR *__RPC_FAR *ppwcsLicense);


void __RPC_STUB IStemmer_GetLicenseToUse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IStemmer_INTERFACE_DEFINED__ */


#ifndef __IRowsetQueryStatus_INTERFACE_DEFINED__
#define __IRowsetQueryStatus_INTERFACE_DEFINED__

/* interface IRowsetQueryStatus */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IRowsetQueryStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a7ac77ed-f8d7-11ce-a798-0020f8008024")
    IRowsetQueryStatus : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ DWORD __RPC_FAR *pdwStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatusEx( 
            /* [out] */ DWORD __RPC_FAR *pdwStatus,
            /* [out] */ DWORD __RPC_FAR *pcFilteredDocuments,
            /* [out] */ DWORD __RPC_FAR *pcDocumentsToFilter,
            /* [out] */ ULONG_PTR __RPC_FAR *pdwRatioFinishedDenominator,
            /* [out] */ ULONG_PTR __RPC_FAR *pdwRatioFinishedNumerator,
            /* [in] */ ULONG_PTR cbBmk,
            /* [size_is][in] */ const BYTE __RPC_FAR *pBmk,
            /* [out] */ ULONG_PTR __RPC_FAR *piRowBmk,
            /* [out] */ ULONG_PTR __RPC_FAR *pcRowsTotal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRowsetQueryStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRowsetQueryStatus __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRowsetQueryStatus __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRowsetQueryStatus __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetStatus )( 
            IRowsetQueryStatus __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwStatus);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetStatusEx )( 
            IRowsetQueryStatus __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwStatus,
            /* [out] */ DWORD __RPC_FAR *pcFilteredDocuments,
            /* [out] */ DWORD __RPC_FAR *pcDocumentsToFilter,
            /* [out] */ ULONG_PTR __RPC_FAR *pdwRatioFinishedDenominator,
            /* [out] */ ULONG_PTR __RPC_FAR *pdwRatioFinishedNumerator,
            /* [in] */ ULONG_PTR cbBmk,
            /* [size_is][in] */ const BYTE __RPC_FAR *pBmk,
            /* [out] */ ULONG_PTR __RPC_FAR *piRowBmk,
            /* [out] */ ULONG_PTR __RPC_FAR *pcRowsTotal);
        
        END_INTERFACE
    } IRowsetQueryStatusVtbl;

    interface IRowsetQueryStatus
    {
        CONST_VTBL struct IRowsetQueryStatusVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRowsetQueryStatus_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRowsetQueryStatus_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRowsetQueryStatus_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRowsetQueryStatus_GetStatus(This,pdwStatus)	\
    (This)->lpVtbl -> GetStatus(This,pdwStatus)

#define IRowsetQueryStatus_GetStatusEx(This,pdwStatus,pcFilteredDocuments,pcDocumentsToFilter,pdwRatioFinishedDenominator,pdwRatioFinishedNumerator,cbBmk,pBmk,piRowBmk,pcRowsTotal)	\
    (This)->lpVtbl -> GetStatusEx(This,pdwStatus,pcFilteredDocuments,pcDocumentsToFilter,pdwRatioFinishedDenominator,pdwRatioFinishedNumerator,cbBmk,pBmk,piRowBmk,pcRowsTotal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRowsetQueryStatus_GetStatus_Proxy( 
    IRowsetQueryStatus __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwStatus);


void __RPC_STUB IRowsetQueryStatus_GetStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRowsetQueryStatus_GetStatusEx_Proxy( 
    IRowsetQueryStatus __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwStatus,
    /* [out] */ DWORD __RPC_FAR *pcFilteredDocuments,
    /* [out] */ DWORD __RPC_FAR *pcDocumentsToFilter,
    /* [out] */ ULONG_PTR __RPC_FAR *pdwRatioFinishedDenominator,
    /* [out] */ ULONG_PTR __RPC_FAR *pdwRatioFinishedNumerator,
    /* [in] */ ULONG_PTR cbBmk,
    /* [size_is][in] */ const BYTE __RPC_FAR *pBmk,
    /* [out] */ ULONG_PTR __RPC_FAR *piRowBmk,
    /* [out] */ ULONG_PTR __RPC_FAR *pcRowsTotal);


void __RPC_STUB IRowsetQueryStatus_GetStatusEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRowsetQueryStatus_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_query_0094 */
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
typedef struct tagDBID DBID;

typedef WORD DBTYPE;



extern RPC_IF_HANDLE __MIDL_itf_query_0094_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_query_0094_v0_0_s_ifspec;

#ifndef __IColumnMapper_INTERFACE_DEFINED__
#define __IColumnMapper_INTERFACE_DEFINED__

/* interface IColumnMapper */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IColumnMapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0b63e37a-9ccc-11d0-bcdb-00805fccce04")
    IColumnMapper : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropInfoFromName( 
            /* [string][in] */ const WCHAR __RPC_FAR *wcsPropName,
            /* [out] */ DBID __RPC_FAR *__RPC_FAR *ppPropId,
            /* [out] */ DBTYPE __RPC_FAR *pPropType,
            /* [out] */ unsigned int __RPC_FAR *puiWidth) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropInfoFromId( 
            /* [in] */ const DBID __RPC_FAR *pPropId,
            /* [out] */ WCHAR __RPC_FAR *__RPC_FAR *pwcsName,
            /* [out] */ DBTYPE __RPC_FAR *pPropType,
            /* [out] */ unsigned int __RPC_FAR *puiWidth) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumPropInfo( 
            /* [in] */ ULONG iEntry,
            /* [out] */ const WCHAR __RPC_FAR *__RPC_FAR *pwcsName,
            /* [out] */ DBID __RPC_FAR *__RPC_FAR *ppPropId,
            /* [out] */ DBTYPE __RPC_FAR *pPropType,
            /* [out] */ unsigned int __RPC_FAR *puiWidth) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsMapUpToDate( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IColumnMapperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IColumnMapper __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IColumnMapper __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IColumnMapper __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropInfoFromName )( 
            IColumnMapper __RPC_FAR * This,
            /* [string][in] */ const WCHAR __RPC_FAR *wcsPropName,
            /* [out] */ DBID __RPC_FAR *__RPC_FAR *ppPropId,
            /* [out] */ DBTYPE __RPC_FAR *pPropType,
            /* [out] */ unsigned int __RPC_FAR *puiWidth);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropInfoFromId )( 
            IColumnMapper __RPC_FAR * This,
            /* [in] */ const DBID __RPC_FAR *pPropId,
            /* [out] */ WCHAR __RPC_FAR *__RPC_FAR *pwcsName,
            /* [out] */ DBTYPE __RPC_FAR *pPropType,
            /* [out] */ unsigned int __RPC_FAR *puiWidth);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumPropInfo )( 
            IColumnMapper __RPC_FAR * This,
            /* [in] */ ULONG iEntry,
            /* [out] */ const WCHAR __RPC_FAR *__RPC_FAR *pwcsName,
            /* [out] */ DBID __RPC_FAR *__RPC_FAR *ppPropId,
            /* [out] */ DBTYPE __RPC_FAR *pPropType,
            /* [out] */ unsigned int __RPC_FAR *puiWidth);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsMapUpToDate )( 
            IColumnMapper __RPC_FAR * This);
        
        END_INTERFACE
    } IColumnMapperVtbl;

    interface IColumnMapper
    {
        CONST_VTBL struct IColumnMapperVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IColumnMapper_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IColumnMapper_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IColumnMapper_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IColumnMapper_GetPropInfoFromName(This,wcsPropName,ppPropId,pPropType,puiWidth)	\
    (This)->lpVtbl -> GetPropInfoFromName(This,wcsPropName,ppPropId,pPropType,puiWidth)

#define IColumnMapper_GetPropInfoFromId(This,pPropId,pwcsName,pPropType,puiWidth)	\
    (This)->lpVtbl -> GetPropInfoFromId(This,pPropId,pwcsName,pPropType,puiWidth)

#define IColumnMapper_EnumPropInfo(This,iEntry,pwcsName,ppPropId,pPropType,puiWidth)	\
    (This)->lpVtbl -> EnumPropInfo(This,iEntry,pwcsName,ppPropId,pPropType,puiWidth)

#define IColumnMapper_IsMapUpToDate(This)	\
    (This)->lpVtbl -> IsMapUpToDate(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IColumnMapper_GetPropInfoFromName_Proxy( 
    IColumnMapper __RPC_FAR * This,
    /* [string][in] */ const WCHAR __RPC_FAR *wcsPropName,
    /* [out] */ DBID __RPC_FAR *__RPC_FAR *ppPropId,
    /* [out] */ DBTYPE __RPC_FAR *pPropType,
    /* [out] */ unsigned int __RPC_FAR *puiWidth);


void __RPC_STUB IColumnMapper_GetPropInfoFromName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IColumnMapper_GetPropInfoFromId_Proxy( 
    IColumnMapper __RPC_FAR * This,
    /* [in] */ const DBID __RPC_FAR *pPropId,
    /* [out] */ WCHAR __RPC_FAR *__RPC_FAR *pwcsName,
    /* [out] */ DBTYPE __RPC_FAR *pPropType,
    /* [out] */ unsigned int __RPC_FAR *puiWidth);


void __RPC_STUB IColumnMapper_GetPropInfoFromId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IColumnMapper_EnumPropInfo_Proxy( 
    IColumnMapper __RPC_FAR * This,
    /* [in] */ ULONG iEntry,
    /* [out] */ const WCHAR __RPC_FAR *__RPC_FAR *pwcsName,
    /* [out] */ DBID __RPC_FAR *__RPC_FAR *ppPropId,
    /* [out] */ DBTYPE __RPC_FAR *pPropType,
    /* [out] */ unsigned int __RPC_FAR *puiWidth);


void __RPC_STUB IColumnMapper_EnumPropInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IColumnMapper_IsMapUpToDate_Proxy( 
    IColumnMapper __RPC_FAR * This);


void __RPC_STUB IColumnMapper_IsMapUpToDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IColumnMapper_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_query_0095 */
/* [local] */ 

#define	LOCAL_MACHINE	( L"." )

#define	SYSTEM_DEFAULT_CAT	( L"__SystemDefault__" )

#define	INDEX_SERVER_DEFAULT_CAT	( L"__IndexServerDefault__" )



extern RPC_IF_HANDLE __MIDL_itf_query_0095_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_query_0095_v0_0_s_ifspec;

#ifndef __IColumnMapperCreator_INTERFACE_DEFINED__
#define __IColumnMapperCreator_INTERFACE_DEFINED__

/* interface IColumnMapperCreator */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IColumnMapperCreator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0b63e37b-9ccc-11d0-bcdb-00805fccce04")
    IColumnMapperCreator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetColumnMapper( 
            /* [string][in] */ const WCHAR __RPC_FAR *wcsMachineName,
            /* [string][in] */ const WCHAR __RPC_FAR *wcsCatalogName,
            /* [out] */ IColumnMapper __RPC_FAR *__RPC_FAR *ppColumnMapper) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IColumnMapperCreatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IColumnMapperCreator __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IColumnMapperCreator __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IColumnMapperCreator __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetColumnMapper )( 
            IColumnMapperCreator __RPC_FAR * This,
            /* [string][in] */ const WCHAR __RPC_FAR *wcsMachineName,
            /* [string][in] */ const WCHAR __RPC_FAR *wcsCatalogName,
            /* [out] */ IColumnMapper __RPC_FAR *__RPC_FAR *ppColumnMapper);
        
        END_INTERFACE
    } IColumnMapperCreatorVtbl;

    interface IColumnMapperCreator
    {
        CONST_VTBL struct IColumnMapperCreatorVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IColumnMapperCreator_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IColumnMapperCreator_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IColumnMapperCreator_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IColumnMapperCreator_GetColumnMapper(This,wcsMachineName,wcsCatalogName,ppColumnMapper)	\
    (This)->lpVtbl -> GetColumnMapper(This,wcsMachineName,wcsCatalogName,ppColumnMapper)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IColumnMapperCreator_GetColumnMapper_Proxy( 
    IColumnMapperCreator __RPC_FAR * This,
    /* [string][in] */ const WCHAR __RPC_FAR *wcsMachineName,
    /* [string][in] */ const WCHAR __RPC_FAR *wcsCatalogName,
    /* [out] */ IColumnMapper __RPC_FAR *__RPC_FAR *ppColumnMapper);


void __RPC_STUB IColumnMapperCreator_GetColumnMapper_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IColumnMapperCreator_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


