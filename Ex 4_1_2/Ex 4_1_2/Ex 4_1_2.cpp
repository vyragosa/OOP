#include <iostream>
#include <string>
#include "Class_1.h"
#include "Class_2.h"
#include "Class_3.h"
#include "Class_4.h"

int main() {
	std::string obj_name;
	int numb;
	std::cin >> obj_name >> numb;
	Class_4 obj(obj_name, numb);
	return 0;
}