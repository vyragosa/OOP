#ifndef CLASS_4_H
#define CLASS_4_H
#include <string>
#include "Class_3.h"
class Class_4 : private Class_3 {
	std::string Object_Name;
	int Numb;
public:
	Class_4(std::string Object_Name, int Numb);
	void Output();
};

#endif