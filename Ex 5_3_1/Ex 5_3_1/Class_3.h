#ifndef CLASS_3_H
#define CLASS_3_H
#include "Class_2.h"
class Class_3 : public Class_2
{
public:
	int a3,x;
	Class_3(int a1, int a2, int a3);
	virtual int Calculation(int x);
};

#endif