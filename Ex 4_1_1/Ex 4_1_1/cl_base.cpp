#include "cl_base.h"

cl_base::cl_base(cl_base* p_head_object, string s_object_name)
{
	this->s_object_name = s_object_name;
	i_state = 0;

	if (p_head_object) {
		this->p_head_object = p_head_object;
		p_head_object->subordinate_objects.push_back(this);
	}
}
