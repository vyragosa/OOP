#include "Application_Class.h"
Application_Class::Application_Class(Base_Class* _Parent_Ptr) :Base_Class(_Parent_Ptr) {
}

void Application_Class::signal(std::string& message) {
}

void Application_Class::handler(std::string message) {
	task += message;
}

void Application_Class::Build_Tree() {
	this->Set_Object_Name("System");
	Base_Class* input = new Input(this, "input");
	Base_Class* output = new Output(this, "output");
	Base_Class* bit_shift = new Bit_Shift(this, "bit_shift");
	Base_Class* compute = new Compute(this, "compute");
	Base_Class* reset = new Reset(this, "reset");
	this->Set_Connect(SIGNAL_D(Application_Class, signal), input, HANDLER_D(Input, handler));
	this->Set_Connect(SIGNAL_D(Input, signal), this, HANDLER_D(Application_Class, handler));

	this->Set_Connect(SIGNAL_D(Application_Class, signal), compute, HANDLER_D(Compute, handler));

	this->Set_Connect(SIGNAL_D(Compute, signal), output, HANDLER_D(Output, handler));

}

int Application_Class::Exec_App() {
	
	return 1;
}
