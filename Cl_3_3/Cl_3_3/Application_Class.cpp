#include "Application_Class.h"
Application_Class::Application_Class(Base_Class* _Parent_Ptr) :Base_Class(_Parent_Ptr) {
}

void Application_Class::signal(std::string& message) {
	std::cout << "\nSignal from " << this->Get_Path();
	message += " (class: 1)";
}

void Application_Class::handler(std::string message) {
	std::cout << "\nSignal to " << this->Get_Path() << " Text: " << message;
}

bool Application_Class::Build_Tree() {
	std::string Temp_Object_Name, path;
	int Class_Number;
	std::cin >> Temp_Object_Name;
	this->Set_Object_Name(Temp_Object_Name);
	while (true) {
		std::cin >> path;
		if (path == "endtree")
			break;
		std::cin >> Temp_Object_Name >> Class_Number;
		Base_Class* Temp_Parent_Obj = Get_Object_By_Path(path);
		if (Temp_Parent_Obj == nullptr) {
			std::cout << "Object tree";
			Print_Tree(false);
			std::cout << "\nThe head object " << path << " is not found";
			return false;
		}
		Base_Class* child;
		switch (Class_Number) {
		case 2:
			child = new Node_Class_2(Temp_Parent_Obj, Temp_Object_Name);
			break;
		case 3:
			child = new Node_Class_3(Temp_Parent_Obj, Temp_Object_Name);
			break;
		case 4:
			child = new Node_Class_4(Temp_Parent_Obj, Temp_Object_Name);
			break;
		case 5:
			child = new Node_Class_5(Temp_Parent_Obj, Temp_Object_Name);
			break;
		case 6:
			child = new Node_Class_6(Temp_Parent_Obj, Temp_Object_Name);
			break;
		default:
			child = nullptr;
			break;
		}
		child->Set_Class_Num(Class_Number);
	}
	std::string first, second;
	while (true) {
		std::cin >> first;
		if (first == "end_of_connections")
			return true;
		Base_Class* from = Get_Object_By_Path(first);
		if (from == nullptr) {
			std::cout << "\nObject " << first << " is not found";
			continue;
		}
		std::cin >> second;
		Base_Class* to = Get_Object_By_Path(second);
		if (to == nullptr) {
			std::cout << "\nHandler object " << first << " is not found";
			continue;
		}

		from->Set_Connect(Get_Signal_Class(from->Get_Class_Num()), to, Get_Handler_Class(to->Get_Class_Num()));

	}

}

int Application_Class::Exec_App() {
	std::cout << "Object tree";
	Print_Tree(2);
	std::string command, first, second, message;
	int condition;
	while (true) {
		std::cin >> command;
		if (command == "END") {
			break;
		}
		std::cin >> first;
		Base_Class* from = Get_Object_By_Path(first);
		if (from == nullptr) {
			std::cout << "\nObject " << first << " is not found";
			continue;
		}
		if (command == "SET_CONDITION") {
			std::cin >> condition;
			from->Set_State(condition);
			continue;
		}
		else if (command == "EMIT") {
			std::cin >> message;
			from->Emit_Signal(Get_Signal_Class(from->Get_Class_Num()), message);
			continue;
		}
		std::cin >> second;
		Base_Class* to = Get_Object_By_Path(second);
		if (to == nullptr) {
			std::cout << "\nHandler object " << first << " is not found";
			continue;
		}
		if (command == "SET_CONNECT") {
			from->Set_Connect(Get_Signal_Class(from->Get_Class_Num()), to, Get_Handler_Class(to->Get_Class_Num()));
			continue;
		}
		else if (command == "DELETE_CONNECT") {
			from->Delete_Connect(Get_Signal_Class(from->Get_Class_Num()), to, Get_Handler_Class(to->Get_Class_Num()));
			continue;
		}
	}
	return 1;

}

TYPE_SIGNAL Application_Class::Get_Signal_Class(int class_number) {
	switch (class_number) {
	case 1:
		return SIGNAL_D(Application_Class, signal);
		break;
	case 2:
		return SIGNAL_D(Node_Class_2, signal);
		break;
	case 3:
		return SIGNAL_D(Node_Class_3, signal);
		break;
	case 4:
		return SIGNAL_D(Node_Class_4, signal);
		break;
	case 5:
		return SIGNAL_D(Node_Class_5, signal);
		break;
	case 6:
		return SIGNAL_D(Node_Class_6, signal);
		break;
	default:
		break;
	}
}

TYPE_HANDLER Application_Class::Get_Handler_Class(int class_number) {
	switch (class_number) {
	case 1:
		return HANDLER_D(Application_Class, handler);
		break;
	case 2:
		return HANDLER_D(Node_Class_2, handler);
		break;
	case 3:
		return HANDLER_D(Node_Class_3, handler);
		break;
	case 4:
		return HANDLER_D(Node_Class_4, handler);
		break;
	case 5:
		return HANDLER_D(Node_Class_5, handler);
		break;
	case 6:
		return HANDLER_D(Node_Class_6, handler);
		break;
	default:	
		break;
	}
}