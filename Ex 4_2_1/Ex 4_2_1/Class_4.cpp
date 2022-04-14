#include "Class_4.h"

Class_4::Class_4(std::string Object_Name) : Class_1(Object_Name) {
	this->Object_Name = Object_Name + "_4";
}

std::string Class_4::Get_Object_Name() {
	return Object_Name;
}
