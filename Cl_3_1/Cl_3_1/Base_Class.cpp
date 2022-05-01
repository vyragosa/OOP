#include "Base_Class.h"
Base_Class::Base_Class(Base_Class* _Parent_Ptr, std::string _Object_Name) {
	Object_Name = _Object_Name;
	Parent_Ptr = _Parent_Ptr;
	if (_Parent_Ptr != nullptr)
		Parent_Ptr->Add_To_Slave(this);
}

void Base_Class::Set_Object_Name(std::string _Object_Name) {
	Object_Name = _Object_Name;
}

std::string Base_Class::Get_Object_Name() {
	return Object_Name;
}

void Base_Class::Print_Tree(bool output_state, const int level) {
	std::cout << std::endl;
	for (int i = 0; i < level; i++)
		std::cout << "    ";
	std::cout << this->Get_Object_Name();
	if (output_state != 0)
		if (this->Get_State() == true)
			std::cout << " is ready";
		else
			std::cout << " is not ready";
	if (Slave_Vec.size() > 0)
		for (int i = 0; i < Slave_Vec.size(); i++)
			Slave_Vec[i]->Print_Tree(output_state, level + 1);
}

void Base_Class::Set_Parent_Ptr(Base_Class* _Parent_Ptr) {
	if (Parent_Ptr != nullptr) {
		Parent_Ptr->Remove_From_Slave(Object_Name);
	}
	Parent_Ptr = _Parent_Ptr;
	Parent_Ptr->Add_To_Slave(this);
}

Base_Class* Base_Class::Get_Parent_Ptr() {
	return Parent_Ptr;
}

void Base_Class::Add_To_Slave(Base_Class* Slave_Ptr) {
	if (Slave_Ptr != nullptr) {
		Slave_Vec.push_back(Slave_Ptr);
	}
}

void Base_Class::Remove_From_Slave(std::string Slave_Name) {
	for (int i = 0; i < Slave_Vec.size(); i++) {
		if (Slave_Vec[i]->Get_Object_Name() == Slave_Name) {
			Slave_Vec.erase(Slave_Vec.begin() + i);
			break;
		}
	}
}

Base_Class* Base_Class::Find_Object_By_Name(std::string _Object_Name) {
	if (Object_Name == _Object_Name) {
		return this;
	}
	for (int i = 0; i < Slave_Vec.size(); i++) {
		Base_Class* Target_Object = Slave_Vec[i]->Find_Object_By_Name(_Object_Name);
		if (Target_Object != nullptr)
			return Target_Object;
	}
	return nullptr;
}

void Base_Class::Set_State(int State_Value) {
	if (State_Value != 0) {
		Base_Class* Temp_Parent_Ptr = Get_Parent_Ptr();
		while (Temp_Parent_Ptr != nullptr) {
			if (Temp_Parent_Ptr->Get_State() == 0)
				return;
			Temp_Parent_Ptr = Temp_Parent_Ptr->Get_Parent_Ptr();
		}
		State = State_Value;
	}
}

int Base_Class::Get_State() {
	return State;
}