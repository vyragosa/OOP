#include <iostream>
#include <string>
#include "Class_4.h"

int main() {
	std::string Object_Name;
	int Numb;
	std::cin >> Object_Name >> Numb;
	Class_4 obj(Object_Name, Numb);
	return 0;
}