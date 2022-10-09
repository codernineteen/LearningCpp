#pragma once

//unions
#include <iostream>

struct Vec2
{
	float x, y;
};

struct Vec4
{
	//union only can have one member 
	//To holde x,y,z value, we can take an advantage of anonymous struct
	//In Below example, two different struct occupy same mem spaces
	union
	{
		struct {
			float x, y, z, w;
		};
		struct {
			Vec2 a, b; // a will be same memory with x,y / b will be z,w
		};
	};
};

//Because we set mem space for vector2 in union, we can use this function with Vector4 type with its union property
void printVector(const Vec2& vec) {
	std::cout << "x:" << vec.x << ', ' << "y:" << vec.y << std::endl;
};
