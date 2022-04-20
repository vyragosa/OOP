#include "Triangle.h"
#include <iostream>
Triangle::Triangle(int a, int b, int c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

Triangle Triangle::operator+(Triangle& other) {
	return Triangle(a + other.a, b + other.b, c + other.c);
}

Triangle Triangle::operator-(Triangle& other) {
	if (a - other.a > 0 && b - other.b > 0 && c - other.c > 0)
		return Triangle(a - other.a, b - other.b, c - other.c);
	return Triangle(a, b, c);
}

void Triangle::Output() {
	std::cout << "a = " << a << "; b = " << b << "; c = " << c << ".";
}