#include <iostream>
#include "Binary_Class.h"
#include <vector>

int main() {
	int a, b;
	int n;
	char sign;
	std::cin >> n;
	uint8_t value, pattern;
	std::vector<Binary_Class> obj;
	for (int i = 0; i < n; i++) 
	{
		uint16_t value_hex, pattern_hex;
		std::cin >> std::hex>> value_hex >> std::hex >> pattern_hex;
		value = (uint8_t)value_hex;
		pattern = (uint8_t)pattern_hex;
		obj.push_back(Binary_Class(value,pattern));
	}

	while (std::cin >> a >> sign >> b) {
		switch (sign)
	{
		case '&':
			obj[a - 1] &= obj[b - 1];
			break;
		case '|':
			obj[a - 1] |= obj[b - 1];
			break;
		default:
			break;
		}
	}

	obj[a - 1].Output();
	return 0;
}