#include "Class_5.h"

Class_5::Class_5(std::string Object_Name) : Class_1(Object_Name) {
	this->Object_Name = Object_Name + "_5";
}

std::string Class_5::Get_Object_Name() {
	return Object_Name;
}
