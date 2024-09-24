#include <iostream>

int USCLN(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int main() {
	int a, b;
	std::cin >> a >> b;

	int res = USCLN(a, b);

	if (res < 0) {
		res = -res;
	}

	std::cout << res;

	return 0;
}
