#ifndef CLASS_7
#define CLASS_7
#include <string>
#include "Class_4.h"
#include "Class_5.h"
class Class_7 : public Class_4, Class_5 {
	std::string Object_Name;
public:
	Class_7(std::string Object_Name);
	std::string Get_Object_Name();
};
#endif