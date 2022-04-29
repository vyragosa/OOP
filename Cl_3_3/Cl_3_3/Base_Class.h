#ifndef _BASE_CLASS_H_
#define _BASE_CLASS_H_
#include <string>
#include <vector>
#include <iostream>

class Base_Class;

typedef void (Base_Class::* TYPE_SIGNAL) (std::string&);
typedef void (Base_Class::* TYPE_HANDLER) (std::string);

#define SIGNAL_D(A, signal_f) (TYPE_SIGNAL) (&A::signal_f)
#define HENDLER_D(B, hendler_f) (TYPE_HANDLER) (&B::hendler_f)

class Base_Class {
private:
	std::string Object_Name;
	Base_Class* Parent_Ptr;
	std::vector <Base_Class*> Slave_Vec;
	int State = 0;
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
	int Get_State();
	Base_Class* Get_Object_By_Path(std::string object_path);
	Base_Class* Get_Trail(std::string object_trail);
	Base_Class* Get_Object_Root();
	std::string Get_Trail_Part(std::string object_path, int index_level);
	Base_Class* Get_Child(std::string name_child);
	std::string Get_Path();


	void setConnect(TYPE_SIGNAL p_signal, Base_Class* p_ob_hend, TYPE_HANDLER p_hendler);
	void deleteConnect(TYPE_SIGNAL p_signal, Base_Class* p_ob_hend, TYPE_HANDLER p_hendler);
	void emitSignal(TYPE_SIGNAL p_signal, Base_Class& command);
};
#endif