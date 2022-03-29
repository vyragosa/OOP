#ifndef _APPLICATION_CLASS_H_
#define _APPLICATION_CLASS_H_
#include "Base_Class.h"
#include <string>
#include <vector>
#include <iostream>
class Application_Class : public Base_Class {
public:
	Application_Class(Base_Class* Root_Ptr);
	void Build_Tree();
	int Exec_App();

};
#endif