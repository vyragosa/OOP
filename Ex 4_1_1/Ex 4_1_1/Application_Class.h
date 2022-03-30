#ifndef _APPLICATION_CLASS_H_
#define _APPLICATION_CLASS_H_
#include "Base_Class.h"
#include "Node_Class.h"
class Application_Class : public Base_Class {
public:
	Application_Class(Base_Class* _Root_Ptr);
	void Build_Tree();
	int Exec_App();
};
#endif