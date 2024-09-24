#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int dif = a - b;

	if (dif < 0) {
		dif = - dif;
	}

	cout << dif;
}
