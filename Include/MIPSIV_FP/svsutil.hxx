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
/*++


Module Name:

    svsutil.hxx

Abstract:

    Miscellaneous useful utilities header


--*/
#if ! defined (__svsutil_HXX__)
#define __svsutil_HXX__		1

#include <tchar.h>

#if ! defined (UNDER_CE)
#include <wchar.h>
#include <stddef.h>
#endif

#if ! defined (TRUE)
#define TRUE (1==1)
#endif

#if ! defined (FALSE)
#define FALSE (1==2)
#endif

#if defined (UNDER_CE) && defined (SDK_BUILD) && (! defined (InterlockedCompareExchange))
#define InterlockedCompareExchange(ptr, newval, oldval) \
	((PVOID)InterlockedTestExchange((LPLONG)ptr, (LONG)oldval, (LONG)newval))
#endif


#if defined (_DEBUG) || defined (DEBUG)
#define SVSUTIL_DEBUG_ANY		1
#define SVSUTIL_DEBUG_TREE		1
#define SVSUTIL_DEBUG_QUEUE		1
#define SVSUTIL_DEBUG_STACK		1
#define SVSUTIL_DEBUG_HEAP		1
#define SVSUTIL_DEBUG_ARRAYS	1
#define SVSUTIL_DEBUG_MT		1
#define SVSUTIL_DEBUG_THREADS   1
#endif

/* Enable providing a hint to prefast via __assume */ \
#ifdef _PREFAST_
#define SVSUTIL_ASSERT_ASSUME(exp) __assume(exp)
#else
#define SVSUTIL_ASSERT_ASSUME(exp) ((void)0)
#endif

#if defined (SVSUTIL_DEBUG_ANY)
#define SVSUTIL_ASSERT(c) ((c)? TRUE : (svsutil_AssertBroken (TEXT(__FILE__), __LINE__), TRUE))
#define SVSUTIL_ASSERT_PREFAST(c) \
    { \
       SVSUTIL_ASSERT_ASSUME(c); \
       SVSUTIL_ASSERT(c); \
    }
#else
#define SVSUTIL_ASSERT_PREFAST(c)
#define SVSUTIL_ASSERT(c)
#endif

#define SVSUTIL_MAX_ALIGNMENT	8

#define SVSUTIL_COLOR_BLACK		0
#define SVSUTIL_COLOR_RED		1

#define SVSUTIL_TREE_INITIAL	20
#define SVSUTIL_QUEUE_INITIAL	20
#define SVSUTIL_STACK_INITIAL	20

#define SVSUTIL_ATIMER_INCR		10

#if defined (SVSUTIL_DEBUG_ARRAYS)
#define SVSUTIL_TIER_COLLECTION_BIT		2
#define SVSUTIL_TIER_ELEMENT_BIT		3
#else
#define SVSUTIL_TIER_COLLECTION_BIT		6
#define SVSUTIL_TIER_ELEMENT_BIT		5
#endif
#define SVSUTIL_TIER_COLLECTION_SIZE	(1 << SVSUTIL_TIER_COLLECTION_BIT)
#define SVSUTIL_TIER_ELEMENT_SIZE		(1 << SVSUTIL_TIER_ELEMENT_BIT)
#define SVSUTIL_TIER_COLLECTION_MASK	((~((-1) << SVSUTIL_TIER_COLLECTION_BIT)) << SVSUTIL_TIER_ELEMENT_BIT)
#define SVSUTIL_TIER_ELEMENT_MASK		(~((-1) << SVSUTIL_TIER_ELEMENT_BIT))
#define SVSUTIL_TIER_MASK				(SVSUTIL_TIER_COLLECTION_MASK | SVSUTIL_TIER_ELEMENT_MASK)
#define SVSUTIL_TIER_BIT				(SVSUTIL_TIER_COLLECTION_BIT + SVSUTIL_TIER_ELEMENT_BIT)

#define SVSUTIL_ARRLEN(array)			(sizeof(array)/sizeof(array[0]))
#define SVSUTIL_CONSTSTRLEN(string)		(SVSUTIL_ARRLEN((string)) - 1)		// Do not count trailing '\0'

#define SVSUTIL_HANDLE_INVALID	0

#define SVS_FILETIME_TO_MILLISECONDS ((__int64)10000L)

#define SVS_DEBUG_THREAD_WORKER         			0
#define SVS_DEBUG_THREAD_SCHEDULE_EVENT 			0
#define SVS_DEBUG_THREAD_QUEUE          			0

#define SVS_THREAD_POOL_DEFAULT_MAX_THREADS         20
#define SVS_THREAD_INACTIVITY_TIMEOUT				(5 * 60000)
#define SVS_EVENT_TRACKER_BUFFER 5

#define SVSUTIL_PGUID_ELEMENTS(p) \
    p->Data1,                 p->Data2,    p->Data3,\
    p->Data4[0], p->Data4[1], p->Data4[2], p->Data4[3],\
    p->Data4[4], p->Data4[5], p->Data4[6], p->Data4[7]

#define SVSUTIL_RGUID_ELEMENTS(p) \
    p.Data1,                p.Data2,    p.Data3,\
    p.Data4[0], p.Data4[1], p.Data4[2], p.Data4[3],\
    p.Data4[4], p.Data4[5], p.Data4[6], p.Data4[7]


#define SVSUTIL_GUID_FORMAT_A    "%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x"
#define SVSUTIL_GUID_FORMAT_W   L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x"

#define SVSUTIL_GUID_FORMAT     SVSUTIL_GUID_FORMAT_W
#define SVSUTIL_GUID_STR_LENGTH (8 + 1 + 4 + 1 + 4 + 1 + 4 + 1 + 12)

#define SVSUTIL_SOCK_FGETS_READ_FAIL	0
#define SVSUTIL_SOCK_FGETS_READ_EOL		1
#define SVSUTIL_SOCK_FGETS_READ_CONT	2

//
//	General typedefs
//
struct FixedMemDescr;
struct HashDatabase;
struct SVSTimer;
struct SVSAttrTimer;
struct SVSSockIOD;
struct SVSMemArena;

#define MAXSKEY			((SVSCKey)-1)
#define SORTINV(kKey)	(MAXSKEY - kKey)

typedef unsigned long SVSCKey;			// Comparison key - this HAS to be unsigned!
typedef unsigned long SVSHKey;			// Hash key
typedef unsigned long SVSHandle;		// Handle
typedef unsigned long SVSCookie; 		// Cookie

typedef void *(*FuncAlloc)(int iSize, void *pvPrivateData);
typedef void (*FuncFree)(void *pvPtr, void *pvPrivateData);
typedef void *(*FuncRealloc)(void *pvPtr, int iSize, void *pvPrivateData);


typedef int (*FuncDebugOut)(void *pvPtr, TCHAR *lpszFormat, ...);

#if defined (__cplusplus)
extern "C" {
#endif

//
//	Externs
//
extern FuncAlloc	g_funcAlloc;
extern FuncFree		g_funcFree;
extern FuncRealloc	g_funcRealloc;
extern FuncDebugOut	g_funcDebugOut;

extern void		*g_pvAllocData;
extern void		*g_pvFreeData;
extern void		*g_pvDebugData;

//
//	Prototypes and classes
//
void svsutil_Initialize (void);
void svsutil_DeInitialize(void);
void svsutil_LogCallStack(void);
void *svsutil_Alloc (int iSize, void *pvData);
void *svsutil_ReAlloc (void *pvPtr, int iSize, void *pvData);
void svsutil_Free (void *pvPtr, void *pvData);
unsigned int svsutil_TotalAlloc (void);
int svsutil_AssertBroken (TCHAR *lpszFile, int iLine);

void svsutil_SetAlloc (FuncAlloc a_funcAlloc, FuncFree a_funcFree);
void svsutil_SetAllocData (void *a_pvAllocData, void *a_pvFreeData);
void svsutil_SetDebugOut (FuncDebugOut a_funcDebugOut, void *a_pvDebugData);

wchar_t	*svsutil_wcsdup (wchar_t *);
char	*svsutil_strdup (char *);

// if fRetryOnUtf8Fail=TRUE and uiCodePage=CP_UTF8 and UTF8 code page isn't installed on system, retry conversion with CP_ACP.
char* svsutil_WideCharToMultiByteDup(const wchar_t *lpwszString, unsigned int uiCodePage, int fRetryOnUtf8Fail);
wchar_t	*svsutil_MultiByteToWideChar(const CHAR *lpszString, unsigned int uiCodePage, int fRetryOnUtf8Fail);

#if defined (UNICODE)
#define svsutil_tcsdup	svsutil_wcsdup
#else
#define svsutil_tcsdup	svsutil_strdup
#endif

struct FixedMemDescr *svsutil_AllocFixedMemDescr (unsigned int a_uiBlockSize, unsigned int a_uiBlockIncr);
void *svsutil_GetFixed (struct FixedMemDescr *a_pfmd);
void svsutil_FreeFixed (void *pvData, struct FixedMemDescr *a_pfmd);
void svsutil_ReleaseFixedEmpty (struct FixedMemDescr *a_pfmd);
void svsutil_ReleaseFixedNonEmpty (struct FixedMemDescr *a_pfmd);
void svsutil_CompactFixed (struct FixedMemDescr *a_pfmd);
int svsutil_IsFixedEmpty (struct FixedMemDescr *a_pfmd);
int svsutil_FixedBlockSize (struct FixedMemDescr *a_pfmd);
#if defined (_WINDOWS_) || defined (_WINDOWS_CE_) || defined (UNDER_CE)
struct FixedMemDescr *svsutil_AllocFixedMemDescrSynch (unsigned int a_uiBlockSize, unsigned int a_uiBlockIncr, CRITICAL_SECTION *a_pcs);
#endif
void svsutil_GetFixedStats (struct FixedMemDescr *a_pfmd, unsigned int *puiFreeBlocks, unsigned int *puiTotalBlocks);

struct HashDatabase *svsutil_GetStringHash (int iBuckets, int iSens);
TCHAR *svsutil_StringHashAlloc(struct HashDatabase *pdb, TCHAR *lpszString);
TCHAR *svsutil_StringHashCheck (struct HashDatabase *pdb, TCHAR *lpszString);
int svsutil_StringHashFree (struct HashDatabase *pdb, TCHAR *lpszString);
int svsutil_StringHashRef (struct HashDatabase *pdb, TCHAR *lpszString);
void svsutil_DestroyStringHash (struct HashDatabase *pdb);
void svsutil_GetStringHashStats (struct HashDatabase *pdb, unsigned int *puiEntries);

struct HashDatabase *svsutil_GetBinHash (int iBuckets);
unsigned char *svsutil_BinHashAlloc(struct HashDatabase *pdb, unsigned char *ucArray, int cSize);
unsigned char *svsutil_BinHashCheck (struct HashDatabase *pdb, unsigned char *ucArray, int cSize);
int svsutil_BinHashFree (struct HashDatabase *pdb, unsigned char *ucArray);
int svsutil_BinHashRef (struct HashDatabase *pdb, unsigned char *ucArray);
void svsutil_DestroyBinHash (struct HashDatabase *pdb);
void svsutil_GetBinHashStats (struct HashDatabase *pdb, unsigned int *puiEntries);

int svsutil_OpenAndReadFile(WCHAR *wszFileName, DWORD *pdwFileSize, PSTR *ppszFileData);

#if defined (SVSUTIL_DEBUG_HEAP)
#define svsutil_ReleaseFixed svsutil_ReleaseFixedEmpty
#else
#define svsutil_ReleaseFixed svsutil_ReleaseFixedNonEmpty
#endif

void svsutil_GetAbsTime (unsigned int *ps, unsigned int *pms);
struct SVSAttrTimer *svsutil_AllocAttrTimer (void);
int  svsutil_SetAttrTimer   (struct SVSAttrTimer *pTimer, SVSHandle hEvent, unsigned int uiAbsTimeMillis);
int  svsutil_ClearAttrTimer (struct SVSAttrTimer *pTimer, SVSHandle hEvent);
void svsutil_FreeAttrTimer  (struct SVSAttrTimer *pTimer);
void svsutil_WalkAttrTimer (struct SVSAttrTimer *pTimer, void (*pfunc)(unsigned int uiWhen, SVSHandle hEvent, void *pvArg), void *pvArg);

#if defined (_WINSOCKAPI_)
struct SVSSockIOD *svsutil_sock_open (SOCKET s, int iosize, char *eol, int flags);
int svsutil_sock_fgets_ex (char *buffer, int nbuffer, struct SVSSockIOD *ps);
int svsutil_sock_fprintf (struct SVSSockIOD *ps, char *format, ...);
#endif

struct SVSMemArena *svsutil_AllocArena (unsigned int a_uiBlockSize);
void *svsutil_AllocFromArena (struct SVSMemArena *a_pad, int a_uiSize, int a_uiAlign);
void svsutil_ReleaseArena (struct SVSMemArena *a_pad);

#if defined (__cplusplus)
};
#endif

#if defined (__cplusplus)

#pragma warning(disable:4505)

#if defined (_WINDOWS_) || defined (_WINDOWS_CE_) || defined (UNDER_CE)
class SVSLocalCriticalSection {
	CRITICAL_SECTION *m_pcs;

public:
	SVSLocalCriticalSection (CRITICAL_SECTION *pcs) {
		m_pcs = pcs;
		EnterCriticalSection (pcs);
	}

	~SVSLocalCriticalSection (void) {
		LeaveCriticalSection (m_pcs);
	}
};

class SVSLocalCriticalSectionX {
	CRITICAL_SECTION *m_pcs;

public:
	SVSLocalCriticalSectionX (CRITICAL_SECTION *pcs) {
		m_pcs = pcs;
		if (m_pcs)
			EnterCriticalSection (m_pcs);
	}

	~SVSLocalCriticalSectionX (void) {
		if (m_pcs)
			LeaveCriticalSection (m_pcs);
	}
};

class SVSSynch {
protected:
	CRITICAL_SECTION	cs;

#if defined (SVSUTIL_DEBUG_MT)
	int					iRef;
	DWORD				dwLockingThreadId;
#endif

public:
	SVSSynch (void) {
		InitializeCriticalSection (&cs);

#if defined (SVSUTIL_DEBUG_MT)
		iRef		      = 0;
		dwLockingThreadId = 0;
#endif
	}
	~SVSSynch (void) {
#if defined (SVSUTIL_DEBUG_MT)
		SVSUTIL_ASSERT ((iRef == 0) && (dwLockingThreadId == 0));
#endif

		DeleteCriticalSection (&cs);
	}

public:
	void Lock (void) {
		EnterCriticalSection (&cs);

#if defined (SVSUTIL_DEBUG_MT)
		DWORD dwCurrentThreadId = GetCurrentThreadId();
		SVSUTIL_ASSERT (((iRef == 0) && (dwLockingThreadId == 0)) || ((iRef > 0) && (dwLockingThreadId == dwCurrentThreadId)));
		dwLockingThreadId = dwCurrentThreadId;
		iRef++;
#endif
	}

	void Unlock (void) {
#if defined (SVSUTIL_DEBUG_MT)
		DWORD dwCurrentThreadId = GetCurrentThreadId ();
		SVSUTIL_ASSERT ((iRef > 0) && (dwLockingThreadId == dwCurrentThreadId));
		if (--iRef == 0)
			dwLockingThreadId = 0;
#endif

		LeaveCriticalSection (&cs);
	}

	int IsLocked (void) {
#if defined (SVSUTIL_DEBUG_MT)
		DWORD dwCurrentThreadId = GetCurrentThreadId();
		return (iRef > 0) && (dwLockingThreadId == dwCurrentThreadId);
#else
		return TRUE;
#endif
	}
};

#endif

class SVSAllocClass {
public:
	void *operator new (size_t iSize) {
		void *pRes = g_funcAlloc(iSize, g_pvAllocData);
		SVSUTIL_ASSERT (pRes);
		return pRes;
	}

	void operator delete(void *ptr) {
		g_funcFree (ptr, g_pvFreeData);
	}
};

class SVSRefObj {
protected:
	int iRef;

public:
	void AddRef (void) {
#if defined (_WINDOWS_) || defined (_WINDOWS_CE_) || defined (UNDER_CE)
		InterlockedIncrement ((long *)&iRef);
#else
		++iRef;
#endif
	}

	void DelRef (void) {
		SVSUTIL_ASSERT (iRef > 0);
#if defined (_WINDOWS_) || defined (_WINDOWS_CE_) || defined (UNDER_CE)
		InterlockedDecrement ((long *)&iRef);
#else
		--iRef;
#endif
	}

	int GetRefCount (void) {
		return iRef;
	}

	SVSRefObj (void) {
		iRef = 1;
	}
};

class SVSSignallingRefObj : public SVSRefObj {
protected:
	void (*pfSignal)(void *);
	void *pvData;

public:
	void DelRef (void) {
		SVSUTIL_ASSERT (iRef > 0);
#if defined (_WINDOWS_) || defined (_WINDOWS_CE_) || defined (UNDER_CE)
		InterlockedDecrement ((long *)&iRef);
#else
		--iRef;
#endif

		if ((iRef == 0) && pfSignal)
			pfSignal (pvData);
	}

	SVSSignallingRefObj (void) {
		pfSignal = NULL;
		pvData   = NULL;
	}

	void SetSignal (void (*a_pfSignal)(void *), void *a_pvData) {
		SVSUTIL_ASSERT (pfSignal == NULL);
		SVSUTIL_ASSERT (pvData   == NULL);

		pfSignal = a_pfSignal;
		pvData   = a_pvData;
	}
};
//
//	Enumerable class
//
class SVSEnumClass {
public:
	virtual SVSHandle EnumStart     (void)            = 0;
	virtual SVSHandle EnumNext      (SVSHandle hEnum) = 0;
	virtual void      *EnumGetData  (SVSHandle hEnum) = 0;
	virtual SVSCKey   EnumGetKey   (SVSHandle hEnum) = 0;
};

//
//	Tree implementation
//
class SVSTNode {
protected:
	SVSCKey	cKey;
	void	*pvData;

	SVSTNode	*pParent;
	SVSTNode	*pLeft;
	SVSTNode	*pRight;

	int			iColor;

	friend class SVSTree;
};

class SVSTree : public SVSAllocClass, public SVSEnumClass {
protected:
	SVSTNode		*pRoot;
	SVSTNode		*pNil;
	FixedMemDescr	*pNodeMem;

	unsigned int	iSize;

	unsigned int	bFreeNodeMem : 1;

	void DeleteSubtree (SVSTNode *pNode, void (*pfuncFree)(void *pvData, void *pvArg), void *a_pvArg) {
		if (pNode == pNil)
			return;

		DeleteSubtree (pNode->pLeft, pfuncFree, a_pvArg);
		
		DeleteSubtree (pNode->pRight, pfuncFree, a_pvArg);

		pfuncFree (pNode->pvData, a_pvArg);

		svsutil_FreeFixed (pNode, pNodeMem);
	}

