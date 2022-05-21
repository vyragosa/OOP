#ifndef _OUTPUT_H_
#define _OUTPUT_H_
#include "Base_Class.h"
class Output : public Base_Class {
public:
	Output(Base_Class* _Parent_Ptr, std::string _Object_Name);
	void signal(std::string& message);
	void handler(std::string message);
};
#endif