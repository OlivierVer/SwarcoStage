#pragma once

#include <windows.h>
#include <string>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <istream>
#include <tchar.h>
#include <process.h>

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
	private: System::Windows::Forms::TextBox^  inputTextBox;
	private: System::Windows::Forms::TextBox^  poortTextBox;
	private: System::Windows::Forms::TextBox^  ipTextBox;

	private: System::Windows::Forms::Label^  verbindLabel;
	private: System::Windows::Forms::Label^  folderLabel;

	private: System::Windows::Forms::LinkLabel^  pdump1LinkLabel;
	private: System::Windows::Forms::LinkLabel^  pdump2LinkLabel;
	private: System::Windows::Forms::LinkLabel^  folderSelectedLabel;

	private: System::Windows::Forms::Button^  controleerButton;
	private: System::Windows::Forms::Button^  pdump1Button;
	private: System::Windows::Forms::Button^  pdump2Button;
	private: System::Windows::Forms::Button^  verschillenButton;
	private: System::Windows::Forms::Button^  resultaatVerschillenButton;

	private: System::Windows::Forms::Button^  afsluitenButton;
	private: System::Windows::Forms::Button^  wissenButton;
	private: System::Windows::Forms::Button^  selecteerDump1Button;
	private: System::Windows::Forms::Button^  selecteerDump2Button;
	private: System::Windows::Forms::Button^  selecteerFolderButton;
	private: System::Windows::Forms::Button^  bijwerkenButton;
	private: System::Windows::Forms::Button^  resultaatBijwerkenButton;
	
	private: System::Windows::Forms::CheckBox^  opslaanCheckBox;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	private: System::Windows::Forms::Button^  button5;

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
			this->verschillenButton = (gcnew System::Windows::Forms::Button());
			this->pdump1LinkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->pdump2LinkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->resultaatVerschillenButton = (gcnew System::Windows::Forms::Button());
			this->afsluitenButton = (gcnew System::Windows::Forms::Button());
			this->folderLabel = (gcnew System::Windows::Forms::Label());
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
			this->bijwerkenButton = (gcnew System::Windows::Forms::Button());
			this->resultaatBijwerkenButton = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->opslaanCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->folderSelectedLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// outputTextBox
			// 
			this->outputTextBox->BackColor = System::Drawing::SystemColors::Menu;
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
			this->outputTextBox->Text = resources->GetString(L"outputTextBox.Text");
			this->outputTextBox->CheckForIllegalCrossThreadCalls = false;
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
			// verschillenButton
			// 
			this->verschillenButton->Enabled = false;
			this->verschillenButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->verschillenButton->Location = System::Drawing::Point(630, 423);
			this->verschillenButton->Margin = System::Windows::Forms::Padding(5);
			this->verschillenButton->Name = L"verschillenButton";
			this->verschillenButton->Size = System::Drawing::Size(282, 53);
			this->verschillenButton->TabIndex = 12;
			this->verschillenButton->Text = L"Verschillen";
			this->verschillenButton->UseVisualStyleBackColor = true;
			this->verschillenButton->Click += gcnew System::EventHandler(this, &GUI::verschillenButton_Click);
			// 
			// pdump1LinkLabel
			// 
			this->pdump1LinkLabel->AutoSize = true;
			this->pdump1LinkLabel->Enabled = false;
			this->pdump1LinkLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->pdump1LinkLabel->Location = System::Drawing::Point(626, 224);
			this->pdump1LinkLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->pdump1LinkLabel->Name = L"pdump1LinkLabel";
			this->pdump1LinkLabel->Size = System::Drawing::Size(133, 20);
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
			this->pdump2LinkLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->pdump2LinkLabel->Location = System::Drawing::Point(626, 350);
			this->pdump2LinkLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->pdump2LinkLabel->Name = L"pdump2LinkLabel";
			this->pdump2LinkLabel->Size = System::Drawing::Size(133, 20);
			this->pdump2LinkLabel->TabIndex = 14;
			this->pdump2LinkLabel->TabStop = true;
			this->pdump2LinkLabel->Text = L"Niet geselecteerd";
			this->pdump2LinkLabel->VisitedLinkColor = System::Drawing::Color::Blue;
			this->pdump2LinkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &GUI::pdump2LinkLabel_LinkClicked);
			// 
			// resultaatVerschillenButton
			// 
			this->resultaatVerschillenButton->Enabled = false;
			this->resultaatVerschillenButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->resultaatVerschillenButton->Location = System::Drawing::Point(920, 423);
			this->resultaatVerschillenButton->Margin = System::Windows::Forms::Padding(5);
			this->resultaatVerschillenButton->Name = L"resultaatVerschillenButton";
			this->resultaatVerschillenButton->Size = System::Drawing::Size(102, 53);
			this->resultaatVerschillenButton->TabIndex = 15;
			this->resultaatVerschillenButton->Text = L"Resultaat";
			this->resultaatVerschillenButton->UseVisualStyleBackColor = true;
			this->resultaatVerschillenButton->Click += gcnew System::EventHandler(this, &GUI::resultaatVerschillenButton_Click);
			// 
			// afsluitenButton
			// 
			this->afsluitenButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->afsluitenButton->Location = System::Drawing::Point(922, 601);
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
			this->ipTextBox->Text = L"192.168.0.75";
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
			// bijwerkenButton
			// 
			this->bijwerkenButton->Enabled = false;
			this->bijwerkenButton->Location = System::Drawing::Point(630, 484);
			this->bijwerkenButton->Name = L"bijwerkenButton";
			this->bijwerkenButton->Size = System::Drawing::Size(282, 53);
			this->bijwerkenButton->TabIndex = 27;
			this->bijwerkenButton->Text = L"Verschillen bijwerken";
			this->bijwerkenButton->UseVisualStyleBackColor = true;
			this->bijwerkenButton->Click += gcnew System::EventHandler(this, &GUI::bijwerkenButton_Click);
			// 
			// resultaatBijwerkenButton
			// 
			this->resultaatBijwerkenButton->Enabled = false;
			this->resultaatBijwerkenButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->resultaatBijwerkenButton->Location = System::Drawing::Point(920, 484);
			this->resultaatBijwerkenButton->Name = L"resultaatBijwerkenButton";
			this->resultaatBijwerkenButton->Size = System::Drawing::Size(104, 53);
			this->resultaatBijwerkenButton->TabIndex = 28;
			this->resultaatBijwerkenButton->Text = L"Resultaat";
			this->resultaatBijwerkenButton->UseVisualStyleBackColor = true;
			this->resultaatBijwerkenButton->Click += gcnew System::EventHandler(this, &GUI::resultaatBijwerkenButton_Click);
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
			// folderSelectedLabel
			// 
			this->folderSelectedLabel->AutoSize = true;
			this->folderSelectedLabel->Enabled = false;
			this->folderSelectedLabel->Font = (gcnew System::Drawing::Font(L"Courier New", 13));
			this->folderSelectedLabel->Location = System::Drawing::Point(628, 67);
			this->folderSelectedLabel->Name = L"folderSelectedLabel";
			this->folderSelectedLabel->Size = System::Drawing::Size(196, 20);
			this->folderSelectedLabel->TabIndex = 31;
			this->folderSelectedLabel->TabStop = true;
			this->folderSelectedLabel->Text = L"Niet geselecteerd";
			this->folderSelectedLabel->VisitedLinkColor = System::Drawing::Color::Blue;
			this->folderSelectedLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &GUI::folderSelectedLabel_LinkClicked);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button5->Location = System::Drawing::Point(949, 566);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 27);
			this->button5->TabIndex = 32;
			this->button5->Text = L"Debug";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &GUI::button5_Click);
			this->button5->Visible = false;
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1036, 668);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->folderSelectedLabel);
			this->Controls->Add(this->opslaanCheckBox);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->resultaatBijwerkenButton);
			this->Controls->Add(this->bijwerkenButton);
			this->Controls->Add(this->selecteerDump2Button);
			this->Controls->Add(this->selecteerDump1Button);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->wissenButton);
			this->Controls->Add(this->poortTextBox);
			this->Controls->Add(this->ipTextBox);
			this->Controls->Add(this->selecteerFolderButton);
			this->Controls->Add(this->folderLabel);
			this->Controls->Add(this->afsluitenButton);
			this->Controls->Add(this->resultaatVerschillenButton);
			this->Controls->Add(this->pdump2LinkLabel);
			this->Controls->Add(this->pdump1LinkLabel);
			this->Controls->Add(this->verschillenButton);
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
			this->Text = L"pDump tool - SWARCO Nederland B.V.";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//// MEMBER VARIABLES
	SOCKET s;
		//Variable for timeout if operation doesn't take long to send and receive
	private: int timeShort = 1, 
		//Variable for timeout if operation takes long to send and receive (pdumps take ~2 seconds before it actually starts sending)
		timeLong = 4;
		//Variable to check if folder has been selected so files will be saved here
	private: bool folderSelected = false,
		//Variable to check if connection was already established and give more feedback if not
		firstConnection = true,
		//Variable to check if socket is already connected
		connected = false,
		//Variable used to block user input during long processes (for example receiving pdump)
		busy = false;
	private: int iResult = -1;
	private: String^ directoryPath,
		^ VRI_ID = "",
		^ savedToFile = "";
	private: String^ fileDump1 = "",
		^ fileDump2 = "",
		^ fileLog1 = "",
		^ fileLog2 = "";
