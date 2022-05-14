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

void Application_Class::Build_Tree() {
	std::string Temp_Object_Name, path;
	int Class_Number;
	std::cin >> Temp_Object_Name;
	this->Set_Object_Name(Temp_Object_Name);
	while (true) {
		std::cin >> path;
		if (path == "endtree")
			break;
		std::cin >> Temp_Object_Name >> Class_Number;
		Base_Class* Temp_Parent_Obj = this->Get_Object_By_Path(path);
		if (Temp_Parent_Obj == nullptr) {
			std::cout << "Object tree";
			Print_Tree(false);
			std::cout << "\nThe head object " << path << " is not found";
			exit(0);
		}
		Base_Class* child = nullptr;
		if (Class_Number == 2)
			child = new Node_Class_2(Temp_Parent_Obj, Temp_Object_Name);
		else if (Class_Number == 3)
			child = new Node_Class_3(Temp_Parent_Obj, Temp_Object_Name);
		else if (Class_Number == 4)
			child = new Node_Class_4(Temp_Parent_Obj, Temp_Object_Name);
		else if (Class_Number == 5)
			child = new Node_Class_5(Temp_Parent_Obj, Temp_Object_Name);
		else if (Class_Number == 6)
			child = new Node_Class_6(Temp_Parent_Obj, Temp_Object_Name);
		child->Set_Class_Num(Class_Number);
	}
	std::string first, second;
	while (true) {
		std::cin >> first;
		if (first == "end_of_connections")
			return;
		Base_Class* from = Get_Object_By_Path(first);
		if (from == nullptr) {
			std::cout << "\nObject " << first << " not found";
		}
		else {
			std::cin >> second;
			Base_Class* to = Get_Object_By_Path(second);
			if (to == nullptr) {
				std::cout << "\nHandler object " << second << " not found";
			}
			else {
				from->Set_Connect(Get_Signal_Class(from->Get_Class_Num()), to, Get_Handler_Class(to->Get_Class_Num()));
			}
		}

	}

}

int Application_Class::Exec_App() {
	std::cout << "Object tree";
	Print_Tree(false);
	Make_All_Ready();
	std::string command, first, second, message;
	int condition;
	while (true) {
		std::cin >> command;
		if (command == "END") {
			break;
		}
		else if (command == "SET_CONDITION" || command == "EMIT" || command == "SET_CONNECT" || command == "DELETE_CONNECT") {		
			std::cin >> first;
			Base_Class* from = Get_Object_By_Path(first);
			if (from == nullptr) {
				std::cout << "\nObject " << first << " not found";
			}
			else if (command == "SET_CONDITION") {
				std::cin >> condition;
				from->Set_State(condition);
			}
			else if (command == "EMIT") {
				std::getline(std::cin, message);
				from->Emit_Signal(Get_Signal_Class(from->Get_Class_Num()), message);
			}
			else {
				std::cin >> second;
				Base_Class* to = Get_Object_By_Path(second);
				if (to == nullptr) {
					std::cout << "\nHandler object " << second << "	 not found";
				}
				else if (command == "SET_CONNECT") {
					from->Set_Connect(Get_Signal_Class(from->Get_Class_Num()), to, Get_Handler_Class(to->Get_Class_Num()));
				}
				else if (command == "DELETE_CONNECT") {
					from->Delete_Connect(Get_Signal_Class(from->Get_Class_Num()), to, Get_Handler_Class(to->Get_Class_Num()));
				}
			}
		}

	}
	return 1;
}

TYPE_SIGNAL Application_Class::Get_Signal_Class(int class_number) {

	if (class_number == 1)
		return SIGNAL_D(Application_Class, signal);
	if (class_number == 2)
		return SIGNAL_D(Node_Class_2, signal);
	if (class_number == 3)
		return SIGNAL_D(Node_Class_3, signal);
	if (class_number == 4)
		return SIGNAL_D(Node_Class_4, signal);
	if (class_number == 5)
		return SIGNAL_D(Node_Class_5, signal);
	if (class_number == 6)
		return SIGNAL_D(Node_Class_6, signal);
	return TYPE_SIGNAL();

}

TYPE_HANDLER Application_Class::Get_Handler_Class(int class_number) {

	if (class_number == 1)
		return HANDLER_D(Application_Class, handler);
	if (class_number == 2)
		return HANDLER_D(Node_Class_2, handler);
	if (class_number == 3)
		return HANDLER_D(Node_Class_3, handler);
	if (class_number == 4)
		return HANDLER_D(Node_Class_4, handler);
	if (class_number == 5)
		return HANDLER_D(Node_Class_5, handler);
	if (class_number == 6)
		return HANDLER_D(Node_Class_6, handler);
	return TYPE_HANDLER();
}
