#pragma once

namespace SWARCOParam_VS13 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IPchange
	/// </summary>
	public ref class IPchange : public System::Windows::Forms::Form
	{
	public:
		IPchange(void)
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
		~IPchange()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  nieuwipLabel;
	private: System::Windows::Forms::Label^  nieuwpoortLabel;
	private: System::Windows::Forms::TextBox^  nieuwipTextBox;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  opslaanButton;
	private: System::Windows::Forms::Button^  annulerenButton;
	protected:

	protected:

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
			this->nieuwipLabel = (gcnew System::Windows::Forms::Label());
			this->nieuwpoortLabel = (gcnew System::Windows::Forms::Label());
			this->nieuwipTextBox = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->opslaanButton = (gcnew System::Windows::Forms::Button());
			this->annulerenButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// nieuwipLabel
			// 
			this->nieuwipLabel->AutoSize = true;
			this->nieuwipLabel->Location = System::Drawing::Point(12, 9);
			this->nieuwipLabel->Name = L"nieuwipLabel";
			this->nieuwipLabel->Size = System::Drawing::Size(53, 13);
			this->nieuwipLabel->TabIndex = 0;
			this->nieuwipLabel->Text = L"Nieuw IP:";
			// 
			// nieuwpoortLabel
			// 
			this->nieuwpoortLabel->AutoSize = true;
			this->nieuwpoortLabel->Location = System::Drawing::Point(11, 40);
			this->nieuwpoortLabel->Name = L"nieuwpoortLabel";
			this->nieuwpoortLabel->Size = System::Drawing::Size(71, 13);
			this->nieuwpoortLabel->TabIndex = 1;
			this->nieuwpoortLabel->Text = L"Nieuwe Poort";
			// 
			// nieuwipTextBox
			// 
			this->nieuwipTextBox->Location = System::Drawing::Point(91, 6);
			this->nieuwipTextBox->Name = L"nieuwipTextBox";
			this->nieuwipTextBox->Size = System::Drawing::Size(90, 20);
			this->nieuwipTextBox->TabIndex = 2;
			this->nieuwipTextBox->Text = L"0.0.0.0";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(91, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(33, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"7000";
			// 
			// opslaanButton
			// 
			this->opslaanButton->Location = System::Drawing::Point(187, 4);
			this->opslaanButton->Name = L"opslaanButton";
			this->opslaanButton->Size = System::Drawing::Size(75, 23);
			this->opslaanButton->TabIndex = 4;
			this->opslaanButton->Text = L"Opslaan";
			this->opslaanButton->UseVisualStyleBackColor = true;
			this->opslaanButton->Click += gcnew System::EventHandler(this, &IPchange::opslaanButton_Click);
			// 
			// annulerenButton
			// 
			this->annulerenButton->Location = System::Drawing::Point(187, 35);
			this->annulerenButton->Name = L"annulerenButton";
			this->annulerenButton->Size = System::Drawing::Size(75, 23);
			this->annulerenButton->TabIndex = 5;
			this->annulerenButton->Text = L"Annuleren";
			this->annulerenButton->UseVisualStyleBackColor = true;
			this->annulerenButton->Click += gcnew System::EventHandler(this, &IPchange::annulerenButton_Click);
			// 
			// IPchange
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(275, 63);
			this->Controls->Add(this->annulerenButton);
			this->Controls->Add(this->opslaanButton);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->nieuwipTextBox);
			this->Controls->Add(this->nieuwpoortLabel);
			this->Controls->Add(this->nieuwipLabel);
			this->Name = L"IPchange";
			this->Text = L"IPchange";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void annulerenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void opslaanButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
