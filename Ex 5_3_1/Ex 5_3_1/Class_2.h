#ifndef CLASS_2_H
#define CLASS_2_H
#include "Class_1.h"
class Class_2 : public Class_1
{
public:
	int a2;
	Class_2(int a1, int a2);
	virtual int Calculation(int x);
};
#endif