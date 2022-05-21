#ifndef RESET_H
#define RESET_H
#include "Base_Class.h"
class Reset : public Base_Class {
public:
	Reset(Base_Class* _Parent_Ptr, std::string _Object_Name);
	void signal(std::string& message);
	void handler(std::string message);
};
#endif
