#include "Class_4.h"
#include <iostream>
Class_2::Class_2(std::string obj_name, int numb) : Class_1(obj_name, numb) {
	this->obj_name = obj_name + "_2";
	this->numb = pow(numb, 2);
	Output();
}

void Class_2::Output() {
	std::cout << obj_name << " " << numb << std::endl;
}