//// END OF MEMBER VARIABLES

//// FUNCTIONS
		//Returns a pointer to char (char*) after conversion from a handle to string (String^)
	private: char* strToChar(String^ _str) {
		IntPtr ptrToNativeString = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(_str);
		char* strChar = static_cast<char*>(ptrToNativeString.ToPointer());
		return strChar;
	}
		//Returns a handle to string (String^) after conversion from a pointer to char (char*)
	private: String^ charToStr(char* _char) {
		return gcnew String(_char);
	}
	
		//Returns the value of a parameter (as String^) from the string (String^)
	private: String^ getValueFromLine(String^ str) {
		String^ value = (str->Contains("/"))	//If string contains char '/', the line ends with a unit of measurement
			? str->Substring(str->LastIndexOf(':') + 2, (str->LastIndexOf('/') - str->LastIndexOf(':') - 2))	//Remove unit of measurement from return value
			: str->Substring(str->LastIndexOf(':') + 2);	//No unit found, just read value until EoL. Index + 2 to skip output ": "
		if (value->Contains(" "))	//Check if the return value starts with a space
			value = value->Substring(0, (value->Length - 1));	//if so remove ' '-space if it exists
		return value;
	}
	
		//Puts the view onto caret in the output textbox to ensure new written data is always visible
	private: void scrollDown() {
		outputTextBox->Refresh();
		outputTextBox->SelectionStart = outputTextBox->Text->Length;
		outputTextBox->ScrollToCaret();
	}
		//Add string to output textbox and move view to this new output
	private: void xout(String^ str) {
		outputTextBox->Text += str;
		scrollDown();
	}
	
		//Timeout in seconds before the socket stops blocking
	private: void timeout(int sec) {
		int time = sec * 300;	//Timeout is not completely accurate and after trial and error resulted in multiplying time times 300
		setsockopt(s, SOL_SOCKET, SO_RCVTIMEO, (char *)&time, sizeof(time));	//Sets socket timeout to value of time
	}
	
		//Opens Notepad.exe in a new window with corresponding file. 
			 //File 1: pDump file 1
			 //File 2: pDump file 2
			 //File 3: Result of comparing pDump files
			 //File 4: Result of sending changes
	private: void openTextFile(int i) {
		std::string str = "notepad.exe \"";		// notepad.exe "
		str.append(
			(i == 1) ? strToChar(fileDump1) :	// C:\..\.txt
			(i == 2) ? strToChar(fileDump2) :
			(i == 3) ? strToChar(fileLog1) :
			(i == 4) ? strToChar(fileLog2) :
			"");
		str += "\"";							// "   str ->  _notepad.exe "C:\..\.txt"_
		LPCSTR openNotepad = str.c_str();
		WinExec(openNotepad, SW_SHOW);
	}
		//Opens a Windows FolderBrowserDialog to select a folder path and returns true on folder selected, false on not selected
	private: bool selectFolder() {
		FolderBrowserDialog^ folderBrowserDialog1 = gcnew FolderBrowserDialog;
		System::Windows::Forms::DialogResult result;
		result = folderBrowserDialog1->ShowDialog();
		String^ path = "";

		if (result == System::Windows::Forms::DialogResult::OK) {
			if (folderBrowserDialog1->SelectedPath->Contains("New folder")			//Check if folder is selected properly.
				|| folderBrowserDialog1->SelectedPath->Contains("Nieuwe map")) {	//Sometimes creating a new folder and selecting
				using System::Windows::Forms::MessageBox;							//it too quickly in the Dialog Window results
				System::Windows::Forms::DialogResult result = MessageBox::Show(		//in folder being set to "New Folder"
					this, "Klopt het pad: \"" + folderBrowserDialog1->SelectedPath + "\"?",
					"Geselecteerde pad", MessageBoxButtons::YesNo);
				if (result != System::Windows::Forms::DialogResult::Yes) {	//Ask to reselect folder if it wasn't properly set
					return selectFolder();
				}
			}

			path = folderBrowserDialog1->SelectedPath;
			if (path != "") {
				directoryPath = path;
				folderSelectedLabel->Text = path;
				folderSelectedLabel->Enabled = true;
				checkFolderLength();	//Check amount of chars in selected folder path to ensure it fits on screen
				pdump1Button->Enabled = true;
				return true;
			}
			else
				return false;
		}
		else
			return false;
	}
		//Checks the amount of characters in the selected folder path. If between 35 and 70 characters, spread it over 2 lines
		//If larger than 70 chars, spread over 3 lines
	private: void checkFolderLength() {
		if (folderSelectedLabel->Text->Length <= 35) return;
		folderSelectedLabel->Text =
			(folderSelectedLabel->Text->Length > 35 && folderSelectedLabel->Text->Length <= 70)	//Check if string is between 35 and 70 chars
			? folderSelectedLabel->Text->Substring(0, 35) 
				+ "\n" + folderSelectedLabel->Text->Substring(35, folderSelectedLabel->Text->Length - 35)
			: folderSelectedLabel->Text->Substring(0, 35)
				+ "\n" + folderSelectedLabel->Text->Substring(35, 35)
				+ "\n" + folderSelectedLabel->Text->Substring(70, folderSelectedLabel->Text->Length - 70);
	}
	
		//Returns (String^) the path to currently selected directory/folder
	private: String^ getPath() {
		return directoryPath;
	}
		//Returns (String^) the name of current selected directory/folder
	private: String^ getDirectory() {
		String^ parent = getPath();
		parent = parent->Substring(parent->LastIndexOf('\\'));
		return parent->Substring(1);	//Remove '\' at start  (example path 'C:\Windows' -> '\Windows' -> 'Windows')
	}
		//Sets value of VRI_ID from reading returned message after sending empty string. Returns true on value found, false on not found
	private: bool getVRI_ID() {
		char* dataChar = strToChar("");
		char* carriage = "\n";

		if (VRI_ID == "") {
			xout("Naam van VRI zoeken...\n");

			if (makeConnection()) {	//Connect to socket
				send(s, dataChar, (int)strlen(dataChar), 0);	//Send ""
				iResult = send(s, carriage, (int)strlen(carriage), 0);	//Send carriage return
				
				timeout(1);	//Set short timeout on reponse to break following (endless) loop
				while (true) {
					char recvbuf[DEFAULT_BUFLEN];

					iResult = recv(s, recvbuf, DEFAULT_BUFLEN, 0);
					String^ output = charToStr(recvbuf);
					memset(recvbuf, 0, sizeof(recvbuf));	//Reset recvbuf, buffer of received data

					if (iResult > 0) {	//Example with format of default reponse: 'VRI0013> Output' -> VRI_ID should be 'VRI0013'
						if (output->Contains(">")) {	
							String^ id = output->Substring(output->IndexOf(' ') + 1, //found VRI_ID, substring to set VRI_ID
								output->IndexOf('>') - (output->IndexOf(' ') + 1));
							VRI_ID = id;
							xout("Naam VRI gevonden: " + VRI_ID + "\n"
								+ "Klopt dit niet, type dan 'VRI_ID' of voer handmatig in door\n"
								+ "commando 'VRI_ID = NAAM' met NAAM als de naam van de VRI\n\n");
						}
					}
					else
						break;
				}
			}
		}
		if (VRI_ID == "") {	//VRI_ID not set, return false
			xout("Naam VRI niet gevonden - Geen reactie van VRI\n"
				+ "Controleer verbinding of voer naam van VRI handmatig in door\n"
				+ "commando 'VRI_ID = NAAM' met NAAM als de naam van de VRI\n\n");
			return false;
		}
		else	//VRI_ID set, return true
			return true;
	}
		//Get time from system and return it as String^ with format hhmmss (hours, minutes, seconds)
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

		time += hour + minute + second;	//142001   14h:20m:01s
		return time;
	}
		//Get date from system and return it as String^ with format yymmdd (year, month, day)
	private: String^ getDate() {
		SYSTEMTIME sstm;
		GetSystemTime(&sstm);
		String^ date = "";
		date += sstm.wYear + "" + sstm.wMonth + "" + sstm.wDay;

		return date;
	}
		//Returns the correct name of the file by adding the VRI_ID, date, time and ".txt" to the desired file name
	private: String^ fileFormat(String^ name) {
		String^ fileName;
		fileName = name + " " + VRI_ID + " " + getDate() + " " + getTime() + ".txt";
		return fileName;
	}

