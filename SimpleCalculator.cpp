#include <iostream>
#include <iomanip>

int main() {
	double a, b;
	char x;

	std::cin >> a >> x >> b;

	switch (x)
	{
	case '+':
		std::cout <<std::fixed << std::setprecision(2) <<  a + b;
		break;
	case '-':
		std::cout << std::fixed << std::setprecision(2) << a - b;
		break;
	case '*':
		std::cout << std::fixed << std::setprecision(2) << a * b;
		break;
	case '/':
		if (b == 0) {
			std::cout << "Math Error";
		}
		else
		{
			std::cout << std::fixed << std::setprecision(2) << a / b;
		}
		break;
	default:
		break;
	}
	return 0;

}
