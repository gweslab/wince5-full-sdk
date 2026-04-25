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

//
// This file contains inline definitions of ceddk APIs.  The inline versions
// of these APIs should only be used when (a) performance is critical and
// (b) the platform's bus architecture supports them.
//

#pragma once

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

#if x86

int __cdecl _inp(unsigned short);
unsigned short __cdecl _inpw(unsigned short);
unsigned long __cdecl _inpd(unsigned short);

int __cdecl _outp(unsigned short, int);
unsigned short __cdecl _outpw(unsigned short, unsigned short);
unsigned long __cdecl _outpd(unsigned short, unsigned long);

ULONG __inline READ_PORT_ULONG(PULONG port)
{
    return _inpd((USHORT)port);
}

VOID __inline WRITE_PORT_ULONG(PULONG port, ULONG value)
{
    _outpd((USHORT)port, (value));
}

USHORT __inline READ_PORT_USHORT(PUSHORT port)
{
    return _inpw((USHORT)port);
}

VOID __inline WRITE_PORT_USHORT(PUSHORT port, USHORT value)
{
    _outpw((USHORT)port, (value));
}

UCHAR __inline READ_PORT_UCHAR(PUCHAR port)
{
    return _inp((USHORT)port);
}

VOID __inline WRITE_PORT_UCHAR(PUCHAR port, UCHAR value)
{
    _outp((USHORT)port, (value));
}

#define READ_REGISTER_ULONG(reg) \
    (*(volatile unsigned long * const)(reg))

#define WRITE_REGISTER_ULONG(reg, val) \
    (*(volatile unsigned long * const)(reg)) = (val)

#define READ_REGISTER_USHORT(reg) \
    (*(volatile unsigned short * const)(reg))

#define WRITE_REGISTER_USHORT(reg, val) \
    (*(volatile unsigned short * const)(reg)) = (val)

#define READ_REGISTER_UCHAR(reg) \
    (*(volatile unsigned char * const)(reg))

#define WRITE_REGISTER_UCHAR(reg, val) \
    (*(volatile unsigned char * const)(reg)) = (val)

VOID _inline
READ_PORT_BUFFER_UCHAR(
    PUCHAR  Port,
    PUCHAR  Buffer,
    ULONG   Count
    )
{
  __asm {
    mov         dx, word ptr Port
    mov         ecx, Count
    mov         edi, Buffer
    cld
    rep insb
  }
}


VOID _inline
READ_PORT_BUFFER_USHORT(
    PUSHORT Port,
    PUSHORT Buffer,
    ULONG   Count
    )
{
  __asm {
    mov         dx, word ptr Port
    mov         ecx, Count
    mov         edi, Buffer
    cld
    rep insw
  }
}


VOID _inline
READ_PORT_BUFFER_ULONG(
    PULONG  Port,
    PULONG  Buffer,
    ULONG   Count
    )
{
  __asm {
    mov         dx, word ptr Port
    mov         ecx, Count
    mov         edi, Buffer
    cld
    rep insd
  }
}

VOID _inline
WRITE_PORT_BUFFER_UCHAR(
    PUCHAR  Port,
    PUCHAR  Buffer,
    ULONG   Count
    )
{
  __asm {
    mov         dx, word ptr Port
    mov         ecx, Count
    mov         esi, Buffer
    cld
    rep outsb
  }
}


VOID _inline
WRITE_PORT_BUFFER_USHORT(
    PUSHORT Port,
    PUSHORT Buffer,
    ULONG   Count
    )
{
  __asm {
    mov         dx, word ptr Port
    mov         ecx, Count
    mov         esi, Buffer
    cld
    rep outsw
  }
}


VOID _inline
WRITE_PORT_BUFFER_ULONG(
    PULONG  Port,
    PULONG  Buffer,
    ULONG   Count
    )
{
  __asm {
    mov         dx, word ptr Port
    mov         ecx, Count
    mov         esi, Buffer
    cld
    rep outsd
  }
}

// end of x86

#elif defined(MIPS) || defined(ARM)

#define READ_PORT_ULONG(reg) \
    (*(volatile unsigned long * const)(reg))

#define WRITE_PORT_ULONG(reg, val) \
    (*(volatile unsigned long * const)(reg)) = (val)

#define READ_PORT_USHORT(reg) \
    (*(volatile unsigned short * const)(reg))

#define WRITE_PORT_USHORT(reg, val) \
    (*(volatile unsigned short * const)(reg)) = (val)

#define READ_PORT_UCHAR(reg) \
    (*(volatile unsigned char * const)(reg))

#define WRITE_PORT_UCHAR(reg, val) \
    (*(volatile unsigned char * const)(reg)) = (val)

#define READ_REGISTER_ULONG(reg) \
    (*(volatile unsigned long * const)(reg))

#define WRITE_REGISTER_ULONG(reg, val) \
    (*(volatile unsigned long * const)(reg)) = (val)

#define READ_REGISTER_USHORT(reg) \
    (*(volatile unsigned short * const)(reg))

#define WRITE_REGISTER_USHORT(reg, val) \
    (*(volatile unsigned short * const)(reg)) = (val)

#define READ_REGISTER_UCHAR(reg) \
    (*(volatile unsigned char * const)(reg))

