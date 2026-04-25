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
/*--
Module Name: CREG.HXX
Abstract: Registry helper class
--*/

#ifndef __CREG_HXX
#define __CREG_HXX

#include <windows.h>
#include "svsutil.hxx"

/////////////////////////////////////////////////////////////////////////////
// CReg: Registry helper class
/////////////////////////////////////////////////////////////////////////////
class CReg
{
private:
	HKEY	m_hKey;
	int		m_Index;
	LPBYTE	m_lpbValue;  // last value read, if any
	DWORD   m_iValueLen; // Length of m_lpbValue.

	void ZeroEntries() {
		m_hKey      = NULL;
		m_Index     = 0;
		m_lpbValue  = NULL;
		m_iValueLen = 0;
	}

public:
	BOOL Create(HKEY hkRoot, LPCTSTR pszKey) {
		DWORD dwDisp;
		Reset();
		return ERROR_SUCCESS==RegCreateKeyEx(hkRoot, pszKey, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &m_hKey, &dwDisp);
	}

	BOOL Open(HKEY hkRoot, LPCTSTR pszKey, REGSAM sam=KEY_READ) {
		Reset();
		return ERROR_SUCCESS==RegOpenKeyEx(hkRoot, pszKey, 0, sam, &m_hKey);
	}

	BOOL OpenOrCreateRegKey(HKEY hkRoot, LPCTSTR pszKey, REGSAM sam=KEY_READ) {
		return Open(hkRoot,pszKey,sam) ? TRUE : Create(hkRoot,pszKey);
	}

	CReg(HKEY hkRoot, LPCTSTR pszKey) {
		ZeroEntries();
		Open(hkRoot, pszKey);
	}

	CReg() {
		ZeroEntries();
	}

	~CReg() { 
		if(m_hKey) RegCloseKey(m_hKey); 
		if (m_lpbValue) {
			ASSERT(m_iValueLen != 0);
			LocalFree(m_lpbValue);
		}
	}

	void Reset() { 
		if(m_hKey) {
			RegCloseKey(m_hKey); 
			m_hKey = NULL;
		}
		m_Index = 0;
	}

	operator HKEY() { return m_hKey; }

	BOOL IsOK(void) { return m_hKey!=NULL; }

	DWORD NumSubkeys()
	{
		DWORD nSubKeys = 0;
		RegQueryInfoKey(m_hKey,0,0,0, &nSubKeys,0,0,0,0,0,0,0);
		return nSubKeys;
	}

	DWORD NumValues()
	{
		DWORD nValues = 0;
		RegQueryInfoKey(m_hKey,0,0,0,0,0,0,&nValues,0,0,0,0);
		return nValues;
	}

	BOOL EnumKey(LPTSTR psz, DWORD dwLen) {
		if(!m_hKey) 
			return FALSE;

		// Note: EnumKey takes size in chars, not bytes!
		return ERROR_SUCCESS==RegEnumKeyEx(m_hKey, m_Index++, psz, &dwLen, NULL, NULL, NULL, NULL);
	}

	BOOL EnumValue(LPTSTR pszName, DWORD dwLenName, LPTSTR pszValue, DWORD dwLenValue) {
		DWORD dwType;
		if(!m_hKey) 
			return FALSE;

		dwLenValue *= sizeof(TCHAR); // convert length in chars to bytes
		// Note: EnumValue takes size of Key in chars, but size of Value in bytes!!!
		return ERROR_SUCCESS==RegEnumValue(m_hKey, m_Index++, pszName, &dwLenName, NULL, &dwType, (LPBYTE)pszValue, &dwLenValue);
	}

	BOOL GetLengthAndType(LPCTSTR szName, DWORD *pdwLength, DWORD *pdwType) {
		if(!m_hKey) 
			return FALSE;

		return (ERROR_SUCCESS==RegQueryValueEx(m_hKey, szName, NULL, pdwType, NULL, pdwLength));
	}

	BOOL ValueSZ(LPCTSTR szName, LPTSTR szValue, DWORD dwLen) {
		if(!m_hKey) 
			return FALSE;

		dwLen *= sizeof(TCHAR); // convert length in chars to bytes
		return ERROR_SUCCESS==RegQueryValueEx(m_hKey, szName, NULL, NULL, (LPBYTE)szValue, &dwLen);
	}

