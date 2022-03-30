#include "Application_Class.h"

Application_Class::Application_Class(Base_Class* _Root_Ptr) :Base_Class(_Root_Ptr) {
}

void Application_Class::Build_Tree() {
	std::string Temp_Root_Name;
	std::string Temp_Object_Name;
	Base_Class* Temp_Root_Obj;
	std::cin >> Temp_Root_Name;
	this->Set_Object_Name(Temp_Root_Name);
	while (true) {
		std::cin >> Temp_Root_Name >> Temp_Object_Name;
		if (Temp_Root_Name == Temp_Object_Name) {
			break;
		}
		Temp_Root_Obj = Find_Object_By_Name(Temp_Root_Name);
		if (Temp_Root_Obj != nullptr) {
			new Node_Class(Temp_Root_Obj, Temp_Object_Name);
		}
	}
}

int Application_Class::Exec_App() {
	Print_Tree();
	return 0;
}