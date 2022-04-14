#include "Class_7.h"

Class_7::Class_7(std::string Object_Name) : Class_4(Object_Name), Class_5(Object_Name) {
	this->Object_Name = Object_Name + "_7";
}

std::string Class_7::Get_Object_Name() {
	return Object_Name;
}
