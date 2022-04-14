#include "Class_6.h"

Class_6::Class_6(std::string Object_Name) : Class_2(Object_Name), Class_3(Object_Name) {
	this->Object_Name = Object_Name + "_6";
}

std::string Class_6::Get_Object_Name() {
	return Object_Name;
}
