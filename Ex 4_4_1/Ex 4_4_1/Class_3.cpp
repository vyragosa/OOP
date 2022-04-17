#include "Class_3.h"
#include <iomanip>
void Class_3::in_out() {
	Base_Class::in_out();
	std::cout << "Array dimension: " << arr_size;
	std::cout << "\nThe original array:";
	for (int i = 0; i < arr_size; i++)
		std::cout << std::right << std::setw(5) << arr[i];
	std::cout << "\nMin: " << Class_1::func();
	std::cout << "\nMax: " << Class_2::func();
}
