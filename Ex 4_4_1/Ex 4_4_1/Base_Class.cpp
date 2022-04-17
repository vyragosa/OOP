#include "Base_Class.h"

void Base_Class::in_out() {
	std::cin >> arr_size;
	arr = new int[arr_size];
	for (int i = 0; i < arr_size; i++)
		std::cin >> arr[i];
}
