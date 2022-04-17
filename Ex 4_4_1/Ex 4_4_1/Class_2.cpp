#include "Class_2.h"

int Class_2::func() {
	int max = arr[0];
	for (int i = 1; i < arr_size; i++)
		max += arr[i];
	return max;
}