	void DeleteSubtree	(SVSTNode *pNode) {
		if (pNode == pNil)
			return;

		DeleteSubtree (pNode->pLeft);
		
		DeleteSubtree (pNode->pRight);

		svsutil_FreeFixed (pNode, pNodeMem);
	}

	void TreeInsert (SVSTNode *z) {
		SVSTNode *y = pNil;
		SVSTNode *x = pRoot;

		while (x != pNil) {
			y = x;
			if (z->cKey < x->cKey)
				x = x->pLeft;
			else
				x = x->pRight;
		}

		z->pParent = y;
	
		if (y == pNil)
			pRoot = z;
		else if (z->cKey < y->cKey)
			y->pLeft = z;
		else
			y->pRight = z;

		++iSize;
	}

	void LeftRotate (SVSTNode *x) {
		SVSTNode *y = x->pRight;
		
		x->pRight = y->pLeft;

		if (y->pLeft != pNil)
			y->pLeft->pParent = x;
		
		y->pParent = x->pParent;

		if (x->pParent == pNil) 
			pRoot = y;
		else if (x == x->pParent->pLeft)
			x->pParent->pLeft = y;
		else
			x->pParent->pRight = y;
		
		y->pLeft = x;
		x->pParent = y;
	}

	void RightRotate (SVSTNode *y) {
		SVSTNode *x = y->pLeft;

		y->pLeft = x->pRight;

		if (x->pRight != pNil)
			x->pRight->pParent = y;

		x->pParent = y->pParent;

		if (y->pParent == pNil)
			pRoot = x;
		else if (y == y->pParent->pLeft)
			y->pParent->pLeft  = x;
		else
			y->pParent->pRight = x;

		x->pRight = y;
		y->pParent = x;
	}

	void DeleteFixup (SVSTNode *x);

	unsigned int SubtreeToArray (SVSTNode *pNode, void **&pvPtr) {
		if (pNode == pNil)
			return 0;
		unsigned int iSz = SubtreeToArray(pNode->pLeft, pvPtr);
		*pvPtr = pNode->pvData;
		++pvPtr;
		iSz += 1 + SubtreeToArray(pNode->pRight, pvPtr);

		SVSUTIL_ASSERT (iSz <= iSize);

		return iSz;
	}

#if defined (SVSUTIL_DEBUG_TREE)
	void RBTreeIntegrity(void);
	int CheckBlackHeight (SVSTNode *pNode);
	int InTree (SVSTNode *pNode);
#endif

	void InitializeMembers(void) {
		pRoot        = NULL;
		pNil         = NULL;
		pNodeMem     = NULL;
		bFreeNodeMem = FALSE;
	}

public:
	BOOL IsTreeInitialized(void) { return (pRoot != NULL); }

	SVSTree (unsigned int iFixedBlocks = SVSUTIL_TREE_INITIAL) {
		SVSUTIL_ASSERT (iFixedBlocks > 0);

		InitializeMembers();

		pNodeMem = svsutil_AllocFixedMemDescr (sizeof(SVSTNode), iFixedBlocks);
		if (NULL == pNodeMem)
			return;

		bFreeNodeMem = TRUE;

		pNil = (SVSTNode *)svsutil_GetFixed (pNodeMem);
		if (NULL == pNil)
			return;

		pNil->cKey    = 0;
		pNil->pvData  = NULL;
		pNil->pParent = pNil;
		pNil->pLeft   = pNil;
		pNil->pRight  = pNil;
		pNil->iColor  = SVSUTIL_COLOR_BLACK;

		iSize = 0;

		pRoot = pNil;
	}

	SVSTree (FixedMemDescr *a_pNodeMem) {
		InitializeMembers();

		pNodeMem = a_pNodeMem;

		SVSUTIL_ASSERT (pNodeMem && (svsutil_FixedBlockSize (pNodeMem) == sizeof(SVSTNode)));

		bFreeNodeMem = FALSE;

		pNil = (SVSTNode *)svsutil_GetFixed (pNodeMem);
		if (NULL == pNil)
			return;

		pNil->cKey    = 0;
		pNil->pvData  = NULL;
		pNil->pParent = pNil;
		pNil->pLeft   = pNil;
		pNil->pRight  = pNil;
		pNil->iColor  = SVSUTIL_COLOR_BLACK;

		iSize = 0;

		pRoot = pNil;
	}

	~SVSTree (void) {
		if (bFreeNodeMem)
			svsutil_ReleaseFixedNonEmpty (pNodeMem);
		else {
			Empty ();
			if (pNil)
				svsutil_FreeFixed (pNil, pNodeMem);
		}
	}

	void Compact (void) {
		svsutil_CompactFixed (pNodeMem);
	}

	void Empty (void) {
		DeleteSubtree (pRoot);
		
		iSize = 0;

		pRoot = pNil;

#if defined (SVSUTIL_DEBUG_TREE)
		RBTreeIntegrity();
#endif
	}

	void Empty (void (*pfuncFree)(void *pvData, void *pvArg), void *a_pvArg) {
		DeleteSubtree (pRoot, pfuncFree, a_pvArg);

		iSize = 0;

		pRoot = pNil;

#if defined (SVSUTIL_DEBUG_TREE)
		RBTreeIntegrity();
#endif
	}

	SVSTNode	*Next	(SVSTNode *pNode) {
		if (pNode->pRight != pNil) {
			pNode = pNode->pRight;

			while (pNode->pLeft != pNil)
				pNode = pNode->pLeft;

			return pNode;
		}

		SVSTNode *pY = pNode->pParent;

		while ((pY != pNil) && (pNode == pY->pRight)) {
			pNode = pY;
			pY = pY->pParent;
		}

		return pY != pNil ? pY : NULL;
	}

	SVSTNode	*Prev	(SVSTNode *pNode) {
		if (pNode->pLeft != pNil) {
			pNode = pNode->pLeft;

			while (pNode->pRight != pNil)
				pNode = pNode->pRight;

			return pNode;
		}

		SVSTNode *pY = pNode->pParent;

		while ((pY != pNil) && (pNode == pY->pLeft)) {
			pNode = pY;
			pY = pY->pParent;
		}

		return pY != pNil ? pY : NULL;
	}

	SVSTNode	*Min	(void) {
		SVSTNode *pRes = pRoot;

		if (pRes == pNil)
			return NULL;
		
		while (pRes->pLeft != pNil)
			pRes = pRes->pLeft;

		return pRes;
	}

	SVSTNode	*Max	(void) {
		SVSTNode *pRes = pRoot;

		if (pRes == pNil)
			return NULL;
		
		while (pRes->pRight != pNil)
			pRes = pRes->pRight;

		return pRes;
	}

	SVSTNode	*Locate	(SVSCKey cKey) {
		SVSTNode *pNode = pRoot;
		while ((pNode != pNil) && (pNode->cKey != cKey)) {
			if (cKey < pNode->cKey)
				pNode = pNode->pLeft;
			else
				pNode = pNode->pRight;
		}
		
		if (pNode == pNil)
			return NULL;

		return pNode;
	}

	SVSTNode	*LocateLeftNeighbor (SVSCKey cKey) {
		SVSTNode *pNode     = pRoot;
		SVSTNode *pPrevNode = pNil;

		while ((pNode != pNil) && (pNode->cKey != cKey)) {
			pPrevNode = pNode;
			if (cKey < pNode->cKey)
				pNode = pNode->pLeft;
			else
				pNode = pNode->pRight;
		}
		
		if (pPrevNode == pNil)
			return NULL;

		if (pNode != pNil)
			return pNode;

		if (pPrevNode->cKey > cKey)
			return Prev (pPrevNode);
		
		return pPrevNode;
	}

	SVSTNode	*LocateRightNeighbor (SVSCKey cKey) {
		SVSTNode *pNode     = pRoot;
		SVSTNode *pPrevNode = pNil;

		while ((pNode != pNil) && (pNode->cKey != cKey)) {
			pPrevNode = pNode;
			if (cKey < pNode->cKey)
				pNode = pNode->pLeft;
			else
				pNode = pNode->pRight;
		}
		
		if (pPrevNode == pNil)
			return NULL;

		if (pNode != pNil)
			return pNode;

		if (pPrevNode->cKey < cKey)
			return Next (pPrevNode);
		
		return pPrevNode;
	}

	SVSTNode	*Insert (SVSCKey cKey, void *pvData);

	void	*Delete	(SVSTNode *pNode);

	unsigned int Size (void) {
		return iSize;
	}

	int IsEmpty (void) {
		return iSize == 0;
	}

	unsigned int ToArray (void **pArray) {
		return SubtreeToArray (pRoot, pArray);
	}

	static void	*GetData(SVSTNode *pNode) {
		return pNode->pvData;
	}

	static SVSCKey GetKey (SVSTNode *pNode) {
		return pNode->cKey;
	}

	virtual SVSHandle EnumStart (void) {
		return (SVSHandle)Min();
	}

	virtual SVSHandle EnumNext  (SVSHandle hEnum) {
		return (SVSHandle)Next((SVSTNode *)hEnum);
	}

	virtual void *EnumGetData  (SVSHandle hEnum) {
		return GetData((SVSTNode *)hEnum);
	}
	virtual SVSCKey EnumGetKey  (SVSHandle hEnum) {
		return GetKey((SVSTNode *)hEnum);
	}
};

inline SVSTree* SVSNewTree(unsigned int iFixedBlocks = SVSUTIL_TREE_INITIAL) {
	SVSTree *pTree = new SVSTree(iFixedBlocks);
	if (!pTree)
		return NULL;

	if (! pTree->IsTreeInitialized()) {
		delete pTree;
		return NULL;
	}
	return pTree;
}

inline SVSTree* SVSNewTree(FixedMemDescr *a_pNodeMem) {
	SVSTree *pTree = new SVSTree(a_pNodeMem);
	if (!pTree)
		return NULL;

	if (! pTree->IsTreeInitialized()) {
		delete pTree;
		return NULL;
	}
	return pTree;
}


//
//	Queue class
//

class SVSLinkedSegment {
protected:
	class SVSLinkedSegment *plsNext;
	class SVSLinkedSegment *plsPrev;
	void *pvArray[1];

	friend class SVSQueue;
	friend class SVSStack;
};

class SVSQueue : public SVSAllocClass {
protected:
	SVSLinkedSegment	*plsHead;
	SVSLinkedSegment	*plsTail;

	unsigned int	iSegSize;
	unsigned int	iBlockSize;
	unsigned int	iHeadNdx;
	unsigned int	iTailNdx;

#if defined (SVSUTIL_DEBUG_QUEUE)
	void CoherencyCheck (void) {
		SVSUTIL_ASSERT(iSegSize > 0);
		SVSUTIL_ASSERT(iBlockSize > 0);
		SVSUTIL_ASSERT(iHeadNdx < iSegSize);
		SVSUTIL_ASSERT(iTailNdx < iSegSize);
		SVSUTIL_ASSERT (plsHead->plsNext->plsPrev == plsHead);
		SVSUTIL_ASSERT (plsTail->plsNext->plsPrev == plsTail);
		SVSUTIL_ASSERT (plsHead->plsPrev->plsNext == plsHead);
		SVSUTIL_ASSERT (plsTail->plsPrev->plsNext == plsTail);
	}
#endif

public:
	BOOL IsQueueInitialized(void) { return (plsHead != NULL); }

	SVSQueue (unsigned int a_iSegSize = SVSUTIL_QUEUE_INITIAL) {
		SVSUTIL_ASSERT (a_iSegSize > 0);

		plsHead = plsTail = NULL;

		iSegSize = a_iSegSize;
		iHeadNdx = 0;
		iTailNdx = 0;

		iBlockSize = offsetof (SVSLinkedSegment, pvArray) + a_iSegSize * sizeof(void *);
		plsHead = plsTail = (SVSLinkedSegment *)g_funcAlloc(iBlockSize, g_pvAllocData);
		
		if (!plsHead)
			return;

		plsHead->plsPrev = plsHead->plsNext = plsHead;

#if defined (SVSUTIL_DEBUG_QUEUE)
		CoherencyCheck ();
#endif
	}

	~SVSQueue (void) {
		if (!plsHead)
			return;

		SVSLinkedSegment *pls = plsHead->plsNext;
		while (pls != plsHead) {
			SVSLinkedSegment *plsNext = pls->plsNext;
			g_funcFree (pls, g_pvFreeData);
			pls = plsNext;
		}

		g_funcFree (plsHead, g_pvFreeData);
	}

	int IsEmpty (void) {
#if defined (SVSUTIL_DEBUG_QUEUE)
		CoherencyCheck ();
#endif
		return (plsHead == plsTail) && (iHeadNdx == iTailNdx);
	}

	int Put (void *pvData) {
#if defined (SVSUTIL_DEBUG_QUEUE)
		CoherencyCheck ();
#endif
		plsHead->pvArray[iHeadNdx++] = pvData;

		if (iHeadNdx < iSegSize)
			return TRUE;

		iHeadNdx = 0;

		if (plsHead->plsNext != plsTail) {
			plsHead = plsHead->plsNext;
			return TRUE;
		}
		
		SVSLinkedSegment *pls = (SVSLinkedSegment *)g_funcAlloc(iBlockSize, g_pvAllocData);

		if (! pls) {
			SVSUTIL_ASSERT (0);

			iHeadNdx = iSegSize - 1;
			return FALSE;
		}

		pls->plsPrev = plsHead;
		pls->plsNext = plsTail;
		plsHead->plsNext = pls;
		plsTail->plsPrev = pls;

		plsHead = pls;
		return TRUE;
	}

	void *Peek (void) {
		if (IsEmpty()) {
			SVSUTIL_ASSERT(0);
			return NULL;
		}

		return plsTail->pvArray[iTailNdx];
	}

	void *Get (void) {
		if (IsEmpty()) {
			SVSUTIL_ASSERT(0);
			return NULL;
		}

		void *pvData = plsTail->pvArray[iTailNdx++];

		if (iTailNdx < iSegSize)
			return pvData;

		iTailNdx = 0;
		plsTail = plsTail->plsNext;

		return pvData;
	}

	void Compact (void) {
#if defined (SVSUTIL_DEBUG_QUEUE)
		CoherencyCheck ();
#endif
		SVSLinkedSegment *pls = plsHead->plsNext;

		while (pls != plsTail) {
			SVSLinkedSegment *plsNext = pls->plsNext;

			g_funcFree (pls, g_pvFreeData);
			
			pls = plsNext;
		}

		plsHead->plsNext = plsTail;
		plsTail->plsPrev = plsHead;

#if defined (SVSUTIL_DEBUG_QUEUE)
		CoherencyCheck ();
#endif
	}
};

inline SVSQueue *SVSNewQueue(unsigned int uiChunkSize = SVSUTIL_QUEUE_INITIAL) {
	SVSQueue *pQueue = new SVSQueue(uiChunkSize);

	if (!pQueue)
		return NULL;

	if (! pQueue->IsQueueInitialized()) {
		delete pQueue;
		return NULL;
	}

	return pQueue;
}


class SVSStack : public SVSAllocClass {
protected:
	SVSLinkedSegment	*plsBase;
	SVSLinkedSegment	*plsHead;

	unsigned int	iSegSize;
	unsigned int	iBlockSize;
	unsigned int	iHeadNdx;

#if defined (SVSUTIL_DEBUG_STACK)
	void CoherencyCheck (void) {
		SVSUTIL_ASSERT (iSegSize > 0);
		SVSUTIL_ASSERT (iBlockSize > 0);
		SVSUTIL_ASSERT (iHeadNdx < iSegSize);
		SVSUTIL_ASSERT (plsBase->plsPrev == NULL);
		SVSUTIL_ASSERT ((plsHead == plsBase) || (plsHead->plsPrev->plsNext == plsHead));
		SVSUTIL_ASSERT ((! plsHead->plsNext) || (plsHead->plsNext->plsPrev == plsHead));
		SVSUTIL_ASSERT ((! plsBase->plsNext) || (plsBase->plsNext->plsPrev == plsBase));
	}
#endif

public:
	BOOL IsStackInitialized(void) { return (plsHead != NULL); }

	SVSStack (unsigned int a_iSegSize = SVSUTIL_STACK_INITIAL) {
		SVSUTIL_ASSERT (a_iSegSize > 0);

		plsBase = plsHead = NULL;

		iSegSize = a_iSegSize;
		iHeadNdx = 0;

		iBlockSize = offsetof (SVSLinkedSegment, pvArray) + a_iSegSize * sizeof(void *);
		plsHead = plsBase = (SVSLinkedSegment *)g_funcAlloc(iBlockSize, g_pvAllocData);
		
		if (NULL == plsHead)
			return;

		plsHead->plsPrev = plsHead->plsNext = NULL;

#if defined (SVSUTIL_DEBUG_STACK)
		CoherencyCheck ();
#endif
	}

	~SVSStack (void) {
		SVSLinkedSegment *pls = plsBase;
		while (pls) {
			SVSLinkedSegment *plsNext = pls->plsNext;
			g_funcFree (pls, g_pvFreeData);
			pls = plsNext;
		}
	}

	int IsEmpty (void) {
#if defined (SVSUTIL_DEBUG_STACK)
		CoherencyCheck ();
#endif
		return (plsHead == plsBase) && (iHeadNdx == 0);
	}

	int Push (void *pvData) {
#if defined (SVSUTIL_DEBUG_STACK)
		CoherencyCheck ();
#endif
		plsHead->pvArray[iHeadNdx++] = pvData;

		if (iHeadNdx < iSegSize)
			return TRUE;

		iHeadNdx = 0;

		if (plsHead->plsNext != NULL) {
			plsHead = plsHead->plsNext;
			return TRUE;
		}
		
		SVSLinkedSegment *pls = (SVSLinkedSegment *)g_funcAlloc(iBlockSize, g_pvAllocData);

		if (! pls) {
			SVSUTIL_ASSERT (0);

			iHeadNdx = iSegSize - 1;
			return FALSE;
		}

		pls->plsPrev = plsHead;
		pls->plsNext = NULL;
		plsHead->plsNext = pls;

		plsHead = pls;
		return TRUE;
	}

	void *Peek (void) {
		if (IsEmpty()) {
			SVSUTIL_ASSERT(0);
			return NULL;
		}

		int				  iHeadNdx2 = (int)iHeadNdx - 1;
		SVSLinkedSegment *plsHead2  = plsHead;

		if (iHeadNdx2 < 0) {
			iHeadNdx2 = iSegSize - 1;
			plsHead2  = plsHead->plsPrev;
		}

		return plsHead2->pvArray[iHeadNdx2];
	}

