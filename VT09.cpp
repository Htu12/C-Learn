#include <iostream>
#include <math.h>

bool isPrime(int x) {
    if(x < 2) return false;

    for (int i = 2; i <= sqrt(x); ++i)
    {
        if(x % i == 0) return false;
    }
    return true;
}

int main() {
    int n;std::cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if(a[j + 1] < a[j]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (isPrime(a[i]) && a[i] < a[i + 1])      
        {
            std::cout << a[i] << " ";
        }
    }

    return 0;
}
