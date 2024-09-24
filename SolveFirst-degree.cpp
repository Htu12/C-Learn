#include <iostream>
#include <iomanip>

int main() {
    int a, b;
    std::cin >> a >> b;

    // ax + b = 0
    if (a == 0) {
        if (b == 0) {
            std::cout << "WOW" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
    else {
        double x = -static_cast<double>(b) / a;  
        std::cout << std::fixed << std::setprecision(2) << x << std::endl;  
    }
    return 0;
}