	void *Pop (void) {
		if (IsEmpty()) {
			SVSUTIL_ASSERT(0);
			return NULL;
		}

		if (((int)--iHeadNdx) < 0) {
			iHeadNdx = iSegSize - 1;
			plsHead = plsHead->plsPrev;
		}

		return plsHead->pvArray[iHeadNdx];
	}

	void Compact (void) {
#if defined (SVSUTIL_DEBUG_STACK)
		CoherencyCheck ();
#endif
		SVSLinkedSegment *pls = plsHead->plsNext;

		while (pls) {
			SVSLinkedSegment *plsNext = pls->plsNext;

			g_funcFree (pls, g_pvFreeData);
			
			pls = plsNext;
		}

		plsHead->plsNext = NULL;

#if defined (SVSUTIL_DEBUG_STACK)
		CoherencyCheck ();
#endif
	}
};

inline SVSStack * SVSNewStack(unsigned int a_iSegSize = SVSUTIL_STACK_INITIAL) {
	SVSStack *pStack = new SVSStack(a_iSegSize);

	if (!pStack)
		return NULL;

	if (!pStack->IsStackInitialized()) {
		delete pStack;
		return NULL;
	}

	return pStack;
}


//
//	Expandable Arrays
//
template <class T> class SVSMTABlock  : public SVSAllocClass {
public:
	T				**m_p_ptCollection;
	int				m_iNdxFirst;
	int				m_iNdxLast;
	SVSMTABlock	*m_pNextBlock;

	SVSMTABlock (SVSMTABlock *a_pCurrentHead, int iStartNdx) {
		SVSUTIL_ASSERT ((iStartNdx & SVSUTIL_TIER_MASK) == 0);
		SVSUTIL_ASSERT (iStartNdx >= 0);

		m_pNextBlock = a_pCurrentHead;
		m_iNdxFirst  = iStartNdx;
		m_iNdxLast   = iStartNdx | SVSUTIL_TIER_MASK;
		
		m_p_ptCollection = NULL;
	}

	~SVSMTABlock (void) {
		if (! m_p_ptCollection)
			return;

		for (int i = 0 ; i < SVSUTIL_TIER_COLLECTION_SIZE ; ++i) {
			if (! m_p_ptCollection[i])
				break;

			g_funcFree (m_p_ptCollection[i], g_pvFreeData);
		}

		g_funcFree (m_p_ptCollection, g_pvFreeData);
	}

	int AllocateBlock (void) {
		SVSUTIL_ASSERT (m_p_ptCollection == NULL);

		int iSz = sizeof(T *) * SVSUTIL_TIER_COLLECTION_SIZE;
		m_p_ptCollection = (T **)g_funcAlloc (iSz, g_pvAllocData);

		if (! m_p_ptCollection) {
			SVSUTIL_ASSERT (0);
			return FALSE;
		}

		memset (m_p_ptCollection, 0, iSz);
		return TRUE;
	}

	int AllocateCluster (int i) {
		SVSUTIL_ASSERT (m_p_ptCollection[i] == NULL);

		m_p_ptCollection[i] = (T *)g_funcAlloc(sizeof(T) * SVSUTIL_TIER_ELEMENT_SIZE, g_pvAllocData);

		return m_p_ptCollection[i] != NULL;
	}
};

template <class T> class SVSExpArray : public SVSAllocClass {
protected:
	int					m_iBigBlocks;
	int					m_iPhysInLast;
	SVSMTABlock<T>		*m_pFirstBlock;

public:
	SVSExpArray(void) {
		m_pFirstBlock = NULL;
		m_iBigBlocks  = 0;
		m_iPhysInLast = 0;
	}


	int SRealloc (int a_iElemNum);
	int CRealloc (int a_iElemNum);

	~SVSExpArray(void) {
		while (m_pFirstBlock) {
			SVSMTABlock<T> *pNextBlock = m_pFirstBlock->m_pNextBlock;
			delete m_pFirstBlock;
			m_pFirstBlock = pNextBlock;
		}
	}

	T& operator[](int iIndex) {
		static T dummy;

		int iBaseNdx = iIndex & (~SVSUTIL_TIER_MASK);
		SVSMTABlock<T> *pmta = m_pFirstBlock;
		while (pmta) {
			if (pmta->m_iNdxFirst == iBaseNdx)
				return pmta->m_p_ptCollection[(iIndex & SVSUTIL_TIER_COLLECTION_MASK) >> SVSUTIL_TIER_ELEMENT_BIT][iIndex & SVSUTIL_TIER_ELEMENT_MASK];

			pmta = pmta->m_pNextBlock;
		}

		return dummy;
	}
};

template <class T> int SVSExpArray<T>::SRealloc (int a_iElemNum) {
	SVSUTIL_ASSERT (a_iElemNum >= 0);

	int iNeedBlocks = (a_iElemNum >> SVSUTIL_TIER_BIT) + 1;

	if (iNeedBlocks < m_iBigBlocks)
		return TRUE;

	int iClusters  = ((a_iElemNum & SVSUTIL_TIER_MASK) >> SVSUTIL_TIER_ELEMENT_BIT) + 1;

	if ((iNeedBlocks == m_iBigBlocks) && (iClusters <= m_iPhysInLast))
		return TRUE;

	if (iNeedBlocks > m_iBigBlocks) {
		if (m_pFirstBlock) {
			while (m_iPhysInLast < SVSUTIL_TIER_COLLECTION_SIZE) {
				if (! m_pFirstBlock->AllocateCluster(m_iPhysInLast)) {
					SVSUTIL_ASSERT(0);
					return FALSE;
				}
				
				++m_iPhysInLast;
			}
		}

		while (m_iBigBlocks < iNeedBlocks) {
			SVSMTABlock<T> *pNewFirst = new SVSMTABlock<T>(m_pFirstBlock, m_iBigBlocks << SVSUTIL_TIER_BIT);
			if ((! pNewFirst) || (!pNewFirst->AllocateBlock())) {
				SVSUTIL_ASSERT (0);
				return FALSE;
			}

			++m_iBigBlocks;
			m_pFirstBlock = pNewFirst;

			m_iPhysInLast = 0;

			int iLimit = (m_iBigBlocks < iNeedBlocks) ? SVSUTIL_TIER_COLLECTION_SIZE : iClusters;

			while (m_iPhysInLast < iLimit) {
				if (! m_pFirstBlock->AllocateCluster(m_iPhysInLast)) {
					SVSUTIL_ASSERT(0);
					return FALSE;
				}
				++m_iPhysInLast;
			}
		}

		return TRUE;
	}

	while (m_iPhysInLast < iClusters) {
		if (! m_pFirstBlock->AllocateCluster(m_iPhysInLast)) {
			SVSUTIL_ASSERT(0);
			return FALSE;
		}

		++m_iPhysInLast;
	}

	return TRUE;
}

template <class T> int SVSExpArray<T>::CRealloc (int a_iElemNum) {
	SVSUTIL_ASSERT (a_iElemNum >= 0);

	int iNeedBlocks = (a_iElemNum >> SVSUTIL_TIER_BIT) + 1;

	if (iNeedBlocks > m_iBigBlocks)
		return SRealloc (a_iElemNum);

	int iClusters  = ((a_iElemNum & SVSUTIL_TIER_MASK) >> SVSUTIL_TIER_ELEMENT_BIT) + 1;

	if ((iNeedBlocks == m_iBigBlocks) && (iClusters > m_iPhysInLast))
		return SRealloc (a_iElemNum);

	while ((iNeedBlocks > m_iBigBlocks) && (m_iBigBlocks > 0)) {
		SVSMTABlock<T> *pmta = m_pFirstBlock->m_pNextBlock;
		delete m_pFirstBlock;
		m_pFirstBlock = pmta;

		--m_iBigBlocks;
		m_iPhysInLast = SVSUTIL_TIER_COLLECTION_SIZE;
	}

	while (m_iPhysInLast > iClusters) {
		SVSUTIL_ASSERT ((m_iPhysInLast == SVSUTIL_TIER_COLLECTION_SIZE) || (! m_pFirstBlock->m_p_ptCollection[m_iPhysInLast]));
		--m_iPhysInLast;
		SVSUTIL_ASSERT (m_pFirstBlock->m_p_ptCollection[m_iPhysInLast]);
		g_funcFree (m_pFirstBlock->m_p_ptCollection[m_iPhysInLast], g_pvFreeData);
		m_pFirstBlock->m_p_ptCollection[m_iPhysInLast] = NULL;
	}

	return TRUE;
}

//
//	Long bitfields
//
class SVSBitField  : public SVSAllocClass {
protected:
	int				m_iLength;
	int				m_iWLength;
	unsigned int	*m_puiData;
	unsigned int	m_uiLastWMask;

public:
	BOOL IsBitFieldInitialized(void) { return (m_puiData != NULL); }

	SVSBitField (int a_iLength) {
		SVSUTIL_ASSERT(a_iLength > 0);

		m_iLength     = a_iLength;
		m_iWLength    = (m_iLength / (8 * sizeof(int))) + 1;
		m_uiLastWMask = ~((-1) << (m_iLength - (m_iWLength - 1) * 8 * sizeof(int)));
		m_puiData     = (unsigned int *)g_funcAlloc (m_iWLength * sizeof(int), g_pvAllocData);
	}

	~SVSBitField (void) {
		if (m_puiData)
			g_funcFree (m_puiData, g_pvFreeData);
	}

	SVSBitField &operator=(int iBit) {
		if ((iBit & 1) == 0)
			memset (m_puiData, 0, m_iWLength * sizeof(int));
		else
			memset (m_puiData, 0xff, m_iWLength * sizeof(int));

		return *this;
	}

	SVSBitField &operator=(SVSBitField &bf) {
		SVSUTIL_ASSERT (bf.m_iLength == m_iLength);

		memcpy (m_puiData, bf.m_puiData, m_iWLength * sizeof(int));

		return *this;
	}

	SVSBitField &operator|=(SVSBitField &bf) {
		SVSUTIL_ASSERT (bf.m_iLength == m_iLength);

		for (int i = 0 ; i < m_iWLength ; ++i)
			m_puiData[i] |= bf.m_puiData[i];

		return *this;
	}

	SVSBitField &operator&=(SVSBitField &bf) {
		SVSUTIL_ASSERT (bf.m_iLength == m_iLength);

		for (int i = 0 ; i < m_iWLength ; ++i)
			m_puiData[i] &= bf.m_puiData[i];

		return *this;
	}

	void Set (int iBitNum) {
		SVSUTIL_ASSERT (iBitNum < m_iLength);

		int iWord = iBitNum / (sizeof(int) * 8);
		unsigned int uiMask  = 1 << (iBitNum - iWord * sizeof(int) * 8);

		m_puiData[iWord] |= uiMask;
	}

	void Clear (int iBitNum) {
		SVSUTIL_ASSERT (iBitNum < m_iLength);

		int iWord = iBitNum / (sizeof(int) * 8);
		unsigned int uiMask  = 1 << (iBitNum - iWord * sizeof(int) * 8);

		m_puiData[iWord] &= ~uiMask;
	}

	void Inv (int iBitNum) {
		SVSUTIL_ASSERT (iBitNum < m_iLength);

		int iWord = iBitNum / (sizeof(int) * 8);
		unsigned int uiMask  = 1 << (iBitNum - iWord * sizeof(int) * 8);

		m_puiData[iWord] ^= uiMask;
	}

	int Get(int iBitNum) {
		SVSUTIL_ASSERT (iBitNum < m_iLength);

		int iWord = iBitNum / (sizeof(int) * 8);

		return (m_puiData[iWord] >> (iBitNum - iWord * sizeof(int) * 8)) & 1;
	}

	int operator==(int iBit) {
		unsigned int iCmp = ((iBit & 1) == 0) ? 0 : (unsigned int)-1;
		for (int i = 0 ; i < m_iWLength - 1 ; ++i) {
			if (m_puiData[i] != iCmp)
				return FALSE;
		}

		return ((m_puiData[i] ^ iCmp) & m_uiLastWMask) == 0;
	}

	int operator!=(int iBit) {
		return ! (*this == iBit);
	}

	int operator==(SVSBitField &bf) {
		if (bf.m_iLength != m_iLength)
			return FALSE;

		for (int i = 0 ; i < m_iWLength - 1 ; ++i) {
			if (m_puiData[i] != bf.m_puiData[i])
				return FALSE;
		}

		return ((m_puiData[i] ^ bf.m_puiData[i]) & m_uiLastWMask) == 0;
	}

	int operator!=(SVSBitField &bf) {
		return ! (*this == bf);
	}
};

//
//	Heaps
//
struct SVSHeapEntry {
	SVSCKey		cKey;
	void		*pvData;
};

class SVSHeap  : public SVSAllocClass, public SVSEnumClass {
protected:
	int							heap_size;
	SVSExpArray<SVSHeapEntry>	*pArray;

	static int Parent(int i) { return (i - 1) / 2; }
	static int Left  (int i) { return 2 * i + 1;   }
	static int Right (int i) { return 2 * (i + 1); }

	void Heapify (int i) {
		int l = Left(i);
		int r = Right(i);
		int largest = ((l < heap_size) && ((*pArray)[l].cKey > (*pArray)[i].cKey)) ? l : i;
		if ((r < heap_size) && ((*pArray)[r].cKey > (*pArray)[largest].cKey))
			largest = r;

		if (largest != i) {
			SVSHeapEntry he = (*pArray)[i];
			(*pArray)[i] = (*pArray)[largest];
			(*pArray)[largest] = he;

			Heapify (largest);
		}
	}

public:
	BOOL IsHeapInitialized(void) { return (pArray != NULL); }

	SVSHeap (void) {
		heap_size = 0;
		pArray = new SVSExpArray<SVSHeapEntry>;
	}

	~SVSHeap (void) {
		delete pArray;
	}

	int Insert(SVSCKey cKey, void *pvData) {
		if (! (*pArray).SRealloc(heap_size + 1))
			return FALSE;

		int i = heap_size++;

		while ((i > 0) && ((*pArray)[Parent(i)].cKey < cKey)) {
			(*pArray)[i] = (*pArray)[Parent(i)];
			i = Parent(i);
		}

		(*pArray)[i].cKey   = cKey;
		(*pArray)[i].pvData = pvData;

		return TRUE;
	}

	void *Remove(SVSHandle hIndex)
	{
		if (heap_size < 1 || (int) hIndex > heap_size) {
			SVSUTIL_ASSERT(0);
			return NULL;
		}
		hIndex = hIndex - 1;

		void *pvResult = (*pArray)[hIndex].pvData;
		--heap_size;
		
		(*pArray)[hIndex] = (*pArray)[heap_size];

		Heapify(hIndex);
		return pvResult;
	}

	int IsEmpty (void) {
		return heap_size < 1;
	}

	void *Peek (SVSCKey *pcKey) {
		if (heap_size < 1) {
			SVSUTIL_ASSERT(0);
			return NULL;
		}

		if (pcKey)
			*pcKey = (*pArray)[0].cKey;

		return (*pArray)[0].pvData;
	}

	void *ExtractMax (SVSCKey *pcKey) {
		if (heap_size < 1) {
			SVSUTIL_ASSERT(0);
			return NULL;
		}

		void *pvResult = (*pArray)[0].pvData;

		if (pcKey)
			*pcKey = (*pArray)[0].cKey;

		--heap_size;

		(*pArray)[0] = (*pArray)[heap_size];

		Heapify (0);

		return pvResult;
	}


	void Compact (void) {
		(*pArray).CRealloc (heap_size);
	}

	virtual SVSHandle EnumStart (void) {
		return heap_size < 1 ? SVSUTIL_HANDLE_INVALID : 1;
	}

	virtual SVSHandle EnumNext  (SVSHandle hEnum) {
		return (int)hEnum < heap_size ? hEnum + 1 : SVSUTIL_HANDLE_INVALID;
	}

	virtual void *EnumGetData  (SVSHandle hEnum) {
		SVSUTIL_ASSERT ((hEnum > 0) && ((int)hEnum <= heap_size));
		return (*pArray)[hEnum - 1].pvData;
	}

	virtual SVSCKey EnumGetKey  (SVSHandle hEnum) {
		SVSUTIL_ASSERT ((hEnum > 0) && ((int)hEnum <= heap_size));
		return (*pArray)[hEnum - 1].cKey;
	}
};

//
// Heap template
//
template <class T> struct SVSTHeapEntry {
	T cKey;			
	void *pvData;   
}; 


template <class T> class SVSTHeap {
protected:
	int							heap_size;
	typedef SVSTHeapEntry<T> X;
	SVSExpArray<X>	*pArray;
	
	static int Parent(int i) { return (i - 1) / 2; }
	static int Left  (int i) { return 2 * i + 1;   }
	static int Right (int i) { return 2 * (i + 1); }

	void Heapify (int i) {
		int l = Left(i);
		int r = Right(i);
		int largest = ((l < heap_size) && ((*pArray)[l].cKey > (*pArray)[i].cKey)) ? l : i;
		if ((r < heap_size) && ((*pArray)[r].cKey > (*pArray)[largest].cKey))
			largest = r;

		if (largest != i) {
			SVSTHeapEntry<T> he = (*pArray)[i];
			(*pArray)[i] = (*pArray)[largest];
			(*pArray)[largest] = he;

			Heapify (largest);
		}
	}

public:
	BOOL IsHeapTInitialized(void) { return (pArray != NULL); }

	SVSTHeap (void) {
		heap_size = 0;
		pArray = new SVSExpArray < SVSTHeapEntry<T> >;
	}

	~SVSTHeap (void) {
		delete pArray;
	}

	int Insert(T cKey, void *pvData) {
		if (! (*pArray).SRealloc(heap_size + 1))
			return FALSE;

		int i = heap_size++;

		while ((i > 0) && ((*pArray)[Parent(i)].cKey < cKey)) {
			(*pArray)[i] = (*pArray)[Parent(i)];
			i = Parent(i);
		}

		(*pArray)[i].cKey   = cKey;
		(*pArray)[i].pvData = pvData;

		return TRUE;
	}

	void *Remove(SVSHandle hIndex)
	{
		if (heap_size < 1 || (int) hIndex > heap_size) {
			SVSUTIL_ASSERT(0);
			return NULL;
		}
		hIndex = hIndex - 1;

		void *pvResult = (*pArray)[hIndex].pvData;
		--heap_size;
		
		(*pArray)[hIndex] = (*pArray)[heap_size];

		Heapify(hIndex);
		return pvResult;
	}
	

	int IsEmpty (void) {
		return heap_size < 1;
	}

	void *Peek (T *pcKey) {
		if (heap_size < 1) {
			SVSUTIL_ASSERT(0);
			return NULL;
		}

		if (pcKey)
			*pcKey = (*pArray)[0].cKey;

		return (*pArray)[0].pvData;
	}

	void *ExtractMax (T *pcKey) {
		if (heap_size < 1) {
			SVSUTIL_ASSERT(0);
			return NULL;
		}

		void *pvResult = (*pArray)[0].pvData;

		if (pcKey)
			*pcKey = (*pArray)[0].cKey;

		--heap_size;

		(*pArray)[0] = (*pArray)[heap_size];

		Heapify (0);

		return pvResult;
	}


	void Compact (void) {
		(*pArray).CRealloc (heap_size);
	}

	virtual SVSHandle EnumStart (void) {
		return heap_size < 1 ? SVSUTIL_HANDLE_INVALID : 1;
	}

	virtual SVSHandle EnumNext  (SVSHandle hEnum) {
		return (int)hEnum < heap_size ? hEnum + 1 : SVSUTIL_HANDLE_INVALID;
	}

	virtual void *EnumGetData  (SVSHandle hEnum) {
		SVSUTIL_ASSERT ((hEnum > 0) && ((int)hEnum <= heap_size));
		return (*pArray)[hEnum - 1].pvData;
	}

	virtual T EnumGetKey  (SVSHandle hEnum) {
		SVSUTIL_ASSERT ((hEnum > 0) && ((int)hEnum <= heap_size));
		return (*pArray)[hEnum - 1].cKey;
	}
};


