#include "Unions.h"
#include "VirtualDestructor.h"

int main() {
	//Union example
	/*Vec4 vec4 = {1.0f,2.0f,3.0f,4.0f};
	printVector(vec4.a);
	vec4.z = 500.0f;
	printVector(vec4.b);*/

	//Virtual destructor example
	//1. construct and destruct base class
	Base* aBase = new Base();
	delete aBase;
	std::cout << "------" << std::endl;

	//2. construct and destruct both of Base and Derived class because Derived inherits Base
	Derived* aDer = new Derived();
	delete aDer;
	std::cout << "------" << std::endl;

	//Execption comes here:
	//3. we construct Derived class and assign it into poly as an type of Base pointer
	Base* poly = new Derived();
	//When we destruct poly without virtual destructor, it destruct Base class, not Derived class.
	//So virtual destructor is reall important to prevent memory leak
	delete poly;
	std::cout << "------" << std::endl;
}