#include <iostream>
#include "Binary_Class.h"
#include <vector>

int main() {
	int a, b, n;
	char sign;
	std::vector<Binary_Class> obj;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int value, pattern;
		std::cin >> std::hex >> value >> pattern;
		obj.push_back(Binary_Class(value, pattern));
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