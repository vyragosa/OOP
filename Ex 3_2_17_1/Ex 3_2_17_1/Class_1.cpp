#include "Class_1.h"
#include <iostream>
#include <iomanip>
Class_1::Class_1(int n) {
	this->n = n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
		arr[i] = i * i;
}

void Class_1::Output() {
	for (int i = n - 1; i >= 0; i--)
		std::cout << std::setw(5) << arr[i];
}