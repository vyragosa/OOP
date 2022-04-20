#include "Triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(int a, int b, int c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

int Triangle::P() {
	return a + b + c;
}

double Triangle::S() {
	double pp = P() * 0.5;
	return sqrt(pp * (pp - a) * (pp - b) * (pp - c));
}

Triangle Triangle::operator+=(Triangle& other) {
	if ((b + other.b + c + other.c > a + other.a) && (a + other.a + c + other.c > b + other.b) && (a + other.a + b + other.b > c + other.c))
		return Triangle(a += other.a, b += other.b, c += other.c);
	return Triangle(a, b, c);
}

Triangle Triangle::operator-=(Triangle& other) {
	if ((b - other.b + c - other.c > a - other.a) && (a - other.a + c - other.c > b - other.b) && (a - other.a + b - other.b > c - other.c))
		return Triangle(a -= other.a, b -= other.b, c -= other.c);
	return Triangle(a, b, c);
}

void Triangle::Output() {
	std::cout << "a = " << a << "; b = " << b << "; c = " << c << ".";
}