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
#if ! defined (__svslog_HXX__)
#define __svslog_HXX__		1

#define SVSLOG_DBGBUFFER			1024
#define SVSLOG_LOGSIZE			(100 * 1024)

#define SVSLOG_OUTPUT_CONSOLE		0x00000001
#define SVSLOG_OUTPUT_LOGFILE		0x00000002
#define SVSLOG_OUTPUT_DEBUGMSG		0x00000004
#define SVSLOG_BPR					8

#if defined (DEBUG) || defined (_DEBUG) || defined (RELEASELOG)
#define IFDBG(c) (c)

void svslog_Complain (WCHAR *lpszFormat, ...);
void svslog_Complain (int iFormat, ...);
void svslog_Inform (WCHAR *lpszFormat, ...);
void svslog_Inform (int iFormat, ...);
int  svslog_AssertOut (void *pvParam, WCHAR *lpszFormat, ...);
void svslog_DebugInitialize (WCHAR *a_szRegKey, WCHAR *a_szAppName);
int  svslog_DebugOut (unsigned int fMask, WCHAR *lpszFormat, ...);
void svslog_DumpBuff (unsigned int cMask, unsigned char *lpBuffer, unsigned int cBuffer);

#else

#define IFDBG(c)

inline int  svslog_DebugOut (unsigned int fMask, WCHAR *lpszFormat, ...) {return 0;}
inline void svslog_DebugInitialize (WCHAR *a_szRegKey, WCHAR *a_szAppName) {}
inline void svslog_Complain (WCHAR *lpszFormat, ...) {}
inline void svslog_Complain (int iFormat, ...) {}
inline void svslog_Inform (WCHAR *lpszFormat, ...) {}
inline void svslog_Inform (int iFormat, ...) {}
inline int  svslog_AssertOut (void *pvParam, WCHAR *lpszFormat, ...) {return 0;}
inline void svslog_DumpBuff (unsigned int cMask, unsigned char *lpBuffer, unsigned int cBuffer);
#endif

#endif
