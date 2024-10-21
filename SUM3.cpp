#include <iostream>
#include <iomanip>

int main() {
    long long n;
    std::cin >> n;

    double S = 0;
    for (long long i = 1; i <= n; ++i)
    {
        S += (1 * 1.0 / (i * (i + 1)));
    }

    std::cout << std::fixed << std::setprecision(5) << S;

    return 0;
}
