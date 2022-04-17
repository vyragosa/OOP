#include <iostream>
#include <string>
#include "Class_8.h"
int main() {
	Class_8* p;
	std::string name;
	std::cin >> name;
	Class_8 obj(name);
	p = &obj;
	std::cout << ((Class_1*)(Class_4*)p)->Get_Object_Name() << std::endl;
	std::cout << ((Class_1*)(Class_5*)p)->Get_Object_Name() << std::endl;
	std::cout << ((Class_1*)(Class_2*)p)->Get_Object_Name() << std::endl;
	std::cout << ((Class_2*)p)->Get_Object_Name() << std::endl;
	std::cout << ((Class_3*)p)->Get_Object_Name() << std::endl;
	std::cout << ((Class_4*)p)->Get_Object_Name() << std::endl;
	std::cout << ((Class_5*)p)->Get_Object_Name() << std::endl;
	std::cout << ((Class_6*)p)->Get_Object_Name() << std::endl;
	std::cout << ((Class_7*)p)->Get_Object_Name() << std::endl;
	std::cout << p->Get_Object_Name();
	return 0;
}