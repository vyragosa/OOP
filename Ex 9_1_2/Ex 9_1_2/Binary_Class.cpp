#include "Binary_Class.h"
#include <iostream>

Binary_Class::Binary_Class(uint8_t value, uint8_t pattern) {
	this->value=value;
	this->pattern = pattern;
}

Binary_Class Binary_Class::operator&=(Binary_Class& other) {
	uint8_t mask = ~(pattern & other.pattern);
	return Binary_Class(value = ((value ^ mask) & (other.value ^ mask)) ^ mask, pattern);
}

Binary_Class Binary_Class::operator|=(Binary_Class& other) {
	uint8_t mask = (pattern & other.pattern);
	return Binary_Class(value = ((value ^ mask) | (other.value ^ mask)) ^ mask, pattern);
}

void Binary_Class::Output() {
	if (value < 16)
		std::cout << '0';
	std::cout << std::hex<< std::uppercase << (uint16_t)value;
}