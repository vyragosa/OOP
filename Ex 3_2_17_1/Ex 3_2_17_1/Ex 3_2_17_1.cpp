#include <iostream>
#include "Class_1.h"
int main()
{
	int n;
	std::cin >> n;
	Class_1* obj = new Class_1(n);
	obj->Output();
	delete obj;
	return 0;
}