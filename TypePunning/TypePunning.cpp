//Cpp strongly typed
//While cpp is strongly typed language, it doesn't enforce it because we can access in memory space 
#include <iostream>

struct Entity {
	int x, y;
};

int main() {
	int a = 5;
	double b = a; //implicit conversion
	double c = (double)a; //explicit conv
	//If we use memory debugger, we can just check it represent entirely different memory structure

	//What if we want to keep memory structure, only want to change its type from int to double? : Type punning
	//1. Raw way
	double d = *(double*)&a; // Get an address of a -> convert it into double pointer -> dereference it to assigin into 'd'; But this has a possibility of program crash.

	//another example
	Entity e1 = {5,8};
	//This will be useful sometimes when we don't want to allocate memory space for big arrays
	int* position = (int*)&e1; //now we get entity properties as an array

 	std::cin.get();
} 