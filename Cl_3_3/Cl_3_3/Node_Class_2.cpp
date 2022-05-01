#include "Node_Class_2.h"
Node_Class_2::Node_Class_2(Base_Class* _Parent_Ptr, std::string _Object_Name) : Base_Class(_Parent_Ptr, _Object_Name) {
}

void Node_Class_2::signal(std::string& message) {
	std::cout << "\nSignal from " << this->Get_Path();
	message += " (class: 2)";
}

void Node_Class_2::handler(std::string message) {
	std::cout << "\nSignal to " << this->Get_Path() << " Text: " << message;
}