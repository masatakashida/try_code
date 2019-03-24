#include "Stopwatch.h"

Stopwatch::Stopwatch(){};
Stopwatch::~Stopwatch(){};

void Stopwatch::start_()
{
	start_time_ = std::chrono::system_clock::now();
}

void Stopwatch::reset_()
{
	start_time_ = std::chrono::system_clock::now();
}

double Stopwatch::getLapNanoTime_()
{
	std::chrono::system_clock::time_point now_time{ std::chrono::system_clock::now() };
	const double kLapTime{ (double)std::chrono::duration_cast<std::chrono::nanoseconds>(now_time - start_time_).count() };
	return kLapTime;
}

double Stopwatch::getLapMiliTime_()
{
	std::chrono::system_clock::time_point now_time{ std::chrono::system_clock::now() };
	const double kLapTime{ (double)std::chrono::duration_cast<std::chrono::milliseconds>(now_time - start_time_).count() };
	return kLapTime;
}