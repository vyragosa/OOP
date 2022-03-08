#ifndef _NUMBER_
#define _NUMBER_
#include <iostream>
#include <iomanip>
using namespace std;

class Number
{
private:
	int n;
public:
	Number(int _n);
	void PrintArray(int *arr);
	void InverseArray(int *arr);
};
#endif
