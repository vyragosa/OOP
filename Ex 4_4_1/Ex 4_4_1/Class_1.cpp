#include "Class_1.h"

int Class_1::func() {
	int min = arr[0];
	for (int i = 1; i < arr_size; i++)
		min -= arr[i];
	return min;
}
