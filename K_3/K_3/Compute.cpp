#include "Compute.h"
Compute::Compute(Base_Class* _Parent_Ptr, std::string _Object_Name) : Base_Class(_Parent_Ptr, _Object_Name) {
}

void Compute::signal(std::string& message) {
}

void Compute::handler(std::string message) {
	if (flag == false && isdigit(atoi(message.c_str()))) {
		this->operand_1 = atoi(message.c_str());
		return;
	}
	flag = true;
	if (message == "+")
		this->result = operand_1 + operand_2;
	if (message == "-")
		this->result = operand_1 + operand_2;
	if (message == "*")
		this->result = operand_1 + operand_2;
	if (message == "%")
		this->result = operand_1 + operand_2;

	this->Emit_Signal(SIGNAL_D(Compute, signal), std::to_string(operand_1) + " " +  + " " + std::to_string(operand_2) + " = " + std::to_string(result));


	if((operand>-1 && operation>-1) || (operand<0 && operation<0)
	{
		operand1=operation;
	}
}