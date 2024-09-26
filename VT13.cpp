#include <iostream>

const int MAX_SIZE = 100000;

int main() {
    int n; std::cin >> n;
    int a[MAX_SIZE];

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    if (n == 1) {
        std::cout << a[0]; 
        return 0;
    }

    long long x = n - 1; 
    long long y = 0;
    long long max = a[x] + a[y];

    for (int i = 0; i < n - 1; ++i) {
        long long cur = a[i] + a[i + 1];

        if (cur > max) {
            max = cur;
            x = i;
            y = i + 1;
        }
    }

    std::cout << a[x] << " " << a[y];

    return 0;
}