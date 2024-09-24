#include <iostream>
#include <iomanip>
int main() {
    int n;
    std::cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    int avg = 0;
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 != 0)
        {
            avg += (a[i]);
            count++;
        }
    }

    std::cout << std::fixed << std::setprecision(4) << avg * 1.0 / count;

    return 0;
}
