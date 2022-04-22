#ifndef _BASE_CLASS_H_
#define _BASE_CLASS_H_
#include <string>
#include <vector>
#include <iostream>
class Base_Class {
private:
	std::string Object_Name;
	Base_Class* Parent_Ptr;
	std::vector <Base_Class*> Slave_Vec;
	bool State = false;
	void Add_To_Slave(Base_Class* _Slave_Ptr);
	void Remove_From_Slave(std::string _Slave_Name);
public:
	Base_Class(Base_Class* _Parent_Ptr, std::string _Object_Name = "Root");
	void Set_Object_Name(std::string _Object_Name);
	std::string Get_Object_Name();
	void Print_Tree(bool output_state = false, const int level = 0);
	void Set_Parent_Ptr(Base_Class* _Parent_Ptr);
	Base_Class* Get_Parent_Ptr();
	Base_Class* Find_Object_By_Name(std::string _Object_Name);
	void Set_State(int State_Value);
	bool Get_State();
};
#endif