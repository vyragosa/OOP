#include "Node_Class_2.h"
Node_Class_2::Node_Class_2(Base_Class* _Parent_Ptr, std::string _Object_Name) : Base_Class(_Parent_Ptr, _Object_Name) {
}

std::string Node_Class_2::Get_Class_Num() {
	return Class_num;
}

void Node_Class_2::signal(std::string& message) {
	std::cout << "Signal from " << this->Get_Path();
	message += " (class: " + this->Get_Class_Num() + ")";
}

void Node_Class_2::handler(std::string message) {
	std::cout << "Signal to " << this->Get_Path() << " Text: " << message;
}
