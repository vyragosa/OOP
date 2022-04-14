#ifndef CLASS_2
#define CLASS_2
#include <string>
#include "Class_1.h"
class Class_2 : public Class_1 {
	std::string Object_Name;
public:
	Class_2(std::string Object_Name);
	std::string Get_Object_Name();
};
#endif