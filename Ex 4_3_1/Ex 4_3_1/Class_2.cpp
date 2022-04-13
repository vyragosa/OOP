#include "Class_2.h"
#include <iomanip>
#include <iostream>
void Class_2::Sort() {
	for (int i = 0; i < arr_size - 1; i++)
		for (int j = 0; j < arr_size - i - 1; j++)
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}

void Class_2::Output() {
	for (int i = 0; i < arr_size; i++)
		std::cout << std::right << std::setw(5) << arr[i];
}