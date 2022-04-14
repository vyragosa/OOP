#include "Class_3.h"
#include <iostream>
#include <cmath>
Class_3::Class_3(std::string Object_Name, int Numb) : Class_2(Object_Name, Numb) {
	this->Object_Name = Object_Name + "_3";
	this->Numb = pow(Numb, 3);
	Output();
}

void Class_3::Output() {
	std::cout << Object_Name << " " << Numb << std::endl;
}