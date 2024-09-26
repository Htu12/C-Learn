#include <iostream>

int main() {
    int n; std::cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if(a[j + 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    std::cout << - a[n -1] + a[0];
    return 0;
}
