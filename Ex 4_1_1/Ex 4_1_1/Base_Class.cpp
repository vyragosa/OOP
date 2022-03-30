#include "Base_Class.h"
Base_Class::Base_Class(Base_Class* _Root_Ptr, std::string _Object_Name) {
	Object_Name = _Object_Name;
	Root_Ptr = _Root_Ptr;
	if (_Root_Ptr != nullptr) {
		Root_Ptr->Add_To_Slave(this);
	}
}

void Base_Class::Add_To_Slave(Base_Class * Slave_Ptr) {
	if (Slave_Ptr != nullptr) {
		Slave_Vec.push_back(Slave_Ptr);
	}
}

void Base_Class::Set_Object_Name(std::string _Object_Name) {
	Object_Name = _Object_Name;
}

std::string Base_Class::Get_Object_Name() {
	return Object_Name;
}

void Base_Class::Print_Tree() {
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

void Base_Class::Set_Root_Ptr(Base_Class* _Root_Ptr) {
	if (Root_Ptr != nullptr) {
		Root_Ptr->Remove_From_Slave(Object_Name);
	}
	Root_Ptr = _Root_Ptr;
	Root_Ptr->Add_To_Slave(this);
}

void Base_Class::Remove_From_Slave(std::string Slave_Name) {
	for (int i = 0; Slave_Vec.size(); i++) {
		if (Slave_Vec[i]->Get_Object_Name() == Slave_Name) {
			Slave_Vec.erase(Slave_Vec.begin() + i);
			break;
		}
	}
}

Base_Class* Base_Class::Get_Root_Ptr() {
	return Root_Ptr;
}

Base_Class* Base_Class::Find_Object_By_Name(std::string _Object_Name) {
	Base_Class* Target_Object;
	if (_Object_Name == Object_Name) {
		return this;
	}
	for (int i = 0; i < Slave_Vec.size(); i++) {
		Target_Object = Slave_Vec[i]->Find_Object_By_Name(_Object_Name);
		if (Target_Object != nullptr) 
			return Target_Object;
	}
	return nullptr;
}