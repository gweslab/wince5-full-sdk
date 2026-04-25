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
#if ! defined(__obexparser_HXX__)
#define __obexparser_HXX__

#include <svsutil.hxx>

//
//	Obex packet structure and operation opcodes
//
//	<NF> == "netowrk format"
//
//	Packet:
//		1 byte			- opCode
//		2 bytes <NF>	- total length (headers + 3 bytes)
//		sequence of headers
//	Header:
//		1 byte			- header id + type
//		header data
//
//	Operation codes
//
#define OBEX_TYPE_UNICODE			0x00
#define OBEX_TYPE_BYTESEQ			0x40
#define OBEX_TYPE_BYTE				0x80
#define OBEX_TYPE_DWORD 			0xc0

#define OBEX_TYPE_MASK				0xc0

#define OBEX_HID_COUNT				(0x00 | OBEX_TYPE_DWORD)
#define OBEX_HID_NAME				(0x01 | OBEX_TYPE_UNICODE)
#define OBEX_HID_TYPE				(0x02 | OBEX_TYPE_BYTESEQ)
#define OBEX_HID_LENGTH				(0x03 | OBEX_TYPE_DWORD)
#define OBEX_HID_TIME_ISO			(0x04 | OBEX_TYPE_BYTESEQ)
#define OBEX_HID_TIME_COMPAT		(0x04 | OBEX_TYPE_DWORD)
#define OBEX_HID_DESCRIPTION		(0x05 | OBEX_TYPE_UNICODE)
#define OBEX_HID_TARGET				(0x06 | OBEX_TYPE_BYTESEQ)
#define OBEX_HID_HTTP				(0x07 | OBEX_TYPE_BYTESEQ)
#define OBEX_HID_BODY				(0x08 | OBEX_TYPE_BYTESEQ)
#define OBEX_HID_BODY_END			(0x09 | OBEX_TYPE_BYTESEQ)
#define OBEX_HID_WHO				(0x0a | OBEX_TYPE_BYTESEQ)
#define OBEX_HID_CONNECTIONID		(0x0b | OBEX_TYPE_DWORD)
#define OBEX_HID_APP_PARAMS			(0x0c | OBEX_TYPE_BYTESEQ)
#define OBEX_HID_AUTH_CHALLENGE		(0x0d | OBEX_TYPE_BYTESEQ)
#define OBEX_HID_AUTH_RESPONSE		(0x0e | OBEX_TYPE_BYTESEQ)
#define OBEX_HID_CLASS				(0x0f | OBEX_TYPE_BYTESEQ)

#define OBEX_OP_OPMASK				0x7f
#define OBEX_OP_ISFINAL				0x80

#define OBEX_OP_CONNECT				(0x00 | OBEX_OP_ISFINAL)
#define OBEX_OP_DISCONNECT			(0x01 | OBEX_OP_ISFINAL)
#define OBEX_OP_PUT					 0x02
#define OBEX_OP_GET					 0x03
#define OBEX_OP_SETPATH				(0x05 | OBEX_OP_ISFINAL)
#define OBEX_OP_ABORT				(0x7f | OBEX_OP_ISFINAL)

#define OBEX_STAT_CONTINUE			0x10

#define OBEX_STAT_OK				0x20
#define OBEX_STAT_CREATED			0x21
#define OBEX_STAT_ACCEPTED			0x22
#define OBEX_STAT_NONAUTHINFO		0x23
#define OBEX_STAT_NOCONTENT			0x24
#define OBEX_STAT_RESETCONTENT		0x25
#define OBEX_STAT_PARTIALCONTENT	0x26

#define OBEX_STAT_MULTIPLECHOICES	0x30
#define OBEX_STAT_MOVEDPERM			0x31
#define OBEX_STAT_MOVEDTEMP			0x32
#define OBEX_STAT_SEEOTHER			0x33
#define OBEX_STAT_NOTMODIFIED		0x34
#define OBEX_STAT_USEPROXY			0x35

