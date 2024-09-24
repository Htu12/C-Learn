#include <iostream>

int main() {
	char a, b;
	std::cin >> a >> b;

	int i = (int)a;
	int j = (int)b;

	while (i <= j) {
		std::cout << (char)(i - 32) << " ";
		i++;
	}
	return 0;
}
