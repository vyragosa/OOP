#ifndef CLASS_3
#define CLASS_3
#include <string>
#include "Class_1.h"
class Class_3 : public Class_1 {
	std::string Object_Name;
public:
	Class_3(std::string Object_Name);
	std::string Get_Object_Name();
};
#endif