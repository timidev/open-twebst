#pragma once

namespace XBit
{
	const TCHAR XBIT_INJECTOR_WND_NAME[]           = _T("{121D62DE-11AD-4737-AAD0-B4ECF899F52C}");
	const TCHAR XBIT_INJECTOR_WND_CLASS_NAME_x86[] = _T("{14F33525-C68F-48C3-A0E6-C436FD0462D9}_x86");
	const TCHAR XBIT_INJECTOR_WND_CLASS_NAME_x64[] = _T("{14F33525-C68F-48C3-A0E6-C436FD0462D9}_x64");
	const WCHAR XBIT_START_IE_CMDL[]               = L"/S";
	const TCHAR XBIT_INJECTOR_EXE_NAME_X86[]       = _T("OTwbstXbit_x86.exe");
	const TCHAR XBIT_INJECTOR_EXE_NAME_X64[]       = _T("OTwbstXbit_x64.exe");

#ifdef _AMD64_
	const LPCTSTR XBIT_INJECTOR_EXE_NAME       = XBIT_INJECTOR_EXE_NAME_X86;
	const LPCTSTR XBIT_INJECTOR_WND_CLASS_NAME = XBIT_INJECTOR_WND_CLASS_NAME_x86;
#else
	const LPCTSTR XBIT_INJECTOR_EXE_NAME       = XBIT_INJECTOR_EXE_NAME_X64;
	const LPCTSTR XBIT_INJECTOR_WND_CLASS_NAME = XBIT_INJECTOR_WND_CLASS_NAME_x64;
#endif

	const UINT  XBIT_MSG_INJECT_BHO = WM_APP + 1;
}
