#include "Application_Class.h"
Application_Class::Application_Class(Base_Class* _Parent_Ptr) : Base_Class(_Parent_Ptr) {
}

void Application_Class::Build_Tree() {
	std::string Temp_Parent_Name, Temp_Object_Name;
	int Class_Number;
	std::cin >> Temp_Parent_Name;
	this->Set_Object_Name(Temp_Parent_Name);
	while (true) {
		std::cin >> Temp_Parent_Name;
		if (Temp_Parent_Name == "endtree")
			break;
		std::cin >> Temp_Object_Name >> Class_Number;
		Base_Class* Temp_Parent_Obj = Find_Object_By_Name(Temp_Parent_Name);
		if (Temp_Parent_Obj != nullptr) {
			switch (Class_Number) {
			case 2:
				new Node_Class_2(Temp_Parent_Obj, Temp_Object_Name);
				break;
			case 3:
				new Node_Class_3(Temp_Parent_Obj, Temp_Object_Name);
				break;
			case 4:
				new Node_Class_4(Temp_Parent_Obj, Temp_Object_Name);
				break;
			case 5:
				new Node_Class_5(Temp_Parent_Obj, Temp_Object_Name);
				break;
			case 6:
				new Node_Class_6(Temp_Parent_Obj, Temp_Object_Name);
				break;
			default:
				break;
			}
		}
	}
}

void Application_Class::Input_State() {
	std::string _ObjectName;
	int State_Value;
	while (std::cin >> _ObjectName >> State_Value)
		Find_Object_By_Name(_ObjectName)->Set_State(State_Value);
}

int Application_Class::Exec_App() {
	std::cout << "Object tree";
	Print_Tree(false);
	std::cout << "\nThe tree of objects and their readiness";
	Print_Tree(true);
	return 1;
}