﻿#include "Application_Class.h"
int main() {
	Application_Class Application_Obj(nullptr);
	Application_Obj.Build_Tree();
	return Application_Obj.Exec_App();
}