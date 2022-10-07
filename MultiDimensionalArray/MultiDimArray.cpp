#include <iostream>

int main() {
	//multi-dimensional array is array of arrays , array of arrays of array and so on..

	//heap allocation array
	//int* arr = new int[50]; //allocating 50 integers , arr [int1, ... , int50]

	//2D - array : a outer array stores buffers of arrays
	int** twoDArray = new int*[50]; //allocating 50 int pointers, twoDArray [ int ptr1, ... , int ptr50]; and each int ptr will points to int[50] array;

	for (int i = 0; i < 50; i++) {
		twoDArray[i] = new int[50];
	}

	for (int i = 0; i < 50; i++) {
		delete[] twoDArray[i];
	}
	delete[] twoDArray;
	
	//three dimensional array;
	/*int*** threeDArray = new int** [50];
	for (int i = 0; i < 50; i++) {
		threeDArray[i] = new int*[50];
		for (int j = 0; j < 50; j++) {
			int** ptr = threeDArray[i];
			ptr[j] = new int[50];
		}
	}*/
}