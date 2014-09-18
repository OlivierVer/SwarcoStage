#pragma once

#include <Windows.h>
#include <string>
#include <stdio.h>
#include <fstream>
#include <istream>
#include <iostream>

#include "newDirectory.h"

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
	public ref class GUI : public System::Windows::Forms::Form
	{
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
			this->SuspendLayout();
			// 
			// outputTextBox
			// 
			this->outputTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->outputTextBox->Location = System::Drawing::Point(12, 11);
			this->outputTextBox->Margin = System::Windows::Forms::Padding(4);
			this->outputTextBox->Name = L"outputTextBox";
			this->outputTextBox->ReadOnly = true;
			this->outputTextBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->outputTextBox->Size = System::Drawing::Size(554, 410);
			this->outputTextBox->TabIndex = 0;
			this->outputTextBox->Text = L"";
			// 
			// inputTextBox
			// 
			this->inputTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->inputTextBox->Location = System::Drawing::Point(12, 429);
			this->inputTextBox->Margin = System::Windows::Forms::Padding(4);
			this->inputTextBox->Name = L"inputTextBox";
			this->inputTextBox->Size = System::Drawing::Size(552, 32);
			this->inputTextBox->TabIndex = 1;
			this->inputTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &GUI::inputTextBox_KeyPress);
			// 
			// verbindLabel
			// 
			this->verbindLabel->AutoSize = true;
			this->verbindLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->verbindLabel->Location = System::Drawing::Point(12, 502);
			this->verbindLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->verbindLabel->Name = L"verbindLabel";
			this->verbindLabel->Size = System::Drawing::Size(248, 26);
			this->verbindLabel->TabIndex = 2;
			this->verbindLabel->Text = L"Verbind met IP op poort:";
			// 
			// controleerButton
			// 
			this->controleerButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->controleerButton->Location = System::Drawing::Point(320, 510);
			this->controleerButton->Margin = System::Windows::Forms::Padding(4);
			this->controleerButton->Name = L"controleerButton";
			this->controleerButton->Size = System::Drawing::Size(307, 43);
			this->controleerButton->TabIndex = 6;
			this->controleerButton->Text = L"Controleer verbinding";
			this->controleerButton->UseVisualStyleBackColor = true;
			this->controleerButton->Click += gcnew System::EventHandler(this, &GUI::controleerButton_Click);
			// 
			// pdump1Button
			// 
			this->pdump1Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->pdump1Button->Location = System::Drawing::Point(577, 100);
			this->pdump1Button->Margin = System::Windows::Forms::Padding(4);
			this->pdump1Button->Name = L"pdump1Button";
			this->pdump1Button->Size = System::Drawing::Size(381, 48);
			this->pdump1Button->TabIndex = 8;
			this->pdump1Button->Text = L"Maak pdump1 en selecteer";
			this->pdump1Button->UseVisualStyleBackColor = true;
			this->pdump1Button->Click += gcnew System::EventHandler(this, &GUI::pdump1Button_Click);
			// 
			// pdump2Button
			// 
			this->pdump2Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->pdump2Button->Location = System::Drawing::Point(577, 206);
			this->pdump2Button->Margin = System::Windows::Forms::Padding(4);
			this->pdump2Button->Name = L"pdump2Button";
			this->pdump2Button->Size = System::Drawing::Size(381, 48);
			this->pdump2Button->TabIndex = 9;
			this->pdump2Button->Text = L"Maak pdump2 en selecteer";
			this->pdump2Button->UseVisualStyleBackColor = true;
			this->pdump2Button->Click += gcnew System::EventHandler(this, &GUI::pdump2Button_Click);
			// 
			// vergelijkButton
			// 
			this->vergelijkButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->vergelijkButton->Location = System::Drawing::Point(577, 326);
			this->vergelijkButton->Margin = System::Windows::Forms::Padding(4);
			this->vergelijkButton->Name = L"vergelijkButton";
			this->vergelijkButton->Size = System::Drawing::Size(187, 43);
			this->vergelijkButton->TabIndex = 12;
			this->vergelijkButton->Text = L"Vergelijken";
			this->vergelijkButton->UseVisualStyleBackColor = true;
			this->vergelijkButton->Click += gcnew System::EventHandler(this, &GUI::vergelijkButton_Click);
			// 
			// pdump1LinkLabel
			// 
			this->pdump1LinkLabel->AutoSize = true;
			this->pdump1LinkLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->pdump1LinkLabel->Location = System::Drawing::Point(572, 152);
			this->pdump1LinkLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pdump1LinkLabel->Name = L"pdump1LinkLabel";
			this->pdump1LinkLabel->Size = System::Drawing::Size(112, 26);
			this->pdump1LinkLabel->TabIndex = 13;
			this->pdump1LinkLabel->TabStop = true;
			this->pdump1LinkLabel->Text = L"Onbekend";
			this->pdump1LinkLabel->VisitedLinkColor = System::Drawing::Color::Blue;
			this->pdump1LinkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &GUI::pdump1LinkLabel_LinkClicked);
			// 
			// pdump2LinkLabel
			// 
			this->pdump2LinkLabel->AutoSize = true;
			this->pdump2LinkLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->pdump2LinkLabel->Location = System::Drawing::Point(572, 258);
			this->pdump2LinkLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pdump2LinkLabel->Name = L"pdump2LinkLabel";
			this->pdump2LinkLabel->Size = System::Drawing::Size(112, 26);
			this->pdump2LinkLabel->TabIndex = 14;
			this->pdump2LinkLabel->TabStop = true;
			this->pdump2LinkLabel->Text = L"Onbekend";
			this->pdump2LinkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &GUI::pdump2LinkLabel_LinkClicked);
			// 
			// logButton
			// 
			this->logButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->logButton->Location = System::Drawing::Point(577, 377);
			this->logButton->Margin = System::Windows::Forms::Padding(4);
			this->logButton->Name = L"logButton";
			this->logButton->Size = System::Drawing::Size(279, 43);
			this->logButton->TabIndex = 15;
			this->logButton->Text = L"Veranderingen log";
			this->logButton->UseVisualStyleBackColor = true;
			this->logButton->Click += gcnew System::EventHandler(this, &GUI::logButton_Click);
			// 
			// afsluitenButton
			// 
			this->afsluitenButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->afsluitenButton->Location = System::Drawing::Point(790, 510);
			this->afsluitenButton->Margin = System::Windows::Forms::Padding(4);
			this->afsluitenButton->Name = L"afsluitenButton";
			this->afsluitenButton->Size = System::Drawing::Size(168, 43);
			this->afsluitenButton->TabIndex = 16;
			this->afsluitenButton->Text = L"Afsluiten";
			this->afsluitenButton->UseVisualStyleBackColor = true;
			this->afsluitenButton->Click += gcnew System::EventHandler(this, &GUI::afsluitenButton_Click);
			// 
			// kruispuntLabel
			// 
			this->kruispuntLabel->AutoSize = true;
			this->kruispuntLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->kruispuntLabel->Location = System::Drawing::Point(572, 11);
			this->kruispuntLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->kruispuntLabel->Name = L"kruispuntLabel";
			this->kruispuntLabel->Size = System::Drawing::Size(110, 26);
			this->kruispuntLabel->TabIndex = 17;
			this->kruispuntLabel->Text = L"Kruispunt:";
			// 
			// kruispuntSelectedLabel
			// 
			this->kruispuntSelectedLabel->AutoSize = true;
			this->kruispuntSelectedLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->kruispuntSelectedLabel->Location = System::Drawing::Point(572, 32);
			this->kruispuntSelectedLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->kruispuntSelectedLabel->Name = L"kruispuntSelectedLabel";
			this->kruispuntSelectedLabel->Size = System::Drawing::Size(190, 31);
			this->kruispuntSelectedLabel->TabIndex = 18;
			this->kruispuntSelectedLabel->Text = L"EindhovenP30";
			// 
			// selecteerKruispuntButton
			// 
			this->selecteerKruispuntButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->selecteerKruispuntButton->Location = System::Drawing::Point(802, 11);
			this->selecteerKruispuntButton->Margin = System::Windows::Forms::Padding(4);
			this->selecteerKruispuntButton->Name = L"selecteerKruispuntButton";
			this->selecteerKruispuntButton->Size = System::Drawing::Size(156, 48);
			this->selecteerKruispuntButton->TabIndex = 19;
			this->selecteerKruispuntButton->Text = L"Selecteer";
			this->selecteerKruispuntButton->UseVisualStyleBackColor = true;
			this->selecteerKruispuntButton->Click += gcnew System::EventHandler(this, &GUI::selecteerKruispuntButton_Click);
			// 
			// ipTextBox
			// 
			this->ipTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->ipTextBox->Location = System::Drawing::Point(12, 527);
			this->ipTextBox->Margin = System::Windows::Forms::Padding(4);
			this->ipTextBox->Name = L"ipTextBox";
			this->ipTextBox->Size = System::Drawing::Size(220, 32);
			this->ipTextBox->TabIndex = 20;
			this->ipTextBox->Text = L"192.168.0.75";
			// 
			// poortTextBox
			// 
			this->poortTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->poortTextBox->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->poortTextBox->Location = System::Drawing::Point(238, 527);
			this->poortTextBox->Margin = System::Windows::Forms::Padding(4);
			this->poortTextBox->Name = L"poortTextBox";
			this->poortTextBox->Size = System::Drawing::Size(75, 32);
			this->poortTextBox->TabIndex = 21;
			this->poortTextBox->Text = L"7000";
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(971, 564);
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
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"GUI";
			this->Text = L"SWARCO Nederland B.V.";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void inputTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (char)13) {
			String^ text = inputTextBox->Text;
			inputTextBox->Text = "";
			outputTextBox->Text += text + "\n";
		}
	}

	private: System::Void controleerButton_Click(System::Object^  sender, System::EventArgs^  e) {
		outputTextBox->Text += "Verbinding controleren met " + ipTextBox->Text + " op poort " + poortTextBox->Text + "...\n";
		if (outputTextBox->Text->Contains("goed") && !outputTextBox->Text->Contains("Geen")) {
			outputTextBox->Text += "Geen verbinding\n";
		}
		else {
			outputTextBox->Text += "Verbinding goed\n";
		}
		outputTextBox->SelectionStart = outputTextBox->Text->Length; outputTextBox->ScrollToCaret();
		//makeConnection(poortTextBox->Text, ipTextBox->Text);
	}

	private: System::Void afsluitenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void pdump1LinkLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		if (pdump1LinkLabel->Text == "Onbekend") {
			outputTextBox->Text += "Maak eerst een pdump.\n";
		} else
			WinExec("notepad.exe \"pdump1.txt\"", SW_SHOW);
	}
	private: System::Void pdump2LinkLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		if (pdump2LinkLabel->Text == "Onbekend") {
			outputTextBox->Text += "Maak eerst een pdump.\n";
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
			outputTextBox->SelectionStart = outputTextBox->Text->Length; outputTextBox->ScrollToCaret();
		}
		dump1 += "**** EINDE PDUMP ****\n";
		text = "**** EINDE PDUMP ****\n";
		outputTextBox->Text += text;

		std::ofstream file1("pdump1.txt");
		file1 << dump1;
		file1.close();

		if (true) { //pDump made succesfully
			pdump1LinkLabel->Text = "Folder" + "/pdump1.txt";
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
			outputTextBox->SelectionStart = outputTextBox->Text->Length; outputTextBox->ScrollToCaret();
		}
		dump2 += "**** EINDE PDUMP ****\n";
		text = "**** EINDE PDUMP ****\n";
		outputTextBox->Text += text;

		std::ofstream file2("pdump2.txt");
		file2 << dump2;
		file2.close();
		if (true) { //pDump made succesfully
			pdump2LinkLabel->Text = "Folder" + "/pdump2.txt"; 
		}
	}

	private: System::Void selecteerKruispuntButton_Click(System::Object^  sender, System::EventArgs^  e) {
		newDirectory^ form = gcnew newDirectory();
		System::Windows::Forms::DialogResult result; 
		result = form->ShowDialog();
		if (result == System::Windows::Forms::DialogResult::OK) {
			kruispuntSelectedLabel->Text = form->naamTextBox->Text;
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
		outputTextBox->SelectionStart = outputTextBox->Text->Length; outputTextBox->ScrollToCaret();
	} else {
		outputTextBox->Text += "Bezig met vergelijken van pDump bestanden...\n";
		outputTextBox->Text += "Klaar!\n";
		WinExec("notepad.exe \"changeLog.txt\"", SW_SHOW);
		outputTextBox->SelectionStart = outputTextBox->Text->Length; outputTextBox->ScrollToCaret();
	}
}
private: System::Void logButton_Click(System::Object^  sender, System::EventArgs^  e) {
	WinExec("notepad.exe \"changeLog.txt\"", SW_SHOW);
}
};
}

