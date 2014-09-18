#include "GUI.h"

#define WIN32_MEAN_AND_LEAN
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <windows.h>
#include <string>
#include <stdio.h>
#include <fstream>
#include <istream>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SWARCOParam_VS13::GUI form;
	Application::Run(%form);
}

/*
bool makeConnection(String^ port, String^ ip) {

	int portNo = Convert::ToInt32(port);	//Getest; werkt

	//IntPtr ptrToNativeString = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(ip);
	//char* ipAddr = static_cast<char*>(ptrToNativeString.ToPointer());

	//char* ipAddr = ip;
	//WSADATA wsaData;

	std::cout << "*" << portNo << "*\n";
	return true;
	//std::cout << "*" << inet_addr(ipAddr) << "*";

	//int error = WSAStartup(0x202, &wsaData);
	//if (error) return false; //winsock error
	//if (wsaData.wVersion != 0x202) {
	//	WSACleanup();
	//	return false; //winsock not right version
	//} //Winsock launched succesfully

	//target.sin_family = AF_INET;
	//target.sin_port = htons(portNo);
	//target.sin_addr.S_un.S_addr = inet_addr(ipAddr);

	//s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	//if (s == INVALID_SOCKET) {
	//	return false; //invalid socket
	//}

	//if (connect(s, (SOCKADDR *)&target, sizeof(target)) == SOCKET_ERROR) 
	//	return false; //socket error
	//else
	//	return true; //socket succes

}
*/