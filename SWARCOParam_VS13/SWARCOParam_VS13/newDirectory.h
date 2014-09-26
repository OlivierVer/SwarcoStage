#pragma once
#include <Windows.h>

namespace SWARCOParam_VS13 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for newDirectory
	/// </summary>
	public ref class newDirectory : public System::Windows::Forms::Form
	{
	public:
		newDirectory(void)
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
		~newDirectory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  naamLabel;
	public: System::Windows::Forms::TextBox^  naamTextBox;
	private: System::Windows::Forms::Button^  opslaanButton;
	private: System::Windows::Forms::Button^  annulerenButton;


	protected:

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
			this->naamLabel = (gcnew System::Windows::Forms::Label());
			this->naamTextBox = (gcnew System::Windows::Forms::TextBox());
			this->opslaanButton = (gcnew System::Windows::Forms::Button());
			this->annulerenButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// naamLabel
			// 
			this->naamLabel->AutoSize = true;
			this->naamLabel->Location = System::Drawing::Point(18, 14);
			this->naamLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->naamLabel->Name = L"naamLabel";
			this->naamLabel->Size = System::Drawing::Size(396, 40);
			this->naamLabel->TabIndex = 0;
			this->naamLabel->Text = L"Geef de naam van het kruispunt op\r\nFormat: Stad_Kruispunt (bv. Breda_Stations"
				L"traat)";
			// 
			// naamTextBox
			// 
			this->naamTextBox->Location = System::Drawing::Point(22, 72);
			this->naamTextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->naamTextBox->Name = L"naamTextBox";
			this->naamTextBox->Size = System::Drawing::Size(385, 26);
			this->naamTextBox->TabIndex = 1;
			this->naamTextBox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &newDirectory::naamTextBox_MouseDown);
			// 
			// opslaanButton
			// 
			this->opslaanButton->Location = System::Drawing::Point(435, 23);
			this->opslaanButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->opslaanButton->Name = L"opslaanButton";
			this->opslaanButton->Size = System::Drawing::Size(112, 35);
			this->opslaanButton->TabIndex = 2;
			this->opslaanButton->Text = L"Opslaan";
			this->opslaanButton->UseVisualStyleBackColor = true;
			this->opslaanButton->Click += gcnew System::EventHandler(this, &newDirectory::opslaanButton_Click);
			// 
			// annulerenButton
			// 
			this->annulerenButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->annulerenButton->Location = System::Drawing::Point(435, 68);
			this->annulerenButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->annulerenButton->Name = L"annulerenButton";
			this->annulerenButton->Size = System::Drawing::Size(112, 35);
			this->annulerenButton->TabIndex = 3;
			this->annulerenButton->Text = L"Annuleren";
			this->annulerenButton->UseVisualStyleBackColor = true;
			this->annulerenButton->Click += gcnew System::EventHandler(this, &newDirectory::annulerenButton_Click);
			// 
			// newDirectory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 123);
			this->Controls->Add(this->annulerenButton);
			this->Controls->Add(this->opslaanButton);
			this->Controls->Add(this->naamTextBox);
			this->Controls->Add(this->naamLabel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"newDirectory";
			this->Text = L"Nieuw kruispunt";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void opslaanButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (naamTextBox->Text == "" || naamTextBox->Text == "Vul kruispunt in") {
			naamTextBox->Text = "Vul kruispunt in";
		}
		else if (!naamTextBox->Text->Contains("_")) {	//TODO: substring voor en na _ mag niet NULL zijn
			naamTextBox->Text = "Gebruik het juiste format";
			}
		else {
			DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
	}
	private: System::Void annulerenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void naamTextBox_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (naamTextBox->Text == "Vul kruispunt in" || naamTextBox->Text == "Gebruik het juiste format")
			naamTextBox->Text = "";
	}
};
}
