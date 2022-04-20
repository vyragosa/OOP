#include "Class_2.h"

int Class_2::Calculation(int x)
{
	return a1*x+a2*x*x;
}

Class_2::Class_2(int a1, int a2) : Class_1(a1)
{
	this->a2 = a2;
}
