#pragma once

#include "newDirectory.h"

#include <windows.h>
#include <string>
#include <stdio.h>
#include <fstream>
#include <istream>
#include <iostream>

#include <tchar.h>

namespace SWARCOParam_VS13 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			this->SuspendLayout();
			// 
			// outputTextBox
			// 
			this->outputTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
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
			this->verbindLabel->Click += gcnew System::EventHandler(this, &GUI::verbindLabel_Click);
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
			this->pdump1Button->Size = System::Drawing::Size(385, 60);
			this->pdump1Button->TabIndex = 8;
			this->pdump1Button->Text = L"Maak pdump1 en selecteer";
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
			this->pdump2Button->Text = L"Maak pdump2 en selecteer";
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
			this->pdump1LinkLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->pdump1LinkLabel->Location = System::Drawing::Point(626, 224);
			this->pdump1LinkLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->pdump1LinkLabel->Name = L"pdump1LinkLabel";
			this->pdump1LinkLabel->Size = System::Drawing::Size(93, 22);
			this->pdump1LinkLabel->TabIndex = 13;
			this->pdump1LinkLabel->TabStop = true;
			this->pdump1LinkLabel->Text = L"Onbekend";
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
			this->pdump2LinkLabel->Size = System::Drawing::Size(93, 22);
			this->pdump2LinkLabel->TabIndex = 14;
			this->pdump2LinkLabel->TabStop = true;
			this->pdump2LinkLabel->Text = L"Onbekend";
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
			this->ipTextBox->Text = L"192.168.0.75";
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
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1036, 668);
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

		SOCKET s;
		private: bool visited = false;

	private: void scrollDown() {
		outputTextBox->SelectionStart = outputTextBox->Text->Length; 
		outputTextBox->ScrollToCaret();
	}
	private: bool makeConnection(String^ port, String^ ip) {

		SOCKADDR_IN target;
		WSADATA wsaData;

		int portNo = Convert::ToInt32(port);	//Convert String^ to int
		IntPtr ptrToNativeString = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(ip); 
		char* ipAddr = static_cast<char*>(ptrToNativeString.ToPointer());	//Convert String^ to char*
		
		int error = WSAStartup(0x202, &wsaData);
		if (error) {
			outputTextBox->Text += "Error: Winsock fout\n";
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
			outputTextBox->Text += "Error: socket fout\n";
			return false; //socket error
		}
		else
			return true; //socket succes
	}
	private: bool closeConnection() {
		if (s) {
			closesocket(s);
			WSACleanup();
			outputTextBox->Text += "Verbinding gesloten\n\n";
			scrollDown();
			return true;
		}
		else
			return false;
	}
	private: void sendData() {

	}
	private: void receiveData() {

	}

	private: System::Void inputTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (char)13) {
			String^ text = inputTextBox->Text;
			inputTextBox->Text = "";
			outputTextBox->Text += text + "\n";
			scrollDown();
		}
	}
	private: System::Void controleerButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
		outputTextBox->Text += "Verbinding controleren met " + ipTextBox->Text + " op poort " + poortTextBox->Text + "...\n";
		outputTextBox->Refresh();

		bool verbinding = makeConnection(poortTextBox->Text, ipTextBox->Text);
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
		std::string dump1;
		String^ text = "";

		dump1 += "**** PDUMP 0013 / MA 15-09-2014 / 14:12:11 ****\n";
		text = "**** PDUMP 0013 / MA 15-09-2014 / 14:12:11 ****\n";
		outputTextBox->Text += text;
		for (int i = 0; i < 100; i++) {
			if (i % 3 == 1) {
				dump1 += "TOG 0" + std::to_string(i) + " = " + std::to_string(20 * (i / 5)) + " mph\n";
				text = "TOG 0" + (i)+" = " + (20 * (i / 5)) + " mph\n";
			}
			else if ((i/2) % 3 == 2) {
				dump1 += "TOG 0" + std::to_string(i + 1) + " = " + std::to_string(20 * (i / 2)) + " mph\n";
				text = "TOG 0" + (i + 1) + " = " + (20 * (i / 2)) + " mph\n";
			}
			outputTextBox->Text += text;
			scrollDown();
		}
		dump1 += "**** EINDE PDUMP ****\n";
		text = "**** EINDE PDUMP ****\n";
		outputTextBox->Text += text;

		std::ofstream file1("pdump1.txt");
		file1 << dump1;
		file1.close();

		if (true) { //pDump made succesfully
			pdump2Button->Enabled = true;
			pdump1LinkLabel->Text = kruispuntSelectedLabel->Text + "/pdump1.txt";
		}
	}
	private: System::Void pdump2Button_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string dump2;
		String^ text = "";

		dump2 += "**** PDUMP 0013 / MA 15-09-2014 / 15:19:22 ****\n";
		text = "**** PDUMP 0013 / MA 15-09-2014 / 15:19:22 ****\n";
		outputTextBox->Text += text;
		for (int i = 0; i < 100; i++) {
			if (i % 3 == 0) {
				if (i % 3 == 1) { 
					dump2 += "TOG 0" + std::to_string(i) + " = " + std::to_string(20 * (i / 4)) + " mph\n";
					text = "TOG 0" + (i) + " = " + (20 * (i / 4)) + " mph\n";
				}
			}
			else
				if (i % 2 == 1) {
				dump2 += "TOG 0" + std::to_string(i + 1) + " = " + std::to_string(20 * (i / 3)) + " mph\n";
				text = "TOG 0" + (i + 1) + " = " + (20 * (i / 3)) + " mph\n";
				}
			outputTextBox->Text += text;
			scrollDown();
		}
		dump2 += "**** EINDE PDUMP ****\n";
		text = "**** EINDE PDUMP ****\n";
		outputTextBox->Text += text;

		std::ofstream file2("pdump2.txt");
		file2 << dump2;
		file2.close();
		if (true) { //pDump made succesfully
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
			
			//Convert label to usable directory name
			String^ _folder = kruispuntSelectedLabel->Text;
			IntPtr ptrToNativeString = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(_folder); 
			char* folder = static_cast<char*>(ptrToNativeString.ToPointer());
			if (visited == true) {	//Prevent 2nd time using program to put new folder in existing one
				SetCurrentDirectory(L"..");
				pdump2Button->Enabled = false;
				vergelijkButton->Enabled = false;
				logButton->Enabled = false;
			}

			CreateDirectoryA(folder, NULL);
			SetCurrentDirectoryA(folder);
			visited = true;

			pdump1Button->Enabled = true;
		}
	}
	private: System::Void vergelijkButton_Click(System::Object^  sender, System::EventArgs^  e) {
	std::ofstream fileLog("changeLog.txt");
	fileLog << "TOG 021 aangepast naar 420. Oude waarde was 240 mph\n";
	fileLog << "TOG 026 aangepast naar 455. Oude waarde was 120 mph\n";
	fileLog << "TOG 041 aangepast naar 125. Oude waarde was 150 mph\n";
	fileLog << "TOG 055 aangepast naar 25. Oude waarde was 170 mph\n";
	fileLog << "TOG 070 aangepast naar 35. Oude waarde was 220 mph\n";
	fileLog << "TOG 090 aangepast naar 0. Oude waarde was 20 mph\n";
	fileLog << "TOG 099 aangepast naar 0. Oude waarde was 110 mph\n";
	fileLog.close();

	if (pdump1LinkLabel->Text == "Onbekend" || pdump2LinkLabel->Text == "Onbekend") {
		outputTextBox->Text += "Nog niet beide PDUMP bestanden geladen.\n";
		scrollDown();
	}
	else 
		if (false) {	//Check of beide dump bestanden van zelfde kruispunt zijn
			outputTextBox->Text += "PDUMP bestanden zijn niet van hetzelfde kruispunt. Maak deze opnieuw.";
		}	
		else {
			outputTextBox->Text += "Bezig met vergelijken van pDump bestanden...\n";
			outputTextBox->Text += "Klaar!\n";
			if (true) {	//Vergelijken is voltooid
				logButton->Enabled = true;
			}
			WinExec("notepad.exe \"changeLog.txt\"", SW_SHOW);
			scrollDown();
	}
}
	private: System::Void logButton_Click(System::Object^  sender, System::EventArgs^  e) {
		WinExec("notepad.exe \"changeLog.txt\"", SW_SHOW);
	}
	private: System::Void wissenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		outputTextBox->Text = "";
	}
private: System::Void verbindLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

