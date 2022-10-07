#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

//To access in capture, let's use functional library instead of raw function pointer
void ForEach(const std::vector<int>& values, const std::function<void(int)>& func)
{
	for (int v : values) {
		func(v);
	}
}

int main() {
	std::vector<int> values = { 1,2,3,4,5 };
	//Sometimes we need to define a function instantly according to situation.
	//In this case, Lamnda coming handy

	//To pass a variable in lambda, we use capture(variable in square brackets. Use & if it is reference)
	int a = 1;
	ForEach(values, [&a](int value) {std::cout << value << ", Captured : " << a << std::endl; });

	//Usage
	auto it = std::find_if(values.begin(), values.end(), [](int v) { return v > 3; });

	std::cout << *it << std::endl;
}