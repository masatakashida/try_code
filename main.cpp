#include "Stopwatch.h"

#include <iostream>

int main()
{
	Stopwatch stopwatch;

	stopwatch.start_();
	int i = 0;
	while (i < 10000)
	{
		printf("Hello World\n");
		i++;
	}

	const double kTimeForPrintf{ stopwatch.getLapTime_() };
	std::cout << "printf : " << kTimeForPrintf << " ms" << std::endl;

	stopwatch.reset_();
	int j = 0;
	while (j < 10000)
	{
		std::cout << "Hello World" << std::endl;
		j++;
	}

	const double kTimeForStdCout{ stopwatch.getLapTime_() }; 
	std::cout << "std::cout : " << kTimeForStdCout << " ms" << std::endl;

	return 0;
}