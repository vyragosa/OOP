#include "Class_1.h"

Class_1::Class_1(std::string Object_Name) {
	this->Object_Name = Object_Name + "_1";
}

std::string Class_1::Get_Object_Name() {
	return Object_Name;
}
