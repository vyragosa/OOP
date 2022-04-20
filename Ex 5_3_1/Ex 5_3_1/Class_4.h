#ifndef CLASS_4_H
#define CLASS_4_H
#include "Class_3.h"
class Class_4 : public Class_3 {
public:
	int a4,x;
	Class_4(int a1, int a2, int a3, int a4);
	virtual int Calculation(int x);
};

#endif