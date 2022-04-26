#include <iostream>
#include "Class_1.h"
int main()
{
	long long n;
	Class_1 obj;
	std::cin >> n;
	obj.Set_n(n);
	obj.Calculate();
	std::cout << "n = " << obj.Get_n() << std::endl;
	std::cout << "N = " << obj.Get_digits();
	return 0;
}