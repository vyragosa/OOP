#ifndef CLASS_5
#define CLASS_5
#include <string>
#include "Class_1.h"
class Class_5 : public Class_1 {
	std::string Object_Name;
public:
	Class_5(std::string Object_Name);
	std::string Get_Object_Name();
};
#endif