//
//		Handle system
//
#define SVSUTIL_HANDLE_NUMBITS	16

#define SVSUTIL_HANDLE_TAGBITS	(sizeof(SVSHandle) * 8 - SVSUTIL_HANDLE_NUMBITS)
#define SVSUTIL_HANDLE_MAXNUM	((1 << SVSUTIL_HANDLE_NUMBITS) - 1)
#define SVSUTIL_HANDLE_MAXTAG	((1 << SVSUTIL_HANDLE_TAGBITS) - 1)
#define SVSUTIL_HANDLE_TOTAG(h) ((h) >> SVSUTIL_HANDLE_NUMBITS)
#define SVSUTIL_HANDLE_TONUM(h) ((h) & SVSUTIL_HANDLE_MAXNUM)

class SVSPrivateHandle : public SVSAllocClass {
protected:
	union {
		void		*pvData;
		int			iNextFree;
	};

	struct {
		int			 iTag   : 24;
		unsigned int fFree  : 1;
	};

	friend class SVSHandleSystem;
	friend class SVSSimpleHandleSystem;
};

class SVSHandleSystem : public SVSAllocClass {
protected:
	SVSExpArray<SVSPrivateHandle> *pArray;
	int							  iFreeNdx;
	int							  iArraySize;

public:
	SVSHandle	AllocHandle (void *a_pvData) {
		SVSUTIL_ASSERT (a_pvData != NULL);
		SVSUTIL_ASSERT (iFreeNdx < iArraySize);
		SVSUTIL_ASSERT (iArraySize >= 0);

		if (iFreeNdx == -1) {
			if (iArraySize >= SVSUTIL_HANDLE_MAXNUM)
				return SVSUTIL_HANDLE_INVALID;

			if (! (*pArray).SRealloc (iArraySize + 1))
				return SVSUTIL_HANDLE_INVALID;

			iFreeNdx = iArraySize;
			(*pArray)[iArraySize].iNextFree = -1;
			(*pArray)[iArraySize].iTag      = 1;
			(*pArray)[iArraySize].fFree     = TRUE;
			++iArraySize;
		}

		SVSUTIL_ASSERT ((iFreeNdx >= 0) && (iFreeNdx < iArraySize));

		SVSPrivateHandle *psHandle = &(*pArray)[iFreeNdx];
		int				  iNdx = iFreeNdx;

		SVSUTIL_ASSERT (psHandle->fFree);

		iFreeNdx = psHandle->iNextFree;

		psHandle->pvData = a_pvData;
		psHandle->fFree  = FALSE;
		psHandle->iTag  += 1;

		if (psHandle->iTag >= SVSUTIL_HANDLE_MAXTAG)
			psHandle->iTag = 1;

		return (psHandle->iTag << SVSUTIL_HANDLE_NUMBITS) | iNdx;
	}

	void		*CloseHandle (SVSHandle h) {
		SVSUTIL_ASSERT (iFreeNdx < iArraySize);

		int iTag = SVSUTIL_HANDLE_TOTAG(h);
		int iNum = SVSUTIL_HANDLE_TONUM(h);

		if ((iNum >= iArraySize) || (iTag != (*pArray)[iNum].iTag))
			return NULL;

		SVSUTIL_ASSERT (iArraySize > 0);

		SVSPrivateHandle *psHandle = &(*pArray)[iNum];
		void *pvData = psHandle->pvData;

		SVSUTIL_ASSERT (! psHandle->fFree);

		psHandle->iNextFree = iFreeNdx;
		psHandle->fFree     = TRUE;
		iFreeNdx = iNum;

		if (++psHandle->iTag >= SVSUTIL_HANDLE_MAXTAG)
			psHandle->iTag = 1;

		return pvData;
	}

	void		*TranslateHandle (SVSHandle h) {
		SVSUTIL_ASSERT (iFreeNdx < iArraySize);

		int iTag = SVSUTIL_HANDLE_TOTAG(h);
		int iNum = SVSUTIL_HANDLE_TONUM(h);

		if ((iNum >= iArraySize) || (iTag != (*pArray)[iNum].iTag))
			return NULL;

		SVSUTIL_ASSERT (iArraySize > 0);
		SVSUTIL_ASSERT (! (*pArray)[iNum].fFree);

		return (*pArray)[iNum].pvData;
	}

	void		*ReAssociate (SVSHandle h, void *pvData2) {
		SVSUTIL_ASSERT (iFreeNdx < iArraySize);
		SVSUTIL_ASSERT (pvData2 != NULL);

		int iTag = SVSUTIL_HANDLE_TOTAG(h);
		int iNum = SVSUTIL_HANDLE_TONUM(h);

		if ((iNum >= iArraySize) || (iTag != (*pArray)[iNum].iTag))
			return NULL;

		SVSUTIL_ASSERT (iArraySize > 0);
		SVSUTIL_ASSERT (! (*pArray)[iNum].fFree);

		void *pvResult = (*pArray)[iNum].pvData;

		(*pArray)[iNum].pvData = pvData2;

		return pvResult;
	}

	int FilterHandles (int (*pFuncFilter)(SVSHandle, void *), void *pvArg) {
		unsigned int iProcessed = 0;
		for (int i = 0 ; i < iArraySize ; ++i) {
			if (! (*pArray)[i].fFree)
				iProcessed += pFuncFilter (((*pArray)[i].iTag << SVSUTIL_HANDLE_NUMBITS) | i,
									pvArg);
		}

		return iProcessed;
	}

	BOOL IsHandleSystemInitialized(void) { return (pArray!=NULL); }

	SVSHandleSystem (void) {
		pArray      = new SVSExpArray<SVSPrivateHandle>;
		iFreeNdx    = -1;
		iArraySize  = 0;
	}

	~SVSHandleSystem (void) {
		delete pArray;
	}
};

class SVSSimpleHandleSystem : public SVSAllocClass {
protected:
	SVSPrivateHandle			  *pArray;
	int							  iFreeNdx;
	int							  iArraySize;
	int							  iMaxArraySize;

public:
	SVSHandle	AllocHandle (void *a_pvData) {
		SVSUTIL_ASSERT (a_pvData != NULL);
		SVSUTIL_ASSERT (iFreeNdx < iArraySize);
		SVSUTIL_ASSERT (iArraySize >= 0);

		if (iFreeNdx == -1) {
			if (iArraySize >= iMaxArraySize)
				return FALSE;

			iFreeNdx = iArraySize;
			pArray[iArraySize].iNextFree = -1;
			pArray[iArraySize].iTag      = 1;
			pArray[iArraySize].fFree     = TRUE;
			++iArraySize;
		}

		SVSUTIL_ASSERT ((iFreeNdx >= 0) && (iFreeNdx < iArraySize));

		SVSPrivateHandle *psHandle = &pArray[iFreeNdx];
		int				  iNdx = iFreeNdx;

		SVSUTIL_ASSERT (psHandle->fFree);

		iFreeNdx = psHandle->iNextFree;

		psHandle->pvData = a_pvData;
		psHandle->fFree  = FALSE;
		psHandle->iTag  += 1;

		if (psHandle->iTag >= SVSUTIL_HANDLE_MAXTAG)
			psHandle->iTag = 1;

		return (psHandle->iTag << SVSUTIL_HANDLE_NUMBITS) | iNdx;
	}

	void		*CloseHandle (SVSHandle h) {
		SVSUTIL_ASSERT (iFreeNdx < iArraySize);

		int iTag = SVSUTIL_HANDLE_TOTAG(h);
		int iNum = SVSUTIL_HANDLE_TONUM(h);

		if ((iNum >= iArraySize) || (iTag != pArray[iNum].iTag))
			return NULL;

		SVSUTIL_ASSERT (iArraySize > 0);

		SVSPrivateHandle *psHandle = &pArray[iNum];
		void *pvData = psHandle->pvData;

		SVSUTIL_ASSERT (! psHandle->fFree);

		psHandle->iNextFree = iFreeNdx;
		psHandle->fFree     = TRUE;
		iFreeNdx = iNum;

		if (++psHandle->iTag >= SVSUTIL_HANDLE_MAXTAG)
			psHandle->iTag = 1;

		return pvData;
	}

	void		*TranslateHandle (SVSHandle h) {
		SVSUTIL_ASSERT (iFreeNdx < iArraySize);

		int iTag = SVSUTIL_HANDLE_TOTAG(h);
		int iNum = SVSUTIL_HANDLE_TONUM(h);

		if ((iNum >= iArraySize) || (iTag != pArray[iNum].iTag))
			return NULL;

		SVSUTIL_ASSERT (iArraySize > 0);
		SVSUTIL_ASSERT (! pArray[iNum].fFree);

		return pArray[iNum].pvData;
	}

	void		*ReAssociate (SVSHandle h, void *pvData2) {
		SVSUTIL_ASSERT (iFreeNdx < iArraySize);
		SVSUTIL_ASSERT (pvData2 != NULL);

		int iTag = SVSUTIL_HANDLE_TOTAG(h);
		int iNum = SVSUTIL_HANDLE_TONUM(h);

		if ((iNum >= iArraySize) || (iTag != pArray[iNum].iTag))
			return NULL;

		SVSUTIL_ASSERT (iArraySize > 0);
		SVSUTIL_ASSERT (! pArray[iNum].fFree);

		void *pvResult = pArray[iNum].pvData;

		pArray[iNum].pvData = pvData2;

		return pvResult;
	}

	int FilterHandles (int (*pFuncFilter)(SVSHandle, void *), void *pvArg) {
		unsigned int iProcessed = 0;
		for (int i = 0 ; i < iArraySize ; ++i) {
			if (! pArray[i].fFree)
				iProcessed += pFuncFilter ((pArray[i].iTag << SVSUTIL_HANDLE_NUMBITS) | i,
									pvArg);
		}

		return iProcessed;
	}

	BOOL IsSimpleHandleSystemInitialized(void) { return (pArray!=NULL); }

	SVSSimpleHandleSystem (int a_iMaxArraySize) {
		pArray			= (SVSPrivateHandle *)g_funcAlloc (sizeof(SVSPrivateHandle) * a_iMaxArraySize, g_pvAllocData);
		iFreeNdx		= -1;
		iArraySize		= 0;
		iMaxArraySize	= a_iMaxArraySize;
	}

	~SVSSimpleHandleSystem (void) {
		if (pArray)
			g_funcFree (pArray, g_pvFreeData);
	}
};

inline SVSSimpleHandleSystem *SVSNewSimpleHandleSystem(int a_iMaxArraySize) {
	SVSSimpleHandleSystem *pSimple = new SVSSimpleHandleSystem(a_iMaxArraySize);
	if (!pSimple)
		return NULL;

	if (!pSimple->IsSimpleHandleSystemInitialized()) {
		delete pSimple;
		return NULL;
	}

	return pSimple;
}


#define SVSUTIL_LINK_LIST_INITIAL        20

typedef void (WINAPI *SVS_PFN_DELETELINK)(void *pvData);
typedef BOOL (WINAPI *SVS_PFN_DELETELINK_FILTER)(void *pvContext, void *pvData);
typedef BOOL (WINAPI *SVS_PFN_FINDLINK_FILTER)(void *pvContext, void *pvData);

class SVSSimpleLink {
public:
	SVSSimpleLink *pNext;
	void          *pvArray[1];
};

// Simple linked list helper; implements fixed memory allocs.  Internally 
// SVSLinkManager deals with SVSSimpleLink structure, while calling application 
// worries about the pointer pvArray which contains its class/struct and is
// 4 bytes above SVSSimpleLink.

// Simple usage:
// class MyClass { // class we want to put into SVSLinkManager
// private:
//    -- make destructor/construcor private so we never call new/delete directly on 
//    -- this since new/delete will crash.  Always go through
//    MyClass() { ; }
//    ~MyClass() { ; }
// public:
//    static void DeleteFcn(void *pData) {
//       ((MyClass *)pData)->DeleteFcn(); // this is called when SVSLinkManager wants to remove this memory.
//    }
//    void DeleteFcn() { ; /* do memory cleanup here */ }
// };
// 
// {
//    SVSLinkManager *pLinkMgr = new SVSLinkManager(sizeof(MyClass),MyClass::DeleteFcn);
//    MyClass *pMyC = (MyClass *) pLinkMgr->AllocEntry();
//    pMyC isn't initialized as it would be on 'new' call, so do init here.
//    [...]
//    pLinkMgr->RemoveEntry(pMyC);
// }

class SVSLinkManager : public SVSAllocClass {
protected:
	SVSSimpleLink       *m_pListHead;
	SVSSimpleLink       *m_pListTail;
	SVSSimpleLink       *m_pListTrav;
	FixedMemDescr       *m_pfmdListItems;
	SVS_PFN_DELETELINK  m_pDeleteFcn;

	SVSSimpleLink * GetLinkFromPtr(void *pvEntry) {
		return (SVSSimpleLink *) ((BYTE*)pvEntry - FIELD_OFFSET(SVSSimpleLink,pvArray));
	}

public:
	// Pass SVS_PFN_DELETELINK as a function if the object has some sort of 
	// deinit routine to go through.  Function is only called if data is valid.

	SVSLinkManager(DWORD dwSizeOfEntry, SVS_PFN_DELETELINK pDeleteFcn=NULL, DWORD dwSegmentSize = SVSUTIL_LINK_LIST_INITIAL) {
		m_pListHead     = NULL;
		m_pListTail     = NULL;
		m_pfmdListItems = svsutil_AllocFixedMemDescr(dwSizeOfEntry+sizeof(SVSSimpleLink),dwSegmentSize);
		m_pDeleteFcn    = pDeleteFcn;
	}

	void RemoveAllEntries(void) {
		while (m_pListHead)
			RemoveEntry(m_pListHead->pvArray);

		svsutil_ReleaseFixedEmpty(m_pfmdListItems);

		SVSUTIL_ASSERT(m_pListTail == NULL);
	}

	~SVSLinkManager() {
		RemoveAllEntries();
	}

	BOOL IsInitialized(void) {
		return m_pfmdListItems ? TRUE : FALSE;
	}

	// Add/remove/lookup an element
	void * AllocEntry(void) {
		SVSSimpleLink *pNewEntry = (SVSSimpleLink *) svsutil_GetFixed(m_pfmdListItems);
		if (!pNewEntry)
			return NULL;

		if (m_pListHead == NULL) {
			SVSUTIL_ASSERT(m_pListTail==NULL);
			m_pListTail = pNewEntry;
		}

		pNewEntry->pNext = m_pListHead;
		m_pListHead      = pNewEntry;

		return pNewEntry->pvArray;
	}

	void * AllocEntryToEndOfList(void) {
		SVSSimpleLink *pNewEntry = (SVSSimpleLink *) svsutil_GetFixed(m_pfmdListItems);
		if (!pNewEntry)
			return NULL;

		if (m_pListHead == NULL) {
			// This is first item into the list.
			SVSUTIL_ASSERT(IsEmpty());
			m_pListTail = m_pListHead = pNewEntry;
		}
		else {
			m_pListTail->pNext = pNewEntry;
			m_pListTail = pNewEntry;
		}

		pNewEntry->pNext = NULL;
		return pNewEntry->pvArray;

	}

	BOOL RemoveEntry(void *pvEntryData) {
		SVSSimpleLink *pTrav   = m_pListHead;
		SVSSimpleLink *pFollow = NULL;
		SVSSimpleLink *pEntry  = GetLinkFromPtr(pvEntryData);

		while (pTrav && (pTrav != pEntry)) {
			pFollow = pTrav;
			pTrav   = pTrav->pNext;
		}

		if (NULL == pTrav)
			return FALSE;

		SVSUTIL_ASSERT(pEntry == pTrav);

		if (pFollow == NULL) {
			SVSUTIL_ASSERT(m_pListHead == pTrav);
			m_pListHead = pTrav->pNext;
		}
		else {
			SVSUTIL_ASSERT(m_pListHead != pTrav);
			pFollow->pNext = pTrav->pNext;
		}

		// If element was the tail, update this.
		if (m_pListTail == pTrav)
			m_pListTail = pFollow;

		if (m_pDeleteFcn)
			m_pDeleteFcn(pvEntryData);

		svsutil_FreeFixed(pEntry,m_pfmdListItems);
		return TRUE;
	}

	void * FindEntry(void *pvEntryData) {
		SVSSimpleLink *pHandle = GetLinkFromPtr(pvEntryData);
		SVSSimpleLink *pTrav   = m_pListHead;

		while (pTrav && (pTrav != pHandle))
			pTrav = pTrav->pNext;

		return pTrav ? pTrav->pvArray : NULL;
	}

	void * FindEntryFiltered(SVS_PFN_FINDLINK_FILTER pFilter, void *pvData) {
		m_pListTrav = m_pListHead;

		while (m_pListTrav) {
			if (pFilter(m_pListTrav->pvArray,pvData))
				return m_pListTrav->pvArray;

			m_pListTrav = m_pListTrav->pNext;
		}
		return NULL;
	}

	BOOL IsEmpty(void) {
		return m_pListHead ? FALSE : TRUE;
	}

	DWORD GetNumberOfItems() {
		SVSSimpleLink *pTrav = m_pListHead;
		DWORD dwItems = 0;

		while (pTrav) {
			dwItems++;
			pTrav = pTrav->pNext;
		}

		return dwItems;
	}

	// Enumeration functions
	void * GetFirstEntry(void) {
		m_pListTrav = m_pListHead;
		return m_pListTrav ? m_pListHead->pvArray : NULL;
	}

