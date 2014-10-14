#pragma once

#include <windows.h>
#include <string>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <istream>
#include <tchar.h>


namespace SWARCOParam_VS13 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	class LOCK {
		public: void lockScreen(bool lock) {
			GUI::inputTextBox->Enabled = lock;
			GUI::opslaanCheckBox->Enabled = lock;
			GUI::controleerButton->Enabled = lock;
			GUI::ipTextBox->Enabled = lock;
			GUI::poortTextBox->Enabled = lock;
			GUI::wissenButton->Enabled = lock;
			GUI::selecteerFolderButton->Enabled = lock;
			GUI::selecteerDump1Button->Enabled = lock;
			GUI::selecteerDump2Button->Enabled = lock;
			GUI::pdump1Button->Enabled = lock;
			GUI::pdump2Button->Enabled = lock;
			GUI::verschillenButton->Enabled = lock;
			GUI::resultaatVerschillenButton->Enabled = lock;
			GUI::bijwerkenButton->Enabled = lock;
			GUI::resultaatBijwerkenButton->Enabled = lock;
			GUI::afsluitenButton->Enabled = lock;
		}

		void lockComponent() {

		}
	};
}