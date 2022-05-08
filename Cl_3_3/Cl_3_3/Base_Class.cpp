#include "Base_Class.h"
Base_Class::Base_Class(Base_Class *_Parent_Ptr, std::string _Object_Name)
{
	Object_Name = _Object_Name;
	Parent_Ptr = _Parent_Ptr;
	if (_Parent_Ptr != nullptr)
		Parent_Ptr->Add_To_Slave(this);
}

void Base_Class::Set_Object_Name(std::string _Object_Name)
{
	Object_Name = _Object_Name;
}

std::string Base_Class::Get_Object_Name()
{
	return Object_Name;
}

void Base_Class::Print_Tree(bool output_state, const int level)
{
	std::cout << std::endl;
	for (int i = 0; i < level; i++)
		std::cout << "    ";
	std::cout << this->Get_Object_Name();
	if (output_state == true)
		if (this->Get_State() != 0)
			std::cout << " is ready";
		else
			std::cout << " is not ready";
	if (Slave_Vec.size() > 0)
		for (int i = 0; i < Slave_Vec.size(); i++)
			Slave_Vec[i]->Print_Tree(output_state, level + 1);
}

void Base_Class::Set_Parent_Ptr(Base_Class *_Parent_Ptr)
{
	if (Parent_Ptr != nullptr)
	{
		Parent_Ptr->Remove_From_Slave(Object_Name);
	}
	Parent_Ptr = _Parent_Ptr;
	Parent_Ptr->Add_To_Slave(this);
}

Base_Class *Base_Class::Get_Parent_Ptr()
{
	return Parent_Ptr;
}

void Base_Class::Add_To_Slave(Base_Class *Slave_Ptr)
{
	if (Slave_Ptr != nullptr)
	{
		Slave_Vec.push_back(Slave_Ptr);
	}
}

void Base_Class::Remove_From_Slave(std::string Slave_Name)
{
	for (int i = 0; i < Slave_Vec.size(); i++)
	{
		if (Slave_Vec[i]->Get_Object_Name() == Slave_Name)
		{
			Slave_Vec.erase(Slave_Vec.begin() + i);
			break;
		}
	}
}

Base_Class *Base_Class::Find_Object_By_Name(std::string _Object_Name)
{
	if (Object_Name == _Object_Name)
	{
		return this;
	}
	for (int i = 0; i < Slave_Vec.size(); i++)
	{
		Base_Class *Target_Object = Slave_Vec[i]->Find_Object_By_Name(_Object_Name);
		if (Target_Object != nullptr)
			return Target_Object;
	}
	return nullptr;
}

void Base_Class::Set_State(int State_Value)
{
	if (State_Value != 0)
	{
		Base_Class *Temp_Parent_Ptr = Get_Parent_Ptr();
		while (Temp_Parent_Ptr != nullptr)
		{
			if (Temp_Parent_Ptr->Get_State() == 0)
				return;
			Temp_Parent_Ptr = Temp_Parent_Ptr->Get_Parent_Ptr();
		}
		State = State_Value;
	}
	else
	{
		State = State_Value;
		for (int i = 0; i < Slave_Vec.size(); i++)
			Slave_Vec[i]->Set_State(0);
	}
}

int Base_Class::Get_State()
{
	return State;
}

Base_Class *Base_Class::Get_Object_By_Path(std::string object_path)
{
	if ((object_path[0] == '/') && (object_path[1] == '/'))
		return Get_Object_Root()->Find_Object_By_Name(object_path.substr(2, std::string::npos));
	if (object_path[0] == '.')
		return this;
	if (object_path.size() == 1 && object_path[0] == '/')
		return Get_Object_Root();
	return Get_Trail(object_path);
}

