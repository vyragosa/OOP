#ifndef _COMPUTE_H_
#define _COMPUTE_H_
#include "Base_Class.h"
class Compute : public Base_Class {
	int result = 0, operand_1, operand_2;
	std::string operation;
	bool flag = false;
public:
	Compute(Base_Class* _Parent_Ptr, std::string _Object_Name);
	void signal(std::string& message);
	void handler(std::string message);
};
#endif