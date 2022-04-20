#ifndef _BINARY_CLASS_H_
#define _BINARY_CLASS_H_
#include <cstdint>

class Binary_Class {
private:
	uint8_t value;
	uint8_t pattern;
public:
	Binary_Class(uint8_t value, uint8_t pattern);
	Binary_Class operator & (Binary_Class& other);
	Binary_Class operator | (Binary_Class& other);
	void Output();
};

#endif