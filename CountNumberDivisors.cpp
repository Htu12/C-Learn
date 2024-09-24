#include <iostream>

int main() {
	int x;
	std::cin >> x;

	if (x < 0) {
		x = -x;
	}

	int count = 0;
	for (int i = 1; i <= x; ++i) {
		(x % i == 0) ? count++ : count;
	}

	std::cout << count;

	return 0;
}
