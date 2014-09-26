#include "GUI.h"

#define WIN32_MEAN_AND_LEAN
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <windows.h>
#include <stdio.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	LPSTR folder = "";
	GetCurrentDirectoryA(50, folder);
	CreateDirectoryA("pDump Data", NULL);
	SetCurrentDirectoryA("pDump Data");

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SWARCOParam_VS13::GUI form;
	Application::Run(%form);
}