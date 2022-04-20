#include <iostream>
#include <string>
#include "Class_4.h"

int main()
{
	Class_4* obj;
	int a1, a2, a3, a4;
	int x;
	std::cin >> a1 >> a2 >> a3 >> a4;
	obj = new Class_4(a1, a2, a3, a4);
	std::cout << "a1 = " << a1 << "    a2 = " << a2 << "    a3 = " << a3 << "    a4 = " << a4;
	while (true)
	{
		std::cin >> x;
		if (x == 0)
			break;
		int class_name, num = 0;
		std::cin >> class_name;
		switch (class_name)
		{
		case 1:
			num = (obj)->Class_1::Calculation(x);
			break;
		case 2:
			num = (obj)->Class_2::Calculation(x);
			break;
		case 3:
			num = (obj)->Class_3::Calculation(x);
			break;
		case 4:
			num = (obj)->Class_4::Calculation(x);
			break;
		default:
			break;
		}
		std::cout << std::endl << "F( " << x << " ) = " << num;
	}
	return 0;
}
/*
	10 20 30 40
	12 2
	13 3
	0
	a1 = 10    a2 = 20    a3 = 30    a4 = 40
	F( 12 ) = 3000
	F( 13 ) = 69420
	....

*/