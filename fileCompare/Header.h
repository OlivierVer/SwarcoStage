#ifndef _asda_
#define _asda_

#include <windows.h>
#include <stdio.h>

namespace fileCompare {

	using namespace System;
	using namespace System::IO;
	using namespace std;

	ref class Source {
	public:
		Source();

		StreamWriter^ writer;
		StreamReader^ reader1;
		StreamReader^ reader2;
	};

}
#endif