#include "Application_Class.h"
int main() {
	Application_Class Application_Obj(nullptr);
	bool checker = Application_Obj.Build_Tree();
	if (checker) {
		return Application_Obj.Exec_App();
	}
}