#ifndef _NODE_CLASS_2_H_
#define _NODE_CLASS_2_H_
#include "Base_Class.h"
class Node_Class_2 : public Base_Class {
public:
	Node_Class_2(Base_Class* _Parent_Ptr, std::string _Object_Name);
	void signal(std::string& message);
	void handler(std::string message);
};
#endif