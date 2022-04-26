#include <iostream>
#include "Class_1.h"
int main()
{
	long long n;
	Class_1 obj;
	std::cin >> n;
	obj.Set_n(n);
	obj.Calculate();
	std::cout << obj.Get_n();
	std::cout << obj.Get_digits();
	return 0;
}
