#include <iostream>

int USCLN(int a, int b) {
	(a < 0) ? a = -a : a = a;
	(b < 0) ? b = -b : b = b;

	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int main() {
	int x, y;
	std::cin >> x >> y;

	if (y == 0) {
		std::cout << "INVALID";
	}
	else
	{
		int usc = USCLN(x, y);

		int tuSo = x / usc;
		int mauSo = y / usc;

		if (mauSo < 0) {
			tuSo = -tuSo;
			mauSo = -mauSo;
		}

		if (mauSo == 1) {
			std::cout << tuSo;
		}
		else
		{
			std::cout << tuSo << " " << mauSo;
		}
	}
	return 0;
}