#define OBEX_STAT_BADREQUEST		0x40
#define OBEX_STAT_UNAUTHORIZED		0x41
#define OBEX_STAT_PAYMENTREQD		0x42
#define OBEX_STAT_FORBIDDEN			0x43
#define OBEX_STAT_NOTFOUND			0x44
#define OBEX_STAT_NOTALLOWED		0x45
#define OBEX_STAT_NOTACCEPTABLE		0x46
#define OBEX_STAT_PROXYAUTHREQD		0x47
#define OBEX_STAT_REQUESTTIMEOUT	0x48
#define OBEX_STAT_CONFLICT			0x49
#define OBEX_STAT_GONE				0x4a
#define OBEX_STAT_LENGTHREQD		0x4b
#define OBEX_STAT_PRECONDITIONFAIL	0x4c
#define OBEX_STAT_REQENTITYTOOBIG	0x4d
#define OBEX_STAT_REQURLTOOBIG		0x4e
#define OBEX_STAT_UNSUPPORTEDMEDIA	0x4f

#define OBEX_STAT_INTERNALERROR		0x50
#define OBEX_STAT_NOTIMPLEMENTED	0x51
#define OBEX_STAT_BADGATEWAY		0x52
#define OBEX_STAT_SERVICEUNAVAIL	0x53
#define OBEX_STAT_GATEWAYTIMEOUT	0x54
#define OBEX_STAT_HTTPVUNSUPPORTED	0x55

#define OBEX_INVALID_CONNECTION		0xffffffff

#define OBEX_MAX_PACKET_SIZE		0xffff
#define OBEX_MIN_PACKET_SIZE		0xff

typedef union _obex_packet_data {
	struct {
		char			version;
		char			flags;
		unsigned short	maxlen;
	} ConnectRequestResponse;

	struct {
		char			flags;
		char			constants;
	} SetPathRequest;
} ObexPacketData;

class ObexParser {
private:
	int Trim (void) {
		if (current - start > (int)length) {
			current = start + length;
			return TRUE;
		}

		return FALSE;
	}

	int HeaderLength (void) {
		unsigned char bType = Type ();
		return ((bType == OBEX_TYPE_UNICODE) || (bType == OBEX_TYPE_BYTESEQ)) ?
				((current[1] << 8) | current[2]) : ((bType == OBEX_TYPE_BYTE) ? 2 : 5);
	}

public:
	unsigned char	*start;
	unsigned char	*current;
	unsigned int	length;

	unsigned char	*ppkt;

	unsigned int	uiOp;

	ObexParser (unsigned char *a_start, unsigned int a_length) {
		SVSUTIL_ASSERT ((a_length <= OBEX_MAX_PACKET_SIZE) && (a_length >= 3) && ((unsigned int)((a_start[1] << 8) | a_start[2]) == a_length));

		uiOp = *a_start;

		a_start += 3;
		a_length -= 3;

		if ((uiOp == OBEX_OP_CONNECT) && (a_length >= 4)) {
			ppkt = a_start;
			a_start += 4;
			a_length -= 4;
		} else if ((uiOp == OBEX_OP_SETPATH) && (a_length >= 2)) {
			ppkt = a_start;
			a_start += 2;
			a_length -= 2;
		} else
			ppkt = NULL;

		start = current = a_start;
		length = a_length;
	}

	unsigned int Op (void) {
		return uiOp;
	}

	int __EOF (void) {
		SVSUTIL_ASSERT (current - start <= (int)length);
		return current - start == (int)length;
	}

	int Type (void) {
		if (__EOF())
			return 0xffffffff;

		return *current & OBEX_TYPE_MASK;
	}

	int Code (void) {
		if (__EOF())
			return 0xffffffff;

		return *current;
	}

	int Length (void) {
		unsigned char bType = Type ();
		return ((bType == OBEX_TYPE_UNICODE) || (bType == OBEX_TYPE_BYTESEQ)) ?
				((current[1] << 8) | current[2]) - 3 : ((bType == OBEX_TYPE_BYTE) ? 1 :
				((bType == OBEX_TYPE_DWORD) ? 4 : 0));
	}

