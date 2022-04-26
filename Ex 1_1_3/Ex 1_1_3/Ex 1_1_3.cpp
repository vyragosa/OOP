#include <iostream>

int main() {
	int num, digits = 0;
	std::cin >> num;
	if (num == 0)
		digits += 1;
	while (num) {
		digits += 1;
		num /= 10;
	}
	std::cout << "Number of digits: " << digits;
}
