#include <iostream>
#include <string>
#include "Class_8.h"
int main() {
    Class_8* obj_x;
    std::string name;
    std::cin >> name;
    Class_8 obj(name);
    obj_x = &obj;
    std::cout << ((Class_1*)(Class_4*)(Class_7*)obj_x)->Get_Object_Name() << std::endl;
    std::cout << ((Class_1*)(Class_5*)(Class_7*)obj_x)->Get_Object_Name() << std::endl;
    std::cout << ((Class_1*)(Class_2*)(Class_6*)obj_x)->Get_Object_Name() << std::endl;
    std::cout << ((Class_2*)(Class_6*)obj_x)->Get_Object_Name() << std::endl;
    std::cout << ((Class_3*)(Class_6*)obj_x)->Get_Object_Name() << std::endl;
    std::cout << ((Class_4*)(Class_7*)obj_x)->Get_Object_Name() << std::endl;
    std::cout << ((Class_5*)(Class_7*)obj_x)->Get_Object_Name() << std::endl;
    std::cout << ((Class_6*)obj_x)->Get_Object_Name() << std::endl;
    std::cout << ((Class_7*)obj_x)->Get_Object_Name() << std::endl;
    std::cout << obj_x->Get_Object_Name();
    return 0;
}
