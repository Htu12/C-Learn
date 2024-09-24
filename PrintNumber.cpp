#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;

	int i = a;

	do {
		std::cout << i << " ";
		i++;
	} while (i <= b);
	return 0;
}
