#include <iostream>

int main() {
	char symbol;
	std::cin >> symbol;
	if (toupper(symbol) >= 'A' && toupper(symbol) <= 'Z')
		if (toupper(symbol) == 'A' || toupper(symbol) == 'E' || toupper(symbol) == 'I' || toupper(symbol) == 'O' || toupper(symbol) == 'U' || toupper(symbol) == 'Y')
			std::cout << "vowel";
		else
			std::cout << "consonant";
	else
		std::cout << "Not letter";
	return 0;
}
