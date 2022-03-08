#include "Expression.h"

int Expression::solution(int x, char sign, int y)
{
	if  (sign == '+')
		return x + y;
	if (sign == '-')
		return x - y;
	if (sign == '*')
		return x * y;
	if (sign == '%')
		return x / y;
}

void Expression::printSolution(int numb)
{
	cout << numb << endl;
}