	int Next (void) {
		if (__EOF())
			return FALSE;

		current += HeaderLength ();

		return ! Trim();
	}

	int IsA (unsigned char	ucId) {
		if (__EOF())
			return FALSE;

		return *current == ucId;
	}

	int GetString (WCHAR **pszString) {
		if (__EOF() || (Type() != OBEX_TYPE_UNICODE))
			return FALSE;

		int len = HeaderLength ();
		if (len == 3) {
			*pszString = NULL;
			return TRUE;
		}

		if ((len < 3) || (current[len - 1] != '\0') || (current[len - 2] != '\0') || ((len -= 3) & 1))
			return FALSE;

		WCHAR *szRes = (WCHAR *)g_funcAlloc (len, g_pvAllocData);
		memcpy (szRes, &current[3], len);

		*pszString = szRes;

		return TRUE;
	}

	int GetString (WCHAR *szBuffer, int cChars) {
		if (__EOF() || (Type() != OBEX_TYPE_UNICODE))
			return FALSE;

		int len = HeaderLength ();

		if (len == 3) {
			if (cChars <= 0)
				return FALSE;

			*szBuffer = '\0';
			return TRUE;
		}

		if ((len < 3) || (current[len - 1] != '\0') || (current[len - 2] != '\0') || ((len -= 3) & 1) ||
			((int)(len / sizeof(WCHAR)) > (int)cChars))
			return FALSE;

		memcpy (szBuffer, &current[3], len);
		return TRUE;
	}

	int GetBytes (void **pBytes) {
		if (__EOF() || (Type() != OBEX_TYPE_BYTESEQ))
			return FALSE;

		int len = HeaderLength () - 3;
		if (len < 0)
			return FALSE;

		if (len == 0) {
			*pBytes = NULL;
			return TRUE;
		}

		unsigned char *pRes = (unsigned char *)g_funcAlloc (len, g_pvAllocData);
		memcpy (pRes, &current[3], len);

		*pBytes = pRes;

		return TRUE;
	}

	int GetBytes (void *pBuffer, int cBytes) {
		if (__EOF() || (Type() != OBEX_TYPE_BYTESEQ))
			return FALSE;

		int len = HeaderLength () - 3;
		if ((len < 0) || (len > cBytes))
			return FALSE;

		if (len > 0)
			memcpy (pBuffer, &current[3], len);

		return TRUE;
	}

	int GetBytes (unsigned char **pBuffer, int *pcBytes) {
		if (__EOF() || (Type() != OBEX_TYPE_BYTESEQ))
			return FALSE;

		int len = HeaderLength () - 3;
		if (len < 0)
			return FALSE;

		*pcBytes = len;
		*pBuffer = current + 3;

		return TRUE;
	}

	int GetDWORD (DWORD *pDW) {
		if (__EOF() || (Type() != OBEX_TYPE_DWORD))
			return FALSE;

		*pDW = (current[1] << 24) | (current[2] << 16) | (current[3] << 8) | current[4];

		return TRUE;
	}

	int GetBYTE (BYTE *pB) {
		if (__EOF() || (Type() != OBEX_TYPE_DWORD))
			return FALSE;

		*pB = current[1];

		return TRUE;
	}

	int GetCommandData (ObexPacketData *pPkt) {

		if (Op () == OBEX_OP_CONNECT) {
			if (! ppkt)
				return FALSE;
			pPkt->ConnectRequestResponse.version = ppkt[0];
			pPkt->ConnectRequestResponse.flags = ppkt[1];
			pPkt->ConnectRequestResponse.maxlen = (ppkt[2] << 8) | ppkt[3];
			return TRUE;
		} else if (Op () == OBEX_OP_SETPATH) {
			if (! ppkt)
				return FALSE;
			pPkt->SetPathRequest.flags = ppkt[0];
			pPkt->SetPathRequest.constants = ppkt[1];
			return TRUE;
		}

		return TRUE;
	}
};

#endif	// __obexparser_HXX__

