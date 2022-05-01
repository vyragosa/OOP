#include "Node_Class_6.h"
Node_Class_6::Node_Class_6(Base_Class* _Parent_Ptr, std::string _Object_Name) : Base_Class(_Parent_Ptr, _Object_Name) {
}

void Node_Class_6::signal(std::string& message) {
	std::cout << "\nSignal from " << this->Get_Path();
	message += " (class: 6)";
}

void Node_Class_6::handler(std::string message) {
	std::cout << "\nSignal to " << this->Get_Path() << " Text: " << message;
}
