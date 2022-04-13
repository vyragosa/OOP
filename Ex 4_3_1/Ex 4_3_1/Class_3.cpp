#include "Class_3.h"
#include <iostream>
void Class_3::Create_App() {
	Input();
	std::cout << "Array dimension : " << arr_size;
	std::cout << "\nThe original array:";
	Output();
	Sort();
	std::cout << "\nAn ordered array:";
	Output();
}