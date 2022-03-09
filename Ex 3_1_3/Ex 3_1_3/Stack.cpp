#include "Stack.h"
Stack::Stack(string _name, int _n)
{
	name = _name;
	n = _n;
	size = 0;
	arr = new int[n];
}
bool Stack::fill(int numb)
{

	if (size >= n)
		return false;
	arr[size++] = numb;
	return true;
}
bool Stack::show(int& numb)
{
	if (size - 1 < 0)
		return false;
	numb = arr[--size];
	return true;
}
Stack::~Stack()
{
	delete[] arr;
}
