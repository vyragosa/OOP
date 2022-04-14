#include "Class_2.h"
#include <iostream>
#include <cmath>
Class_2::Class_2(std::string Object_Name, int Numb) : Class_1(Object_Name, Numb) {
	this->Object_Name = Object_Name + "_2";
	this->Numb = pow(Numb, 2);
	Output();
}

void Class_2::Output() {
	std::cout << Object_Name << " " << Numb << std::endl;
}