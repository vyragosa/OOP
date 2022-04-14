#ifndef CLASS_3_H
#define CLASS_3_H
#include <string>
#include "Class_2.h"
class Class_3 : private Class_2 {
	std::string Object_Name;
	int Numb;
public:
	Class_3(std::string Object_Name, int Numb);
	void Output();
};

#endif