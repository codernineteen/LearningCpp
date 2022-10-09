#pragma once
#include <iostream>


class Base {
public:
	Base() {std::cout << "Base Constructed" << std::endl;}
	//Because this class has a possiblity to be extended for subclass, we can prevent memory leak by adding virtual keyword
	virtual ~Base() { std::cout << "Base Destructed" << std::endl; }
};

//inherit Base
class Derived : public Base {
public:
	Derived() { std::cout << "Derived Constructed" << std::endl; }
	~Derived() { std::cout << "Derived Destructed" << std::endl; }
};
