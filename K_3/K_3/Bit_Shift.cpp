#include "Bit_Shift.h"
Bit_Shift::Bit_Shift(Base_Class* _Parent_Ptr, std::string _Object_Name) : Base_Class(_Parent_Ptr, _Object_Name) {
}

void Bit_Shift::signal(std::string& message) {
	std::cout << "\nSignal from " << this->Get_Path();
	message += " (class: 2)";
}

void Bit_Shift::handler(std::string message) {
	std::cout << "\nSignal to " << this->Get_Path() << " Text: " << message;
}