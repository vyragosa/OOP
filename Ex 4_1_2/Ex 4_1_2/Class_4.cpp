#include "Class_4.h"
#include <iostream>
Class_4::Class_4(std::string obj_name, int numb) : Class_3 (obj_name, numb) {
	this->obj_name = obj_name + "_4";
	this->numb = pow(numb, 4);
	Output();
}

void Class_4::Output() {
	std::cout << obj_name << " " << numb;
}
