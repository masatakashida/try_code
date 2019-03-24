#pragma once

#include <chrono>

class Stopwatch final
{
public:
private:
	std::chrono::system_clock::time_point start_time_;
public:
	Stopwatch();
	~Stopwatch();

	void start_();
	void reset_();
	double getLapTime_();
private:
};