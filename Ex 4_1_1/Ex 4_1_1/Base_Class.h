#ifndef _BASE_CLASS_H_
#define _BASE_CLASS_H_
#include <string>
#include <vector>
#include <iostream>
class Base_Class {
private:
	std::string Object_Name;
	Base_Class* Root_Ptr;
	std::vector <Base_Class*> Slave_Vec;
public:
	Base_Class(Base_Class* Root_Ptr, std::string Object_Name = "Base object");
	void Set_Object_Name(std::string Object_Name);
	std::string Get_Object_Name();
	void Print_Tree();
	void Set_Root_Ptr(Base_Class* Root_Ptr);
	Base_Class* Get_Root_Ptr();
	Base_Class* Find_Object_By_Name(std::string dObject_Name);
};
#endif