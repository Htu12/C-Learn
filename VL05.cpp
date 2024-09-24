#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int sum = 0;
	int i = 1;
	int e = 3 * n + 2;
	while (i < e) {
		if (i % 2 != 0) {
			sum += i;
		}
		else {
			sum -= i;
		}
		i++;
	}

	std::cout << sum;
	return 0;
}
