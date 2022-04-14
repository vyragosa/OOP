#ifndef CLASS_2_H
#define CLASS_2_H
#include <string>
#include "Class_1.h"
class Class_2 : private Class_1 {
	std::string obj_name;
	int numb;
public:
	Class_2(std::string obj_name, int numb);
	void Output();
};

#endif

