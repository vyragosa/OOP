#include "Class_1.h"
#include <iostream>
void Class_1::Input() {
	std::cin >> arr_size;
	arr = new int[arr_size];
	for (int i = 0; i < arr_size; i++)
		std::cin >> arr[i];
}