#include <iostream>
#include <iomanip>

int main() {
	int n;
	std::cin >> n;

	double sum = 0;
	int i = 2;
	while (i < n + 1) {
		sum += (1 * 1.0/ i);
		i++;
	}

	std::cout << std::fixed << std::setprecision(4) << sum;
	return 0;
}
