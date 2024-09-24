#include <iostream>

//BSCNN(a, b) = (a * b) / USCLN(a, b)

int USCLN(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int BSCNN(int a, int b) {
	return (a * b) / USCLN(a, b);
}


int main() {
	int a, b;
	std::cin >> a >> b;

	(a < 0) ? a = -a : a = a;
	(b < 0) ? b = -b : b = b;

	int kq = BSCNN(a, b);

	std::cout << kq;
	return 0;
}
