#include <iostream>


int main(int argc, char const *argv[])
{
	int a, b, c;
	std::cin >> a >> b >> c;

	int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	std::cout << max;
	return 0;
}