//// NETWORK FUNCTIONS
		//Creates a socket and tries to connect to it
	private: bool makeConnection() {
		if (connected) return true;

		SOCKADDR_IN target;
		WSADATA wsaData;

		int portNo = Convert::ToInt32(poortTextBox->Text);	//Convert String^ to int
		char* ipAddr = strToChar(ipTextBox->Text);	//Convert String^ to char*

		int error = WSAStartup(0x202, &wsaData);
		if (error) {
			xout("Error: Winsock start fout\n\n");
			return false; //winsock error
		}
		if (wsaData.wVersion != 0x202) {
			WSACleanup();
			xout("Error: Winsock is niet de juiste versie\n\n");
			return false; //winsock not right version
		} //Winsock launched succesfully

		target.sin_family = AF_INET;
		target.sin_port = htons(portNo);
		target.sin_addr.S_un.S_addr = inet_addr(ipAddr);

		s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
		if (s == INVALID_SOCKET) {
			xout("Error: Socket is niet geldig\n\n");
			return false; //invalid socket
		}

		if (firstConnection) {
			xout("Bezig met verbinding te maken (max 20 seconden)... ");
		}

		if (connect(s, (SOCKADDR *)&target, sizeof(target)) == SOCKET_ERROR) {
			xout("Niet gelukt\n\n");
			firstConnection = true;
			return false; //socket error
		}
		else {
			xout("Socket geopend\n");
			firstConnection = false;
			connected = true;
			return true; //socket succes	
		}
		connected = false;
	}
		//Closes the connection and socket
	private: bool closeConnection() {
		xout("Socket afgebroken\n\n");
		connected = false;
		closesocket(s);
		WSACleanup();
		scrollDown();
		return true;
	}
		//Send String^ through socket and returns true on success; false if not succesful
	private: bool sendData(String^ data) {
		char* dataChar = strToChar(data);
		char* carriage = "\n";

		send(s, dataChar, (int)strlen(dataChar), 0);
		iResult = send(s, carriage, (int)strlen(carriage), 0);

		if (iResult == SOCKET_ERROR) {
			xout("Verzenden van '" + data + "' niet gelukt. WSA Error: " + WSAGetLastError() + "\n");
			closeConnection();
			return false;
		}
		return true;	
	}
		//Receives data from socket and prints it to the output text box. Returns true on success; false if not succesful
	private: bool receiveDataOutput(int time) {
		int recvbuflen = DEFAULT_BUFLEN;
		bool receivedData = false;

		timeout(time);
		while (true) {
			char recvbuf[DEFAULT_BUFLEN];

			iResult = recv(s, recvbuf, recvbuflen, 0);
			String^ output = charToStr(recvbuf);
			memset(recvbuf, 0, sizeof(recvbuf));	//Reset recvbuf

			if (iResult > 0) {
				if (output->Contains("Please login")) {
					xout("\nEr is nog niet ingelogt - log eerst in via command line\n"
						+ "Opdracht afgebroken\n\n");
					return false;
				}
				xout(output);
				receivedData = true;
			}
			else if (iResult == 0) {
				outputTextBox->Text += "Verbinding verbroken door VRI\n";
				return false;
			}
			else {
				if (!receivedData)
					outputTextBox->Text += "Geen data (meer) ontvangen\n";
				return true;
			}
		}
		//closeConnection();
		return true;
	}
		//Receives data from socket and prints it to the output textbox and saves it as .txt file in selected folder.
		//Returns true on success; false if not succesful
	private: bool receiveDataSave(String^ fileName, int time) {
		if (VRI_ID == "") {
			bool succes = getVRI_ID();
			if (!succes) {
				return false;
			}
		}
		SetCurrentDirectoryA(strToChar(getPath()));
		int recvbuflen = DEFAULT_BUFLEN;
		bool receivedData = false;
		String^ fileNamePath = getPath() + "\\" +
			(fileName != "") ? fileFormat(fileName) : "unknown.txt";

		StreamWriter^ outputFile = gcnew StreamWriter(fileNamePath);

		timeout(time);
		while (true) {
			char recvbuf[DEFAULT_BUFLEN];

			iResult = recv(s, recvbuf, recvbuflen, 0);
			String^ output = charToStr(recvbuf);
			memset(recvbuf, 0, sizeof(recvbuf));	//Reset recvbuf

			if (iResult > 0) {
				if (output->Contains("Please login")) {
					xout("\nEr is nog niet ingelogt - log eerst in via command line\n"
						+ "Opdracht afgebroken\n\n");
					outputFile->Close();
					File::Delete(fileNamePath);
					return false;
				}
				
				xout(output);
				receivedData = true;

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
				outputFile->Close();
				return false;
			}
			else {
				if (!receivedData)
					xout("Geen data (meer) ontvangen\n");
				outputFile->Close();
				savedToFile = fileNamePath;
				if (!savedToFile->Contains("TEMP"))
					xout("Opgeslagen in: " + savedToFile + "\n");
				return true;
			}
		}
		outputFile->Close();
		return true;
	}
		//Sends commands through socket to change all differences after comparing the two pDump files and saves results as .txt file.
		//Returns true on success; false if not succesful
	private: bool sendChanges(String^ saveFile) {
		makeConnection();

		String^ fileNamePath = getPath() + "\\" + fileFormat(saveFile);

		StreamWriter^ wijzigingen = gcnew StreamWriter(fileNamePath);
		StreamReader^ verschillen = gcnew StreamReader(fileLog1);
		String^ tempFile = getPath() + "\\TEMP";

		while (!verschillen->EndOfStream) {	//Go through verschillen and check parameter and value of pdump1
			String^ parameter,
				^ value, ^value2,
				^ line = verschillen->ReadLine();

			if (line->Contains("Er waren geen verschillen gevonden")) {
				xout("Er waren geen verschillen gevonden - er kan niks gewijzigd worden\n");
				return false;
			}

			if (line->Contains(">") || line == "")	//Check if line indicates file or if it's empty
				continue;
			if (line->Contains("in dump2, maar niet in dump1"))	//Check if param was in dump2, but not in 1 -> Doens't need change in VRI
				continue;

			parameter = line->Substring(0, (line->IndexOf('\t') - 3));	//-3 to remove the 3 space-chars

			value = line->Substring(line->IndexOf(':') + 2,
				(line->LastIndexOf('\t') - line->IndexOf(':') - 2));
			value2 = line->Substring(line->LastIndexOf(':') + 2);

			if (sendData(parameter + " = " + value)) {	//Try to connect and send data
				receiveDataSave(tempFile, timeShort);	//if data send, check if it was send correctly and values changed

				StreamReader^ temp = gcnew StreamReader(savedToFile);
				bool corrected = false;
				bool fileIsEmpty = true;

				while (!temp->EndOfStream) {	//Check the latest output for system corrections
					fileIsEmpty = false;
					String ^ tempValue,
						^ tempLine = temp->ReadLine();

					if (tempLine->Contains("=")) {
						if (tempLine->Contains(" - ")) {	//Input was wrong, and say what was wrong
							String^ message = tempLine->Substring(tempLine->LastIndexOf('-') + 2);
							xout(parameter + " is NIET veranderd vanwege een melding: "
								+ message + "\n");
							wijzigingen->WriteLine("!!!  " + parameter + " is NIET veranderd vanwege een melding: "
								+ message + "  !!!");
							corrected = true;
							break;
						}
						continue;
					}

					if (tempLine->Contains("System correction")) {	//There has been a correction
						wijzigingen->WriteLine(parameter + " is veranderd van " + value2 + " naar "
							+ tempValue + " (minimale waarde)" + " i.p.v. " + value);
						xout(parameter + " is veranderd van " + value2 + " naar "
							+ tempValue + " (minimale waarde)" + " i.p.v. " + value + "\n");

						corrected = true;
						break;
					}

					if (!tempLine->Contains("*"))
						tempValue = getValueFromLine(tempLine);	//Last found value from file
				}	//Done checking lastOutput
				temp->Close();
				if (savedToFile->Contains("TEMP"))
					File::Delete(savedToFile);

				if (fileIsEmpty) {
					xout(parameter + " is NIET veranderd - geen bevestiging ontvangen\n");
					wijzigingen->WriteLine(parameter + " is NIET veranderd - geen bevestiging ontvangen");
					corrected = true;
				}

				if (!corrected) {
					wijzigingen->WriteLine(parameter + " is veranderd van " + value2 + " naar " + value);
					xout(parameter + " is veranderd van " + value2 + " naar " + value + "\n");
				}
				xout("\n");
			}
			else {	//Couldn't connect, don't continue trying
				xout("Kon geen verbinding maken - gestopt met wijzigingen maken\n");
				closeConnection();
				return false;
			}
		}
		//closeConnection();
		wijzigingen->Close();
		verschillen->Close();
		savedToFile = fileNamePath;
		return true;
	}
		//Compares the two selected pDump files and saves the result as .txt file.
		//Returns true on success; false if not succesful
	private: bool compareFiles(String^ saveFile) {
		if (VRI_ID == "") {
			getVRI_ID();
		}
		
		String^ fileNamePath = getPath() + "\\" + fileFormat(saveFile);
		StreamWriter^ verschillen = gcnew StreamWriter(fileNamePath);
		StreamReader^ dump2 = gcnew StreamReader(fileDump2);
		bool difference = false;
		bool paramNotFound = true;

		if (!dump2) { xout("Fout: pDump2 kon niet geopend worden\n"); return false; }

		verschillen->WriteLine("PDUMP 1 > " + fileDump1);
		verschillen->WriteLine("PDUMP 2 > " + fileDump2);
		verschillen->WriteLine("");

		while (!dump2->EndOfStream) {	//Go through pdump2 and seperate parameter and value
			String^ parameter2, ^ value2, ^ line2 = dump2->ReadLine();
			if (line2 == "" || line2->Contains("*") || line2->Contains(">") || !line2->Contains(":")
				|| line2->Contains("-")) {
				continue;
			}
			parameter2 = (line2->StartsWith(" "))
				? line2->Substring(1, (line2->IndexOf(':')) - 1)
				: line2->Substring(0, line2->IndexOf(':'));

			value2 = getValueFromLine(line2);

			StreamReader^ dump1 = gcnew StreamReader(fileDump1);
			if (!dump1) { xout("Fout: pDump1 kon niet geopend worden\n"); return false; }

			while (!dump1->EndOfStream) {	//Go through pdump1 to find matches

				String^ parameter1, ^ line1 = dump1->ReadLine();
				if (line1 == "" || line1->Contains("*") || line1->Contains(">") || !line1->Contains(":")
					|| line1->Contains("-")) {
					continue;
				}
				parameter1 = (line1->StartsWith(" "))
					? line1->Substring(1, (line1->IndexOf(':')) - 1)
					: line1->Substring(0, line1->IndexOf(':'));

				if (parameter1 == parameter2) {	//Match found, get values
					paramNotFound = false;
					String^ value1 = getValueFromLine(line1);

					if (value1->Contains(" "))
						value1 = value1->Substring(0, (value1->Length - 1)); //remove ' '-space if it exists
					if (value1 != value2) {	//Check values, not same? Write!
						difference = true;
						verschillen->WriteLine(parameter1 + "   \tpdump1: " + value1 + "\tpdump2: " + value2);
					}	//Done checking values, they're same, next parameter
					dump1->Close();
					break;
				}	//Not same parameter, check next line for parameter
				paramNotFound = true;
			}	//Done checking dump1
			if (paramNotFound) {
				difference = true;
				verschillen->WriteLine(parameter2 + " in dump2, maar niet in dump1");
			}
			dump1->Close();
		}	//Done reading pdump2

		if (!difference) { //Not a single difference in pdumps
			verschillen->WriteLine("Er waren geen verschillen gevonden");
		}
		savedToFile = fileNamePath;
		dump2->Close();
		verschillen->Close();
		return true;
	}
	
