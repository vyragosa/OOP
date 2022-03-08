#include "Triangle.h"
#include <cmath>
Triangle::Triangle(int _a, int _b, int _c)
{
	a = _a;
	b = _b;
	c = _c;
}
int Triangle::P()
{
	return a + b + c;
}
double Triangle::S()
{
	double pp = P() * 0.5;
	return sqrt(pp * (pp - a) * (pp - b) * (pp - c));
}