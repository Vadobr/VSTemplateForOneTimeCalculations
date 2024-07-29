#pragma once
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

#include "ResultType.h"

void OutputToFile(ResultType data) {

	char filename[] = "result.txt";

	ofstream fileOutput;

	fileOutput.open(filename, std::ios::app);

	if (!fileOutput.is_open()) {

		cout << "Could not open file" << endl;

		return;

	}

	std::string resultString = std::to_string(data);

	fileOutput << endl << data << endl;

	cout << "Data has been appended to the file \"" << filename << '\"' << endl << endl;

}