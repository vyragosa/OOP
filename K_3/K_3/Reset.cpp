#include "Reset.h"
Reset::Reset(Base_Class* _Parent_Ptr, std::string _Object_Name) : Base_Class(_Parent_Ptr, _Object_Name) {
}

void Reset::signal(std::string& message) {
	std::cout << "\nSignal from " << this->Get_Path();
	message += " (class: 2)";
}

void Reset::handler(std::string message) {
	std::cout << "\nSignal to " << this->Get_Path() << " Text: " << message;
}