	void * GetNext(void) {
		if (!m_pListTrav) {
			SVSUTIL_ASSERT(0);
			return NULL;
		}

		m_pListTrav = m_pListTrav->pNext;
		return m_pListTrav ? m_pListTrav->pvArray : NULL;
	}

	// For each link call pFilter function, if it returns TRUE delete it from list.
	void RemoveEntriesFiltered(SVS_PFN_DELETELINK_FILTER pFilter, void *pvData) {
		m_pListTrav = m_pListHead;
		SVSSimpleLink *pNext;
		SVSSimpleLink *pPrev = NULL;

		while (m_pListTrav) {
			pNext = m_pListTrav->pNext;
		
			if (pFilter(m_pListTrav->pvArray,pvData)) {
				// Perform the delete operation
				if (m_pListTrav == m_pListHead) {
					SVSUTIL_ASSERT(pPrev == NULL);
					m_pListHead = pNext;
				}
				else {
					if (NULL == pPrev) {
						SVSUTIL_ASSERT(0);
						return;
					}
					pPrev->pNext = pNext;
				}

				if (m_pListTail == m_pListTrav) {
					m_pListTail = pPrev;
				}

				if (m_pDeleteFcn)
					m_pDeleteFcn(m_pListTrav->pvArray);

				svsutil_FreeFixed(m_pListTrav,m_pfmdListItems);
			}
			else
				pPrev = m_pListTrav;
			
			m_pListTrav = pNext;
		}
	}
};

//
//	Event Tracker
//
#if defined (_WINDOWS_) || defined (UNDER_CE) || defined (_WINDOWS_CE_)
inline __int64 SVSGetCurrentFT(void) {
	SYSTEMTIME st;
	__int64    ft;
	
	GetSystemTime (&st);
	SystemTimeToFileTime (&st, (LPFILETIME)&ft);
	return ft;
}

#if defined (SVSUTIL_DEBUG_THREADS)
class SVSEventTracker : public SVSAllocClass {
protected:
	double 	m_dAvgArray[2];
	__int64	m_ftPrev;
	int		m_iSlot;
	int		m_iIndex;
	int 	m_cEvents;

	double GetAverageSpacing (void) {
		double dRet;
		if (m_cEvents < 2)
			dRet =  0;
		else if (m_cEvents < (SVS_EVENT_TRACKER_BUFFER + 2))
			dRet =  m_dAvgArray[0] / (m_cEvents - 1);
		else
			dRet =  (m_dAvgArray[(m_iSlot + 1) & 1] + m_dAvgArray[m_iSlot]) /
								(m_iIndex + SVS_EVENT_TRACKER_BUFFER);

		return dRet / SVS_FILETIME_TO_MILLISECONDS;
	}

public:
	SVSEventTracker (void) {
		memset (this, 0, sizeof(*this));
	}

	// Called with Lock held by caller.
	void RegisterEvent (void) { 
		__int64 ftNow = SVSGetCurrentFT ();
		__int64 ftDelta; 

		if ((++m_cEvents) < 0)	// handle overflow
			m_cEvents = SVS_EVENT_TRACKER_BUFFER + 2;

		if (m_cEvents > 1) {
			ftDelta = ftNow - m_ftPrev;
			m_dAvgArray[m_iSlot] += ftDelta;
			m_iIndex++;
			if (m_iIndex == SVS_EVENT_TRACKER_BUFFER) {
				m_iSlot  = (m_iSlot + 1) & 1;
				m_dAvgArray[m_iSlot] = 0;
				m_iIndex = 0;
			}
		}

		m_ftPrev = ftNow;
	}

	int GetStats (double *pAverageSpacing) { 
		if (pAverageSpacing)
			*pAverageSpacing = GetAverageSpacing ();

		return m_cEvents; 
	} 
};
#endif // SVSUTIL_DEBUG_THREADS

#endif // defined (_WINDOWS_) || defined (UNDER_CE) || defined (_WINDOWS_CE_)

//
// Thread pool 
//
#if defined (_WINDOWS_) || defined (UNDER_CE) || defined (_WINDOWS_CE_)
class SVSThreadBlock {
private:
	// SVSThreadBlock is created only with the fixed memory allocators,
	// which do not use constructors/destructors.
	SVSThreadBlock() {

	}

	~SVSThreadBlock() {

	}
	
protected:
	LPTHREAD_START_ROUTINE 	m_pfnThread;
	LPVOID 					m_lpParameter;
	SVSCookie 				m_ulCookie;
	DWORD                   m_dwExpire; // Millisecond count (tied to GetTickCount()) when this event will fire.
	SVSThreadBlock          *m_pNext;   // Next entry in list.

	unsigned long Run (void) { 
		SVSUTIL_ASSERT_PREFAST (m_pfnThread && m_ulCookie); 
		return (m_pfnThread)(m_lpParameter);
	}

	unsigned long GetAbsoluteDelay(DWORD dwCurTime) {
		// Guarantee that we're always positive.
		if ((dwCurTime - m_dwExpire) < 0x80000000)
			return dwCurTime - m_dwExpire;
		else
			return m_dwExpire - dwCurTime;
	}

	BOOL HasExpired(DWORD dwCurTime) {
		return ((dwCurTime - m_dwExpire) <= 0x80000000);
	}

	BOOL IsScheduledEarlier(SVSThreadBlock *pThreadBlock) {
		// If events are scheduled at same instant, the one that 
		// is presently in the queue gets priority.
		if (pThreadBlock->m_dwExpire == m_dwExpire)
			return TRUE;

		return ((pThreadBlock->m_dwExpire - m_dwExpire) <= 0x80000000);
	}

	friend class SVSThreadPool;
};


// User application uses this in GetStatistics
#if defined (SVSUTIL_DEBUG_THREADS)
typedef struct {
	int 					fRunning;
	int						cThreadsRunning;
	int			 			cThreadsIdle;
	int						ulAverageDelayTime; 
	long   					cJobsExecuted;
} SVS_THREAD_POOL_STATS;
#endif


// Context information passed to SVSThreadPool worker threads on thread startup.
typedef struct {
	void   *pContext;    // Ptr to SVSThreadPool
	HANDLE *phThread;    // Ptr to thread handle that is associated with worker thread.
} SVS_THREAD_POOL_CNTXT;


class SVSThreadPool : public SVSSynch, public SVSAllocClass  {
protected:
	FixedMemDescr			*m_pNodeMem;            // physical memory of SVSThreadBlock structures.
	HANDLE                  m_hTimerEvent;          // signals running worker threads we're ready
	SVSStack                m_workerThreadEvents;   // Stack containing event HANDLE's that we are to fire.
	SVSThreadBlock          *m_pThreadBlockHead;    // Sorted list of threads to start, and when.
	SVSLinkManager          *m_pThreadHandleList;   // List of all Thread Handles.  Used to syncorize shutdown.

	int                     m_fRunning;             // Are we accepting new thread requests?
	int                     m_cMaxThreadsAllowed;   // Maximum # of threads to allow
	int                     m_cThreadsRunning;      // # of threads executing user code
	int                     m_cThreadsIdle;         // # of threads not executing user code but available.
	SVSCookie               m_ulCookie;             // Value of next cookie to assign    
	long                    m_fTimerLock;           // Used to sync which worker is the timer

#if defined (SVSUTIL_DEBUG_THREADS)
	SVSEventTracker         m_Stats;                // Perf statistics.
#endif

  
	int GetTimer(void) {
#if defined (UNDER_CE) || defined (UNDER_NT)
		return ! InterlockedCompareExchange (&m_fTimerLock, 1, 0);
#else
		return ! InterlockedCompareExchange ((void**)&m_fTimerLock, (void*)1, (void*)0);
#endif
	}

	void ReleaseTimer(void) {
		m_fTimerLock = 0;
	}

	// Called with Lock held by caller.	
	SVSThreadBlock * GetNextJobFromQueue(void) {
		SVSUTIL_ASSERT(IsLocked ());

		if (m_pThreadBlockHead == NULL) // list is empty.
			return NULL;

		DWORD dwCurTime = GetTickCount();
		if (m_pThreadBlockHead->HasExpired(dwCurTime)) {
			SVSThreadBlock *pThreadBlock = m_pThreadBlockHead;
			m_pThreadBlockHead = m_pThreadBlockHead->m_pNext;
			return pThreadBlock;
		}

		return NULL;
	}

#if defined (SVSUTIL_DEBUG_THREADS)
	DWORD NumJobsInQueue(void) {
		SVSUTIL_ASSERT (IsLocked() );
		SVSThreadBlock *pTrav   = m_pThreadBlockHead;
		DWORD dwJobs = 0;

		while (pTrav) {
			pTrav = pTrav->m_pNext;
			dwJobs++;
		}

		return dwJobs;
	}
#endif

	void InsertIntoRunList(SVSThreadBlock *pNewBlock) {
		SVSUTIL_ASSERT (IsLocked() );

#if defined (SVSUTIL_DEBUG_THREADS)
		DWORD dwNumJobs = NumJobsInQueue();
		DWORD dwCurTime = GetTickCount();
#endif

		// Insert pNewBlock into list
		SVSThreadBlock *pTrav   = m_pThreadBlockHead;
		SVSThreadBlock *pFollow = NULL;

		while (pTrav && pTrav->IsScheduledEarlier(pNewBlock)) {
			pFollow = pTrav;
			pTrav   = pTrav->m_pNext;
		}

		if (pTrav) {
			if (pTrav==m_pThreadBlockHead) {
				// First item into the list.
				SVSUTIL_ASSERT(pFollow == NULL);
				pNewBlock->m_pNext = m_pThreadBlockHead;
				m_pThreadBlockHead = pNewBlock;
			}
			else {
				// Item is being placed in the middle of the list.
				pFollow->m_pNext   = pNewBlock;
				pNewBlock->m_pNext = pTrav;
			}
		}
		else {
			pNewBlock->m_pNext = NULL;

			if (pFollow) {
				// Insert at the end of the list.
				pFollow->m_pNext = pNewBlock;
			}
			else {
				// List is currently empty.
				SVSUTIL_ASSERT (m_pThreadBlockHead==NULL);
				m_pThreadBlockHead = pNewBlock;
			}
		}

#if defined (SVSUTIL_DEBUG_THREADS)
		SVSUTIL_ASSERT((dwNumJobs+1) == NumJobsInQueue()); // we should have exactly one more than starting with.
	
		// verify that the threads are in order of execution time.
		SVSThreadBlock *pTravDbg = m_pThreadBlockHead;

		// Skip past all jobs ready to run at current instant
		while (pTravDbg && pTravDbg->HasExpired(dwCurTime)) {
			pTravDbg = pTravDbg->m_pNext;
		}

		if (!pTravDbg)
			goto done;

		// Now make sure ones that aren't ready are in order.
		DWORD dwPreviousDelta = pTravDbg->GetAbsoluteDelay(dwCurTime);
		while (pTravDbg) {
			DWORD dwCurDelta = pTravDbg->GetAbsoluteDelay(dwCurTime);
			if (dwPreviousDelta > dwCurDelta) {
				SVSUTIL_ASSERT(0);
				break; // no point continuing the search
			}
			dwPreviousDelta = dwCurDelta;
			pTravDbg = pTravDbg->m_pNext;
		}
done:
	;
#endif
		
	}

	BOOL CreateNewWorkerThread(void) {
		BOOL                  fRet     = FALSE;
		HANDLE                hThread  = NULL;
		HANDLE                *pHandle = NULL;
		SVS_THREAD_POOL_CNTXT *pCntx   = NULL;

		SVSUTIL_ASSERT(IsLocked ());

 		pCntx = (SVS_THREAD_POOL_CNTXT *)g_funcAlloc(sizeof(SVS_THREAD_POOL_CNTXT), g_pvAllocData);
		if (pCntx == NULL)
			goto done;

		pHandle = (HANDLE*)m_pThreadHandleList->AllocEntry();
		if (pHandle==NULL)
			goto done;

		pCntx->pContext = (void*)this;
		pCntx->phThread = pHandle;

		hThread = CreateThread (NULL, 0, SVSThreadPoolWorkerThread, pCntx, 0, NULL);
		if (hThread==NULL)
			goto done;

		*pHandle = hThread;
		m_cThreadsIdle++;
		fRet = TRUE;
done:
		if (fRet == FALSE) {
			if (pHandle) {
				m_pThreadHandleList->RemoveEntry(pHandle);
			}

			if (pCntx)
				g_funcFree(pCntx,g_pvFreeData);
		}

		return TRUE;
	}

	// Called by worker thread before it exits.
	void EndWorkerThread(HANDLE *phThread) {
		SVSUTIL_ASSERT(! IsLocked ());

		Lock();

		phThread = (HANDLE*)m_pThreadHandleList->FindEntry(phThread);
		if (phThread) {
			CloseHandle(*phThread);
			m_pThreadHandleList->RemoveEntry(phThread);
		}
		else {
			// Only this thread has the right to take the element
			// out of the table, so something is wrong.
			SVSUTIL_ASSERT(0); 
		}

		m_cThreadsIdle--;
		Unlock();
	}

	// Called with Lock held by caller.
	SVSCookie PutOnWorkerQueue (LPTHREAD_START_ROUTINE pfn, LPVOID lpParameter, ULONG ulDelayTime) {
		SVSUTIL_ASSERT(IsLocked ());

		if (m_cThreadsRunning == 0 && m_cThreadsIdle == 0) {	// Need at least one thread...
			if (! CreateNewWorkerThread())
				return 0;
		}

		SVSThreadBlock *pThreadBlock = (SVSThreadBlock *)svsutil_GetFixed (m_pNodeMem);
		if (!pThreadBlock)
			return 0;

		pThreadBlock->m_pfnThread   = pfn;
		pThreadBlock->m_lpParameter = lpParameter;
		pThreadBlock->m_ulCookie    = ++m_ulCookie;
		pThreadBlock->m_dwExpire    = ulDelayTime + GetTickCount();

		if (! pThreadBlock->m_ulCookie)
			pThreadBlock->m_ulCookie = ++m_ulCookie;

		InsertIntoRunList(pThreadBlock);

		SetEvent (m_hTimerEvent);
		return pThreadBlock->m_ulCookie;
	}

	// Called with Lock held by caller.
	unsigned long GetDelayUntilNextEvent(void) {
		SVSUTIL_ASSERT(IsLocked ());

		if (m_pThreadBlockHead==NULL)
			return INFINITE;

		DWORD dwCurTime = GetTickCount();
		if (m_pThreadBlockHead->HasExpired(dwCurTime))
			return 0;

		return m_pThreadBlockHead->GetAbsoluteDelay(dwCurTime);
	}

	void Worker(HANDLE *phThread) {
		SVSThreadBlock *pThreadBlock = NULL;
		int				fTimer;
		unsigned long	ulTimeOut;
		HANDLE			hWaitEvent;
		HANDLE          hLocalEvent = CreateEventW(NULL, FALSE, FALSE, NULL);

		if (hLocalEvent==NULL) {
			// Even though we normally don't assert on system mem errors,
			// the result of this failing will be that threads mysteriously
			// won't be getting run.
			SVSUTIL_ASSERT(FALSE);
			EndWorkerThread(phThread);
			return;
		}

		while (m_fRunning) {
			fTimer = GetTimer ();

			if (fTimer) {
				hWaitEvent = m_hTimerEvent;
				Lock ();
				ulTimeOut = GetDelayUntilNextEvent ();
				Unlock ();
			} else {
				BOOL fSuccess;
				ulTimeOut = SVS_THREAD_INACTIVITY_TIMEOUT;  
				hWaitEvent = hLocalEvent;
				// If we're a worker, we put ourselves into a worker stack.
				// In previous versions of this thread pool, we had one event 
				// that all threads waited on.  This lead to a problem where
				// the least recently used thread would always be the one that was
				// awoken, and hence there were situations where no idle threads would
				// shutdown.  In new version, we manually manage which worker thread
				// gets awoken to ensure that the most recently active thread is used.
			
				hWaitEvent = hLocalEvent;
				Lock();

				if (!m_fRunning)
					fSuccess = FALSE;
				else
					fSuccess = m_workerThreadEvents.Push(hLocalEvent);
				Unlock();
				
				if (!fSuccess)
					break;
			}

			if (WAIT_TIMEOUT == WaitForSingleObject (hWaitEvent, ulTimeOut)) {
				// If we're not the timer thread then we're done executing...
				if (! fTimer)
					break;
			} else if (! fTimer) {
				// We get the worker thread event if a timer has been freed
				// or if we're shutting down, in either case we want
				// to go to top of while loop.
				continue;
			}

			SVSUTIL_ASSERT(fTimer);
			ReleaseTimer ();

			Lock ();
			pThreadBlock = GetNextJobFromQueue ();
			if (! pThreadBlock) {
				Unlock ();
				continue;
			}

			m_cThreadsIdle--;
			m_cThreadsRunning++;

			if (m_cThreadsIdle) {
				if (! m_workerThreadEvents.IsEmpty()) {
					HANDLE hEvt = (HANDLE) m_workerThreadEvents.Pop();
					SetEvent(hEvt);
				}
			}
			else if (m_cThreadsRunning < m_cMaxThreadsAllowed) {
				CreateNewWorkerThread();
			}

#if defined (SVSUTIL_DEBUG_THREADS)
			m_Stats.RegisterEvent ();
#endif

			Unlock ();
			pThreadBlock->Run ();
			Lock ();

			svsutil_FreeFixed (pThreadBlock, m_pNodeMem);

			m_cThreadsIdle++;
			m_cThreadsRunning--;

			Unlock ();
		}

		CloseHandle(hLocalEvent);
		EndWorkerThread(phThread);
	}


	static unsigned long WINAPI SVSThreadPoolWorkerThread(LPVOID lpv) {
		SVS_THREAD_POOL_CNTXT *pCntx       = (SVS_THREAD_POOL_CNTXT *)lpv;
		SVSThreadPool         *pThreadPool = (SVSThreadPool *) pCntx->pContext;
		HANDLE                *phThread    = pCntx->phThread;

		g_funcFree(pCntx,g_pvFreeData);
		pThreadPool->Worker (phThread);
		return 0;
	}

public:
	BOOL IsThreadPoolRunning(void) { return m_fRunning; }

	SVSThreadPool (unsigned long ulMaxThreads = SVS_THREAD_POOL_DEFAULT_MAX_THREADS) : m_workerThreadEvents(SVS_THREAD_POOL_DEFAULT_MAX_THREADS) {
		m_cMaxThreadsAllowed = ulMaxThreads;
		m_hTimerEvent        = 0;
		m_cThreadsIdle       = m_cThreadsRunning = m_ulCookie = 0;	
		m_fTimerLock         = FALSE;
		m_pNodeMem           = NULL;
		m_pThreadBlockHead   = NULL;
		m_pThreadHandleList  = NULL;

		if (! m_workerThreadEvents.IsStackInitialized())
			return;

		m_pThreadHandleList = new SVSLinkManager(sizeof(HANDLE));

		m_pNodeMem = svsutil_AllocFixedMemDescr (sizeof(SVSThreadBlock), 20);
		m_hTimerEvent  = CreateEventW(NULL, FALSE, FALSE, NULL);

		if (m_pNodeMem && m_hTimerEvent && m_pThreadHandleList)
			m_fRunning = TRUE;
	}

