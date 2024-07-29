#include "Checktime.h"

std::chrono::system_clock::time_point timeWhenProgramBegun;

std::chrono::system_clock::duration programTimeCalculated;



void BeginTimeCalculating()
{

	timeWhenProgramBegun = std::chrono::system_clock::now();

}

void EndTimeCalculating()
{
	
	programTimeCalculated = std::chrono::system_clock::now() - timeWhenProgramBegun;

}

void PrintCalculatedTime()
{

	std::cout << std::chrono::duration_cast<std::chrono::minutes> (programTimeCalculated).count() << " m ";

	std::cout << std::chrono::duration_cast<std::chrono::seconds> (programTimeCalculated).count() << " s ";

	std::cout << std::chrono::duration_cast<std::chrono::milliseconds> (programTimeCalculated).count() << " ms";

}
