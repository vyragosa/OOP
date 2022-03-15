#include "cl_base.h"
cl_base::cl_base(string object_name, cl_base* parent)
{
	set_parent(parent);
	set_object_name(object_name);
}

void cl_base::set_object_name(string object_name)
{
	this->object_name = object_name;
}

void cl_base::set_parent(cl_base* parent)
{
	this->parent = parent;
}

cl_base* cl_base::get_parent()
{
	return parent;
}

string cl_base::get_object_name()
{
	return object_name;
}
