#include "Expression.h"
int main()
{
	int x, y;
	char sign;
	Expression obj;
	cin >> x >> sign >> y;
	obj.solution1(x, sign, y);
	cin >> sign >> y;
	obj.solution2(sign, y);
	cin >> sign >> y;
	obj.solution2(sign, y);
	obj.result();
	return 0;
}
