#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int in = 1;

	if (n <= 12) {
		for (int i = 1; i <= n; ++i) {
			in *= i;
		}
	}

	std::cout << in;
	return 0;
}
