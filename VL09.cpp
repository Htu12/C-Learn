#include <iostream>
#include <math.h>
#include <iomanip>

int factorial(int n) {
    if(n < 2) return 1;
    return n * factorial(n -1);
}

int main() {
    double x;
    int n;
    std::cin >> x >> n;

    double tong = 0;
    int i = 1;

    while(i <= n) {
        tong += (pow(x, i) / factorial(i));
        i++;
    }

    std::cout << std::fixed << std::setprecision(2) << tong;


    return 0;
}
