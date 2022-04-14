#ifndef CLASS_3_H
#define CLASS_3_H
#include <string>
#include "Class_2.h"
class Class_3 : private Class_2 {
	std::string obj_name;
	int numb;
public:
	Class_3(std::string obj_name, int numb);
	void Output();
};

#endif

