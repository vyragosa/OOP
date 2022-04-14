#ifndef CLASS_4
#define CLASS_4
#include <string>
#include "Class_1.h"
class Class_4 : public Class_1 {
	std::string Object_Name;
public:
	Class_4(std::string Object_Name);
	std::string Get_Object_Name();
};
#endif