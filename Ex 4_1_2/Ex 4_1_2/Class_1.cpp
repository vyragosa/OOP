#include "Class_1.h"
#include <iostream>
#include <cmath>
Class_1::Class_1(std::string Object_Name, int Numb) {
	this->Object_Name = Object_Name + "_1";
	this->Numb = Numb;
	Output();
}

void Class_1::Output() {
	std::cout << Object_Name << " " << Numb << std::endl;
}