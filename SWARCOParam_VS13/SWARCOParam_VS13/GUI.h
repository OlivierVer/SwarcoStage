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
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button4;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
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
			this->pdump1Button->Size = System::Drawing::Size(267, 60);
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
			this->pdump2Button->Size = System::Drawing::Size(385, 60);
			this->pdump2Button->TabIndex = 9;
			this->pdump2Button->Text = L"Maak pDump2 en selecteer";
			this->pdump2Button->UseVisualStyleBackColor = true;
			this->pdump2Button->Click += gcnew System::EventHandler(this, &GUI::pdump2Button_Click);
			// 
			// vergelijkButton
			// 
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
			this->pdump1LinkLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->pdump1LinkLabel->Location = System::Drawing::Point(626, 224);
			this->pdump1LinkLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->pdump1LinkLabel->Name = L"pdump1LinkLabel";
			this->pdump1LinkLabel->Size = System::Drawing::Size(232, 22);
			this->pdump1LinkLabel->TabIndex = 13;
			this->pdump1LinkLabel->TabStop = true;
			this->pdump1LinkLabel->Text = L"Onbekend_Test/pdump1.txt";
			this->pdump1LinkLabel->VisitedLinkColor = System::Drawing::Color::Blue;
			this->pdump1LinkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &GUI::pdump1LinkLabel_LinkClicked);
			// 
			// pdump2LinkLabel
			// 
			this->pdump2LinkLabel->AutoSize = true;
			this->pdump2LinkLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->pdump2LinkLabel->Location = System::Drawing::Point(626, 350);
			this->pdump2LinkLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->pdump2LinkLabel->Name = L"pdump2LinkLabel";
			this->pdump2LinkLabel->Size = System::Drawing::Size(232, 22);
			this->pdump2LinkLabel->TabIndex = 14;
			this->pdump2LinkLabel->TabStop = true;
			this->pdump2LinkLabel->Text = L"Onbekend_Test/pdump2.txt";
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
			this->ipTextBox->Name = L"ipTextBox";
			this->ipTextBox->Size = System::Drawing::Size(247, 27);
			this->ipTextBox->TabIndex = 20;
			this->ipTextBox->Text = L"192.168.100.75";
			// 
			// poortTextBox
			// 
			this->poortTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->poortTextBox->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->poortTextBox->Location = System::Drawing::Point(271, 627);
			this->poortTextBox->Margin = System::Windows::Forms::Padding(5);
			this->poortTextBox->Name = L"poortTextBox";
			this->poortTextBox->Size = System::Drawing::Size(84, 27);
			this->poortTextBox->TabIndex = 21;
			this->poortTextBox->Text = L"7000";
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
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->button4->Location = System::Drawing::Point(905, 159);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 60);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Selecteer bestaand";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &GUI::button4_Click);
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1036, 668);
			this->Controls->Add(this->button4);
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
	private: String^ currentDirectory;

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
			outputTextBox->Text += "Error: geen verbinding kunnen maken\n";
			return false; //socket error
		}
		else {
			return true; //socket succes
		}
	}
	private: bool closeConnection() {
		closesocket(s);
		WSACleanup();
		outputTextBox->Text += "Verbinding gesloten\n\n";
		scrollDown();
		return true;
	}
	private: bool sendData(String^ data) {
		outputTextBox->Refresh();

		makeConnection();

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
		data = "";
		return true;
	}
	private: bool receiveData(String^ fileName) {
		int recvbuflen = DEFAULT_BUFLEN;
		StreamWriter^ outputFile = gcnew StreamWriter((fileName == "") ? fileName : fileName + ".txt");
		
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
	private: void compareFiles() {
		//std::ifstream dump1(strToChar(pdump1LinkLabel->Text))
		//	, dump2(strToChar(pdump2LinkLabel->Text));

		StreamWriter^ verschillen = gcnew StreamWriter("Onbekend_Test\\verschillen.txt");
		StreamReader^ dump1 = gcnew StreamReader("Onbekend_Test\\pdump1.txt");
		StreamReader^ dump2 = gcnew StreamReader("Onbekend_Test\\pdump2.txt");

		if (!dump1) { outputTextBox->Text += "pDump1 kon niet geopend worden\n"; return; }
		if (!dump2) { outputTextBox->Text += "pDump2 kon niet geopend worden\n"; return; }

		while (!dump2->EndOfStream) {	//Go through pdump2 and seperate parameter and value
			String^ parameter2, ^ value2, ^ line2 = dump2->ReadLine();
			if (line2 == "" || line2->Contains("*") || line2->Contains(">")) {
				continue;
			}
			parameter2 = line2->Substring(0, line2->IndexOf(':'));
			value2 = (line2->Contains("/")) ? line2->Substring(line2->IndexOf(':') + 1,
				(line2->IndexOf('/') - line2->IndexOf(':') - 1))
			   : line2->Substring(line2->IndexOf(':') + 1);

			outputTextBox->Text += "Checking " + line2;

			while (!dump1->EndOfStream) {	//Go through pdump1 to find matches
				String^ parameter, ^ value, ^ line = dump1->ReadLine();
				if (line == "" || line->Contains("*") || line->Contains(">")) {
					continue;
				}
				parameter = line->Substring(0, line->IndexOf(':'));
				if (parameter == parameter2) {	//Match found, get values
					value = (line->Contains("/")) ? line->Substring(line->IndexOf(':') + 1,
						(line->IndexOf('/') - line->IndexOf(':') - 1))
						: line->Substring(line->IndexOf(':') + 1);
					if (value != value2) {	//Check values, not same? Write!
						verschillen->WriteLine(parameter + " WERKT " + value);
						break;
					}
					break;
				}
			}	
		}

		dump1->Close();
		dump2->Close();
		verschillen->Close();

			//Lees file 2 (nieuwe kaart) en zoek in file 1 dezelfde parameter
			//Zijn deze niet gelijk, verander dan file 2 naar waarde van file 1	
	}
		//GUI COMPONENTS
	private: System::Void inputTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (char)13 && inputTextBox->Text != "") {
			String^ text = inputTextBox->Text;
			inputTextBox->Text = "";
			outputTextBox->Text += text + "\n";
			
			outputTextBox->Refresh(); 
			inputTextBox->Refresh();
			
			sendData(text);
			scrollDown();
			receiveData("pdumpTest");
		}
	}
	private: System::Void controleerButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
		outputTextBox->Text += "Verbinding controleren met " + ipTextBox->Text + " op poort " + poortTextBox->Text + "...\n";
		outputTextBox->Refresh();

		bool verbinding = makeConnection();
		if (verbinding)
			outputTextBox->Text += "Verbinding goed\n";
		else 
			outputTextBox->Text += "Geen verbinding\n";
		closeConnection();
		scrollDown();
	}
	private: System::Void afsluitenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void pdump1LinkLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		if (pdump1LinkLabel->Text == "Onbekend") {
			outputTextBox->Text += "Maak eerst een pdump.\n";
			scrollDown();
		} else
			WinExec("notepad.exe \"pdump1.txt\"", SW_SHOW);
	}
	private: System::Void pdump2LinkLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		if (pdump2LinkLabel->Text == "Onbekend") {
			outputTextBox->Text += "Maak eerst een pdump.\n";
			scrollDown();
		} else
			WinExec("notepad.exe \"pdump2.txt\"", SW_SHOW);
	}
	private: System::Void pdump1Button_Click(System::Object^  sender, System::EventArgs^  e) {
		outputTextBox->Text += "Bezig met pDump1 maken...\n";
		sendData("pdump");
		scrollDown();
		if (receiveData("pdump1")) { //pDump made succesfully
			pdump2Button->Enabled = true;
			pdump1LinkLabel->Text = kruispuntSelectedLabel->Text + "/pdump1.txt";
		}
	}
	private: System::Void pdump2Button_Click(System::Object^  sender, System::EventArgs^  e) {
		outputTextBox->Text += "Bezig met pDump2 maken...\n"; 
		sendData("pdump");
		scrollDown();
		if (receiveData("pdump2")) { //pDump made succesfully
			vergelijkButton->Enabled = true;
			pdump2LinkLabel->Text = kruispuntSelectedLabel->Text + "/pdump2.txt";
		}
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
				pdump2Button->Enabled = false;
				vergelijkButton->Enabled = false;
				logButton->Enabled = false;
			}
			currentDirectory = charToStr(folder);
			CreateDirectoryA(folder, NULL);
			SetCurrentDirectoryA(folder);
			visited = true;

			pdump1Button->Enabled = true;
		}
	}
	private: System::Void vergelijkButton_Click(System::Object^  sender, System::EventArgs^  e) {
	//std::ofstream fileLog("changeLog.txt");
	//fileLog << "TOG 021 aangepast naar 420. Oude waarde was 240 mph\n";

	if (pdump1LinkLabel->Text == "Onbekend" || pdump2LinkLabel->Text == "Onbekend") {
		outputTextBox->Text += "Nog niet beide pDump bestanden geladen.\n";
		scrollDown();
	}
	else 
		if (pdump1LinkLabel->Text->Substring(0, pdump1LinkLabel->Text->IndexOf("/")) != 
				pdump2LinkLabel->Text->Substring(0, pdump2LinkLabel->Text->IndexOf("/"))) {	//Check of beide dumpbestanden van zelfde kruispunt zijn
			outputTextBox->Text += "pDump bestanden zijn niet van hetzelfde kruispunt. Maak deze opnieuw.\n";
		}	
		else {
			outputTextBox->Text += "Bezig met vergelijken van pDump bestanden...\n";
			compareFiles();
			if (true) {	//Vergelijken is voltooid
				outputTextBox->Text += "Klaar!\n"; 
				logButton->Enabled = true;
			}
			WinExec("notepad.exe \"Onbekend_Test\\verschillen.txt\"", SW_SHOW);
			scrollDown();
	}
}
	private: System::Void logButton_Click(System::Object^  sender, System::EventArgs^  e) {
		WinExec("notepad.exe \"changeLog.txt\"", SW_SHOW);
	}
	private: System::Void wissenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		outputTextBox->Text = "";
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
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
	openFileDialog1->Filter = "Text Files|*.txt";
	openFileDialog1->Title = "Select a pDump File";

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pdump1LinkLabel->Text = currentDirectory +"\\" + 
			openFileDialog1->FileName->Substring(openFileDialog1->FileName->LastIndexOf(L"\\") + 1);
	}
}
};
}

