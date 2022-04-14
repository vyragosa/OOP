#ifndef CLASS_6
#define CLASS_6
#include <string>
#include "Class_2.h"
#include "Class_3.h"
class Class_6 : public Class_2, Class_3 {
	std::string Object_Name;
public:
	Class_6(std::string Object_Name);
	std::string Get_Object_Name();
};
#endif