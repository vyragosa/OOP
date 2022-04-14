#include "Class_4.h"
#include <iostream>
#include <cmath>
Class_4::Class_4(std::string Object_Name, int Numb) : Class_3(Object_Name, Numb) {
	this->Object_Name = Object_Name + "_4";
	this->Numb = pow(Numb, 4);
	Output();
}

void Class_4::Output() {
	std::cout << Object_Name << " " << Numb;
}