	~SVSThreadPool (void) {
		if (m_fRunning)
			Shutdown(TRUE);

		SVSUTIL_ASSERT (m_pThreadBlockHead == NULL);
		SVSUTIL_ASSERT ((m_pThreadHandleList==NULL) || m_pThreadHandleList->IsEmpty());

		if (m_pNodeMem)
			svsutil_ReleaseFixedNonEmpty(m_pNodeMem);

		if (m_hTimerEvent)
			CloseHandle (m_hTimerEvent);

		if (m_pThreadHandleList)
			delete m_pThreadHandleList;
	}


protected:
	//
	// Shutdown helpers
	//

	void WakeupAllWorkerThreads(void) {
		SVSUTIL_ASSERT(m_fRunning == FALSE);
		SVSUTIL_ASSERT(IsLocked());

		// Each worker is listening on an event to wakeup on.  Signal all
		// of them now.

		SetEvent(m_hTimerEvent);

		while (! m_workerThreadEvents.IsEmpty()) {
			// Wake up each worker thread.
			HANDLE hEvent = (HANDLE)m_workerThreadEvents.Pop();
			SetEvent(hEvent);
		}
	}

#define MAX_FAST_SHUTDOWN_ATTEMPTS    25

	BOOL PollForFastPathShutdown(void) {
		SVSUTIL_ASSERT(m_fRunning == FALSE);
		SVSUTIL_ASSERT(! IsLocked());

		DWORD i;

		// This is the "fast" path shutdown, where we let the threads
		// themselves shut themselves down.
		for (i = 0; i < MAX_FAST_SHUTDOWN_ATTEMPTS; i++) {
			if ((m_cThreadsRunning==0) && (m_cThreadsIdle==0))
				return TRUE;

			Sleep(100);
		}
		return FALSE;
	}

	void RemoveAllQueuedWorkerItems(void) {
		SVSUTIL_ASSERT(m_fRunning == FALSE);
		SVSUTIL_ASSERT(IsLocked());

		// It is possible that not all the pending events have run.  Clear them now.

		SVSThreadBlock *pNext = m_pThreadBlockHead;
		while (m_pThreadBlockHead) {
			pNext = m_pThreadBlockHead->m_pNext;
			svsutil_FreeFixed (m_pThreadBlockHead, m_pNodeMem);
			m_pThreadBlockHead = pNext;
		}
	}

	static BOOL IsThreadRunning(void *pvContext, void *pvData) {
		HANDLE *phThread = (HANDLE*)pvContext;

		DWORD dwExitCode;
		DWORD fSuccess = GetExitCodeThread(*phThread,&dwExitCode);
		BOOL  fRemove  = (!fSuccess || (dwExitCode != STILL_ACTIVE));

		if (fRemove && fSuccess) {
			// fSuccess==TRUE && dwExitCode != STILL_ACTIVE, then
			// we have a handle still open that still needs to be closed.
			CloseHandle(*phThread);
		}
		return fRemove;
	}

	void WaitOnThreadExitShutdown(void) {
		SVSUTIL_ASSERT(m_fRunning == FALSE);
		SVSUTIL_ASSERT(! IsLocked());

		// If the threads have not all shut themselves down, we have to 
		// query their thread handles to see if they're running one at a time.
		// The most common scenario this occurs in is during an executable 
		// shutdown when the kernel has killed all the worker threads (and 
		// hence m_cThreadsRunning and m_cThreadsIdle can never be decremented,
		// because the workers own decrementing these).

		while (1) {
			BOOL fBreak = FALSE;
			Lock();

			// Run through all entries, removing threads that are no longer running.
			m_pThreadHandleList->RemoveEntriesFiltered((SVS_PFN_DELETELINK_FILTER)IsThreadRunning,NULL);
			// Can exit this loop only when all threads have been shut-down.
			fBreak = m_pThreadHandleList->IsEmpty();
			Unlock();

			if (fBreak)
				break;

			// We must sleep in case there are indeed running threads that are
			// just taking their time on shutdown.  The worker needs to grab the lock.
			Sleep(100);
		}
		SVSUTIL_ASSERT(! IsLocked());
	}

public:

	// Shutdown all timers and running threads.  Once shutdown has started,
	// no threads or timers may ever fire until Reset() is called.	
	unsigned long Shutdown (BOOL fTryFastPath=TRUE) {
		m_fRunning = FALSE;

		Lock();
		RemoveAllQueuedWorkerItems();
		WakeupAllWorkerThreads();
		Unlock();

		if (fTryFastPath) {
			if (PollForFastPathShutdown())
				return TRUE;
		}

		WaitOnThreadExitShutdown();
		return TRUE;
	}

	void Reset(void) {
		// If app calls Shutdown() as a means of removing all threads in the queue and
		// wants to continue using this thread pool class, it needs to reset.
		m_fRunning = TRUE;
	}
	
	SVSCookie ScheduleEvent (LPTHREAD_START_ROUTINE pfn, LPVOID lpParameter, unsigned long ulDelayTime = 0) {
		SVSCookie ret = 0;
	
		if (! m_fRunning)
			return 0;

		if (ulDelayTime >= 0x80000000) {
			// Since we use DWORD based wrap-around tick count, we cannot
			// handle deltas larger than this.
			SVSUTIL_ASSERT(0); // help programmer quickly catch their misuse of this function.
			return 0;
		}

		Lock();
		ret = PutOnWorkerQueue (pfn, lpParameter, ulDelayTime);
		Unlock();
		return ret;
	}

	SVSCookie StartTimer (LPTHREAD_START_ROUTINE pfn, LPVOID lpParameter,unsigned long ulDelayTime) {
		return ScheduleEvent (pfn, lpParameter, ulDelayTime);
	}

	int UnScheduleEvent (SVSCookie ulCookie) {
		int ret = FALSE;
		
		Lock();

		SVSThreadBlock *pTrav   = m_pThreadBlockHead;
		SVSThreadBlock *pFollow = NULL;

		while (pTrav && (pTrav->m_ulCookie != ulCookie)) {
			pFollow = pTrav;
			pTrav   = pTrav->m_pNext;
		}

		if (pTrav) {
			if (pFollow) {
				// Cleanly remove from linked list.
				SVSUTIL_ASSERT(pTrav != m_pThreadBlockHead);
				pFollow->m_pNext = pTrav->m_pNext;
			}
			else {
				// Removing first item in the list.
				SVSUTIL_ASSERT(pTrav == m_pThreadBlockHead);
				m_pThreadBlockHead = pTrav->m_pNext;
			}

			ret = TRUE;
			svsutil_FreeFixed (pTrav, m_pNodeMem);
		}

		Unlock ();
		return ret;
	}

	int StopTimer (SVSCookie ulCookie) {
		return UnScheduleEvent(ulCookie);
	}

#if defined (SVSUTIL_DEBUG_THREADS)
public:
	void GetStatistics (SVS_THREAD_POOL_STATS *pThreadStats) {
		if (!pThreadStats)
			return;

		Lock();
		pThreadStats->fRunning = m_fRunning;
		pThreadStats->cThreadsRunning = m_cThreadsRunning;
		pThreadStats->cThreadsIdle = m_cThreadsIdle;
		double d;
		pThreadStats->cJobsExecuted = m_Stats.GetStats (&d);
		pThreadStats->ulAverageDelayTime = (unsigned long) d;
		Unlock();
	}
#endif  // SVSUTIL_DEBUG_THREADS
};


//
// svsutil_DecodeFromURL
// NOTE:  This function modifies the passed pszSource!!
//
// Parameters:
//     pszSource    - in/out parameter points to a substring in the URL which
//                    contains a Name=Value pair
//     szDelimiters - a set of delimiters for this field
//     szDest       - pointer to buffer to hold the substring
//
// Return Value:
//     Returns the actual delimiter that caused parsing to halt.
//
char svsutil_DecodeFromURL(char **pszSource, char *szDelimiters, char *szDest, UINT uCodePage);


#define SVS_SIMPLE_BUFFER_DEFAULT_GRANULARITY          1024
class SVSSimpleBuffer : public SVSAllocClass
{
public:
	unsigned char     *pBuffer;                // pointer to allocated mem
	unsigned int      uiBufSize;               // size of allocated memory
    unsigned int      uiNextIn;                // place where we stopped writing
    unsigned int      uiBufferGranularity;     // min size of chunks to allocate

	SVSSimpleBuffer(unsigned int uiGranularity=SVS_SIMPLE_BUFFER_DEFAULT_GRANULARITY)  {
		pBuffer = NULL;
		uiBufSize = uiNextIn = 0;
		uiBufferGranularity = uiGranularity;
	}

	// Use the same allocated buffer, but start writing at beginning of it.

	virtual ~SVSSimpleBuffer(void) {
		CheckConsistency();

		if (pBuffer)
			g_funcFree(pBuffer,g_pvFreeData);
		pBuffer = NULL;
	}

	virtual void Reset(void) {
		uiNextIn = 0;
	}

	BOOL AllocMem(unsigned int uiRequestedBytes)  {
		// figure out buffer size
		unsigned int uiAlloc = max(uiBufferGranularity, uiRequestedBytes);
		
		// allocate or reallocate buffer
		if(!pBuffer) {
			pBuffer  = (unsigned char*) g_funcAlloc(uiAlloc,g_pvAllocData);
			uiBufSize = uiAlloc;
		}
		else if((uiBufSize-uiNextIn) <= uiRequestedBytes) {
			unsigned char *pTempBuffer = (unsigned char*) g_funcRealloc(pBuffer,uiAlloc+uiBufSize,g_pvAllocData);
			if (!pTempBuffer)
				return FALSE;

			pBuffer    = pTempBuffer;
			uiBufSize += uiAlloc;
		}
		if(!pBuffer) {
			uiNextIn = uiBufSize = 0;
			return FALSE;
		}
		return TRUE;
	}

	BOOL Append(const CHAR *pAppend, unsigned int uiLen) {
		if(!AllocMem(uiLen+1))
			return FALSE;

#ifdef _PREFAST_
#pragma prefast(disable:419, "AllocMem will return FALSE if our buffer is not large enough below")
#endif

		memcpy(pBuffer+uiNextIn, pAppend, uiLen);

#ifdef _PREFAST_
#pragma prefast(enable:419, "")
#endif

		uiNextIn += uiLen;
		return TRUE;
	}

	BOOL AppendWSTR(const WCHAR *szAppend, unsigned int uiNumChars) {
		return Append((char *)szAppend,uiNumChars*sizeof(WCHAR));
	}

	BOOL AppendCHAR(const CHAR cAppend) {
		return Append((char *)&cAppend,sizeof(CHAR));
	}

	BOOL AppendWCHAR(const WCHAR cAppend) {
		return Append((char *)&cAppend,sizeof(WCHAR));
	}

	void CheckConsistency(void) {
		// DEBUG routine to make sure buffer is within basic paramaters.
		SVSUTIL_ASSERT(uiNextIn <= uiBufSize); 
		SVSUTIL_ASSERT((pBuffer==NULL && uiNextIn==0 && uiBufSize==0) || (pBuffer!=NULL && uiBufSize!=0));
	}
	
	UCHAR *CurrentPtr(void) {
		return (UCHAR*)(pBuffer + uiNextIn);
	}

	int BufferRemaining(void) {
		CheckConsistency();
		return (uiBufSize - uiNextIn);
	}
};

extern const WCHAR g_svsutilXmlCharacters[];      // g_svsutilXmlCharacters = {L'<', L'>', L'\'', L'"', L'&'};
extern const WCHAR *g_svsutilEntityReferences[];  // g_svsutilEntityReferences[]    = {L"&lt;", L"&gt;", L"&apos;", L"&quot;", L"&amp;"};
extern const DWORD g_svsutilNumXmlEntities;   // g_svsutilNumXmlEntities = SVSUTIL_ARRLEN(g_svsutilXmlCharacters);

// Helps build up XML data in a buffer, applying appropriate encoding rules.
class SVSXMLEncode : public SVSSimpleBuffer {
public:
	SVSXMLEncode(unsigned int uiGranularity=SVS_SIMPLE_BUFFER_DEFAULT_GRANULARITY) 
	  : SVSSimpleBuffer(uiGranularity) { ; }

	BOOL BeginBrace(void) {
		return AppendWSTR(L"<",1);
	}

	BOOL CloseBrace(void) {
		return AppendWSTR(L">",1);
	}

	BOOL EndBrace(void) {
		return AppendWSTR(L"</",2);
	}

	BOOL StartTag(const WCHAR *szElementName)  {
		if (!BeginBrace() ||
		    !Encode(szElementName) ||
		    !CloseBrace())
			return FALSE;
		return TRUE;
	}
	
	BOOL EndTag(const WCHAR *szElementName) { 
		if (!EndBrace() ||
		    !Encode(szElementName) ||
		    !CloseBrace() )
			return FALSE;
		return TRUE;
	}

	BOOL SetCRLF(void) {
		return AppendWSTR(L"\r\n",2);
	}

	BOOL SetEmptyElement(const WCHAR *szElementName) {
		if (!AppendWSTR(L"<",1) ||
		    !Encode(szElementName) ||
		    !AppendWSTR(L"/>",2))
			return FALSE;
		return TRUE;
	}

	BOOL SetElement(const WCHAR *szElementName, const WCHAR *szElementData) {
		if (! StartTag(szElementName) || 
		    ! Encode(szElementData)   ||
		    ! EndTag(szElementName))
			return FALSE;
		return TRUE;
	}

	BOOL SetElement(const WCHAR *szElementName, const WCHAR *szElementData, const DWORD ccElementData) {
		if (! StartTag(szElementName)             || 
		    ! Encode(szElementData,ccElementData) ||
		    ! EndTag(szElementName))
			return FALSE;
		return TRUE;
	}

	// puts szString into buffer, performing necessary encoding operations first.
	BOOL Encode(const WCHAR *szData) {
		WCHAR *pTrav = (WCHAR*) szData;
		DWORD cbNeeded = 1; // account for trailing \0
		DWORD i;

		// figure out how large buffer must be
		while (*pTrav) {
			for (i = 0; i < g_svsutilNumXmlEntities; i++) {
				if (g_svsutilXmlCharacters[i] == *pTrav) {
					cbNeeded += wcslen(g_svsutilEntityReferences[i]);
					break;
				}
			}
			cbNeeded++;
			pTrav++;

			// \n is converted to \r\n
			if ((*pTrav == L'\r') && (*(pTrav+1) == L'\n')) {
				cbNeeded++;
				pTrav++;
			}
			if (*pTrav == L'\n') {
				cbNeeded++; // account for \r we'll be adding
			}
		}
		if (! AllocMem(cbNeeded*sizeof(WCHAR)))
			return FALSE;

		// convert.
		pTrav = (WCHAR*)szData;
		while (*pTrav) {
			for (i = 0; i < g_svsutilNumXmlEntities; i++) {
				if (g_svsutilXmlCharacters[i] == *pTrav) {
					wcscpy((WCHAR*)(pBuffer+uiNextIn),g_svsutilEntityReferences[i]);
					uiNextIn += (wcslen(g_svsutilEntityReferences[i])*sizeof(WCHAR));
					break;
				}
			}
			if ((*pTrav == L'\r') && (*(pTrav+1) == L'\n')) {
				memcpy(pBuffer+uiNextIn, L"\r\n", 2*sizeof(WCHAR));
				uiNextIn += 2*sizeof(WCHAR);
				pTrav++; // skip past L'\n'
			}
			if (*pTrav == L'\n') {
				memcpy(pBuffer+uiNextIn, L"\r\n", 2*sizeof(WCHAR));
				uiNextIn += 2*sizeof(WCHAR);
			}
			else if (i == g_svsutilNumXmlEntities) {
				memcpy(pBuffer+uiNextIn, pTrav, sizeof(WCHAR));
				uiNextIn += sizeof(WCHAR);
			}
			pTrav++;
		}
		return TRUE;
	}

	// for non-NULL terminated strings.  ccData is number of WCHAR's.
	BOOL Encode(const WCHAR *szData, const DWORD ccData) {
		WCHAR *pTrav = (WCHAR*) szData;
		DWORD cbNeeded = 1; // account for trailing \0
		DWORD i;
		int ccToRead = ccData;

		// figure out how large buffer must be
		while (ccToRead > 0) {
			for (i = 0; i < g_svsutilNumXmlEntities; i++) {
				if (g_svsutilXmlCharacters[i] == *pTrav) {
					cbNeeded += wcslen(g_svsutilEntityReferences[i]);
					break;
				}
			}
			cbNeeded++;
			pTrav++;
			ccToRead--;

			// \n is converted to \r\n
			if ((*pTrav == L'\r') && (*(pTrav+1) == L'\n')) {
				cbNeeded++;
				pTrav++;
				ccToRead--;
			}
			else if (*pTrav == L'\n') {
				cbNeeded++; // account for \r we'll be adding
			}
		}
		if (! AllocMem(cbNeeded*sizeof(WCHAR)))
			return FALSE;

		// convert.
		ccToRead = ccData;
		pTrav = (WCHAR*)szData;
		while (ccToRead > 0) {
			for (i = 0; i < g_svsutilNumXmlEntities; i++) {
				if (g_svsutilXmlCharacters[i] == *pTrav) {
					wcscpy((WCHAR*)(pBuffer+uiNextIn),g_svsutilEntityReferences[i]);
					uiNextIn += (wcslen(g_svsutilEntityReferences[i])*sizeof(WCHAR));
					break;
				}
			}

			if ((*pTrav == L'\r') && (*(pTrav+1) == L'\n')) {
				memcpy(pBuffer+uiNextIn, L"\r\n", 2*sizeof(WCHAR));
				uiNextIn += 2*sizeof(WCHAR);
				pTrav++;
				ccToRead--;
			}
			else if (*pTrav == L'\n') {
				memcpy(pBuffer+uiNextIn, L"\r\n", 2*sizeof(WCHAR));
				uiNextIn += 2*sizeof(WCHAR);
			}
			else if (i == g_svsutilNumXmlEntities) {
				memcpy(pBuffer+uiNextIn, pTrav, sizeof(WCHAR));
				uiNextIn += sizeof(WCHAR);
			}

			pTrav++;
			ccToRead--;
		}
		return TRUE;
	}

