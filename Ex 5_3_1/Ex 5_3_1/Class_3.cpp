#include "Class_3.h"
Class_3::Class_3(int a1, int a2, int a3) : Class_2(a1, a2) {
	this->a3 = a3;
}
int Class_3::Calculation(int x) {
	return a1 * x + a2 * x * x + a3 * x * x * x;
}