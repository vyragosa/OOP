#include "Base_Class.h"

Base_Class::Base_Class(Base_Class* Root_Ptr, std::string Object_Name) {
	this->Object_Name = Object_Name;
	this->Root_Ptr = Root_Ptr;
	if (Root_Ptr != nullptr) {
		Root_Ptr->Slave_Vec.push_back(this);
	}
}

void Base_Class::Set_Object_Name(std::string Object_Name) {
	this->Object_Name = Object_Name;
}

std::string Base_Class::Get_Object_Name() {
	return Object_Name;
}

void Base_Class::Print_Tree()
{
	if (Root_Ptr == nullptr) {
		std::cout << Object_Name;
	}
	if (Slave_Vec.size() > 0) {
		std::cout << std::endl << Object_Name;
		for (int i = 0; i < Slave_Vec.size(); i++) {
			std::cout << " " << Slave_Vec[i]->Get_Object_Name();
		}
		for (int i = 0; i < Slave_Vec.size(); i++) {
			Slave_Vec[i]->Print_Tree();
		}
	}
}

void Base_Class::Set_Root_Ptr(Base_Class* Root_Ptr) {
	if (Root_Ptr == nullptr) {
		for (int i = 0; Slave_Vec.size(); i++) {
			if (Slave_Vec[i]->Get_Object_Name() == Object_Name) {
				Slave_Vec.erase(Slave_Vec.begin() + i);
				break;
			}
		}
	}
	if (Root_Ptr != nullptr) {
		this->Root_Ptr = Root_Ptr;
		Root_Ptr->Slave_Vec.push_back(this);
	}

}

Base_Class* Base_Class::Get_Root_Ptr() {
	return Root_Ptr;
}

Base_Class* Base_Class::Find_Object_By_Name(std::string dObject_Name) {
	Base_Class* Target_Object;
	if (dObject_Name == Object_Name)return this;
	for (int i = 0; i < Slave_Vec.size(); i++)
	{
		Target_Object = Slave_Vec[i]->Find_Object_By_Name(dObject_Name);
		if (Target_Object != nullptr) return Target_Object;
	}
	return nullptr;
}