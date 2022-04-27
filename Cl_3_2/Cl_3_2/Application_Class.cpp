#include "Application_Class.h"
Application_Class::Application_Class(Base_Class* _Parent_Ptr) :Base_Class(_Parent_Ptr) {
}

bool Application_Class::Build_Tree() {
	std::string Temp_Parent_Name, Temp_Object_Name, path;
	int Class_Number;
	std::cin >> Temp_Object_Name;
	this->Set_Object_Name(Temp_Object_Name);
	while (true) {
		std::cin >> Temp_Parent_Name;
		if (Temp_Parent_Name == "endtree")
			return true;
		std::cin >> Temp_Object_Name >> Class_Number;
		Base_Class* Temp_Parent_Obj = Get_Object(Temp_Parent_Name);
		if (Temp_Parent_Obj == nullptr) {
			std::cout << "Object tree";
			Print_Tree(false);
			std::cout << std::endl << "The head object " << path << " is not found";
			return false;
		}


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

void Application_Class::Input_State() {
	std::string Temp_Object_Name;
	int State_Value;
	while (std::cin >> Temp_Object_Name >> State_Value)
		Find_Object_By_Name(Temp_Object_Name)->Set_State(State_Value);
}

void Application_Class::Command_Input() {
	std::string command, path;
	Base_Class* Temp_Obj, * Ñurrent_Obj = this;
	

	while (true)
	{
		std::cin >> command;
		if (command == "END")
			return;
		
		std::cout << std::endl;
		std::cin >> path;

		Temp_Obj = Ñurrent_Obj->Get_Object(path);

		if (command == "SET") {
			if (Temp_Obj != nullptr) {
				Ñurrent_Obj = Temp_Obj;
				std::cout <<"Object is set: " << Ñurrent_Obj->Get_Object_Name();
			}
			else {
				std::cout << "Object is not found: " << Temp_Obj->Get_Object_Name() << " " << path;
			}
		}

		if (command == "FIND")
		{
			if (Temp_Obj != nullptr)
			{
				std::cout << path << "     Object name: " << Temp_Obj->Get_Object_Name();
			}
			else
			{
				std::cout << path << "     Object is not found";
			}
		}
		std::cout << std::endl;
		
	}
}


int Application_Class::Exec_App() {
	std::cout << "Object tree";
	Print_Tree(false);
	return 1;
}

