#include "Class_2.h"

int Class_2::func() {
	int Max = arr[0];
	for (int i = 1; i < arr_size; i++)
		Max += arr[i];
	return Max;
}
