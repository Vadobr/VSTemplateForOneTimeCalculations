#include <iostream>
#include <conio.h>
#include "Workspace.h"
#include "Checktime.h"
#include "ClipboardCopying.h"
#include "OutputToFile.h"

using namespace std;

int main() {

	cout << "Project Started\n\n";

	BeginTimeCalculating();

	auto result = Workspace();

	EndTimeCalculating();

	cout << "\t" << result;

	cout << "\n\nDone!\t";
	
	PrintCalculatedTime();

	cout << endl << endl;

	CopyToClipboard(std::to_string(result));

	OutputToFile(result);

	char c = _getch();

	return 0;
}