	// adds attribute name and value pair to an XML tag being built up.
	BOOL AddAttribute(const WCHAR *szAttribName, const WCHAR *szAttribVal, DWORD ccAttribName, DWORD ccAttribVal) {
		if (-1 == ccAttribName)
			ccAttribName = wcslen(szAttribName);

		if (-1 == ccAttribVal)
			ccAttribVal = wcslen(szAttribVal);

		return (AppendWCHAR(L' ') &&
		        Encode(szAttribName,ccAttribName) && 
		        AppendWCHAR(L'=') &&
		        AppendWCHAR(L'\"') &&
		        Encode(szAttribVal,ccAttribVal) &&
		        AppendWCHAR(L'\"'));
	}
};


#if defined (__msxml2_h__)

// Base class for ISAXContentHandler.  Inherit from this class and only
// implement the required functions.
class SVSSAXContentHandler : public ISAXContentHandler
{
protected:
    inline BOOL InlineIsEqualGUID(REFGUID rguid1, REFGUID rguid2) {
		return (((PLONG) &rguid1)[0] == ((PLONG) &rguid2)[0] &&
		        ((PLONG) &rguid1)[1] == ((PLONG) &rguid2)[1] &&
		        ((PLONG) &rguid1)[2] == ((PLONG) &rguid2)[2] &&
		        ((PLONG) &rguid1)[3] == ((PLONG) &rguid2)[3]);
    }

public:
	SVSSAXContentHandler(){};

// IUnknown
public:
    // fake AddRef/Release
    virtual ULONG STDMETHODCALLTYPE AddRef(void)  {return 1; }
    virtual ULONG STDMETHODCALLTYPE Release(void) {return 1; }

    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID iid, void **ppvObject) {
		if(InlineIsEqualGUID(iid, IID_IUnknown) || InlineIsEqualGUID(iid, IID_ISAXContentHandler)) {
			*ppvObject = this;
			return S_OK;
		} 
		else
			return E_NOINTERFACE;
    }
    
// ISAXContentHandler
public:
	virtual HRESULT STDMETHODCALLTYPE putDocumentLocator(/* [in] */ ISAXLocator __RPC_FAR *pLocator) {
		return S_OK;
	}
    
    virtual HRESULT STDMETHODCALLTYPE startDocument(void) {
        return S_OK;
    }
    
    virtual HRESULT STDMETHODCALLTYPE endDocument(void)     {
        return S_OK;
    }
    
    virtual HRESULT STDMETHODCALLTYPE startPrefixMapping(
        /* [in] */ const wchar_t __RPC_FAR *pwchPrefix,
        /* [in] */ int cchPrefix,
        /* [in] */ const wchar_t __RPC_FAR *pwchUri,
        /* [in] */ int cchUri)  
	{ 
		return S_OK;
	}
    
	virtual HRESULT STDMETHODCALLTYPE endPrefixMapping( 
	    /* [in] */ const wchar_t __RPC_FAR *pwchPrefix,
  	    /* [in] */ int cchPrefix)
	{
		return S_OK;
	}
    
	virtual HRESULT STDMETHODCALLTYPE startElement( 
	    /* [in] */ const wchar_t __RPC_FAR *pwchNamespaceUri,
	    /* [in] */ int cchNamespaceUri,
	    /* [in] */ const wchar_t __RPC_FAR *pwchLocalName,
	    /* [in] */ int cchLocalName,
	    /* [in] */ const wchar_t __RPC_FAR *pwchQName,
	    /* [in] */ int cchQName,
	    /* [in] */ ISAXAttributes __RPC_FAR *pAttributes)
	{
		return S_OK;
	}
    
	virtual HRESULT STDMETHODCALLTYPE endElement( 
	    /* [in] */ const wchar_t __RPC_FAR *pwchNamespaceUri,
	    /* [in] */ int cchNamespaceUri,
	    /* [in] */ const wchar_t __RPC_FAR *pwchLocalName,
	    /* [in] */ int cchLocalName,
	    /* [in] */ const wchar_t __RPC_FAR *pwchQName,
	    /* [in] */ int cchQName)
	{
		return S_OK;
	}
    
	virtual HRESULT STDMETHODCALLTYPE characters( 
	    /* [in] */ const wchar_t __RPC_FAR *pwchChars,
	    /* [in] */ int cchChars)
	{
		return S_OK;
	}
    
	virtual HRESULT STDMETHODCALLTYPE ignorableWhitespace( 
	    /* [in] */ const wchar_t __RPC_FAR *pwchChars,
	    /* [in] */ int cchChars)
	{
		return S_OK;
	}
    
	virtual HRESULT STDMETHODCALLTYPE processingInstruction( 
	    /* [in] */ const wchar_t __RPC_FAR *pwchTarget,
	    /* [in] */ int cchTarget,
	    /* [in] */ const wchar_t __RPC_FAR *pwchData,
	    /* [in] */ int cchData)
	{
		return S_OK;
	}
    
	virtual HRESULT STDMETHODCALLTYPE skippedEntity( 
	    /* [in] */ const wchar_t __RPC_FAR *pwchName,
	    /* [in] */ int cchName)
	{
		return S_OK;
	}
};

// OVERVIEW:  SVSXMLWriter is a stripped down version of the MXXMLWriter that 
//            only exposes IMXWriter and ISAXContentHandler interfaces (hence no support
//            DTDs) and no support for get_Output/put_Output/flush, use SVSXMLEncode::SVSSimpleBuffer instead.
//            Does *NOT* require MSXML3 in the image, just needs to include msxml2.h header file for ISAXContentHandler.
//
//            If you are using an app that was originally written with IMXXMLWriter be very careful
//            using this class, since it make no guarantees as to being 100% compliant with al IMXXMLWriter implementation.
//
//            Although many functions take BSTR (either directly or through VARIANTs), it is 
//            always safe to use a WCHAR * instead.
HRESULT svsutil_validateXML(BSTR bstrXML);

extern const WCHAR cszXMLVersion[]; // = L"<?xml version=\"";
extern const WCHAR cszStandalone[]; // = L"\" standalone=\"";
extern const WCHAR cszYes[]; //        = L"yes\"";
extern const WCHAR cszNo[]; //         = L"no\"";
extern const WCHAR cszDefaultVersion[]; //  = L"1.0";

extern const DWORD ccXMLVersion;
extern const DWORD ccStandalone;
extern const DWORD ccYes;
extern const DWORD ccNo;
extern const DWORD ccDefaultVersion;


#define SVSUTIL_WCHAR_SPACE     L' '
#define SVSUTIL_WCHAR_EQUALS    L'='
#define SVSUTIL_WCHAR_QM        L'?'
#define SVSUTIL_WCHAR_QUOTE     L'"'

typedef enum {
	SVSUTIL_XMLWRITER_STATE_UNKNOWN,
	SVSUTIL_XMLWRITER_STATE_START_ELEMENT,
	SVSUTIL_XMLWRITER_STATE_CHARACTERS,
	SVSUTIL_XMLWRITER_STATE_END_ELEMENT,
	SVSUTIL_XMLWRITER_STATE_PROCESSING_INSTRUCTION
} SVSUTIL_XMLWRITER_STATE;

inline HRESULT svsutil_parseXML(ISAXContentHandler *pSax, BSTR bstrXML) {
	ISAXXMLReader*  pReader = NULL;
	HRESULT hr = E_FAIL;

	if (SUCCEEDED(hr = CoInitializeEx(NULL,COINIT_MULTITHREADED))) {
		if (SUCCEEDED(hr = CoCreateInstance(CLSID_SAXXMLReader, NULL, CLSCTX_INPROC_SERVER, IID_ISAXXMLReader, (void**)&pReader))) {
			if (SUCCEEDED(hr = pReader->putContentHandler(pSax))) {
				VARIANT varInput;
				memset(&varInput,0,sizeof(varInput));
				varInput.vt          = VT_BSTR;
				varInput.bstrVal     = bstrXML;
				hr = pReader->parse(varInput);
			}
			pReader->Release();
		}
		CoUninitialize();
	}
	return hr;
}

// verify XML we've generated is legal syntax.
inline HRESULT svsutil_validateXML(BSTR bstrXML) {
	SVSSAXContentHandler saxTest;
	return svsutil_parseXML(&saxTest,bstrXML);
}


#define SVSUTIL_XML_SET_STATE(st)  if (SetState((st)) != S_OK) { return E_OUTOFMEMORY; } // E_OUTOFMEMORY currently only err code SetState() returns.

