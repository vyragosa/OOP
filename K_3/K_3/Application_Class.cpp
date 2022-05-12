#include "Application_Class.h"
Application_Class::Application_Class(Base_Class* _Parent_Ptr) :Base_Class(_Parent_Ptr) {
}

void Application_Class::signal(std::string& message) {
	std::cout << "\nSignal from " << this->Get_Path();
	message += " (class: 1)";
}

void Application_Class::handler(std::string message) {
	std::cout << "\nSignal to " << this->Get_Path() << " Text: " << message;
}

void Application_Class::Build_Tree() {

}

int Application_Class::Exec_App() {
	
}
