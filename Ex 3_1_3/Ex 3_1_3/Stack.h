#ifndef _STACK_
#define _STACK_
#include <iostream>
using namespace std;
class Stack {
private:
	int* arr;
public:
	int size;
	int n;
	string name;
	Stack(string _name, int _n);
	bool fill(int numb);
	bool show(int& numb);
	~Stack();
};
#endif