#include "Class_2.h"

Class_2::Class_2(std::string Object_Name) : Class_1(Object_Name) {
	this->Object_Name = Object_Name + "_2";
}

std::string Class_2::Get_Object_Name() {
	return Object_Name;
}