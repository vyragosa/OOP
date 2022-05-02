#include "Application_Class.h"
int main() {
	Application_Class Application_Obj(nullptr);
	bool checker = Application_Obj.Build_Tree();
	if (checker) {
		return Application_Obj.Exec_App();
	}
}

/*
appls_root
/ object_s1 3
/ object_s2 2
/object_s2 object_s4 4
/ object_s13 5
/object_s2 object_s6 6
/object_s1 object_s7 2
endtree
/object_s2/object_s4 /object_s2/object_s6
/object_s2 /object_s1/object_s7
/ /object_s2/object_s4
/object_s2/object_s4 /
end_of_connections
EMIT /object_s2/object_s4 Send message 1
DELETE_CONNECT /object_s2/object_s4 /
EMIT /object_s2/object_s4 Send message 2
SET_CONDITION /object_s2/object_s4 0
EMIT /object_s2/object_s4 Send message 3
SET_CONNECT /object_s1 /object_s2/object_s6
EMIT /object_s1 Send message 4
END


Object tree
appls_root
    object_s1
        object_s7
    object_s2
        object_s4
        object_s6
    object_s13
Signal from /object_s2/object_s4
Signal to /object_s2/object_s6 Text: Send message 1 (class: 4)
Signal to  Text: Send message 1 (class: 4)
Signal from /object_s2/object_s4
Signal to /object_s2/object_s6 Text: Send message 2 (class: 4)
Signal from /object_s1
Signal to /object_s2/object_s6 Text: Send message 4 (class: 3)
*/