#define WRITE_REGISTER_UCHAR(reg, val) \
    (*(volatile unsigned char * const)(reg)) = (val)

VOID _inline
READ_PORT_BUFFER_UCHAR(
    PUCHAR  Port,
    PUCHAR  Buffer,
    ULONG   Count
    )
{
    while( Count-- )
        *Buffer++ = *(volatile UCHAR * const)Port;
}


VOID _inline
READ_PORT_BUFFER_USHORT(
    PUSHORT Port,
    PUSHORT Buffer,
    ULONG   Count
    )
{
    while( Count-- )
        *Buffer++ = *(volatile USHORT * const)Port;
}


VOID _inline
READ_PORT_BUFFER_ULONG(
    PULONG  Port,
    PULONG  Buffer,
    ULONG   Count
    )
{
    while( Count-- )
        *Buffer++ = *(volatile ULONG * const)Port;
}


VOID _inline
WRITE_PORT_BUFFER_UCHAR(
    PUCHAR  Port,
    PUCHAR  Buffer,
    ULONG   Count
    )
{
    while( Count-- )
        *(volatile UCHAR * const)Port = *Buffer++;
}


VOID _inline
WRITE_PORT_BUFFER_USHORT(
    PUSHORT Port,
    PUSHORT Buffer,
    ULONG   Count
    )
{
    while( Count-- )
        *(volatile USHORT * const)Port = *Buffer++;
}


VOID _inline
WRITE_PORT_BUFFER_ULONG(
    PULONG  Port,
    PULONG  Buffer,
    ULONG   Count
    )
{
    while( Count-- )
        *(volatile ULONG * const)Port = *Buffer++;
}


#elif SHx

ULONG READ_PORT_ULONG(PULONG port);

VOID WRITE_PORT_ULONG(PULONG port, ULONG value);

USHORT READ_PORT_USHORT(PUSHORT port);

VOID WRITE_PORT_USHORT(PUSHORT port, USHORT value);

UCHAR READ_PORT_UCHAR(PUCHAR port);

VOID WRITE_PORT_UCHAR(PUCHAR port, UCHAR value);

#define READ_REGISTER_ULONG(reg) \
    (*(volatile unsigned long * const)(reg))

#define WRITE_REGISTER_ULONG(reg, val) \
    (*(volatile unsigned long * const)(reg)) = (val)

#define READ_REGISTER_USHORT(reg) \
    (*(volatile unsigned short * const)(reg))

#define WRITE_REGISTER_USHORT(reg, val) \
    (*(volatile unsigned short * const)(reg)) = (val)

#define READ_REGISTER_UCHAR(reg) \
    (*(volatile unsigned char * const)(reg))

#define WRITE_REGISTER_UCHAR(reg, val) \
    (*(volatile unsigned char * const)(reg)) = (val)

VOID
READ_PORT_BUFFER_UCHAR(
    PUCHAR  Port,
    PUCHAR  Buffer,
    ULONG   Count
    );

VOID
READ_PORT_BUFFER_USHORT(
    PUSHORT Port,
    PUSHORT Buffer,
    ULONG   Count
    );

VOID
READ_PORT_BUFFER_ULONG(
    PULONG  Port,
    PULONG  Buffer,
    ULONG   Count
    );

VOID
WRITE_PORT_BUFFER_UCHAR(
    PUCHAR  Port,
    PUCHAR  Buffer,
    ULONG   Count
    );

VOID
WRITE_PORT_BUFFER_USHORT(
    PUSHORT Port,
    PUSHORT Buffer,
    ULONG   Count
    );

VOID
WRITE_PORT_BUFFER_ULONG(
    PULONG  Port,
    PULONG  Buffer,
    ULONG   Count
    );

#endif // MIPS

VOID _inline
READ_REGISTER_BUFFER_UCHAR(
    PUCHAR  Register,
    PUCHAR  Buffer,
    ULONG   Count
    )
{
    while( Count-- )
         *Buffer++ = *(volatile UCHAR * const)Register;
}


VOID _inline
READ_REGISTER_BUFFER_USHORT(
    PUSHORT Register,
    PUSHORT Buffer,
    ULONG   Count
    )
{
    while( Count-- )
         *Buffer++ = *(volatile USHORT * const)Register;
}


VOID _inline
READ_REGISTER_BUFFER_ULONG(
    PULONG  Register,
    PULONG  Buffer,
    ULONG   Count
    )
{
    while( Count-- )
         *Buffer++ = *(volatile ULONG * const)Register;
}


VOID _inline
WRITE_REGISTER_BUFFER_UCHAR(
    PUCHAR  Register,
    PUCHAR  Buffer,
    ULONG   Count
    )
{
    while( Count-- )
        *(volatile UCHAR * const)Register = *Buffer++;        
}


VOID _inline
WRITE_REGISTER_BUFFER_USHORT(
    PUSHORT Register,
    PUSHORT Buffer,
    ULONG   Count
    )
{
    while( Count-- )
        *(volatile USHORT * const)Register = *Buffer++;
}


VOID _inline
WRITE_REGISTER_BUFFER_ULONG(
    PULONG  Register,
    PULONG  Buffer,
    ULONG   Count
    )
{
    while( Count-- )
        *(volatile ULONG * const)Register = *Buffer++;
}


#ifdef __cplusplus
}
#endif  // __cplusplus

