#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int sum = 0;
	int i = 2;
	while (i < n + 1) {
		sum += i;
		i++;
	}

	std::cout << sum + 2 * n;
	return 0;
}
