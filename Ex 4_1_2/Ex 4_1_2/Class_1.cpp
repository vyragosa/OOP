#include "Class_1.h"
#include <iostream>
Class_1::Class_1(std::string obj_name, int numb) {
	this->obj_name = obj_name + "_1";
	this->numb = numb;
	Output();
}

void Class_1::Output() {
	std::cout << obj_name << " " << numb << std::endl;
}
