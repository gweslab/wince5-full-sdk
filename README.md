# Windows CE 5.0 SDK + Cross-Compiler Toolchain

A drop-in, self-contained Windows CE 5.0 cross-development bundle. Builds CE5
PE binaries for ARM, MIPS, and SH targets on a modern Windows host without
installing eMbedded Visual C++, Platform Builder, or Visual Studio.

## Layout

```
.
├── bin/I386/                    host x86 build tools (run on Windows host)
│   ├── ARM/                     cl.exe armasm.exe c1.dll c1xx.dll c2.dll
│   ├── MIPS/                    cl.exe mipsasm.exe ...
│   ├── SH/                      cl.exe shasm.exe ...
│   ├── link.exe lib.exe         universal linker / librarian
│   ├── rc.exe nmake.exe         resource compiler / make
│   └── dumpbin.exe editbin.exe cvtres.exe undname.exe bscmake.exe ...
├── Include/                     SDK headers
│   ├── Armv4i/  x86/  emulator/
│   └── MIPSII/  MIPSII_FP/  MIPSIV/  MIPSIV_FP/  SH4/
├── Lib/                         import libs (coredll, commctrl, commdlg,
│   ├── ARMV4I/  x86/  emulator/   aygshell, ws2, ndis, ceshell, ...)
│   └── MIPSII/  MIPSII_FP/  MIPSIV/  MIPSIV_FP/  SH4/
├── Mfc/                         MFC for Windows CE
├── Atl/                         ATL for Windows CE
├── Help/                        API documentation (CHM)
├── Emulation/                   CE x86 emulator runtime
└── MSManifest.txt  MSFT_SDK_EULA_1033.rtf  Properties.xml
```

## Quick start — build an ARM CE5 app

From PowerShell, point `$SDK` at your clone of this repo and run:

```powershell
$SDK = "C:\path\to\wince-sdk-5"
$env:PATH = "$SDK\bin\I386\ARM;$SDK\bin\I386;$env:PATH"

# compile
& "$SDK\bin\I386\ARM\cl.exe" /nologo /c /W3 /O2 `
    /DUNICODE /D_UNICODE /DUNDER_CE /DARM /D_ARM_ `
    /I "$SDK\Include\Armv4i" main.c

# link
& "$SDK\bin\I386\link.exe" /nologo `
    /subsystem:windowsce /entry:WinMain /machine:THUMB /nodefaultlib `
    /libpath:"$SDK\Lib\ARMV4I" /out:app.exe `
    main.obj coredll.lib commctrl.lib commdlg.lib
```

The output `app.exe` is a Windows CE PE that runs unmodified on any
ARM-based Windows CE 5.0 / Windows Mobile 5 device — Pocket PC, Smartphone,
Handheld PC, or industrial/embedded hardware.

## Other target architectures

Swap the arch tokens consistently across the compiler directory, include
directory, and lib directory:

| Target              | `bin\I386\` subdir | `Include\` subdir | `Lib\` subdir |
|---------------------|--------------------|-------------------|---------------|
| ARM v4i             | `ARM`              | `Armv4i`          | `ARMV4I`      |
| MIPS II / II FP     | `MIPS`             | `MIPSII[_FP]`     | `MIPSII[_FP]` |
| MIPS IV / IV FP     | `MIPS`             | `MIPSIV[_FP]`     | `MIPSIV[_FP]` |
| SH-4                | `SH`               | `SH4`             | `SH4`         |

The exact `/machine:` switch for each target is the one accepted by the
included `link.exe`. Run `link.exe /?` to list them. The `cl.exe` for ARM,
MIPS, and SH lives in the matching `bin\I386\<arch>\` subdir

## Sources

The contents are a verbatim merge of two Microsoft installs:

- **Build tools** (`bin/`) — `SDK\BIN\` from Windows CE 5.0 Platform Builder.
- **SDK** (`Include/`, `Lib/`, `Mfc/`, `Atl/`, `Help/`, `Emulation/`) —
  Standard SDK for Windows CE 5.0.

## License

All binaries, headers, libraries, and documentation in this repository are
Microsoft's intellectual property, redistributed verbatim. The Microsoft
SDK End-User License Agreement in `MSFT_SDK_EULA_1033.rtf` governs use and
redistribution. No additional license is granted by this repository beyond
what Microsoft's EULA permits.
