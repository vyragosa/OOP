#ifndef _INPUT_H_
#define _INPUT_H_
#include "Base_Class.h"
class Input : public Base_Class {
public:
	Input(Base_Class* _Parent_Ptr, std::string _Object_Name);
	void signal(std::string& message);
	void handler(std::string message);
};
#endif