class SVSXMLWriter : public SVSSAXContentHandler,
                     public SVSXMLEncode
{
private:
	WCHAR         *szVersion;
	BYTE          fState;

	unsigned int  fStandAlone            : 1;
	unsigned int  fOmitXMLDecl           : 1;
	unsigned int  fDisableOutputEscaping : 1;
	unsigned int  fFirstElementReached   : 1;

	HRESULT SVSXMLWriter::SetState(SVSUTIL_XMLWRITER_STATE st) {
		switch (fState) 
		{
		case SVSUTIL_XMLWRITER_STATE_START_ELEMENT:
			if (st != SVSUTIL_XMLWRITER_STATE_END_ELEMENT) {
				if (! CloseBrace())
					return E_OUTOFMEMORY;
			}
		break;

		default:
			;
		break;
		}

		fState = st;
		return S_OK;
	}

	BOOL EncodeWriter(const wchar_t *pwchData, int cchData, BOOL fEncode=FALSE, BOOL fIsPI=FALSE) {
		if (!fDisableOutputEscaping && fEncode)
			return Encode(pwchData,cchData);

		// like MXXMLWriter, we still do \n --> \r\n conversion even if fDisableOutputEncoding=TRUE.
		for (int i = 0; i < cchData; i++) {
			if (pwchData[i] == L'\r' && pwchData[i+1] == L'\n') {
				if (!SetCRLF())
					return FALSE;
					
				i++;  // skip past 0x0A
				continue;
			}
			// put a space between ? and > characters
			if (fIsPI && pwchData[i] == L'?' && pwchData[i+1] == L'>') {
				if (! AppendWCHAR(SVSUTIL_WCHAR_SPACE))
					return FALSE;
			}

			if (pwchData[i] == L'\n') {
				if (!SetCRLF())
					return FALSE;
			}
			else if (!AppendWSTR(&pwchData[i],1))
				return FALSE;
		}
		return TRUE;
	}

	BOOL WriteQuoted(const wchar_t *pwchData, int cchData) {
		if (! AppendWCHAR(SVSUTIL_WCHAR_QUOTE) ||
		    ! EncodeWriter(pwchData,cchData,TRUE)    ||
		    ! AppendWCHAR(SVSUTIL_WCHAR_QUOTE))
			return FALSE;

		return TRUE;
	}

public:
	SVSXMLWriter(unsigned int uiGranularity=SVS_SIMPLE_BUFFER_DEFAULT_GRANULARITY) : SVSXMLEncode(uiGranularity) {
		szVersion   = NULL;
		fState      = SVSUTIL_XMLWRITER_STATE_UNKNOWN;
		fStandAlone = fOmitXMLDecl = fDisableOutputEscaping = FALSE;
	}

	~SVSXMLWriter() {
		if (szVersion)
			g_funcFree(szVersion,g_pvFreeData);
	}

	const DWORD   GetNumChars(void) { return uiNextIn / sizeof(WCHAR); }

	// Converts current write buffer to appropriate code page, allocates and returns.  Caller must free this data.
	CHAR *ConvertOutput(UINT uiCodePage=CP_ACP) {
		return svsutil_WideCharToMultiByteDup((PCWSTR)pBuffer,uiCodePage,TRUE);
	}

	// IMXWriter
	// Don't support the more involved output schemes, just keep an internal buffer (SVSXMLEncode::SVSSimpleBuffer::pBuffer).
	virtual HRESULT STDMETHODCALLTYPE put_output(VARIANT varDestination) {
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE get_output(VARIANT __RPC_FAR * pvarDestination) {
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE flush() {
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE put_byteOrderMark(VARIANT_BOOL vfWriteByteOrderMark) {
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE get_byteOrderMark(VARIANT_BOOL __RPC_FAR * pvfByteOrderMark) {
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE put_indent(VARIANT_BOOL vfValue) {
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE get_indent(VARIANT_BOOL __RPC_FAR * pvfValue) {
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE put_encoding(BSTR bstrEncoding) {
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE get_encoding(BSTR __RPC_FAR * pbstrEncoding) {
		return E_NOTIMPL;
	}

	virtual HRESULT STDMETHODCALLTYPE put_standalone(VARIANT_BOOL vfValue) {
		if (vfValue == VARIANT_TRUE)
			fStandAlone = TRUE;
		else if (vfValue == VARIANT_FALSE)
			fStandAlone = FALSE;
		else 
			return E_INVALIDARG;

		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE get_standalone(VARIANT_BOOL __RPC_FAR * pvfValue) {
		if (!pvfValue)
			return E_POINTER;

		*pvfValue = fStandAlone ? VARIANT_TRUE : VARIANT_FALSE;
		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE put_omitXMLDeclaration(VARIANT_BOOL vfValue) {
		if (vfValue == VARIANT_TRUE)
			fOmitXMLDecl = TRUE;
		else if (vfValue == VARIANT_FALSE)
			fOmitXMLDecl = FALSE;
		else 
			return E_INVALIDARG;

		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE get_omitXMLDeclaration(VARIANT_BOOL __RPC_FAR * pvfValue) {
		if (!pvfValue)
			return E_POINTER;

		*pvfValue = fOmitXMLDecl ? VARIANT_TRUE : VARIANT_FALSE;
		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE put_version(BSTR bstrVersion) {
		if (!bstrVersion)
			return E_INVALIDARG;

		if (szVersion)
			g_funcFree(szVersion,g_pvFreeData);

		szVersion = svsutil_wcsdup(bstrVersion);

		return (szVersion ? S_OK : E_OUTOFMEMORY);
	}

	virtual HRESULT STDMETHODCALLTYPE get_version(BSTR __RPC_FAR * pbstrVersion) {
		if (!pbstrVersion)
			return E_POINTER;

		*pbstrVersion = SysAllocString(szVersion ? szVersion : cszDefaultVersion);
		if (! (*pbstrVersion))
			return E_OUTOFMEMORY;

		return S_OK;
	}
	
	virtual HRESULT STDMETHODCALLTYPE put_disableOutputEscaping(VARIANT_BOOL fValue) {
		if (fValue == VARIANT_TRUE)
			fDisableOutputEscaping = TRUE;
		else if (fValue == VARIANT_FALSE)
			fDisableOutputEscaping = FALSE;
		else 
			return E_INVALIDARG;

		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE get_disableOutputEscaping(VARIANT_BOOL __RPC_FAR *fValue) {
		if (!fValue)
			return E_POINTER;

		*fValue = fDisableOutputEscaping ? VARIANT_TRUE : VARIANT_FALSE;
		return S_OK;
	}

	// ISAXContentHandler
	virtual HRESULT STDMETHODCALLTYPE startElement(const wchar_t * pwchNamespaceUri, int cchNamespaceUri, const wchar_t * pwchLocalName, 
	                     int cchLocalName, const wchar_t * pwchQName, int cchQName, ISAXAttributes * pAttributes) {
		if (!pwchQName)
			return E_INVALIDARG;

		SVSUTIL_XML_SET_STATE(SVSUTIL_XMLWRITER_STATE_START_ELEMENT);
		fFirstElementReached = TRUE;

		if (! BeginBrace())
			return E_OUTOFMEMORY;

		if (! AppendWSTR((WCHAR*)pwchQName,cchQName))
			return E_OUTOFMEMORY;

		if (pAttributes) {
			int   iElements;
			const WCHAR * pwchAttQName;
	    	int           cchAttQName;
			const WCHAR * pwchAttValue;
	    	int           cchAttValue;

			if (FAILED(pAttributes->getLength(&iElements)))
				return E_FAIL;

			for (int i = 0; i < iElements; i++) {
				if (! AppendWCHAR(SVSUTIL_WCHAR_SPACE))
					return E_OUTOFMEMORY;

				if (FAILED(pAttributes->getQName(i, &pwchAttQName, &cchAttQName)) ||
				    FAILED(pAttributes->getValue(i, &pwchAttValue, &cchAttValue))) {
					return E_FAIL;
				}

				if (! EncodeWriter(pwchAttQName,cchAttQName) ||
				    ! AppendWCHAR(SVSUTIL_WCHAR_EQUALS)  ||
				    ! WriteQuoted(pwchAttValue,cchAttValue))
					return E_FAIL;
			}
		}
		// put closing > in later.
		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE endElement(const wchar_t  *pwchNamespaceUri, int cchNamespaceUri, const wchar_t  *pwchLocalName,
	                                             int cchLocalName, const wchar_t  *pwchQName, int cchQName) {
		BOOL fEmpty = (fState == SVSUTIL_XMLWRITER_STATE_START_ELEMENT);

		if (!pwchQName)
			return E_INVALIDARG;

		SVSUTIL_XML_SET_STATE(SVSUTIL_XMLWRITER_STATE_END_ELEMENT);

		if (!fEmpty) {
			if (! EndBrace() ||
			    ! AppendWSTR(pwchQName,cchQName) ||
			    ! CloseBrace()) {
				return E_OUTOFMEMORY;
			}
		}
		else {
			if (! AppendWSTR(L"/>",2))
				return E_OUTOFMEMORY;
		}

		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE characters(const wchar_t  *pwchChars, int cchChars) {
		SVSUTIL_XML_SET_STATE(SVSUTIL_XMLWRITER_STATE_CHARACTERS);
		return EncodeWriter(pwchChars,cchChars,TRUE) ? S_OK : E_OUTOFMEMORY;
	}

	virtual HRESULT STDMETHODCALLTYPE processingInstruction(const wchar_t __RPC_FAR *pwchTarget, int cchTarget, const wchar_t __RPC_FAR *pwchData, int cchData) {
		if (! pwchTarget)
			return E_INVALIDARG;

		SVSUTIL_XML_SET_STATE(SVSUTIL_XMLWRITER_STATE_PROCESSING_INSTRUCTION);

		if (! BeginBrace()                                             ||
		    ! AppendWCHAR(SVSUTIL_WCHAR_QM)                            ||
		    ! AppendWSTR(pwchTarget,cchTarget)                         ||
		    ! AppendWCHAR(SVSUTIL_WCHAR_SPACE)                         ||
		      (pwchData && !EncodeWriter(pwchData,cchData,FALSE,TRUE)) ||
		    ! AppendWCHAR(SVSUTIL_WCHAR_QM)                            ||
		    ! CloseBrace())
			return E_OUTOFMEMORY;

		if (! fFirstElementReached && ! SetCRLF())
			return E_OUTOFMEMORY;

		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE startPrefixMapping(const wchar_t __RPC_FAR *pwchPrefix,int cchPrefix, const wchar_t __RPC_FAR *pwchUri, int cchUri) {
		return S_OK;
	}
	
	virtual HRESULT STDMETHODCALLTYPE endPrefixMapping(const wchar_t __RPC_FAR *pwchPrefix, int cchPrefix) {
		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE startDocument(void) {
		SVSUTIL_XML_SET_STATE(SVSUTIL_XMLWRITER_STATE_UNKNOWN);

		if (!fOmitXMLDecl) {
			DWORD ccVersion           = szVersion   ? wcslen(szVersion) : ccDefaultVersion;
			DWORD ccStandaloneSetting = fStandAlone ? ccYes : ccNo;

			if (! AppendWSTR(cszXMLVersion,ccXMLVersion)      ||
			    ! AppendWSTR((szVersion ? szVersion : cszDefaultVersion),ccVersion) ||
			    ! AppendWSTR(cszStandalone,ccStandalone)      ||
			    ! AppendWSTR(fStandAlone ? cszYes : cszNo,ccStandaloneSetting)      ||
			    ! AppendWCHAR(SVSUTIL_WCHAR_QM) ||
			    ! CloseBrace() ||
			    ! SetCRLF()) {
				return E_OUTOFMEMORY;
			}
		}
		return S_OK;
	}
	
	virtual HRESULT STDMETHODCALLTYPE endDocument(void) {
		SVSUTIL_XML_SET_STATE(SVSUTIL_XMLWRITER_STATE_UNKNOWN);

		// close up the buffer.
		if (! AppendWSTR(L"\0",1))
			return E_OUTOFMEMORY;
		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE skippedEntity(const wchar_t __RPC_FAR *pwchName, int cchName) {
		SVSUTIL_XML_SET_STATE(SVSUTIL_XMLWRITER_STATE_UNKNOWN);
		return S_OK;
	}

	HRESULT Validate(void) {  return svsutil_validateXML((BSTR)pBuffer); }
};
#endif // __msxml2_h__


#if defined (_WINSOCKAPI_)
// OVERVIEW: Certain network services (such as the WinCE web server) want to restrict access
// to resources based on what network interface a client's is making a request on.
// The following class and associated functions automate the conversion of a network interface
// to a resource map in the service, making appropriate calls to iphlpapi.

// Classes inherit from SVSInterfaceMapper.  They pass in a registry key that may
// contain a registry string named "NetworkInterfaces", which contains a list of
// allowed and denied network interfaces at init time.  When a request comes in,
// they call SVSInterfaceMapper::IsMapped() to see if that network interfaces has a mapping.
// Presumably each class that inherits SVSInterfaceMapper will correspond to a resource(s)
// on the server; in the web server case each website inherits SVSInterfaceMapper.

// A typical Network Interfaces string will be something like "NE20001; NE20002" to allow
// NE20001 and NE20002 interfaces for this resource and deny all else.  However you can also
// use the special strings "$PUBLIC" and "$PRIVATE" to signify the public and private network interfaces
// used in a Network Address Translation box.  SVSInterfaceMapper will automatically translate
// them into the correct network addresses, looking at registry values in [HKLM\COMM\ConnectionSharing].

// To make use of network mapping functions, iphlpapi must be in your image.  SVSInterfaceMapper will
// still work without it, though it will only perform checks on m_szContext.


// Registry string that contains allowed/denied resources
#define SVSUTIL_RV_NETWORK_INTERFACES     L"NetworkInterfaces"
// Allow IPv4/IPv6 loopback requests
#define SVSUTIL_NETWORK_INTERFACE_LOOPBACK_A   "$LoopbackInterface"
#define SVSUTIL_NETWORK_INTERFACE_LOOPBACK_W  L"$LoopbackInterface"

// Longest length an interface string can be.
#define SVSUTIL_MAX_INTERFACE_LEN             1600

class SVSInterfaceMapper {
private:
	// list of allowed and denied network adapter names.  See authhlp.h for rules of building this string.
	PSTR m_szNetworkInterfaces;   

	// Additional delimeter for allowed/denied.  Can be NULL.
	// Its meaning is defined per service.  For web server, for instance, this corresponds to "HostedSites".
	PSTR m_szContext;

public:
	// Read hKeyResource->sz:"NetworkInterfaces" into m_szNetworkInterfaces, optionally
	// read registry value wszRegContextName into m_szContext.
	BOOL InitMapping(HKEY hKeyResource, const WCHAR *wszRegContextName);

	// Called when a request comes in.  szAdapterName is name of current net adapter
	// Call svsutil_LockInterfaceMapper() before use.
	BOOL IsMapped(PCSTR szAdapterName, PCSTR szContext);

	SVSInterfaceMapper() {
		m_szNetworkInterfaces = m_szContext = NULL;
	}

	void DeInitMapping(void) {
		if (m_szNetworkInterfaces) {
			g_funcFree(m_szNetworkInterfaces,g_pvFreeData);
			m_szNetworkInterfaces = NULL;
		}

		if (m_szContext) {
			g_funcFree(m_szContext,g_pvFreeData);
			m_szContext = NULL;
		}
	}

	~SVSInterfaceMapper() {
		DeInitMapping();
	}

};

// Call before using SVSInterfaceMapper functions.  Do not call from DLLMain.
BOOL svsutil_InitializeInterfaceMapperOnce(void);
// Call during final shutdown of service.  Do not call from DLLMain.
BOOL svsutil_DeInitializeInterfaceMapperOnce(void);

// Call before using SVSInterfaceMapper functions.  Maybe called multiple times (often on service refresh), re-reads registry values and IP Map Table.
BOOL svsutil_ResetInterfaceMapper(void);

// Whenever the IP Address Table of the WinCE device changes, this function needs to be called
// to update internal tables of InterfaceMapper.  Easiest way to do this is in a service to
// pass this function pBufIn and dwLenIn parameters xxx_IOCTl during IOCTL_SERVICE_NOTIFY_ADDR_CHANGE call.
void svsutil_HandleNotifyAddrChange(PBYTE pBufIn, DWORD cbBufIn);

// Given a socket, determines the name of the network interface it came up on or PIP_ADAPTERS_ADDRESSES itself.
// Call svsutil_LockInterfaceMapper() before using either of these functions.
typedef struct _IP_ADAPTER_ADDRESSES IP_ADAPTER_ADDRESSES, *PIP_ADAPTER_ADDRESSES;
PCSTR svsutil_GetAdapterNameOfConnection(SOCKET sock);
PIP_ADAPTER_ADDRESSES svsutil_GetAdapterOfConnection(SOCKET sock);

// Misc available functions for interfacing with iphlpapi.  svsutil_GetAdaptersAddresses will
// allocate pAddresses, it is caller's responsibility to free it.  Call svsutil_ResetInterfaceMapper() before 
// making this call to verify address table is fresh.
BOOL svsutil_GetAdaptersAddresses(PIP_ADAPTER_ADDRESSES *pAddresses, DWORD *pcbAddresses);

// Locking functions are required before calling svsutil_GetAdapterNameOfConnection() and SVSInterfaceMapper::IsMapped().
void svsutil_LockInterfaceMapper(void);
void svsutil_UnLockInterfaceMapper(void);

// Typical call sequence will look like:
// {
//    svsutil_LockInterfaceMapper();
//    PCSTR szInterfaceName = svsutil_GetAdapterNameOfConnection(recvSocket);
//    for each pResource that inherits SVSInterfaceMapper (...) {
//       if (pResource->IsMapped(szInterfaceName,szOptionalContext))
//          break;
//    }
//
//    svsutil_UnLockInterfaceMapper();
// }

#endif // _WINSOCKAPI_

// Helpers to skip white or non-white portions of strings.
#define svsutil_SkipWWhiteSpace(lpsz)    while ( (lpsz)[0] != L'\0' && iswspace((lpsz)[0])) ++(lpsz)
#define svsutil_SkipWhiteSpace(lpsz)     while ( (lpsz)[0] != '\0' && isspace((lpsz)[0]))   ++(lpsz)
#define svsutil_SkipNonWhiteSpace(lpsz)    while ( (lpsz)[0] != '\0' && ! isspace((lpsz)[0])) ++(lpsz)
#define svsutil_SkipWhiteSpaceRev(lpsz, lpszStart)   while ((lpsz) > (lpszStart) && isspace((lpsz)[-1])) --(lpsz)


//
// Helper functions for the event log ReportEvent API.  These functions can be used 
// by apps that do not wish to create a message log file but instead wish to send
// formatted output that is generated in the program itself.
//

// Max size a buffer can be in below event log helper functions
#define SVSUTIL_MAX_EVENT_FORMAT_LEN     1800

// Format is specified in szFormat.
BOOL svsutil_ReportEventPrintf(HANDLE hEventLog, WORD wType, WCHAR *szFormat, ...);
// Format is loaded by LoadString(hLibrary,dwResID,...).
BOOL svsutil_ReportEventPrintfRC(HANDLE hEventLog, HINSTANCE hLibrary, DWORD dwResID, WORD wType, ...);


// Wrapper for event log routines.
class SVSEventLog {
protected:
	HANDLE m_hLog;

public:
	~SVSEventLog() {
		if (m_hLog)
			DeregisterEventSource(m_hLog);
	}

	SVSEventLog(LPCWSTR lpUNCServerName,  LPCWSTR lpSourceName) {
		m_hLog = RegisterEventSourceW(lpUNCServerName,lpSourceName);
	}

	BOOL ReportEvent(WORD wType, WORD wCategory, DWORD dwEventID,
	             WORD wNumStrings, DWORD dwDataSize,
	             LPCWSTR* lpStrings, LPVOID lpRawData)
	{
		if (m_hLog) {
			return ::ReportEventW(m_hLog,wType, wCategory, dwEventID,NULL,wNumStrings, 
			                   dwDataSize,lpStrings, lpRawData);
		}
		return FALSE;
	}

	BOOL IsLogOpen(void) {
		return m_hLog ? TRUE : FALSE;
	}

	operator HANDLE() { return m_hLog; }
};

// This only determines if event log itself was included, and does not indicate its run status.
inline BOOL svsutil_IsEventLogOnSystem(void) {
	return (0xFFFFFFFF != GetFileAttributesW(L"\\windows\\eventlog.dll"));
}

// HTTP URL Canonicalization
BOOL svsutil_HttpCanonicalizeUrlA(LPCSTR lpszUrl, LPSTR lpszBuffer);

#endif // defined (_WINDOWS_) || defined (UNDER_CE) || defined (_WINDOWS_CE_)

//
//	C-like interface
//
extern "C" {
	SVSTree  *svsutil_GetTree (unsigned int uiChunkSize);
	void svsutil_EmptyTree (SVSTree *pTree);
	void svsutil_EmptyTreeWithCallback (SVSTree *pTree, void (*pfuncFree)(void *pvData, void *pvArg), void *a_pvArg);
	void svsutil_DestroyTree (SVSTree *pTree);
	SVSTNode *svsutil_NextTreeNode (SVSTree *pTree, SVSTNode *pNode);
	SVSTNode *svsutil_PrevTreeNode (SVSTree *pTree, SVSTNode *pNode);
	SVSTNode *svsutil_MinTreeNode (SVSTree *pTree);
	SVSTNode *svsutil_MaxTreeNode (SVSTree *pTree);
	SVSTNode *svsutil_LocateTreeNode (SVSTree *pTree, SVSCKey cKey);
	SVSTNode *svsutil_LocateLeftNeighborNode (SVSTree *pTree, SVSCKey cKey);
	SVSTNode *svsutil_LocateLeftNeighborNode (SVSTree *pTree, SVSCKey cKey);
	SVSTNode *svsutil_InsertTreeNode (SVSTree *pTree, SVSCKey cKey, void *pvData);
	void *svsutil_DeleteTreeNode (SVSTree *pTree, SVSTNode *pNode);
	void *svsutil_GetTreeNodeData (SVSTNode *pNode);
	SVSCKey svsutil_GetTreeNodeKey (SVSTNode *pNode);
	unsigned int svsutil_GetTreeSize (SVSTree *pTree);
	unsigned int svsutil_TreeToArray (SVSTree *pTree, void **appv);
	void svsutil_CompactTree (SVSTree *pTree);

	SVSQueue *svsutil_GetQueue (unsigned int uiChunkSize);
	int svsutil_IsQueueEmpty (SVSQueue *pQueue);
	int svsutil_PutInQueue (SVSQueue *pQueue, void *pvDatum);
	void *svsutil_GetFromQueue (SVSQueue *pQueue);
	void *svsutil_PeekQueue (SVSQueue *pQueue);
	void svsutil_CompactQueue (SVSQueue *pQueue);
	void svsutil_DestroyQueue (SVSQueue *pQueue);

	SVSStack *svsutil_GetStack (unsigned int uiChunkSize);
	int svsutil_IsStackEmpty (SVSStack *pStack);
	int svsutil_PushStack (SVSStack *pStack, void *pvDatum);
	void *svsutil_PopStack (SVSStack *pStack);
	void *svsutil_PeekStack (SVSStack *pStack);
	void svsutil_CompactStack (SVSStack *pStack);
	void svsutil_DestroyStack (SVSStack *pStack);

	SVSStack *svsutil_GetHeap (void);
	int svsutil_IsHeapEmpty (SVSHeap *pHeap);
	int svsutil_InsertInHeap (SVSHeap *pHeap, SVSCKey *pcKey, void *pvDatum);
	void *svsutil_ExtractMaxFromHeap (SVSHeap *pHeap, SVSCKey *pcKey);
	void *svsutil_PeekHeap (SVSHeap *pHeap, SVSCKey *pcKet);
	void svsutil_CompactHeap (SVSHeap *pHeap);
	void svsutil_DestroyHeap (SVSHeap *pHeap);

	SVSThreadPool * svsutil_GetThreadPool (int iMaxThreads);
	SVSCookie svsutil_ScheduleEvent (SVSThreadPool *pThreadPool, LPTHREAD_START_ROUTINE pfn, LPVOID lpParameter);
	SVSCookie svsutil_StartTimer (SVSThreadPool *pThreadPool, LPTHREAD_START_ROUTINE pfn, LPVOID lpParameter, unsigned long ulDelayTime);
	int svsutil_UnScheduleEvent (SVSThreadPool *pThreadPool, SVSCookie sCookie);
	int svsutil_StopTimer (SVSThreadPool *pThreadPool, SVSCookie sCookie);
	void svsutil_DestroyThreadPool (SVSThreadPool *pThreadPool);
}

#else	/* __cplusplus */

struct SVSTree;
struct SVSTNode;
struct SVSQueue;
struct SVSStack;
struct SVSHeap;
struct SVSThreadPool;

struct SVSTree  *svsutil_GetTree (unsigned int uiChunkSize);
void svsutil_EmptyTree (struct SVSTree *pTree);
void svsutil_EmptyTreeWithCallback (struct SVSTree *pTree, void (*pfuncFree)(void *pvData, void *pvArg), void *a_pvArg);
void svsutil_DestroyTree (struct SVSTree *pTree);
struct SVSTNode *svsutil_NextTreeNode (struct SVSTree *pTree, struct SVSTNode *pNode);
struct SVSTNode *svsutil_PrevTreeNode (struct SVSTree *pTree, struct SVSTNode *pNode);
struct SVSTNode *svsutil_MinTreeNode (struct SVSTree *pTree);
struct SVSTNode *svsutil_MaxTreeNode (struct SVSTree *pTree);
struct SVSTNode *svsutil_LocateTreeNode (struct SVSTree *pTree, SVSCKey cKey);
struct SVSTNode *svsutil_LocateLeftNeighborNode (struct SVSTree *pTree, SVSCKey cKey);
struct SVSTNode *svsutil_LocateLeftNeighborNode (struct SVSTree *pTree, SVSCKey cKey);
struct SVSTNode *svsutil_InsertTreeNode (struct SVSTree *pTree, SVSCKey cKey, void *pvData);
void *svsutil_DeleteTreeNode (struct SVSTree *pTree, struct SVSTNode *pNode);
void *svsutil_GetTreeNodeData (struct SVSTNode *pNode);
SVSCKey svsutil_GetTreeNodeKey (struct SVSTNode *pNode);
unsigned int svsutil_GetTreeSize (struct SVSTree *pTree);
unsigned int svsutil_TreeToArray (struct SVSTree *pTree, void **appv);
void svsutil_CompactTree (struct SVSTree *pTree);

struct SVSQueue *svsutil_GetQueue (unsigned int uiChunkSize);
int svsutil_IsQueueEmpty (struct SVSQueue *pQueue);
int svsutil_PutInQueue (struct SVSQueue *pQueue, void *pvDatum);
void *svsutil_GetFromQueue (struct SVSQueue *pQueue);
void *svsutil_PeekQueue (struct SVSQueue *pQueue);
void svsutil_CompactQueue (struct SVSQueue *pQueue);
void svsutil_DestroyQueue (struct SVSQueue *pQueue);

struct SVSStack *svsutil_GetStack (unsigned int uiChunkSize);
int svsutil_IsStackEmpty (struct SVSStack *pStack);
int svsutil_PushStack (struct SVSStack *pStack, void *pvDatum);
void *svsutil_PopStack (struct SVSStack *pStack);
void *svsutil_PeekStack (struct SVSStack *pStack);
void svsutil_CompactStack (struct SVSStack *pStack);
void svsutil_DestroyStack (struct SVSStack *pStack);

struct SVSStack *svsutil_GetHeap (void);
int svsutil_IsHeapEmpty (struct SVSHeap *pHeap);
int svsutil_InsertInHeap (struct SVSHeap *pHeap, SVSCKey *pcKey, void *pvDatum);
void *svsutil_ExtractMaxFromHeap (struct SVSHeap *pHeap, SVSCKey *pcKey);
void *svsutil_PeekHeap (struct SVSHeap *pHeap, SVSCKey *pcKet);
void svsutil_CompactHeap (struct SVSHeap *pHeap);
void svsutil_DestroyHeap (struct SVSHeap *pHeap);

struct SVSThreadPool * svsutil_GetThreadPool (int iMaxThreads);
SVSCookie svsutil_ScheduleEvent (struct SVSThreadPool *pThreadPool, LPTHREAD_START_ROUTINE pfn, LPVOID lpParameter);
SVSCookie svsutil_StartTimer (struct SVSThreadPool *pThreadPool, LPTHREAD_START_ROUTINE pfn, LPVOID lpParameter, unsigned long ulDelayTime);
int svsutil_UnScheduleEvent (struct SVSThreadPool *pThreadPool, SVSCookie sCookie);
int svsutil_StopTimer (struct SVSThreadPool *pThreadPool, SVSCookie sCookie);
void svsutil_DestroyThreadPool (struct SVSThreadPool *pThreadPool);

#endif

#endif /* __svsutil_HXX__ */

