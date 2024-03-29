#ifndef _BASE_CLASS_H_
#define _BASE_CLASS_H_
#include <string>
#include <vector>
#include <iostream>

class Base_Class;

typedef void (Base_Class::*TYPE_SIGNAL)(std::string &);
typedef void (Base_Class::*TYPE_HANDLER)(std::string);

#define SIGNAL_D(A, signal_f) (TYPE_SIGNAL)(&A::signal_f)
#define HANDLER_D(B, handler_f) (TYPE_HANDLER)(&B::handler_f)

class Base_Class {
private:
	struct options {
		Base_Class *p_Base;
		TYPE_SIGNAL p_signal;
		TYPE_HANDLER p_handler;
	};
	std::vector<options *> connects;
	int Class_num = 1;
	std::string Object_Name;
	Base_Class *Parent_Ptr;
	std::vector<Base_Class *> Slave_Vec;
	int State = 0;
	void Add_To_Slave(Base_Class *_Slave_Ptr);
	void Remove_From_Slave(std::string _Slave_Name);
	Base_Class* Get_Trail(std::string object_trail);
	std::string Get_Trail_Part(std::string object_path, int index_level);

public:
	Base_Class(Base_Class *_Parent_Ptr, std::string _Object_Name = "Root");
	void Set_Object_Name(std::string _Object_Name);
	std::string Get_Object_Name();
	void Print_Tree(bool output_state = false, const int level = 0);
	void Set_Parent_Ptr(Base_Class *_Parent_Ptr);
	Base_Class *Get_Parent_Ptr();
	Base_Class *Find_Object_By_Name(std::string _Object_Name);
	void Set_State(int State_Value);
	int Get_State();
	Base_Class *Get_Object_By_Path(std::string object_path);
	Base_Class *Get_Object_Root();
	Base_Class *Get_Child(std::string name_child);
	std::string Get_Path();
	void Set_Class_Num(int Class_Num);
	int Get_Class_Num();
	void Set_Connect(TYPE_SIGNAL p_signal, Base_Class *p_obj_handler, TYPE_HANDLER p_handler);
	void Delete_Connect(TYPE_SIGNAL p_signal, Base_Class *p_obj_handler, TYPE_HANDLER p_handler);
	void Emit_Signal(TYPE_SIGNAL p_signal, std::string &command);
	void Make_All_Ready();
	~Base_Class();
};
#endif