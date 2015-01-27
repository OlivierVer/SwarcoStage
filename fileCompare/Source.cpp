#include <windows.h>
#include <stdio.h>

namespace fileCompare {

	using namespace System;
	using namespace System::IO;
	using namespace std;

	namespace fileCompare {

		int countChar(String^ str, char ch) {
			int count = 0;
			for (int i = 0; i < str->Length; i++) {
				if (str[i] == ch) count++;
			}
			return count;
		}

		[STAThread]
		void Source(array<String^>^ args) {

			StreamWriter^ writer = gcnew StreamWriter(
				"C:\\Hogeschool van Amsterdam\\SWARCO\\SwarcoStage\\CCOL-ITC2 opdracht\\Ccol\\Result.txt");
			StreamReader^ reader1 = gcnew StreamReader(	//C++ PTC2 output
				"C:\\Hogeschool van Amsterdam\\SWARCO\\SwarcoStage\\CCOL-ITC2 opdracht\\Ccol\\Out.PTC2");
			StreamReader^ reader2 = gcnew StreamReader(	//C# PTC2 output
				"C:\\Hogeschool van Amsterdam\\SWARCO\\SwarcoStage\\CCOL-ITC2 opdracht\\Ccol\\OutCsharp.PTC2");
			int regelNummer = 0;
			bool changed = false;
			String^ makeWorkID = "";

			writer->WriteLine("Verschillen in files:");

			while (!reader2->EndOfStream) {
				regelNummer++;

				String^ line1 = reader1->ReadLine();
				String^ line2 = reader2->ReadLine();

				/////////////
				///// TEST SEMICOLONS
				/////////////
				/*
				if (line1 == "" || line2 == "" || line1->Contains("Ne")) continue;
				if (line1->Contains("6.94.9.12")) break;

				int semicolon1 = countChar(line1, ';');
				int semicolon2 = countChar(line2, ';');

				if (semicolon1 != semicolon2) {
					writer->WriteLine("(" + regelNummer + "):" + semicolon1 + " anders dan " + semicolon2);
				}
				*/
			

				/////////////
				///// TEST EXACT SAME FILE
				////////////
				
				if (line2->Contains("Work")) {
					int startindex = line2->IndexOf(':');
					makeWorkID = line2->Substring(startindex + 2, 8);	//8 is Length of "Work.XXX"
					changed = true;
				}

				if (line1 != line2) {
					if (changed) {
						writer->WriteLine(makeWorkID);
						changed = false;
					}
					writer->WriteLine("CPP(" + regelNummer + "):" + line1);
					writer->WriteLine("C# (" + regelNummer + "):" + line2);
					writer->WriteLine("");
				}
	

			}

			writer->WriteLine("Klaar");
			writer->Close();

			WinExec("notepad.exe \"C:\\Hogeschool van Amsterdam\\SWARCO\\SwarcoStage\\CCOL-ITC2 opdracht\\Ccol\\Result.txt\"" , SW_SHOW);
		}
	}
}