#pragma once

#include "newDirectory.h"

#include <windows.h>
#include <string>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <istream>
#include <tchar.h>

#define DEFAULT_BUFLEN 0x0000ffff

namespace SWARCOParam_VS13 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form {
	public:
		GUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  outputTextBox;
	protected:
	private: System::Windows::Forms::TextBox^  inputTextBox;
	private: System::Windows::Forms::TextBox^  ipTextBox;
	private: System::Windows::Forms::TextBox^  poortTextBox;

	private: System::Windows::Forms::Label^  verbindLabel;
	private: System::Windows::Forms::Label^  kruispuntLabel;
	private: System::Windows::Forms::Label^  kruispuntSelectedLabel;

	private: System::Windows::Forms::LinkLabel^  pdump1LinkLabel;
	private: System::Windows::Forms::LinkLabel^  pdump2LinkLabel;

	private: System::Windows::Forms::Button^  controleerButton;
	private: System::Windows::Forms::Button^  pdump1Button;
	private: System::Windows::Forms::Button^  pdump2Button;
	private: System::Windows::Forms::Button^  vergelijkButton;
	private: System::Windows::Forms::Button^  logButton;
	private: System::Windows::Forms::Button^  afsluitenButton;
	private: System::Windows::Forms::Button^  selecteerKruispuntButton;
	private: System::Windows::Forms::Button^  wissenButton;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  selecteerDump1Button;
	private: System::Windows::Forms::Button^  selecteerDump2Button;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->outputTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->inputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->verbindLabel = (gcnew System::Windows::Forms::Label());
			this->controleerButton = (gcnew System::Windows::Forms::Button());
			this->pdump1Button = (gcnew System::Windows::Forms::Button());
			this->pdump2Button = (gcnew System::Windows::Forms::Button());
			this->vergelijkButton = (gcnew System::Windows::Forms::Button());
			this->pdump1LinkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->pdump2LinkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->logButton = (gcnew System::Windows::Forms::Button());
			this->afsluitenButton = (gcnew System::Windows::Forms::Button());
			this->kruispuntLabel = (gcnew System::Windows::Forms::Label());
			this->kruispuntSelectedLabel = (gcnew System::Windows::Forms::Label());
			this->selecteerKruispuntButton = (gcnew System::Windows::Forms::Button());
			this->ipTextBox = (gcnew System::Windows::Forms::TextBox());
			this->poortTextBox = (gcnew System::Windows::Forms::TextBox());
			this->wissenButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->selecteerDump1Button = (gcnew System::Windows::Forms::Button());
			this->selecteerDump2Button = (gcnew System::Windows::Forms::Button());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// outputTextBox
			// 
			this->outputTextBox->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outputTextBox->Location = System::Drawing::Point(13, 13);
			this->outputTextBox->Margin = System::Windows::Forms::Padding(5);
			this->outputTextBox->Name = L"outputTextBox";
			this->outputTextBox->ReadOnly = true;
			this->outputTextBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->outputTextBox->Size = System::Drawing::Size(607, 529);
			this->outputTextBox->TabIndex = 0;
			this->outputTextBox->Text = L"";
			// 
			// inputTextBox
			// 
			this->inputTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->inputTextBox->Location = System::Drawing::Point(13, 552);
			this->inputTextBox->Margin = System::Windows::Forms::Padding(5);
			this->inputTextBox->Name = L"inputTextBox";
			this->inputTextBox->Size = System::Drawing::Size(607, 27);
			this->inputTextBox->TabIndex = 1;
			this->inputTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &GUI::inputTextBox_KeyPress);
			// 
			// verbindLabel
			// 
			this->verbindLabel->AutoSize = true;
			this->verbindLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->verbindLabel->Location = System::Drawing::Point(14, 600);
			this->verbindLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->verbindLabel->Name = L"verbindLabel";
			this->verbindLabel->Size = System::Drawing::Size(203, 22);
			this->verbindLabel->TabIndex = 2;
			this->verbindLabel->Text = L"Verbind met IP op poort:";
			// 
			// controleerButton
			// 
			this->controleerButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->controleerButton->Location = System::Drawing::Point(365, 601);
			this->controleerButton->Margin = System::Windows::Forms::Padding(5);
			this->controleerButton->Name = L"controleerButton";
			this->controleerButton->Size = System::Drawing::Size(255, 53);
			this->controleerButton->TabIndex = 6;
			this->controleerButton->Text = L"Controleer verbinding";
			this->controleerButton->UseVisualStyleBackColor = true;
			this->controleerButton->Click += gcnew System::EventHandler(this, &GUI::controleerButton_Click);
			// 
			// pdump1Button
			// 
			this->pdump1Button->Enabled = false;
			this->pdump1Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->pdump1Button->Location = System::Drawing::Point(630, 159);
			this->pdump1Button->Margin = System::Windows::Forms::Padding(5);
			this->pdump1Button->Name = L"pdump1Button";
			this->pdump1Button->Size = System::Drawing::Size(276, 60);
			this->pdump1Button->TabIndex = 8;
			this->pdump1Button->Text = L"Maak pDump1 en selecteer";
			this->pdump1Button->UseVisualStyleBackColor = true;
			this->pdump1Button->Click += gcnew System::EventHandler(this, &GUI::pdump1Button_Click);
			// 
			// pdump2Button
			// 
			this->pdump2Button->Enabled = false;
			this->pdump2Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->pdump2Button->Location = System::Drawing::Point(630, 285);
			this->pdump2Button->Margin = System::Windows::Forms::Padding(5);
			this->pdump2Button->Name = L"pdump2Button";
			this->pdump2Button->Size = System::Drawing::Size(276, 60);
			this->pdump2Button->TabIndex = 9;
			this->pdump2Button->Text = L"Maak pDump2 en selecteer";
			this->pdump2Button->UseVisualStyleBackColor = true;
			this->pdump2Button->Click += gcnew System::EventHandler(this, &GUI::pdump2Button_Click);
			// 
			// vergelijkButton
			// 
			this->vergelijkButton->Enabled = false;
			this->vergelijkButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->vergelijkButton->Location = System::Drawing::Point(630, 446);
			this->vergelijkButton->Margin = System::Windows::Forms::Padding(5);
			this->vergelijkButton->Name = L"vergelijkButton";
			this->vergelijkButton->Size = System::Drawing::Size(190, 53);
			this->vergelijkButton->TabIndex = 12;
			this->vergelijkButton->Text = L"Vergelijken";
			this->vergelijkButton->UseVisualStyleBackColor = true;
			this->vergelijkButton->Click += gcnew System::EventHandler(this, &GUI::vergelijkButton_Click);
			// 
			// pdump1LinkLabel
			// 
			this->pdump1LinkLabel->AutoSize = true;
			this->pdump1LinkLabel->Enabled = false;
			this->pdump1LinkLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->pdump1LinkLabel->Location = System::Drawing::Point(626, 224);
			this->pdump1LinkLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->pdump1LinkLabel->Name = L"pdump1LinkLabel";
			this->pdump1LinkLabel->Size = System::Drawing::Size(150, 22);
			this->pdump1LinkLabel->TabIndex = 13;
			this->pdump1LinkLabel->TabStop = true;
			this->pdump1LinkLabel->Text = L"Niet geselecteerd";
			this->pdump1LinkLabel->VisitedLinkColor = System::Drawing::Color::Blue;
			this->pdump1LinkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &GUI::pdump1LinkLabel_LinkClicked);
			// 
			// pdump2LinkLabel
			// 
			this->pdump2LinkLabel->AutoSize = true;
			this->pdump2LinkLabel->Enabled = false;
			this->pdump2LinkLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->pdump2LinkLabel->Location = System::Drawing::Point(626, 350);
			this->pdump2LinkLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->pdump2LinkLabel->Name = L"pdump2LinkLabel";
			this->pdump2LinkLabel->Size = System::Drawing::Size(150, 22);
			this->pdump2LinkLabel->TabIndex = 14;
			this->pdump2LinkLabel->TabStop = true;
			this->pdump2LinkLabel->Text = L"Niet geselecteerd";
			this->pdump2LinkLabel->VisitedLinkColor = System::Drawing::Color::Blue;
			this->pdump2LinkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &GUI::pdump2LinkLabel_LinkClicked);
			// 
			// logButton
			// 
			this->logButton->Enabled = false;
			this->logButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->logButton->Location = System::Drawing::Point(830, 446);
			this->logButton->Margin = System::Windows::Forms::Padding(5);
			this->logButton->Name = L"logButton";
			this->logButton->Size = System::Drawing::Size(190, 53);
			this->logButton->TabIndex = 15;
			this->logButton->Text = L"Veranderingen log";
			this->logButton->UseVisualStyleBackColor = true;
			this->logButton->Click += gcnew System::EventHandler(this, &GUI::logButton_Click);
			// 
			// afsluitenButton
			// 
			this->afsluitenButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->afsluitenButton->Location = System::Drawing::Point(833, 601);
			this->afsluitenButton->Margin = System::Windows::Forms::Padding(5);
			this->afsluitenButton->Name = L"afsluitenButton";
			this->afsluitenButton->Size = System::Drawing::Size(189, 53);
			this->afsluitenButton->TabIndex = 16;
			this->afsluitenButton->Text = L"Afsluiten";
			this->afsluitenButton->UseVisualStyleBackColor = true;
			this->afsluitenButton->Click += gcnew System::EventHandler(this, &GUI::afsluitenButton_Click);
			// 
			// kruispuntLabel
			// 
			this->kruispuntLabel->AutoSize = true;
			this->kruispuntLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->kruispuntLabel->Location = System::Drawing::Point(630, 36);
			this->kruispuntLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->kruispuntLabel->Name = L"kruispuntLabel";
			this->kruispuntLabel->Size = System::Drawing::Size(110, 26);
			this->kruispuntLabel->TabIndex = 17;
			this->kruispuntLabel->Text = L"Kruispunt:";
			// 
			// kruispuntSelectedLabel
			// 
			this->kruispuntSelectedLabel->AutoSize = true;
			this->kruispuntSelectedLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->kruispuntSelectedLabel->Location = System::Drawing::Point(629, 62);
			this->kruispuntSelectedLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->kruispuntSelectedLabel->Name = L"kruispuntSelectedLabel";
			this->kruispuntSelectedLabel->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->kruispuntSelectedLabel->Size = System::Drawing::Size(129, 31);
			this->kruispuntSelectedLabel->TabIndex = 18;
			this->kruispuntSelectedLabel->Text = L"Selecteer";
			// 
			// selecteerKruispuntButton
			// 
			this->selecteerKruispuntButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->selecteerKruispuntButton->Location = System::Drawing::Point(847, 14);
			this->selecteerKruispuntButton->Margin = System::Windows::Forms::Padding(5);
			this->selecteerKruispuntButton->Name = L"selecteerKruispuntButton";
			this->selecteerKruispuntButton->Size = System::Drawing::Size(175, 48);
			this->selecteerKruispuntButton->TabIndex = 19;
			this->selecteerKruispuntButton->Text = L"Selecteer";
			this->selecteerKruispuntButton->UseVisualStyleBackColor = true;
			this->selecteerKruispuntButton->Click += gcnew System::EventHandler(this, &GUI::selecteerKruispuntButton_Click);
			// 
			// ipTextBox
			// 
			this->ipTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->ipTextBox->Location = System::Drawing::Point(14, 627);
			this->ipTextBox->Margin = System::Windows::Forms::Padding(5);
			this->ipTextBox->MaxLength = 15;
			this->ipTextBox->Name = L"ipTextBox";
			this->ipTextBox->Size = System::Drawing::Size(247, 27);
			this->ipTextBox->TabIndex = 20;
			this->ipTextBox->Text = L"192.168.100.75";
			this->ipTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &GUI::ipTextBox_KeyPress);
			// 
			// poortTextBox
			// 
			this->poortTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->poortTextBox->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->poortTextBox->Location = System::Drawing::Point(271, 627);
			this->poortTextBox->Margin = System::Windows::Forms::Padding(5);
			this->poortTextBox->MaxLength = 5;
			this->poortTextBox->Name = L"poortTextBox";
			this->poortTextBox->Size = System::Drawing::Size(84, 27);
			this->poortTextBox->TabIndex = 21;
			this->poortTextBox->Text = L"7000";
			this->poortTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &GUI::poortTextBox_KeyPress);
			// 
			// wissenButton
			// 
			this->wissenButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->wissenButton->Location = System::Drawing::Point(497, 492);
			this->wissenButton->Margin = System::Windows::Forms::Padding(4);
			this->wissenButton->Name = L"wissenButton";
			this->wissenButton->Size = System::Drawing::Size(96, 37);
			this->wissenButton->TabIndex = 22;
			this->wissenButton->Text = L"Wissen";
			this->wissenButton->UseVisualStyleBackColor = true;
			this->wissenButton->Click += gcnew System::EventHandler(this, &GUI::wissenButton_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(628, 592);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 36);
			this->button1->TabIndex = 23;
			this->button1->Text = L"local";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GUI::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button2->Location = System::Drawing::Point(628, 627);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 36);
			this->button2->TabIndex = 24;
			this->button2->Text = L"remote";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GUI::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(694, 592);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 36);
			this->button3->TabIndex = 25;
			this->button3->Text = L"unlock";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GUI::button3_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// selecteerDump1Button
			// 
			this->selecteerDump1Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->selecteerDump1Button->Location = System::Drawing::Point(914, 159);
			this->selecteerDump1Button->Name = L"selecteerDump1Button";
			this->selecteerDump1Button->Size = System::Drawing::Size(110, 60);
			this->selecteerDump1Button->TabIndex = 8;
			this->selecteerDump1Button->Text = L"Selecteer bestand";
			this->selecteerDump1Button->UseVisualStyleBackColor = true;
			this->selecteerDump1Button->Click += gcnew System::EventHandler(this, &GUI::selecteerDump1Button_Click);
			// 
			// selecteerDump2Button
			// 
			this->selecteerDump2Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->selecteerDump2Button->Location = System::Drawing::Point(914, 285);
			this->selecteerDump2Button->Name = L"selecteerDump2Button";
			this->selecteerDump2Button->Size = System::Drawing::Size(110, 60);
			this->selecteerDump2Button->TabIndex = 26;
			this->selecteerDump2Button->Text = L"Selecteer bestand";
			this->selecteerDump2Button->UseVisualStyleBackColor = true;
			this->selecteerDump2Button->Click += gcnew System::EventHandler(this, &GUI::selecteerDump2Button_Click);
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1036, 668);
			this->Controls->Add(this->selecteerDump2Button);
			this->Controls->Add(this->selecteerDump1Button);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->wissenButton);
			this->Controls->Add(this->poortTextBox);
			this->Controls->Add(this->ipTextBox);
			this->Controls->Add(this->selecteerKruispuntButton);
			this->Controls->Add(this->kruispuntSelectedLabel);
			this->Controls->Add(this->kruispuntLabel);
			this->Controls->Add(this->afsluitenButton);
			this->Controls->Add(this->logButton);
			this->Controls->Add(this->pdump2LinkLabel);
			this->Controls->Add(this->pdump1LinkLabel);
			this->Controls->Add(this->vergelijkButton);
			this->Controls->Add(this->pdump2Button);
			this->Controls->Add(this->pdump1Button);
			this->Controls->Add(this->controleerButton);
			this->Controls->Add(this->verbindLabel);
			this->Controls->Add(this->inputTextBox);
			this->Controls->Add(this->outputTextBox);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"GUI";
			this->Text = L"SWARCO Nederland B.V.";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//MEMBERS
	SOCKET s;
	private: bool visited = false;
	private: int iResult = -1;

		//PRACTICAL FUNCTIONS
	private: char* strToChar(String^ _str) {
		IntPtr ptrToNativeString = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(_str);
		char* strChar = static_cast<char*>(ptrToNativeString.ToPointer());
		return strChar;
	}
	private: String^ charToStr(char* _char) {
		return gcnew String(_char);
	}
	private: void scrollDown() {
		outputTextBox->SelectionStart = outputTextBox->Text->Length; 
		outputTextBox->ScrollToCaret();
	}
	private: bool timeout() {
		struct timeval tv;
		fd_set readfds;
		tv.tv_sec = 2;
		//tv.tv_usec = 500000;

		FD_ZERO(&readfds);
		FD_SET(s, &readfds);

		return (select(s + 1, &readfds, NULL, NULL, &tv) == 0);
	}
	private: bool SetSocketBlockingEnabled(int fd, bool blocking) {
			if (fd < 0) return false;

#ifdef WIN32
			unsigned long mode = blocking ? 0 : 1;
			return (ioctlsocket(fd, FIONBIO, &mode) == 0) ? true : false;
#else
			int flags = fcntl(fd, F_GETFL, 0);
			if (flags < 0) return false;
			flags = blocking ? (flags&~O_NONBLOCK) : (flags | O_NONBLOCK);
			return (fcntl(fd, F_SETFL, flags) == 0) ? true : false;
#endif
}
	private: String^ getDirectory() {
		char working_directory[MAX_PATH + 1];
		GetCurrentDirectoryA(sizeof(working_directory), working_directory);
		return (charToStr(working_directory)->Substring(charToStr(working_directory)->LastIndexOf('\\')));
	}
	private: String^ getFullDirectory() {
		char working_directory[MAX_PATH + 1];
		GetCurrentDirectoryA(sizeof(working_directory), working_directory);
		return (charToStr(working_directory));
	}
	
		//FUNCTIONAL FUNCTIONS
	private: bool makeConnection() {
		SOCKADDR_IN target;
		WSADATA wsaData;

		int portNo = Convert::ToInt32(poortTextBox->Text);	//Convert String^ to int
		char* ipAddr = strToChar(ipTextBox->Text);	//Convert String^ to char*
		
		int error = WSAStartup(0x202, &wsaData);
		if (error) {
			outputTextBox->Text += "Error: Winsock start fout\n";
			return false; //winsock error
		}
		if (wsaData.wVersion != 0x202) {
			WSACleanup();
			outputTextBox->Text += "Error: Winsock is niet de juiste versie\n";
			return false; //winsock not right version
		} //Winsock launched succesfully

		target.sin_family = AF_INET;
		target.sin_port = htons(portNo);
		target.sin_addr.S_un.S_addr = inet_addr(ipAddr);

		s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
		if (s == INVALID_SOCKET) {
			outputTextBox->Text += "Error: Socket is niet geldig\n";
			return false; //invalid socket
		}

		if (connect(s, (SOCKADDR *)&target, sizeof(target)) == SOCKET_ERROR) {

			outputTextBox->Text += "Error: Geen verbinding kunnen maken\n";
			return false; //socket error
		}
		else {
			return true; //socket succes
		}
		
	}
	private: bool closeConnection() {
		closesocket(s);
		WSACleanup();
		//outputTextBox->Text += "Verbinding gesloten\n\n";
		scrollDown();
		return true;
	}
	private: bool sendData(String^ data) {
		outputTextBox->Refresh();

		if (makeConnection()) {

			char* dataChar = strToChar(data);
			char* carriage = "\n";
			//iResult = 
			send(s, dataChar, (int)strlen(dataChar), 0);
			iResult = send(s, carriage, (int)strlen(carriage), 0);
			if (iResult == SOCKET_ERROR) {
				outputTextBox->Text += "Verzenden van '" + data + "' niet gelukt. Error: " + WSAGetLastError() + "\n";
				closeConnection();
				WSACleanup();
				return false;
			}
			return true;
		}
		return false;
	}
	private: bool receiveData(String^ fileName) {
		SetCurrentDirectoryA(strToChar(kruispuntSelectedLabel->Text));
		int recvbuflen = DEFAULT_BUFLEN;
		bool save = (fileName != "") ? true : false;
		StreamWriter^ outputFile = gcnew StreamWriter((fileName != "") ? fileName : "output" + ".txt");

		while (true) {
			char recvbuf[DEFAULT_BUFLEN];
			
			iResult = recv(s, recvbuf, recvbuflen, 0);
			String^ output = charToStr(recvbuf);
			memset(recvbuf, 0, sizeof(recvbuf));	//Reset recvbuf
			
			if (iResult > 0) {
				outputTextBox->Text += output;

				int i = -1;
				bool lastCharWasSpace = false;

				while (true) {
					i++;
					if (i >= output->Length) {
						break;
					}
					if (lastCharWasSpace == true && output[i] == ' ') {
						outputFile->WriteLine("");
						while (i != output->Length && output[i] == ' ') {
							i++;
						}
						lastCharWasSpace = false;
						i--;
						continue;
					}
					if (output[i] == ' ') {
						lastCharWasSpace = true;
						continue;
					}
					else
						lastCharWasSpace = false;

					outputFile->Write(output[i]);
				}
			}
			else if (iResult == 0) {
				outputTextBox->Text += "Verbinding extern verbroken\n";
				return false;
			}
			else {
				outputTextBox->Text += "Geen data ontvangen\n";
				return false;
			}
			if (timeout())
				break;
			scrollDown();
		}

		outputFile->Close();
		closeConnection();
		return true;
	}
	private: bool compareFiles() {
		using System::Windows::Forms::MessageBox;
		int network = 0;
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			this, "Verbinding maken en eventuele veranderingen automatisch invoeren?",
			"Verbinding maken", MessageBoxButtons::YesNo);
		if (result == System::Windows::Forms::DialogResult::Yes)
			network = 1;
		else network = -1;
		
		try {
			StreamWriter^ verschillen = gcnew StreamWriter(getFullDirectory() + "\\"
				+ kruispuntSelectedLabel->Text + "\\verschillen.txt");
			StreamReader^ dump2 = gcnew StreamReader(getFullDirectory() + "\\"
				+ kruispuntSelectedLabel->Text + "\\pdump2.txt");
			bool found = false;
			bool verschil = false;

			if (!dump2) { outputTextBox->Text += "Fout: pDump2 kon niet geopend worden\n"; return false; }

			while (!dump2->EndOfStream) {	//Go through pdump2 and seperate parameter and value
				String^ parameter2, ^ value2, ^ line2 = dump2->ReadLine();
				if (line2 == "" || line2->Contains("*") || line2->Contains(">")) {
					continue;
				}
				parameter2 = line2->Substring(0, line2->IndexOf(':'));
				value2 = (line2->Contains("/")) ?
					line2->Substring(line2->IndexOf(':') + 1, (line2->IndexOf('/') - line2->IndexOf(':') - 1))
					: line2->Substring(line2->IndexOf(':') + 1);

				StreamReader^ dump1 = gcnew StreamReader(getFullDirectory() + "\\"
					+ kruispuntSelectedLabel->Text + "\\pdump1.txt");
				if (!dump1) { outputTextBox->Text += "Fout: pDump1 kon niet geopend worden\n"; return false; }

				while (!dump1->EndOfStream) {	//Go through pdump1 to find matches
					String^ parameter, ^ value, ^ line = dump1->ReadLine();
					if (line == "" || line->Contains("*") || line->Contains(">")) {
						continue;
					}
					parameter = line->Substring(0, line->IndexOf(':'));
					if (parameter == parameter2) {	//Match found, get values
						found = true;
						value = (line->Contains("/")) ? line->Substring(line->IndexOf(':') + 1,
							(line->IndexOf('/') - line->IndexOf(':') - 1))
							: line->Substring(line->IndexOf(':') + 1);
						if (value != value2) {	//Check values, not same? Write!
							verschil = true;
							verschillen->WriteLine(parameter + "   \tpdump1: " + value + "\tpdump2: " + value2);

							if (network == 1) {
								if (sendData(parameter + "=" + value)) {
									if (receiveData("")) {
										verschillen->WriteLine(parameter + " is veranderd van " + value2 + " naar " + value);
									}
								}
								else { network = 0; }
							}
							dump1->Close();
							break;
						}
						//verschillen->WriteLine(parameter + " found in both, but value is same");
						dump1->Close();
						break;
					}
					found = false;
				}
				if (!found) verschillen->WriteLine(parameter2 + " in dump2, maar niet in dump1");
				dump1->Close();
			}
			if (!verschil) verschillen->WriteLine("Er waren geen verschillen gevonden");
			outputTextBox->Text += (network == 1) ? "Verschillen ingevoerd\n"
			: (network == -1) ? "Verschillen niet ingevoerd\n"
			: "Fout: Verschillen niet in kunnen voeren: geen verbinding\n";
			
			dump2->Close();
			verschillen->Close();
			SetCurrentDirectoryA(strToChar(kruispuntSelectedLabel->Text));
			WinExec("notepad.exe \"verschillen.txt\"", SW_SHOW);
			SetCurrentDirectoryA("..");
			return true;
		}
		catch (FileNotFoundException^ e) {
			outputTextBox->Text += "Error: bestand niet gevonden in folder\n"
				+ "StackTrack: " + e->StackTrace;
			return false;
		}
		catch (DirectoryNotFoundException^ e) {
			outputTextBox->Text += "Error: folder niet kunnen vinden\n"
				+ "StackTrack: " + e->StackTrace;
			return false;
		}
	}

		//GUI COMPONENTS
	private: System::Void inputTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (char)13 && inputTextBox->Text != "") {
			String^ text = inputTextBox->Text;
			inputTextBox->Text = "";
			outputTextBox->Text += text + "\n";
			
			outputTextBox->Refresh(); 
			inputTextBox->Refresh();
			
			if (sendData(text)) {
				receiveData("");
			}
			scrollDown();
		}
	}
	private: System::Void controleerButton_Click(System::Object^  sender, System::EventArgs^  e) {
		controleerButton->Enabled = false;
		String^ p1 = ipTextBox->Text->Substring(0, ipTextBox->Text->IndexOf('.')),
			^ rest = ipTextBox->Text->Substring(ipTextBox->Text->IndexOf('.') + 1),
			^ p2 = rest->Substring(0, rest->IndexOf('.'));
		rest = rest->Substring(rest->IndexOf('.')+1);
		String^ p3 = rest->Substring(0, rest->IndexOf('.'));
		String^ p4 = rest->Substring(rest->IndexOf('.')+1);

		bool ip = (p1 == "" || p2 == "" || p3 == "" || p4 == "" || p4->Length > 3 || p4->Contains(".")) ? false : true;
		bool port = (poortTextBox->Text != "") ? true : false ;

		//Check if IP and Port are entered correctly
		if (ip && port) {	
			outputTextBox->Text += "Verbinding controleren met " + ipTextBox->Text
				+ " op poort " + poortTextBox->Text + "...\n";
			outputTextBox->Refresh();

			bool verbinding = makeConnection();
			if (verbinding)
				outputTextBox->Text += "Verbinding goed\n";
			closeConnection();
			scrollDown();
		}
		else {
			outputTextBox->Text += "Vul een geldig IP adres en poort in\n";
			}
		controleerButton->Enabled = true;
	}
	private: System::Void afsluitenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void pdump1LinkLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		pdump1LinkLabel->Enabled = false;
		if (pdump1LinkLabel->Text == "Niet geselecteerd") {
			outputTextBox->Text += "Fout: Maak eerst een pdump\n";
			scrollDown();
		}
		else {
			SetCurrentDirectoryA(strToChar(kruispuntSelectedLabel->Text));
			if (pdump1LinkLabel->Text->Contains("pdump1.txt"))
				WinExec("notepad.exe \"pdump1.txt\"", SW_SHOW);
			else outputTextBox->Text += "Fout: Geselecteerd bestand is niet pdump1\n" +
				"\tGebruik onderstaande voor pdump2\n";
			SetCurrentDirectoryA(strToChar(".."));
		}
		pdump1LinkLabel->Enabled = true;
	}
	private: System::Void pdump2LinkLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		pdump2LinkLabel->Enabled = false; 
		if (pdump2LinkLabel->Text == "Niet geselecteerd") {
			outputTextBox->Text += "Fout: Maak eerst een pdump\n";
			scrollDown();
		}
		else {
			SetCurrentDirectoryA(strToChar(pdump2LinkLabel->Text->Substring
				(3, pdump2LinkLabel->Text->LastIndexOf('\\')-3)));	//3 is to elimate added "..\"
			if (pdump2LinkLabel->Text->Contains("pdump2.txt"))
				WinExec("notepad.exe \"pdump2.txt\"", SW_SHOW);
			else outputTextBox->Text += "Fout: Geselecteerd bestand is niet pdump2\n" + 
				"\tGebruik bovenstaande voor pdump1\n";
			SetCurrentDirectoryA(strToChar(".."));
		}
		pdump2LinkLabel->Enabled = true;

	}
	private: System::Void pdump1Button_Click(System::Object^  sender, System::EventArgs^  e) {
		pdump1Button->Enabled = false;
		outputTextBox->Text += "Bezig met pDump1 maken...\n";
		if (sendData("pdump")) {
			scrollDown();
			if (receiveData("pdump1")) { //pDump made succesfully
				pdump2Button->Enabled = true;
				pdump1LinkLabel->Text = ".." + getDirectory() + "\\pdump1.txt";
				pdump1LinkLabel->Enabled = true;
				outputTextBox->Text += "Gereed\n\n";
			}
		}
		pdump1Button->Enabled = true;
	}
	private: System::Void pdump2Button_Click(System::Object^  sender, System::EventArgs^  e) {
		pdump2Button->Enabled = false; 
		outputTextBox->Text += "Bezig met pDump2 maken...\n";
		if (sendData("pdump")) {
			scrollDown();
			if (receiveData("pdump2")) { //pDump made succesfully
				vergelijkButton->Enabled = true;
				pdump2LinkLabel->Text = ".." + getDirectory() + "\\pdump2.txt";
				pdump2LinkLabel->Enabled = true;
				outputTextBox->Text += "Gereed\n\n";
			}
		}
		pdump2Button->Enabled = true;
	}
	private: System::Void selecteerKruispuntButton_Click(System::Object^  sender, System::EventArgs^  e) {
		newDirectory^ form = gcnew newDirectory();
		System::Windows::Forms::DialogResult result; 
		result = form->ShowDialog();
		if (result == System::Windows::Forms::DialogResult::OK) {
			kruispuntSelectedLabel->Text = form->naamTextBox->Text;
			
			char* folder = strToChar(kruispuntSelectedLabel->Text);
			if (visited == true) {	//Prevent 2nd time using button to put new folder in existing one
				SetCurrentDirectory(L"..");
			}
			CreateDirectoryA(folder, NULL);
			SetCurrentDirectoryA(folder);
			visited = true;

			pdump1Button->Enabled = true;
		}
	}
	private: System::Void vergelijkButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (pdump1LinkLabel->Enabled == false || pdump2LinkLabel->Enabled == false) {
			outputTextBox->Text += "Fout: Nog niet beide pDump bestanden geladen.\n";
			scrollDown();
		}
		if (pdump1LinkLabel->Text->Substring(0, pdump1LinkLabel->Text->LastIndexOf("\\")) !=
			pdump2LinkLabel->Text->Substring(0, pdump2LinkLabel->Text->LastIndexOf("\\"))) {	//Check of beide dumpbestanden van zelfde kruispunt zijn
			outputTextBox->Text += "Fout: pDump bestanden zijn niet van hetzelfde kruispunt\n"
				+ "\tSelecteer de juiste bestanden\n";
			scrollDown();
		}
		if (pdump1LinkLabel->Text->Substring(3, pdump1LinkLabel->Text->LastIndexOf("\\")-3) !=
			kruispuntSelectedLabel->Text) {
			outputTextBox->Text += "Fout: pDump bestanden zijn niet afkomstig van het geselecteerde kruispunt\n";
			scrollDown();
		}
		if (!pdump1LinkLabel->Text->Contains("pdump1.txt")) {
			outputTextBox->Text += "Fout: pdump1 niet juist geladen\n";
			scrollDown();
		}
		if (!pdump2LinkLabel->Text->Contains("pdump2.txt")) {
			outputTextBox->Text += "Fout: pdump2 niet juist geladen\n";
			scrollDown();
		}
		else {
			outputTextBox->Text += "Bezig met vergelijken van pDump bestanden...\n";
			outputTextBox->Refresh();
			scrollDown();
			if (compareFiles()) {	//Vergelijken is voltooid
				outputTextBox->Text += "Gereed\n\n";
				logButton->Enabled = true;
			}
		}
	}
	private: System::Void logButton_Click(System::Object^  sender, System::EventArgs^  e) {
		SetCurrentDirectoryA(strToChar(kruispuntSelectedLabel->Text));
		WinExec("notepad.exe \"verschillen.txt\"", SW_SHOW);
		SetCurrentDirectoryA("..");
	}
	private: System::Void wissenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		outputTextBox->Text = "";
	}
	private: System::Void poortTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		// Accept only digits and the Backspace character
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08){
			e->Handled = true;
		}
	}
	private: System::Void ipTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	// Accept only digits, "." and the Backspace character
		if (e->KeyChar == '.'){
			if (!this->ipTextBox->Text->Contains(".") && this->ipTextBox->SelectedText->Contains("."))
				e->Handled = true;
		}
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
	private: System::Void selecteerDump1Button_Click(System::Object^  sender, System::EventArgs^  e) {
		selecteerDump1Button->Enabled = false;
		OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Text Files|*.txt";
		openFileDialog1->Title = "Select a pDump File";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pdump1Button->Enabled = true;
			pdump2Button->Enabled = true;
			String^ parent = openFileDialog1->FileName->Substring(0, openFileDialog1->FileName->LastIndexOf(L"\\"));
			parent = parent->Substring(parent->LastIndexOf('\\'));
			kruispuntSelectedLabel->Text = parent->Substring(1); //substring:Take off the "\" from directory
			pdump1LinkLabel->Text = ".." + parent + "\\" +
				openFileDialog1->FileName->Substring(openFileDialog1->FileName->LastIndexOf(L"\\") + 1);
			pdump1LinkLabel->Enabled = true;
		}
		selecteerDump1Button->Enabled = true;
	}
	private: System::Void selecteerDump2Button_Click(System::Object^  sender, System::EventArgs^  e) {
		selecteerDump2Button->Enabled = false;
		OpenFileDialog ^ openFileDialog2 = gcnew OpenFileDialog();
		openFileDialog2->Filter = "Text Files|*.txt";
		openFileDialog2->Title = "Select a pDump File";

		if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ parent = openFileDialog2->FileName->Substring(0, openFileDialog2->FileName->LastIndexOf(L"\\"));
			parent = parent->Substring(parent->LastIndexOf('\\'));
			pdump2LinkLabel->Text = ".." + parent + "\\" +
				openFileDialog2->FileName->Substring(openFileDialog2->FileName->LastIndexOf(L"\\") + 1);
			pdump2LinkLabel->Enabled = true;
		}
		selecteerDump2Button->Enabled = true;
		vergelijkButton->Enabled = true;
	}

//TEST BUTTONS
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	ipTextBox->Text = "127.0.0.1";
	poortTextBox->Text = "5000";
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	ipTextBox->Text = "192.168.100.75";
	poortTextBox->Text = "7000";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	pdump1Button->Enabled = true;
	pdump2Button->Enabled = true;
	vergelijkButton->Enabled = true;
	}

};
}

