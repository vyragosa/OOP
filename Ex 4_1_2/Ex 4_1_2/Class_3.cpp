#include "Class_3.h"
#include <iostream>
Class_3::Class_3(std::string obj_name, int numb) : Class_2(obj_name, numb) {
	this->obj_name = obj_name + "_3";
	this->numb = pow(numb, 3);
	Output();
}

void Class_3::Output() {
	std::cout << obj_name << " " << numb << std::endl;
}
