#include "Stopwatch.h"

#include <iostream>

int main()
{
	Stopwatch stopwatch;
	stopwatch.start_();
	constexpr int kCount{ 10000000 };

	// printf
	stopwatch.reset_();
	int i = 0;
	while (i < kCount)
	{
		printf("Hello World\n");
		i++;
	}
	const double kTimeForPrintf{ stopwatch.getLapMiliTime_() };

	// std::cout
	stopwatch.reset_();
	int j = 0;
	while (j < kCount)
	{
		std::cout << "Hello World" << std::endl;
		j++;
	}
	const double kTimeForStdCout{ stopwatch.getLapMiliTime_() };

	// result
	std::cout << "'printf' : " << kTimeForPrintf << " ms" << std::endl;
	std::cout << "'std::cout' : " << kTimeForStdCout << " ms" << std::endl;

	return 0;
}