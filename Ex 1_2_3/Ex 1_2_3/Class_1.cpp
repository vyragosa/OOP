#include "Class_1.h"
void Class_1::Set_n(long long n) {
	this->n = n;
}
void Class_1::Calculate() {
	long long n = this->n, digits = 0;
	if (n == 0)
		digits += 1;
	while (n) {
		digits += 1;
		n /= 10;
	}
	this->digits = digits;
}
long long Class_1::Get_n() {
	return n;
}
int Class_1::Get_digits() {
	return digits;
}