Base_Class *Base_Class::Get_Trail(std::string object_trail)
{
	bool absolute = true;
	Base_Class *Obj_Pathfinder = this;
	int index_level = 1;
	std::string trail_part;
	if (object_trail[0] != '/')
	{
		object_trail = "/" + object_trail;
		absolute = false;
	}
	trail_part = Get_Trail_Part(object_trail, index_level);
	if (absolute == true)
		Obj_Pathfinder = Get_Child(trail_part);
	else
		Obj_Pathfinder = Find_Object_By_Name(trail_part);
	while (Obj_Pathfinder)
	{
		index_level++;
		trail_part = Get_Trail_Part(object_trail, index_level);
		if (trail_part.empty())
			return Obj_Pathfinder;
		if (absolute == true)
			Obj_Pathfinder = Obj_Pathfinder->Get_Child(trail_part);
		else
			Obj_Pathfinder = Obj_Pathfinder->Find_Object_By_Name(trail_part);
	}
	return nullptr;
}

Base_Class *Base_Class::Get_Object_Root()
{
	Base_Class *Base_Pathfinder = this;
	while (Base_Pathfinder->Parent_Ptr)
	{
		Base_Pathfinder = Base_Pathfinder->Parent_Ptr;
	}
	return Base_Pathfinder;
}

std::string Base_Class::Get_Trail_Part(std::string object_path, int index_level)
{
	int index_end;
	int index_start = 1;
	int index_pathfinder_level = 1;

	while (index_start)
	{
		index_end = object_path.find("/", index_start);
		if (index_pathfinder_level == index_level)
			return object_path.substr(index_start, index_end - index_start);
		index_start = index_end + 1;
		index_pathfinder_level++;
	}
	return "";
}

Base_Class *Base_Class::Get_Child(std::string name_child)
{
	for (int i = 0; i < Slave_Vec.size(); i++)
	{
		if (Slave_Vec[i]->Get_Object_Name() == name_child)
			return Slave_Vec[i];
	}
	return nullptr;
}

std::string Base_Class::Get_Path()
{
	std::string path;
	Base_Class *Base_Pathfinder = this;
	while (Base_Pathfinder->Parent_Ptr)
	{
		path = "/" + Base_Pathfinder->Get_Object_Name() + path;
		Base_Pathfinder = Base_Pathfinder->Parent_Ptr;
	}
	if (path.empty())
		return "/";
	return path;
}

void Base_Class::Set_Connect(TYPE_SIGNAL p_signal, Base_Class *p_obj_handler, TYPE_HANDLER p_handler)
{
	options *value;
	for (int i = 0; i < connects.size(); i++)
	{
		if (connects[i]->p_signal == p_signal && connects[i]->p_Base == p_obj_handler && connects[i]->p_handler == p_handler)
			return;
	}

	value = new options();
	value->p_Base = p_obj_handler;
	value->p_signal = p_signal;
	value->p_handler = p_handler;
	connects.push_back(value);
}

void Base_Class::Delete_Connect(TYPE_SIGNAL p_signal, Base_Class *p_obj_handler, TYPE_HANDLER p_handler)
{
	options *value;
	for (int i = 0; i < connects.size(); i++)
	{
		value = connects[i];
		if (connects[i]->p_signal == p_signal && connects[i]->p_Base == p_obj_handler && connects[i]->p_handler == p_handler)
		{
			delete connects[i];
			connects.erase(connects.begin() + i);
			return;
		}
	}
}

void Base_Class::Emit_Signal(TYPE_SIGNAL p_signal, std::string &command)
{
	TYPE_HANDLER handler;
	if (this->Get_State() != 0)
	{
		(this->*p_signal)(command);
		for (int i = 0; i < connects.size(); i++)
		{
			if (connects[i]->p_signal == p_signal && connects[i]->p_Base->Get_State() != 0)
			{
				handler = connects[i]->p_handler;
				(connects[i]->p_Base->*handler)(command);
			}
		}
	}
}

int Base_Class::Get_Class_Num()
{
	return Class_num;
}

void Base_Class::Set_Class_Num(int Class_Num)
{
	this->Class_num = Class_Num;
}

void Base_Class::Make_All_Ready()
{
	this->Set_State(1);
	for (int i = 0; i < Slave_Vec.size(); i++)
		Slave_Vec[i]->Make_All_Ready();
}

Base_Class::~Base_Class()
{
	for (int i = 0; i < Slave_Vec.size(); i++)
	{
		delete Slave_Vec[i];
	}
	for (int i = 0; i < connects.size(); i++)
	{
		delete connects[i];
	}
}