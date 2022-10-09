//std::sort
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

int main() {
	std::vector<int> ints = {13,4,5,3,20,7,86,1,23};

	//The last parameter is predicate which determines the way of sorting.
	std::sort(ints.begin(), ints.end(), [](int a, int b) {
		// return true if the first argument is less than second argument
		// if true a first, b later 
		return a < b;
		});

	for (auto i : ints)
		std::cout << i << std::endl;
} 