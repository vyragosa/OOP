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
	void signal(std::string& message);
	void handler(std::string message);
	void Build_Tree();
	int Exec_App();

	TYPE_SIGNAL Get_Signal_Class(int class_number);
	TYPE_HANDLER Get_Handler_Class(int class_number);

};
#endif