#ifndef _APPLICATION_CLASS_H_
#define _APPLICATION_CLASS_H_

#include "Base_Class.h"
#include "Input.h"
#include "Output.h"
#include "Compute.h"
#include "Bit_Shift.h"
#include "Reset.h"

class Application_Class : public Base_Class {
	std::string task;
public:
	Application_Class(Base_Class* _Parent_Ptr);
	void signal(std::string& message);
	void handler(std::string message);
	void Build_Tree();
	int Exec_App();

	TYPE_SIGNAL Get_Signal_Class(int class_number);
	TYPE_HANDLER Get_Handler_Class(int class_number);

};
#endif