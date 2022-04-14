#ifndef CLASS_2_H
#define CLASS_2_H
#include <string>
#include "Class_1.h"
class Class_2 : private Class_1 {
	std::string Object_Name;
	int Numb;
public:
	Class_2(std::string Object_Name, int Numb);
	void Output();
};

#endif