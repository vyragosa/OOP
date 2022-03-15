#ifndef _CL_BASE_
#define _CL_BASE_
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class cl_base
{
private:
	string object_name;
	cl_base* parent;
	vector <cl_base*> children;
public:
	cl_base(string object_name, cl_base* parent);
	void set_object_name(string object_name);
	string get_object_name();
	void set_object_name(string object_name);
	void set_parent(cl_base* parent);
	cl_base* get_parent();
};
#endif