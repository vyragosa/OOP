﻿#include "Expression.h"
int main() {
	int x, y, i = 0;
	char sign;
	Expression obj;
	cin >> x;
	while (true) {
		cin >> sign;
		if (sign == 'C')
			break;
		cin >> y;
		x = obj.solution(x, sign, y);
		if (++i % 3 == 0) {
			if (i != 3)
				cout << endl;
			obj.printSolution(x);
		}
	}
	return 0;
}