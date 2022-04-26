#include "Expression.h"
void Expression::solution1(int x, char sign, int y)
{
	if (sign == '+')
		solution = x + y;
	else if (sign == '-')
		solution = x - y;
	else if (sign == '*')
		solution = x * y;
	else if (sign == '%')
		solution = x % y;
}
void Expression::solution2(char sign, int y)
{
	if (sign == '+')
		solution = solution + y;
	else if (sign == '-')
		solution = solution - y;
	else if (sign == '*')
		solution = solution * y;
	else if (sign == '%')
		solution = solution % y;
}
void Expression::result()
{
	cout << solution;
}