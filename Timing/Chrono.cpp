#include <iostream>
#include <chrono>
#include <thread>

//useful to check performance of code.
struct Timer {
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float, std::milli> duration;

	Timer()
	{
		auto start = std::chrono::high_resolution_clock::now(); 
	}

	~Timer() {
		auto end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float ms = duration.count();
		std::cout << "Time took:" << ms << "ms" << std::endl;
	}
};

void DoSomething() {
	Timer timer;

	for (int i = 0; i < 100; i++)
		std::cout << "working\n";
}

int main() { 
	DoSomething();
}