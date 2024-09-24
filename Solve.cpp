#include <iostream>
#include <iomanip>
#include <math.h>

int main() {
    int a, b, c;
    double x1, x2 = 0;
    std::cin >> a >> b >> c;

    // ax^2 + bx + c = 0
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                std::cout << "WOW";
            }
            else
            {
                std::cout << "NO";
            }
        }
        else
        {
            std::cout << std::fixed << std::setprecision(2) << (-c) * 1.0 / b;
        }
    }
    else
    {
        double delta = b * b - 4 * a * c;
        if (delta < 0) {
            std::cout << "NO";
        }
        else if (delta == 0) {
            x1 = x2 = (-b) * 1.0 / (2 * a);
            std::cout << x1;
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            if (x1 < x2) {
                std::cout << std::fixed << std::setprecision(2) << x1 << " " << x2;
            }
            else
            {
                std::cout << std::fixed << std::setprecision(2) << x2 << " " << x1;
            }

        }
    }
    return 0;
}