//// GUI COMPONENT FUNCTIONS
			 //// CONNECTION
		//Checks to accept only digits and the Backspace character in this text box
	private: System::Void poortTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
		//Checks to accept only digits, "." and the Backspace character in this text box
	private: System::Void ipTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == '.'){
			if (!this->ipTextBox->Text->Contains(".") && this->ipTextBox->SelectedText->Contains("."))
				e->Handled = true;
		}
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
		//Button click to check connection
	private: System::Void controleerButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (busy) return; //Check if program is busy / socket is blocking
		
		System::Threading::Thread ^t = gcnew System::Threading::Thread(
			gcnew System::Threading::ThreadStart(this, &GUI::controleer ));
		t->Start();
		System::Threading::Thread::Sleep(10);
		busy = true;
		UseWaitCursor = true;
		/*controleer();*/
	}
		//Checks if IP and Port numbers are entered correctly and check if socket can create a connection
	private: void controleer() {
			String^ p1 = ipTextBox->Text->Substring(0, ipTextBox->Text->IndexOf('.')),
				^ rest = ipTextBox->Text->Substring(ipTextBox->Text->IndexOf('.') + 1),
				^ p2 = rest->Substring(0, rest->IndexOf('.'));
			rest = rest->Substring(rest->IndexOf('.') + 1);
			String^ p3 = rest->Substring(0, rest->IndexOf('.'));
			String^ p4 = rest->Substring(rest->IndexOf('.') + 1);

			bool ip = (p1 == "" || p2 == "" || p3 == "" || p4 == ""
				|| p1->Length > 3 || p2->Length > 3 || p3->Length > 3 || p4->Length > 3
				|| p4->Contains(".")) ? false : true;
			bool port = (poortTextBox->Text != "") ? true : false;

			//Check if IP and Port are entered correctly
			if (ip && port) {
				xout("Verbinding controleren met " + ipTextBox->Text
					+ " op poort " + poortTextBox->Text + "...\n");

				bool verbinding = makeConnection();
				if (verbinding)
					xout("Verbinding goed\n\n");
				//closeConnection();
			}
			else {
				xout("Vul een geldig IP adres en poort in\n\n");
			}
			busy = false;
			UseWaitCursor = false;
		}

			 //// TEXTFIELD
		//Empties the output text box when clicked
	private: System::Void wissenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (busy) return;
		outputTextBox->Text = "";
	}
		//Checks if input is correct
	private: System::Void inputTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (busy) { return; }

		if (e->KeyChar == (char)13) {
			String^ text = inputTextBox->Text;

			if (text->Contains("\\") || text->Contains("/") || text->Contains("?") || text->Contains("*") ||
				text->Contains(":") || text->Contains("\"") || text->Contains("<") || text->Contains(">") ||
				text->Contains("|")) {	//Check if input is valid as above characters are not accepted by Windows as file name
										//in case the save checkbox is checked
				xout("Fout: Ongeldige input. Gebruik deze tekens niet: \\ / : * ? \" < > | \n\n");
				return;
			}
			xout(text + "\n");

			if (text->Contains("VRI_ID =") || text->Contains("VRI_ID=")) {
				try {
					VRI_ID = text->Substring(text->IndexOf('=') + 1);
					if (VRI_ID[0] == ' ') {
						VRI_ID = VRI_ID->Substring(1);
					}
					xout("Naam VRI: '" + VRI_ID + "'\n"
						+ "Klopt dit niet, type dan 'VRI_ID' of voer handmatig in door\n"
						+ "commando 'VRI_ID = NAAM' met NAAM als de naam van de VRI\n\n");
					inputTextBox->Text = "";
					return;
				}
				catch (IndexOutOfRangeException^ e) {
					xout("Naam VRI onbekend\n"
						+ "Probeer opnieuw met commando 'VRI_ID' of 'VRI_ID = NAAM'\n\n");
					inputTextBox->Text = "";
					return;
				}
			}

			System::Threading::Thread ^t = gcnew System::Threading::Thread(
				gcnew System::Threading::ThreadStart(this, &GUI::inputSend));
			t->Start();
			System::Threading::Thread::Sleep(10);
			busy = true;
			UseWaitCursor = true;
			/*inputSend();*/
		}
	}
		//Sends text in input text box through socket
	private: void inputSend() {
			String^ text = inputTextBox->Text;

			if (text == "VRI_ID") {	//If VRI_ID is entered, user wants to have VRI_ID set
				inputTextBox->Text = "";	//This is done by sending an empty string and checking the response
				VRI_ID = "";
				getVRI_ID();
				busy = false;
				UseWaitCursor = false;
				return;
			}

			inputTextBox->Text = "";
			inputTextBox->Refresh();

			if (makeConnection()) {
				if (sendData(text)) {
					int time = (text == "pdump") ? timeLong : timeShort;	//Set a long timeout in case a pdump is expected, else short
					if (opslaanCheckBox->Checked == true) {
						String^ fileName = text;
						if (receiveDataSave(fileName, time))
							xout("Gereed\n\n");
					}
					else
						if (receiveDataOutput(time))
							xout("Gereed\n\n");
				}
			}
			//closeConnection();
			busy = false;
			UseWaitCursor = false;
		}
		//If the checkbox is (un)ticked, give feedback to user through output textbox
	private: System::Void opslaanCheckBox_CheckStateChanged(System::Object^  sender, System::EventArgs^  e) {
		if (busy) {
			opslaanCheckBox->Checked = false;
			return;
		}
		if (opslaanCheckBox->Checked == true) {
			if (!folderSelectedLabel->Enabled) {
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
	
			 ///// FOLDER SELECTION
	private: System::Void selecteerFolderButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (busy) { return; }
		selectFolder();
	}
		//Opens Windows Explorer and navigates to the selected folder
	private: System::Void folderSelectedLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		std::string str = "explorer.exe \"";		// notepad.exe "
		str.append(strToChar(directoryPath));
		str += "\"";							// "   str ->  _notepad.exe "C:\..\.txt"_
		LPCSTR openExplorer = str.c_str();
		SetCurrentDirectoryA(strToChar(getPath()));
		WinExec(openExplorer, SW_SHOW);
	}

			 //// PDUMPS
		//Opens selected pDump in Notepad
	private: System::Void pdump1LinkLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		pdump1LinkLabel->Enabled = false;	//Disable the option of double-clicking
		openTextFile(1);
		pdump1LinkLabel->Enabled = true;
	}
		//Opens selected pDump in Notepad
	private: System::Void pdump2LinkLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		pdump2LinkLabel->Enabled = false;	//Disable the option of double-clicking
		openTextFile(2);
		pdump2LinkLabel->Enabled = true;
	}
		//Checks if program is busy and it not starts a pdump request
	private: System::Void pdump1Button_Click(System::Object^  sender, System::EventArgs^  e) {
		if (busy) return; //Check if program is busy / socket is blocking
		
		System::Threading::Thread ^t = gcnew System::Threading::Thread(
			gcnew System::Threading::ThreadStart(this, &GUI::dump1));
		t->Start();
		System::Threading::Thread::Sleep(10);
		busy = true;
		UseWaitCursor = true;
		/*dump1();*/
	}
			//Requests a pdump through the socket and saves it to PDUMP1
		private: void dump1() {
			if (VRI_ID == "") {
				bool succes = getVRI_ID();
				busy = false;
				UseWaitCursor = false;
				if (!succes) {
					return;
				}
			}
			xout("Bezig met pDump1 maken...\n");
			if (makeConnection()) {
				if (sendData("pdump")) {
					String^ pdump1 = "PDUMP 1";
					if (receiveDataSave(pdump1, timeLong)) { //pDump made succesfully
						pdump2Button->Enabled = true;
						fileDump1 = directoryPath + "\\" + savedToFile;
						pdump1LinkLabel->Text = "..\\" + getDirectory() + "\\" + savedToFile;
						pdump1LinkLabel->Enabled = true;
						xout("Gereed\n\n");
					}
				}
			}
			//closeConnection();
			busy = false;
			UseWaitCursor = false;
		}
			//Checks if program is busy and it not starts a pdump request
	private: System::Void pdump2Button_Click(System::Object^  sender, System::EventArgs^  e) {
		if (busy) return; //Check if program is busy / socket is blocking
		
		System::Threading::Thread ^t = gcnew System::Threading::Thread(
			gcnew System::Threading::ThreadStart(this, &GUI::dump2));
		t->Start();
		System::Threading::Thread::Sleep(10);
		UseWaitCursor = true;
		busy = true;
		/*dump2();*/
	}
			//Requests a pdump through the socket and saves it to PDUMP2
		private: void dump2() {
			pdump2Button->Enabled = false;
			resultaatVerschillenButton->Enabled = false;
			bijwerkenButton->Enabled = false;
			resultaatBijwerkenButton->Enabled = false;

			xout("Bezig met pDump2 maken...\n");
			if (makeConnection()) {
				if (sendData("pdump")) {
					String^ pdump2 = "PDUMP 2";
					if (receiveDataSave(pdump2, timeLong)) { //pDump made succesfully
						verschillenButton->Enabled = true;
						fileDump2 = directoryPath + "\\" + savedToFile;
						pdump2LinkLabel->Text = "..\\" + getDirectory() + "\\" + savedToFile;
						pdump2LinkLabel->Enabled = true;
						xout("Gereed\n\n");
					}
				}
			}
			//closeConnection();
			pdump2Button->Enabled = true;
			busy = false;
			UseWaitCursor = false;
		}
		//Opens an OpenFileDialog to select a pDump file as pDump 1
	private: System::Void selecteerDump1Button_Click(System::Object^  sender, System::EventArgs^  e) {
		if (busy) return; //Check if program is busy / socket is blocking
		
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

			directoryPath = path;
			folderSelectedLabel->Text = path;
			folderSelectedLabel->Enabled = true;
			fileDump1 = openFileDialog1->FileName;
			pdump1LinkLabel->Text = "..\\" + parent + "\\" + fileName;
			pdump1LinkLabel->Enabled = true;

			//get VRI_ID from file because of skipped input
			StreamReader^ outputFile = gcnew StreamReader(fileDump1);
			while (!outputFile->EndOfStream) {
				if (VRI_ID != "") {
					break;
				}
				String^ line = outputFile->ReadLine();
				if (line->Contains(">")) {
					String^ id = line->Substring(line->IndexOf(' ') + 1, //found VRI_ID , substrng to set VRI_ID 
						line->IndexOf('>') - (line->IndexOf(' ') + 1));
					VRI_ID = id;
					xout("Naam VRI gevonden: " + VRI_ID + "\n");
				}
			}

		}
		selecteerDump1Button->Enabled = true;
	}
		//Opens an OpenFileDialog to select a pDump file as pDump 2
	private: System::Void selecteerDump2Button_Click(System::Object^  sender, System::EventArgs^  e) {
		if (busy) return; //Check if program is busy / socket is blocking
		
		selecteerDump2Button->Enabled = false;
		resultaatVerschillenButton->Enabled = false;
		bijwerkenButton->Enabled = false;
		resultaatBijwerkenButton->Enabled = false;

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
			verschillenButton->Enabled = true;
		}
		selecteerDump2Button->Enabled = true;
	}

			 //// COMPARE FILES / SEND CHANGES
	private: System::Void verschillenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (busy) return; //Check if program is busy / socket is blocking
		
		if (pdump1LinkLabel->Enabled == false || pdump2LinkLabel->Enabled == false) {
			xout("Fout: Nog niet beide pDump bestanden geselecteerd\n");
			return;
		}
		if ((!pdump1LinkLabel->Text->Contains("DUMP") && !pdump1LinkLabel->Text->Contains("dump")) || !pdump1LinkLabel->Text->Contains(".txt")) {
			xout("Fout: Bestand 1 is geen .txt file of bevat geen 'dump' in de naam\n");
			return;
		}
		if ((!pdump2LinkLabel->Text->Contains("DUMP") && !pdump2LinkLabel->Text->Contains("dump")) || !pdump2LinkLabel->Text->Contains(".txt")) {
			xout("Fout: Bestand 2 is geen .txt file of bevat geen 'dump' in de naam\n");
			return;
		}
		else {
			xout("Bezig met vergelijken van pDump bestanden...\n");
			String^ saveToFile = "verschillen";
			if (compareFiles(saveToFile)) {	//Vergelijken is voltooid
				xout("Gereed\n\n");
				resultaatVerschillenButton->Enabled = true;
				bijwerkenButton->Enabled = true;

				fileLog1 = savedToFile;
				openTextFile(3); //file 3 = fileLog1;
			}
			else
				xout("Vergelijken niet gelukt\n");
		}
	}
	private: System::Void bijwerkenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (busy) return; //Check if program is busy / socket is blocking

		System::Threading::Thread ^t = gcnew System::Threading::Thread(
			gcnew System::Threading::ThreadStart(this, &GUI::changesSend));
		t->Start();
		System::Threading::Thread::Sleep(10);
		busy = true;
		UseWaitCursor = true;
		/*changesSend();*/
	}
		private: void changesSend() {
			xout("Bezig met verschillen in te voeren...\n");
			String^ saveToFile = "wijzigingen";
			if (sendChanges(saveToFile)) {
				xout("Gereed\n\n");
				fileLog2 = savedToFile;
				openTextFile(4);
				resultaatBijwerkenButton->Enabled = true;
				busy = false;
				UseWaitCursor = false;
			}
			else
				xout("Wijzigen niet gelukt\n\n");
			UseWaitCursor = false; 
			busy = false;
		}
	private: System::Void resultaatVerschillenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (busy) return; //Check if program is busy / socket is blocking
		
		resultaatVerschillenButton->Enabled = false;	//Disable the option of double-clicking
		openTextFile(3);
		resultaatVerschillenButton->Enabled = true;
	}
	private: System::Void resultaatBijwerkenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (busy) return; //Check if program is busy / socket is blocking
		
		resultaatBijwerkenButton->Enabled = false;	//Disable the option of double-clicking
		openTextFile(4);
		resultaatBijwerkenButton->Enabled = true;
	}

			 //// AFSLUITEN
	private: System::Void afsluitenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (busy) return; //Check if program is busy / socket is blocking
		
		using System::Windows::Forms::MessageBox;
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			this, "Weet u zeker dat u het programma wilt afsluiten?",
			"Afsluiten", MessageBoxButtons::YesNo);
		if (result == System::Windows::Forms::DialogResult::Yes)
			closeConnection();
			this->Close();
	}
////// END OF GUI COMPONENT FUNCTIONS


//// TEST BUTTONS / Easy access
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
	verschillenButton->Enabled = true;
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
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	busy = false;
	UseWaitCursor = false;
}


};
}