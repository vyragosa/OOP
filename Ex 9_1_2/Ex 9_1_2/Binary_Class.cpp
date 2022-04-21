#include "Binary_Class.h"
#include <iostream>

Binary_Class::Binary_Class(uint8_t value, uint8_t pattern) {
	this->value = value;
	this->pattern = pattern;
}

Binary_Class Binary_Class::operator&=(Binary_Class& other) {
	return Binary_Class(value = value & (other.value & ~(pattern & other.pattern)), pattern);
}

Binary_Class Binary_Class::operator|=(Binary_Class& other) {
	return Binary_Class(value = value | (other.value & (pattern & other.pattern)), pattern);
}

void Binary_Class::Output() {
	if (value < 16)
		std::cout << '0';
	std::cout << std::hex << std::uppercase << (int)value;
}
