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
//+------------------------------------------------------------------------
//
//  Microsoft Windows
//
//  File:       perftags.h
//
//  Contents:   External include file for perftags.dll
//
//-------------------------------------------------------------------------

#ifdef PERFTAGS

typedef int  PERFTAG;
int          PerfRegister(char * szTag, char * szOwner, char * szDescrip);
void __cdecl PerfLogFn(int tag, void * pvObj, const char * pchFmt, ...);
void         PerfDump();
void         PerfClear();
void         PerfTags();
#define      IsPerfEnabled(tag) (*(BOOL *)tag)
#define      PerfTag(tag, szOwner, szDescrip) PERFTAG tag(PerfRegister(#tag, szOwner, szDescrip));
#define      PerfExtern(tag) extern PERFTAG tag;
#define      PerfLog(tag,pv,f) IsPerfEnabled(tag) ? PerfLogFn(tag,pv,f) : 0
#define      PerfLog1(tag,pv,f,a1) IsPerfEnabled(tag) ? PerfLogFn(tag,pv,f,a1) : 0
#define      PerfLog2(tag,pv,f,a1,a2) IsPerfEnabled(tag) ? PerfLogFn(tag,pv,f,a1,a2) : 0
#define      PerfLog3(tag,pv,f,a1,a2,a3) IsPerfEnabled(tag) ? PerfLogFn(tag,pv,f,a1,a2,a3) : 0
#define      PerfLog4(tag,pv,f,a1,a2,a3,a4) IsPerfEnabled(tag) ? PerfLogFn(tag,pv,f,a1,a2,a3,a4) : 0
#define      PerfLog5(tag,pv,f,a1,a2,a3,a4,a5) IsPerfEnabled(tag) ? PerfLogFn(tag,pv,f,a1,a2,a3,a4,a5) : 0
#define      PerfLog6(tag,pv,f,a1,a2,a3,a4,a5,a6) IsPerfEnabled(tag) ? PerfLogFn(tag,pv,f,a1,a2,a3,a4,a5,a6) : 0
#define      PerfLog7(tag,pv,f,a1,a2,a3,a4,a5,a6,a7) IsPerfEnabled(tag) ? PerfLogFn(tag,pv,f,a1,a2,a3,a4,a5,a6,a7) : 0
#define      PerfLog8(tag,pv,f,a1,a2,a3,a4,a5,a6,a7,a8) IsPerfEnabled(tag) ? PerfLogFn(tag,pv,f,a1,a2,a3,a4,a5,a6,a7,a8) : 0
#define      PerfLog9(tag,pv,f,a1,a2,a3,a4,a5,a6,a7,a8,a9) IsPerfEnabled(tag) ? PerfLogFn(tag,pv,f,a1,a2,a3,a4,a5,a6,a7,a8,a9) : 0

#else

#define      PerfTags()
#define      PerfTag(tag, szOwner, szDescrip)
#define      PerfExtern(tag)
#define      PerfDump()
#define      PerfClear()
#define      IsPerfEnabled(tag) FALSE
#define      PerfLog(tag,pv,f)
#define      PerfLog1(tag,pv,f,a1)
#define      PerfLog2(tag,pv,f,a1,a2)
#define      PerfLog3(tag,pv,f,a1,a2,a3)
#define      PerfLog4(tag,pv,f,a1,a2,a3,a4)
#define      PerfLog5(tag,pv,f,a1,a2,a3,a4,a5)
#define      PerfLog6(tag,pv,f,a1,a2,a3,a4,a5,a6)
#define      PerfLog7(tag,pv,f,a1,a2,a3,a4,a5,a6,a7)
#define      PerfLog8(tag,pv,f,a1,a2,a3,a4,a5,a6,a7,a8)
#define      PerfLog9(tag,pv,f,a1,a2,a3,a4,a5,a6,a7,a8,a9)

#endif
