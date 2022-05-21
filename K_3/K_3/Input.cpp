#include "Input.h"
Input::Input(Base_Class* _Parent_Ptr, std::string _Object_Name) : Base_Class(_Parent_Ptr, _Object_Name) {
}

void Input::signal(std::string& message) {

}

void Input::handler(std::string message) {

	std::string cmd;
	while (true) {
		std::cin >> cmd;
		if (cmd == "Off")
			break;
		Emit_Signal(SIGNAL_D(Input, signal), cmd);
	}
	

}