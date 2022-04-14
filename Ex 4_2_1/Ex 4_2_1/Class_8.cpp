#include "Class_8.h"

Class_8::Class_8(std::string Object_Name) : Class_6(Object_Name), Class_7(Object_Name) {
	this->Object_Name = Object_Name + "_8";
}

std::string Class_8::Get_Object_Name() {
	return Object_Name;
}