	DWORD ValueBinary(LPCTSTR szName, LPBYTE lpbValue, DWORD dwLen) {
		if(!m_hKey) 
			return 0;

		DWORD dwLenWant = dwLen;
		if(ERROR_SUCCESS==RegQueryValueEx(m_hKey, szName, NULL, NULL, lpbValue, &dwLen))
			return dwLen;
		else
			return 0;
	}

	LPCTSTR CReg::ValueSZ(LPCTSTR szName)
	{
		ASSERT( ((m_lpbValue==NULL) && (m_iValueLen==0)) ||
		                ((m_lpbValue!=NULL) && (m_iValueLen!=0)));

		if(!m_hKey) 
			return NULL;

		DWORD dwLen = m_iValueLen;
		DWORD dwErr = RegQueryValueEx(m_hKey, szName, NULL, NULL, m_lpbValue, &dwLen);

		if ((ERROR_SUCCESS == dwErr) && (m_lpbValue != NULL)) {
			ASSERT(m_iValueLen!=0);
			ASSERT(m_iValueLen >= dwLen);
			return (LPTSTR)m_lpbValue;
		}

		// some error other than buffer not being big enough.
		if ((dwErr != ERROR_MORE_DATA) && (dwErr != ERROR_SUCCESS))
			return NULL;

		if (m_lpbValue) {
			ASSERT(m_iValueLen != 0);
			ASSERT(m_iValueLen < dwLen);

			// Current buffer is too small.
			// Do not do LocalReAlloc() because if it has to allocate a 
			// new pointer, LocalReAlloc() performs a memcpy to the new buffer
			// which we do not want (because old data is going to be overwritten
			// anyway in the RegQueryValueEx call)
			LocalFree(m_lpbValue);
			m_lpbValue  = NULL;
			m_iValueLen = 0;
		}
		ASSERT(m_iValueLen == 0);

		m_lpbValue = (BYTE*)LocalAlloc(0,dwLen);
		if (m_lpbValue == NULL)
			return NULL;

		m_iValueLen = dwLen;

		if (ERROR_SUCCESS != RegQueryValueEx(m_hKey, szName, NULL, NULL, m_lpbValue, &dwLen))
			return NULL;

		return (LPTSTR)m_lpbValue;
	}

	LPBYTE ValueBinary(LPCTSTR szName) {
		return (LPBYTE)ValueSZ(szName);
	}

	DWORD ValueDW(LPCTSTR szName, DWORD dwDefault=0) {
		DWORD dwValue = dwDefault;
		if(m_hKey) 
		{
			DWORD dwLen = sizeof(DWORD);
			RegQueryValueEx(m_hKey, szName, NULL, NULL, (LPBYTE)&dwValue, &dwLen);
		}
		return dwValue;
	}

	BOOL SetSZ(LPCTSTR szName, LPCTSTR szValue, DWORD dwLen) {
		return ERROR_SUCCESS==RegSetValueEx(m_hKey, szName, 0, REG_SZ, (LPBYTE)szValue, sizeof(TCHAR)*dwLen);
	}
	
	BOOL SetSZ(LPCTSTR szName, LPCTSTR szValue) {
		return SetSZ(szName, szValue, 1+lstrlen(szValue));
	}

	BOOL SetDW(LPCTSTR szName, DWORD dwValue) {
		return ERROR_SUCCESS==RegSetValueEx(m_hKey, szName, 0, REG_DWORD, (LPBYTE)&dwValue, sizeof(DWORD));
	}
	
	BOOL SetBinary(LPCTSTR szName, LPBYTE lpbValue, DWORD dwLen) {
		return ERROR_SUCCESS==RegSetValueEx(m_hKey, szName, 0, REG_BINARY, lpbValue, dwLen);
	}

	BOOL SetMultiSZ(LPCTSTR szName, LPCTSTR lpszValue, DWORD dwLen) {
		return ERROR_SUCCESS==RegSetValueEx(m_hKey, szName, 0, REG_MULTI_SZ, (LPBYTE)lpszValue, sizeof(TCHAR)*dwLen);
	}

	BOOL DeleteValue(LPCTSTR szName) {
		return ERROR_SUCCESS==RegDeleteValue(m_hKey, szName);
	}

};

#endif // __CREG_HXX 


