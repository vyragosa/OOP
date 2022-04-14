#ifndef CLASS_8
#define CLASS_8
#include <string>
#include "Class_6.h"
#include "Class_7.h"
class Class_8 : public Class_6, Class_7 {
	std::string Object_Name;
public:
	Class_8(std::string Object_Name);
	std::string Get_Object_Name();
};
#endif