#ifndef _NODE_CLASS_4_H_
#define _NODE_CLASS_4_H_
#include "Base_Class.h"
class Node_Class_4 : public Base_Class {
public:
	Node_Class_4(Base_Class* _Parent_Ptr, std::string _Object_Name);
	void signal(std::string& message);
	void handler(std::string message);
};
#endif