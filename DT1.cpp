#include <iostream>
#include <math.h>
#include <iomanip>

double round(double x, int n) {
    x = x * pow(10, n);
    x = x + 0.5;
    x = floor(x) / pow(10, n);

    return x;
}

int main() {
    int a; std::cin >> a;

    double S = M_PI * a * a;

    std::cout << std::fixed << std::setprecision(3) << round((S / 2), 3);

    return 0;
}
