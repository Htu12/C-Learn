#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    // S = n * (n + 1) * (2n + 1) / 6
    long long S = n * (n + 1) * (2 * n + 1) / 6;

    std::cout << S << std::endl;

    return 0;
}
