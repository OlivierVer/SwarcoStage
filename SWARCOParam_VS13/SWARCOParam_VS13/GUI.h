#pragma once

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
	private: System::Windows::Forms::TextBox^  poortTextBox;
	private: System::Windows::Forms::TextBox^  ipTextBox;

	private: System::Windows::Forms::Label^  verbindLabel;
	private: System::Windows::Forms::Label^  folderLabel;
	private: System::Windows::Forms::Label^  folderSelectedLabel;

	private: System::Windows::Forms::LinkLabel^  pdump1LinkLabel;
	private: System::Windows::Forms::LinkLabel^  pdump2LinkLabel;

	private: System::Windows::Forms::Button^  controleerButton;
	private: System::Windows::Forms::Button^  pdump1Button;
	private: System::Windows::Forms::Button^  pdump2Button;
	private: System::Windows::Forms::Button^  vergelijkButton;
	private: System::Windows::Forms::Button^  resultaatVergelijkButton;
	private: System::Windows::Forms::Button^  afsluitenButton;
	private: System::Windows::Forms::Button^  wissenButton;
	private: System::Windows::Forms::Button^  selecteerDump1Button;
	private: System::Windows::Forms::Button^  selecteerDump2Button;
	private: System::Windows::Forms::Button^  selecteerFolderButton;

	private: System::Windows::Forms::Button^  wijzigButton;
	private: System::Windows::Forms::Button^  resultaatWijzigButton;

	private: System::Windows::Forms::CheckBox^  opslaanCheckBox;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GUI::typeid));
			this->outputTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->inputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->verbindLabel = (gcnew System::Windows::Forms::Label());
			this->controleerButton = (gcnew System::Windows::Forms::Button());
			this->pdump1Button = (gcnew System::Windows::Forms::Button());
			this->pdump2Button = (gcnew System::Windows::Forms::Button());
			this->vergelijkButton = (gcnew System::Windows::Forms::Button());
			this->pdump1LinkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->pdump2LinkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->resultaatVergelijkButton = (gcnew System::Windows::Forms::Button());
			this->afsluitenButton = (gcnew System::Windows::Forms::Button());
			this->folderLabel = (gcnew System::Windows::Forms::Label());
			this->folderSelectedLabel = (gcnew System::Windows::Forms::Label());
			this->selecteerFolderButton = (gcnew System::Windows::Forms::Button());
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
			this->wijzigButton = (gcnew System::Windows::Forms::Button());
			this->resultaatWijzigButton = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->opslaanCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->SuspendLayout();
			// 
			// outputTextBox
			// 
			this->outputTextBox->BackColor = System::Drawing::SystemColors::Control;
			this->outputTextBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->outputTextBox->Font = (gcnew System::Drawing::Font(L"Courier New", 10));
			this->outputTextBox->Location = System::Drawing::Point(13, 13);
			this->outputTextBox->Margin = System::Windows::Forms::Padding(5);
			this->outputTextBox->Name = L"outputTextBox";
			this->outputTextBox->ReadOnly = true;
			this->outputTextBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->outputTextBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->outputTextBox->Size = System::Drawing::Size(607, 529);
			this->outputTextBox->TabIndex = 0;
			this->outputTextBox->TabStop = false;
			this->outputTextBox->Text = L"";
			// 
			// inputTextBox
			// 
			this->inputTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->inputTextBox->Location = System::Drawing::Point(13, 552);
			this->inputTextBox->Margin = System::Windows::Forms::Padding(5);
			this->inputTextBox->Name = L"inputTextBox";
			this->inputTextBox->Size = System::Drawing::Size(513, 27);
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
			this->pdump1Button->Size = System::Drawing::Size(282, 60);
			this->pdump1Button->TabIndex = 8;
			this->pdump1Button->Text = L"Maak pDump1";
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
			this->pdump2Button->Size = System::Drawing::Size(282, 60);
			this->pdump2Button->TabIndex = 9;
			this->pdump2Button->Text = L"Maak pDump2 ";
			this->pdump2Button->UseVisualStyleBackColor = true;
			this->pdump2Button->Click += gcnew System::EventHandler(this, &GUI::pdump2Button_Click);
			// 
			// vergelijkButton
			// 
			this->vergelijkButton->Enabled = false;
			this->vergelijkButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->vergelijkButton->Location = System::Drawing::Point(630, 423);
			this->vergelijkButton->Margin = System::Windows::Forms::Padding(5);
			this->vergelijkButton->Name = L"vergelijkButton";
			this->vergelijkButton->Size = System::Drawing::Size(282, 53);
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
			// resultaatVergelijkButton
			// 
			this->resultaatVergelijkButton->Enabled = false;
			this->resultaatVergelijkButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->resultaatVergelijkButton->Location = System::Drawing::Point(920, 423);
			this->resultaatVergelijkButton->Margin = System::Windows::Forms::Padding(5);
			this->resultaatVergelijkButton->Name = L"resultaatVergelijkButton";
			this->resultaatVergelijkButton->Size = System::Drawing::Size(102, 53);
			this->resultaatVergelijkButton->TabIndex = 15;
			this->resultaatVergelijkButton->Text = L"Resultaat";
			this->resultaatVergelijkButton->UseVisualStyleBackColor = true;
			this->resultaatVergelijkButton->Click += gcnew System::EventHandler(this, &GUI::resultaatVergelijkButton_Click);
			// 
			// afsluitenButton
			// 
			this->afsluitenButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->afsluitenButton->Location = System::Drawing::Point(920, 601);
			this->afsluitenButton->Margin = System::Windows::Forms::Padding(5);
			this->afsluitenButton->Name = L"afsluitenButton";
			this->afsluitenButton->Size = System::Drawing::Size(102, 53);
			this->afsluitenButton->TabIndex = 16;
			this->afsluitenButton->Text = L"Afsluiten";
			this->afsluitenButton->UseVisualStyleBackColor = true;
			this->afsluitenButton->Click += gcnew System::EventHandler(this, &GUI::afsluitenButton_Click);
			// 
			// folderLabel
			// 
			this->folderLabel->AutoSize = true;
			this->folderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->folderLabel->Location = System::Drawing::Point(630, 24);
			this->folderLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->folderLabel->Name = L"folderLabel";
			this->folderLabel->Size = System::Drawing::Size(144, 26);
			this->folderLabel->TabIndex = 17;
			this->folderLabel->Text = L"Opslaglocatie";
			// 
			// folderSelectedLabel
			// 
			this->folderSelectedLabel->AutoSize = true;
			this->folderSelectedLabel->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->folderSelectedLabel->Location = System::Drawing::Point(629, 62);
			this->folderSelectedLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->folderSelectedLabel->Name = L"folderSelectedLabel";
			this->folderSelectedLabel->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->folderSelectedLabel->Size = System::Drawing::Size(109, 21);
			this->folderSelectedLabel->TabIndex = 18;
			this->folderSelectedLabel->Text = L"Selecteer";
			// 
			// selecteerFolderButton
			// 
			this->selecteerFolderButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->selecteerFolderButton->Location = System::Drawing::Point(920, 14);
			this->selecteerFolderButton->Margin = System::Windows::Forms::Padding(5);
			this->selecteerFolderButton->Name = L"selecteerFolderButton";
			this->selecteerFolderButton->Size = System::Drawing::Size(104, 48);
			this->selecteerFolderButton->TabIndex = 19;
			this->selecteerFolderButton->Text = L"Selecteer";
			this->selecteerFolderButton->UseVisualStyleBackColor = true;
			this->selecteerFolderButton->Click += gcnew System::EventHandler(this, &GUI::selecteerFolderButton_Click);
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
			this->wissenButton->Location = System::Drawing::Point(521, 507);
			this->wissenButton->Margin = System::Windows::Forms::Padding(4);
			this->wissenButton->Name = L"wissenButton";
			this->wissenButton->Size = System::Drawing::Size(77, 30);
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
			this->button1->Visible = false;
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
			this->button2->Visible = false;
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
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &GUI::button3_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// selecteerDump1Button
			// 
			this->selecteerDump1Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->selecteerDump1Button->Location = System::Drawing::Point(920, 159);
			this->selecteerDump1Button->Name = L"selecteerDump1Button";
			this->selecteerDump1Button->Size = System::Drawing::Size(104, 60);
			this->selecteerDump1Button->TabIndex = 8;
			this->selecteerDump1Button->Text = L"Selecteer";
			this->selecteerDump1Button->UseVisualStyleBackColor = true;
			this->selecteerDump1Button->Click += gcnew System::EventHandler(this, &GUI::selecteerDump1Button_Click);
			// 
			// selecteerDump2Button
			// 
			this->selecteerDump2Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->selecteerDump2Button->Location = System::Drawing::Point(920, 285);
			this->selecteerDump2Button->Name = L"selecteerDump2Button";
			this->selecteerDump2Button->Size = System::Drawing::Size(104, 60);
			this->selecteerDump2Button->TabIndex = 26;
			this->selecteerDump2Button->Text = L"Selecteer";
			this->selecteerDump2Button->UseVisualStyleBackColor = true;
			this->selecteerDump2Button->Click += gcnew System::EventHandler(this, &GUI::selecteerDump2Button_Click);
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// wijzigButton
			// 
			this->wijzigButton->Enabled = false;
			this->wijzigButton->Location = System::Drawing::Point(630, 484);
			this->wijzigButton->Name = L"wijzigButton";
			this->wijzigButton->Size = System::Drawing::Size(282, 53);
			this->wijzigButton->TabIndex = 27;
			this->wijzigButton->Text = L"Wijzigingen doorvoeren";
			this->wijzigButton->UseVisualStyleBackColor = true;
			this->wijzigButton->Click += gcnew System::EventHandler(this, &GUI::wijzigButton_Click);
			// 
			// resultaatWijzigButton
			// 
			this->resultaatWijzigButton->Enabled = false;
			this->resultaatWijzigButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->resultaatWijzigButton->Location = System::Drawing::Point(920, 484);
			this->resultaatWijzigButton->Name = L"resultaatWijzigButton";
			this->resultaatWijzigButton->Size = System::Drawing::Size(104, 53);
			this->resultaatWijzigButton->TabIndex = 28;
			this->resultaatWijzigButton->Text = L"Resultaat";
			this->resultaatWijzigButton->UseVisualStyleBackColor = true;
			this->resultaatWijzigButton->Click += gcnew System::EventHandler(this, &GUI::resultaatWijzigButton_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(694, 627);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 36);
			this->button4->TabIndex = 29;
			this->button4->Text = L"dump";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &GUI::button4_Click);
			// 
			// opslaanCheckBox
			// 
			this->opslaanCheckBox->AutoSize = true;
			this->opslaanCheckBox->Location = System::Drawing::Point(534, 553);
			this->opslaanCheckBox->Name = L"opslaanCheckBox";
			this->opslaanCheckBox->Size = System::Drawing::Size(96, 26);
			this->opslaanCheckBox->TabIndex = 30;
			this->opslaanCheckBox->Text = L"Opslaan";
			this->opslaanCheckBox->UseVisualStyleBackColor = true;
			this->opslaanCheckBox->CheckStateChanged += gcnew System::EventHandler(this, &GUI::opslaanCheckBox_CheckStateChanged);
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1036, 668);
			this->Controls->Add(this->opslaanCheckBox);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->resultaatWijzigButton);
			this->Controls->Add(this->wijzigButton);
			this->Controls->Add(this->selecteerDump2Button);
			this->Controls->Add(this->selecteerDump1Button);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->wissenButton);
			this->Controls->Add(this->poortTextBox);
			this->Controls->Add(this->ipTextBox);
			this->Controls->Add(this->selecteerFolderButton);
			this->Controls->Add(this->folderSelectedLabel);
			this->Controls->Add(this->folderLabel);
			this->Controls->Add(this->afsluitenButton);
			this->Controls->Add(this->resultaatVergelijkButton);
			this->Controls->Add(this->pdump2LinkLabel);
			this->Controls->Add(this->pdump1LinkLabel);
			this->Controls->Add(this->vergelijkButton);
			this->Controls->Add(this->pdump2Button);
			this->Controls->Add(this->pdump1Button);
			this->Controls->Add(this->controleerButton);
			this->Controls->Add(this->verbindLabel);
			this->Controls->Add(this->inputTextBox);
			this->Controls->Add(this->outputTextBox);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"GUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SWARCO Nederland B.V.";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//MEMBERS
		SOCKET s;
	private: bool folderSelected = false;
	private: int iResult = -1;
	private: String^ fileDump1 = "",
		^ fileDump2 = "",
		^ fileLog1 = "",
		^ fileLog2 = "";

			 //PRACTICAL FUNCTIONS
	private: char* strToChar(String^ _str) {
		IntPtr ptrToNativeString = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(_str);
		char* strChar = static_cast<char*>(ptrToNativeString.ToPointer());
		return strChar;
	}
	private: String^ charToStr(char* _char) {
		return gcnew String(_char);
	}
	private: String^ getValueFromLine(String^ str) {
		String^ value = (str->Contains("/"))	//if line2 contains '/', the line ends with a unit of measurement
			? str->Substring(str->LastIndexOf(':') + 2, (str->LastIndexOf('/') - str->LastIndexOf(':') - 2))
			: str->Substring(str->LastIndexOf(':') + 2);	//no unit, just read until EoL. +2 to skip output ": "
		if (value->Contains(" ")) value = value->Substring(0, (value->Length - 1)); //remove ' '-space if it exists
		return value;
	}

	private: void scrollDown() {
		outputTextBox->Refresh();
		outputTextBox->SelectionStart = outputTextBox->Text->Length;
		outputTextBox->ScrollToCaret();
	}
	private: void xout(String^ str) {
		outputTextBox->Text += str;
		scrollDown();
	}
	private: bool timeout(int sec) {
		struct timeval tv;
		fd_set readfds;
		tv.tv_sec = sec;

		FD_ZERO(&readfds);
		FD_SET(s, &readfds);

		return (select(s + 1, &readfds, NULL, NULL, &tv) == 0);
	}

	private: void openTextFile(int i) {
		std::string str = "notepad.exe \"";
		str.append(
			(i == 1) ? strToChar(fileDump1) :
			(i == 2) ? strToChar(fileDump2) :
			(i == 3) ? strToChar(fileLog1) :
			(i == 4) ? strToChar(fileLog2) :
			"");
		str += "\"";
		LPCSTR openNotepad = str.c_str();
		WinExec(openNotepad, SW_SHOW);
	}
	private: void checkFolderLength() {
		if (folderSelectedLabel->Text->Length < 35) return;
		folderSelectedLabel->Text =
			(folderSelectedLabel->Text->Length > 35 && folderSelectedLabel->Text->Length <= 70)
			? folderSelectedLabel->Text->Substring(0, 35) + "\n"
			+ folderSelectedLabel->Text->Substring(35, folderSelectedLabel->Text->Length - 35)
			: folderSelectedLabel->Text->Substring(0, 35)
			+ "\n" + folderSelectedLabel->Text->Substring(35, 35)
			+ "\n" + folderSelectedLabel->Text->Substring(70, folderSelectedLabel->Text->Length - 70);
	}
	private: String^ getDirectory() {
		String^ parent = folderSelectedLabel->Text;
		parent = parent->Substring(parent->LastIndexOf('\\'));
		return parent->Substring(1);	//to remove '\' at start
	}
	private: String^ getPath() {
		String^ directory = folderSelectedLabel->Text;
		return directory;
	}

	private: String^ getTime() {
		SYSTEMTIME sstm, lctm;
		GetSystemTime(&sstm);
		GetLocalTime(&lctm);

		String^ time = "",
			^ hour = "",
			^ minute = "",
			^ second = "";

		if (lctm.wHour < 10)
			hour += "0";
		hour += lctm.wHour;
		if (sstm.wMinute < 10)
			minute += "0";
		minute += sstm.wMinute;
		if (sstm.wSecond < 10)
			second += "0";
		second += sstm.wSecond;

		time += hour + "u" + minute + "m" + second + "s";
		return time;
	}
	private: String^ getDate() {
		SYSTEMTIME sstm;
		GetSystemTime(&sstm);

		String^ month =
			(sstm.wMonth == 1) ? "jan" :
			(sstm.wMonth == 2) ? "feb" :
			(sstm.wMonth == 3) ? "maa" :
			(sstm.wMonth == 4) ? "apr" :
			(sstm.wMonth == 5) ? "mei" :
			(sstm.wMonth == 6) ? "jun" :
			(sstm.wMonth == 7) ? "jul" :
			(sstm.wMonth == 8) ? "aug" :
			(sstm.wMonth == 9) ? "sep" :
			(sstm.wMonth == 10) ? "okt" :
			(sstm.wMonth == 11) ? "nov" :
			(sstm.wMonth == 12) ? "dec" : "";

		String^ date = "", ^year = "";

		year += sstm.wYear;
		date += sstm.wDay + month + year->Substring(2, 2);

		return date;
	}
	private: String^ getSaveAdd() {
		String^ saveFileName = " - " + getTime() + " - " + getDate() + ".txt";
		return saveFileName;
	}

			 //FUNCTIONAL FUNCTIONS
	private: bool selectFolder() {
		FolderBrowserDialog^ folderBrowserDialog1 = gcnew FolderBrowserDialog;
		System::Windows::Forms::DialogResult result;
		result = folderBrowserDialog1->ShowDialog();

		if (result == System::Windows::Forms::DialogResult::OK) {
			String^ path = folderBrowserDialog1->SelectedPath;
			folderSelectedLabel->Text = path;
			checkFolderLength();
			pdump1Button->Enabled = true;
			return true;
		}
		else return false;
	}
	private: bool makeConnection() {
		SOCKADDR_IN target;
		WSADATA wsaData;

		int portNo = Convert::ToInt32(poortTextBox->Text);	//Convert String^ to int
		char* ipAddr = strToChar(ipTextBox->Text);	//Convert String^ to char*

		int error = WSAStartup(0x202, &wsaData);
		if (error) {
			xout("Error: Winsock start fout\n\n");
			scrollDown();
			return false; //winsock error
		}
		if (wsaData.wVersion != 0x202) {
			WSACleanup();
			xout("Error: Winsock is niet de juiste versie\n\n");
			scrollDown();
			return false; //winsock not right version
		} //Winsock launched succesfully

		target.sin_family = AF_INET;
		target.sin_port = htons(portNo);
		target.sin_addr.S_un.S_addr = inet_addr(ipAddr);

		s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
		if (s == INVALID_SOCKET) {
			xout("Error: Socket is niet geldig\n\n");
			scrollDown();
			return false; //invalid socket
		}

		xout("Bezig verbinding te maken (max 20 seconden)...\n");
		scrollDown();
		if (connect(s, (SOCKADDR *)&target, sizeof(target)) == SOCKET_ERROR) {
			xout("Error: Geen verbinding kunnen maken\n\n");
			scrollDown();
			return false; //socket error
		}
		else {
			return true; //socket succes
		}

	}
	private: bool closeConnection() {
		closesocket(s);
		WSACleanup();
		scrollDown();
		return true;
	}
	private: bool sendData(String^ data) {

		if (makeConnection()) {

			char* dataChar = strToChar(data);
			char* carriage = "\n";

			send(s, dataChar, (int)strlen(dataChar), 0);
			iResult = send(s, carriage, (int)strlen(carriage), 0);
			if (iResult == SOCKET_ERROR) {
				xout("Verzenden van '" + data + "' niet gelukt. Error: " + WSAGetLastError() + "\n");
				scrollDown();
				closeConnection();
				WSACleanup();
				return false;
			}
			return true;
		}
		return false;
	}
	private: bool receiveDataOutput(int time) {
		int recvbuflen = DEFAULT_BUFLEN;

		while (true) {
			char recvbuf[DEFAULT_BUFLEN];

			iResult = recv(s, recvbuf, recvbuflen, 0);
			String^ output = charToStr(recvbuf);
			memset(recvbuf, 0, sizeof(recvbuf));	//Reset recvbuf

			if (iResult > 0) {
				//xout(output);
				outputTextBox->Text += output;
			}
			else if (iResult == 0) {
				outputTextBox->Text += "Verbinding verbroken\n";
				break;
			}
			else {
				outputTextBox->Text += "Geen data ontvangen\n";
				break;
			}
			if (timeout(time))
				break;
			scrollDown();
		}
		closeConnection();
		return true;
	}
	private: bool receiveDataSave(String^ fileName, int time) {
		SetCurrentDirectoryA(strToChar(getPath()));
		int recvbuflen = DEFAULT_BUFLEN;
		StreamWriter^ outputFile = gcnew StreamWriter(
			(fileName != "") ? fileName : "unknown.txt");

		while (true) {
			char recvbuf[DEFAULT_BUFLEN];

			iResult = recv(s, recvbuf, recvbuflen, 0);
			String^ output = charToStr(recvbuf);
			memset(recvbuf, 0, sizeof(recvbuf));	//Reset recvbuf

			if (iResult > 0) {
				//xout(output);
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
						outputFile->Write(output[i]);
						lastCharWasSpace = true;
						continue;
					}
					else
						lastCharWasSpace = false;
					outputFile->Write(output[i]);
				}
			}
			else if (iResult == 0) {
				xout("Verbinding verbroken\n");
				scrollDown();
				outputFile->Close();
				return false;
			}
			else {
				xout("Geen data ontvangen\n");
				scrollDown();
				outputFile->Close();
				return false;
			}
			if (timeout(time))
				break;
			scrollDown();
		}
		outputFile->Close();
		closeConnection();
		return true;
	}
	private: bool compareFiles(String^ saveFile) {
		StreamWriter^ verschillen = gcnew StreamWriter(saveFile);
		StreamReader^ dump2 = gcnew StreamReader(fileDump2);
		bool difference = false;
		bool paramNotFound = true;

		if (!dump2) { xout("Fout: pDump2 kon niet geopend worden\n"); return false; }

		while (!dump2->EndOfStream) {	//Go through pdump2 and seperate parameter and value
			String^ parameter2, ^ value2, ^ line2 = dump2->ReadLine();
			if (line2 == "" || line2->Contains("*") || line2->Contains(">") || !line2->Contains(":")
				|| line2->Contains("-")) {
				continue;
			}
			parameter2 = line2->Substring(0, line2->IndexOf(':'));
			//			parameter2 =parameter2->Substring(1);


			value2 = getValueFromLine(line2);

			StreamReader^ dump1 = gcnew StreamReader(fileDump1);
			if (!dump1) { xout("Fout: pDump1 kon niet geopend worden\n"); return false; }

			while (!dump1->EndOfStream) {	//Go through pdump1 to find matches
				String^ parameter, ^ line = dump1->ReadLine();
				if (line == "" || line->Contains("*") || line->Contains(">") || !line->Contains(":")
					|| line->Contains("-")) {
					continue;
				}
				parameter = line->Substring(0, line->IndexOf(':'));

				if (parameter == parameter2) {	//Match found, get values
					paramNotFound = false;
					String^ value = getValueFromLine(line);

					if (value->Contains(" "))
						value = value->Substring(0, (value->Length - 1)); //remove ' '-space if it exists
					if (value != value2) {	//Check values, not same? Write!
						difference = true;
						verschillen->WriteLine(parameter + "   \tpdump1: " + value + "\tpdump2: " + value2);
					}	//Done checking values, they're same, next parameter
					dump1->Close();
					break;
				}	//Not same parameter, check next line for parameter
				paramNotFound = true;
			}	//Done checking dump1
			if (paramNotFound) verschillen->WriteLine(parameter2 + " in dump2, maar niet in dump1");
			dump1->Close();
		}	//Done reading pdump2

		if (!difference) { //Not a single difference in pdumps
			verschillen->WriteLine("Er waren geen verschillen gevonden");
		}

		dump2->Close();
		verschillen->Close();
		return true;
	}
	private: bool sendChanges(String^ saveFile) {
		StreamWriter^ wijzigingen = gcnew StreamWriter(saveFile);
		StreamReader^ verschillen = gcnew StreamReader(fileLog1);
		String^ fileName = saveFile,
			^ tempFile = getPath() + "\\temp.txt";

		/*Copy 2nd dump to change after sending
		std::string existingFile = "",
		newFile = "";
		String^ _newFile =
		fileDump2->Substring(0, fileDump2->LastIndexOf('\\') + 1)				//Start until name of file
		+ "(Updated)"															//(Updated)
		+ fileDump2->Substring(fileDump2->LastIndexOf('\\') + 1,				//name of file
		(fileDump2->IndexOf('-') - 3) - fileDump2->LastIndexOf('\\') + 1)	//until first -
		+ getSaveAdd();
		existingFile += strToChar(fileDump2);
		newFile += strToChar(_newFile);
		CopyFileA(existingFile.c_str(), newFile.c_str(), false);
		StreamReader^ updated = gcnew StreamReader(_newFile);
		//Done copying file
		*/

		while (!verschillen->EndOfStream) {	//Go through verschillen and check parameter and value of pdump1
			String^ parameter,
				^ value, ^value2,
				^ line = verschillen->ReadLine();

			if (line->Contains("Er waren geen verschillen gevonden")) {
				xout("Er waren geen verschillen gevonden - er kan niks gewijzigd worden\n");
				return false;
			}

			parameter = line->Substring(0, (line->IndexOf('\t') - 3));	//-3 to remove the 3 space-chars

			value = line->Substring(line->IndexOf(':') + 2,
				(line->LastIndexOf('\t') - line->IndexOf(':') - 2));
			value2 = line->Substring(line->LastIndexOf(':') + 2);

			if (sendData(parameter + " = " + value)) {	//Try to connect and send data
				receiveDataSave(tempFile, 1);	//if data send, check if it was send correctly and values changed

				StreamReader^ temp = gcnew StreamReader(tempFile);
				bool corrected = false;

				while (!temp->EndOfStream) {	//Check the latest output for system corrections
					String ^ tmpValue,
						^ tmpLine = temp->ReadLine();

					if (tmpLine->Contains("=")) {
						if (tmpLine->Contains(" - ")) {	//Input was wrong, and say what was wrong
							String^ message = tmpLine->Substring(tmpLine->LastIndexOf('-') + 2);
							xout(parameter + " is NIET veranderd vanwege een melding: "
								+ message + "\n");
							wijzigingen->WriteLine(parameter + " is NIET veranderd vanwege een melding: "
								+ message);
							corrected = true;
							break;
						}
						continue;
					}

					if (tmpLine->Contains("System correction")) {	//There has been a correction
						wijzigingen->WriteLine(parameter + " is veranderd van " + value2 + " naar "
							+ tmpValue + " (minimale waarde)" + " i.p.v. " + value);
						xout(parameter + " is veranderd van " + value2 + " naar "
							+ tmpValue + " (minimale waarde)" + " i.p.v. " + value + "\n");

						corrected = true;
						break;
					}

					if (!tmpLine->Contains("*"))
						tmpValue = getValueFromLine(tmpLine);	//Last found value from file
				}	//Done checking lastOutput
				temp->Close();

				if (!corrected) {
					wijzigingen->WriteLine(parameter + " is veranderd van " + value2 + " naar " + value);
					xout(parameter + " is veranderd van " + value2 + " naar " + value + "\n");
				}
			}
			else {	//Couldn't connect, don't continue trying
				xout("Kon geen verbinding maken - gestopt met wijzigingen maken\n");
				return false;
			}
		}
		wijzigingen->Close();
		verschillen->Close();
		fileLog2 = saveFile;
		openTextFile(4);
		return true;
	}

			 //GUI COMPONENTS
			 //CONNECTION
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
	private: System::Void controleerButton_Click(System::Object^  sender, System::EventArgs^  e) {
		controleerButton->Enabled = false;
		String^ p1 = ipTextBox->Text->Substring(0, ipTextBox->Text->IndexOf('.')),
			^ rest = ipTextBox->Text->Substring(ipTextBox->Text->IndexOf('.') + 1),
			^ p2 = rest->Substring(0, rest->IndexOf('.'));
		rest = rest->Substring(rest->IndexOf('.') + 1);
		String^ p3 = rest->Substring(0, rest->IndexOf('.'));
		String^ p4 = rest->Substring(rest->IndexOf('.') + 1);

		bool ip = (p1 == "" || p2 == "" || p3 == "" || p4 == "" || p4->Length > 3 || p4->Contains(".")) ? false : true;
		bool port = (poortTextBox->Text != "") ? true : false;

		//Check if IP and Port are entered correctly
		if (ip && port) {
			xout("Verbinding controleren met " + ipTextBox->Text
				+ " op poort " + poortTextBox->Text + "...\n");

			bool verbinding = makeConnection();
			if (verbinding)
				xout("Verbinding goed\n\n");
			closeConnection();
		}
		else {
			xout("Vul een geldig IP adres en poort in\n\n");
		}
		controleerButton->Enabled = true;
	}

			 //TEXTBOX
	private: System::Void wissenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		outputTextBox->Text = "";
	}
	private: System::Void inputTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (char)13) {
			String^ text = inputTextBox->Text;

			if (text->Contains("\\") || text->Contains("/") || text->Contains("?") || text->Contains("*") ||
				text->Contains(":") || text->Contains("\"") || text->Contains("<") || text->Contains(">") ||
				text->Contains("|")) {
				xout("Fout: Ongeldige input. Gebruik deze tekens niet: \\ / : * ? \" < > | \n");
				return;
			}

			xout(text + "\n");
			if (inputTextBox->Text == "") {
				return;
			}

			inputTextBox->Text = "";
			inputTextBox->Refresh();


			if (sendData(text)) {
				if (opslaanCheckBox->Checked == true) {
					String^ fileName = text + getSaveAdd();
					receiveDataSave(fileName, 2);
				}
				else
					receiveDataOutput(2);
			}
			closeConnection();
			xout("Gereed\n\n");
		}
	}
	private: System::Void opslaanCheckBox_CheckStateChanged(System::Object^  sender, System::EventArgs^  e) {
		if (opslaanCheckBox->Checked == true) {
			if (folderSelectedLabel->Text == "Selecteer") {
				if (!selectFolder()) {
					opslaanCheckBox->Checked = false;
					return;
				}
			}
			xout("Alle volgende output wordt opgeslagen\n");
		}
		else  {
			xout("Alle volgende output wordt NIET opgeslagen\n");
		}
	}
	private: System::Void selecteerFolderButton_Click(System::Object^  sender, System::EventArgs^  e) {
		selectFolder();
	}

			 //PDUMP
	private: System::Void pdump1LinkLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		pdump1LinkLabel->Enabled = false;	//Disable the option of double-clicking
		openTextFile(1);
		pdump1LinkLabel->Enabled = true;
	}
	private: System::Void pdump2LinkLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		pdump2LinkLabel->Enabled = false;	//Disable the option of double-clicking
		openTextFile(2);
		pdump2LinkLabel->Enabled = true;
	}
	private: System::Void pdump1Button_Click(System::Object^  sender, System::EventArgs^  e) {
		pdump1Button->Enabled = false;
		xout("Bezig met pDump1 maken...\n");
		if (sendData("pdump")) {
			String^ pdump1 = "pdump1" + getSaveAdd();
			if (receiveDataSave(pdump1, 3)) { //pDump made succesfully
				pdump2Button->Enabled = true;
				fileDump1 = folderSelectedLabel->Text + "\\" + pdump1;
				pdump1LinkLabel->Text = "..\\" + getDirectory() + "\\" + pdump1;
				pdump1LinkLabel->Enabled = true;
				closeConnection();
				xout("Gereed\n\n");
			}
		}
		scrollDown();
		pdump1Button->Enabled = true;
	}
	private: System::Void pdump2Button_Click(System::Object^  sender, System::EventArgs^  e) {
		pdump2Button->Enabled = false;
		xout("Bezig met pDump2 maken...\n");
		if (sendData("pdump")) {
			String^ pdump2 = "pdump2" + " - " + getTime() + " - " + getDate()
				+ ".txt";
			if (receiveDataSave(pdump2, 3)) { //pDump made succesfully
				vergelijkButton->Enabled = true;
				fileDump2 = folderSelectedLabel->Text + "\\" + pdump2;
				pdump2LinkLabel->Text = "..\\" + getDirectory() + "\\" + pdump2;
				pdump2LinkLabel->Enabled = true;
				closeConnection();
				xout("Gereed\n\n");
			}
		}
		pdump2Button->Enabled = true;
	}
	private: System::Void selecteerDump1Button_Click(System::Object^  sender, System::EventArgs^  e) {
		selecteerDump1Button->Enabled = false;
		OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Text Files|*.txt";
		openFileDialog1->Title = "Select a pDump File";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pdump1Button->Enabled = true;
			pdump2Button->Enabled = true;

			String^ fileName = openFileDialog1->FileName->Substring(openFileDialog1->FileName->LastIndexOf('\\') + 1),
				^ path = openFileDialog1->FileName->Substring(0, openFileDialog1->FileName->LastIndexOf('\\')),
				^ parent = path->Substring(path->LastIndexOf('\\') + 1);

			folderSelectedLabel->Text = path;
			fileDump1 = openFileDialog1->FileName;
			pdump1LinkLabel->Text = "..\\" + parent + "\\" + fileName;
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

			String^ fileName = openFileDialog2->FileName->Substring(openFileDialog2->FileName->LastIndexOf('\\') + 1),
				^ path = openFileDialog2->FileName->Substring(0, openFileDialog2->FileName->LastIndexOf('\\')),
				^ parent = path->Substring(path->LastIndexOf('\\') + 1);

			fileDump2 = openFileDialog2->FileName;
			pdump2LinkLabel->Text = "..\\" + parent + "\\" + fileName;
			pdump2LinkLabel->Enabled = true;
			vergelijkButton->Enabled = true;
		}
		selecteerDump2Button->Enabled = true;
	}

			 //VERGELIJK/WIJZIG
	private: System::Void vergelijkButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (pdump1LinkLabel->Enabled == false || pdump2LinkLabel->Enabled == false) {
			xout("Fout: Nog niet beide pDump bestanden geladen\n");
			return;
		}
		if (!pdump1LinkLabel->Text->Contains("pdump") || !pdump1LinkLabel->Text->Contains(".txt")
			|| !pdump1LinkLabel->Text->Contains(" - ")) {
			xout("Fout: pdump1 niet juist geselecteerd\n");
			return;
		}
		if (!pdump2LinkLabel->Text->Contains("pdump") || !pdump2LinkLabel->Text->Contains(".txt")
			|| !pdump2LinkLabel->Text->Contains(" - ")) {
			xout("Fout: pdump2 niet juist geselecteerd\n");
			return;
		}
		else {
			xout("Bezig met vergelijken van pDump bestanden...\n");
			String^ saveToFile = getPath() + "\\verschillen" + getSaveAdd();
			if (compareFiles(saveToFile)) {	//Vergelijken is voltooid
				xout("Gereed\n\n");
				resultaatVergelijkButton->Enabled = true;
				wijzigButton->Enabled = true;

				fileLog1 = saveToFile;
				openTextFile(3); //file 3 = fileLog1;
			}
			else
				xout("Vergelijken niet gelukt\n");
		}
	}
	private: System::Void wijzigButton_Click(System::Object^  sender, System::EventArgs^  e) {
		wijzigButton->Enabled = false;
		xout("Bezig met verschillen in te voeren...\n");
		String^ saveToFile = getPath() + "\\wijzigingen" + getSaveAdd();

		if (sendChanges(saveToFile)) {
			xout("Gereed\n\n");
			fileLog2 = saveToFile;
			resultaatWijzigButton->Enabled = true;
		}
		else
			xout("Wijzigen niet gelukt\n\n");
		wijzigButton->Enabled = true;
	}
	private: System::Void resultaatVergelijkButton_Click(System::Object^  sender, System::EventArgs^  e) {
		resultaatVergelijkButton->Enabled = false;	//Disable the option of double-clicking
		openTextFile(3);
		resultaatVergelijkButton->Enabled = true;
	}
	private: System::Void resultaatWijzigButton_Click(System::Object^  sender, System::EventArgs^  e) {
		resultaatWijzigButton->Enabled = false;	//Disable the option of double-clicking
		openTextFile(4);
		resultaatWijzigButton->Enabled = true;
	}

			 //AFSLUITEN
	private: System::Void afsluitenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		using System::Windows::Forms::MessageBox;
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			this, "Weet u zeker dat u het programma wilt afsluiten?",
			"Afsluiten", MessageBoxButtons::YesNo);
		if (result == System::Windows::Forms::DialogResult::Yes)
			this->Close();
	}

			 //TEST BUTTONS
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {	//Local
		ipTextBox->Text = "127.0.0.1";
		poortTextBox->Text = "5000";
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {	//Remote
		ipTextBox->Text = "192.168.100.75";
		poortTextBox->Text = "7000";
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)	{	//Unlock
		pdump1Button->Enabled = true;
		pdump2Button->Enabled = true;
		vergelijkButton->Enabled = true;
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {	//DUMP
		/*
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
		saveFileDialog1->Filter = "txt files (*.txt)|*.txt";
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true;
		System::Windows::Forms::DialogResult result;

		Stream^ test;

		StreamWriter^ outputFile;
		//result = saveFileDialog1->ShowDialog();

		//if (result == System::Windows::Forms::DialogResult::OK) {
		//	if ((test = saveFileDialog1->OpenFile()) != nullptr)
		//	{
		//		test->Close();
		String^ fileName = "test";// saveFileDialog1->FileName;
		int recvbuflen = DEFAULT_BUFLEN;
		outputFile = gcnew StreamWriter(fileName);

		while (true) {
		char recvbuf[DEFAULT_BUFLEN];

		iResult = recv(s, recvbuf, recvbuflen, 0);
		String^ output = charToStr(recvbuf);
		memset(recvbuf, 0, sizeof(recvbuf));	//Reset recvbuf

		if (iResult > 0) {
		outputTextBox->Text += output;

		/*
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
		outputFile->Write(output[i]);
		lastCharWasSpace = true;
		continue;
		}
		else
		lastCharWasSpace = false;
		outputFile->Write(output[i]);
		}
		}
		else if (iResult == 0) {
		outputTextBox->Text += "Verbinding verbroken\n";
		outputFile->Close();
		break;
		}
		else {
		outputTextBox->Text += "Geen data ontvangen\n";
		outputFile->Close();
		break;
		}
		if (timeout(3))
		break;
		}
		outputFile->Close();
		closeConnection();
		//	}
		//} //SAVE CURRENT OUTPUT TO FILE

		*/
	}

	};
}

