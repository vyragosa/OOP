#ifndef _APPLICATION_CLASS_H_
#define _APPLICATION_CLASS_H_

#include "Base_Class.h"
#include "Node_Class_2.h"
#include "Node_Class_3.h"
#include "Node_Class_4.h"
#include "Node_Class_5.h"
#include "Node_Class_6.h"

class Application_Class : public Base_Class {
public:
	Application_Class(Base_Class* _Parent_Ptr);
	bool Build_Tree();
	void Connections();
	void Input_State();
	void Command_Input();
	int Exec_App();
};
#endif