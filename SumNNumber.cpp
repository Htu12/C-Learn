#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int sum = 0;
	int i = 1;
	while (i < n + 1) {
		sum += i;
		i++;
	}

	std::cout << sum;
	return 0;
}
