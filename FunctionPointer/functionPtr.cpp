#include <iostream>
#include <string>
#include <vector>


void HelloWorld() {
	std::cout << "hello world!" << std::endl;
}

void printParam(std::string str) {
	std::cout << str << std::endl;
}

void printInt(int i) {
	std::cout << i << std::endl;
}

void ForEach(const std::vector<int>& vec, void(*func)(int)) {
	for (int v : vec) {
		func(v);
	}
}

int main() {
	//function is a symbol that hold a series of code which we want to call in a specific time
	HelloWorld();

	//Meanwhile, we can actually assign a funtion to a variable and use function as a parameter
	auto func1 = HelloWorld;
	func1();

	//The actual type of function pointer will be:
	void(*funcPtr)() = HelloWorld;
	funcPtr();

	//We can use typedef to shorten its type
	typedef void(*funcionPtr)();

	funcionPtr func2 = HelloWorld;
	func2();

	//If there is a parameter in function, we need to do:
	typedef void(*funcPtrWithParams)(std::string);
	funcPtrWithParams func3 = printParam;
	func3("Jello Weird!");

	//useful examples
	//Implement callback function
	// or we can use lambda instead of using actual function (If you are javascript programmer, You can compare this lambda with arrow functions)
	std::vector<int> vec1 = { 1,2,3,4,5 };
	ForEach(vec1, printInt);
	ForEach(vec1, [](int value) {std::cout << value << std::endl; });
}