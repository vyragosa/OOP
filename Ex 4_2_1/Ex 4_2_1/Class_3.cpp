#include "Class_3.h"

Class_3::Class_3(std::string Object_Name) : Class_1(Object_Name) {
	this->Object_Name = Object_Name + "_3";
}

std::string Class_3::Get_Object_Name() {
	return Object_Name;
}