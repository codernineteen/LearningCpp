#include <iostream>
#include <array>

template<int N>
void printArray(const std::array<int, N>& data) {
	for (int i = 0; i < data.size(); i++) {
		std::cout << data[i] << std::endl;
	}
}

int main() {
	//Like traditional array , we need to set array type and size before we initialize it. 
	//In memory perspective, both new and old way works samely
	//By using std::array, we can use its size method(size method doesn't hold any variable in somewhere , it just literally return size)
	//standard array also provides optional bounce checking
	std::array<int, 5> data;
	for (int i = 0; i < data.size(); i++) { 
		data[i] = i;
	}

	printArray(data);
}