#include <iostream>
#include <thread>

static bool s_finished = false;

void DoWork() {
	using namespace std::literals::chrono_literals;

	while (!s_finished)
	{
		std::cout << "waiting \n";
		std::this_thread::sleep_for(1s);
	}
}

int main() {
	//our thread worker do a specific worker asynchronously while our code running 
	std::thread worker(DoWork);

	std::cin.get(); //By press enter, we change static variable's value and worker affected by this static variable
	s_finished = true;

	worker.join(); 
}