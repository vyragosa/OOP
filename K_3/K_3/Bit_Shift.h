#ifndef _BIT_SHIFT_H_
#define _BIT_SHIFT_H_
#include "Base_Class.h"
class Bit_Shift : public Base_Class {
public:
	Bit_Shift(Base_Class* _Parent_Ptr, std::string _Object_Name);
	void signal(std::string& message);
	void handler(std::string message);
};
#endif