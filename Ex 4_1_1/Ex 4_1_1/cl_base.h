#ifndef _CL_BASE_
#define _CL_BASE_
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class cl_base
{
private:
	string s_object_name;
	cl_base* p_head_object;
	int i_state;
	vector <cl_base*> subordinate_objects;
public:
	cl_base(cl_base* p_head_object, string s_object_name = "Base object");
	~cl_base();

	void set_object_name(string s_object_name);
	string get_object_name();

	void set_state(int i_state);
	int get_state();

	void change_head_object(cl_base* p_head_object);

	cl_base* get_head_object();
	cl_base* subordinate_object(string s_object_name);

	unsigned int subordinate_objects_count();
};
#endif