#include <iostream>
#include <vector>

int main() {
	int a, b;
	std::cin >> a >> b;

	int count = 0;
	std::vector<int> v;
	for (int i = b - 1; i > a; --i) {
		if (i % 3 == 0) {
			count++;
			v.push_back(i);
		}
	}

	if (v.empty()) {
		std::cout << "NOT FOUND";
	}
	else
	{
		for (int x : v) {
			std::cout << x << " ";
		}
	}

	return 0;
}
