#include <iostream>
#include <algorithm>

int main() {
    int n; std::cin >> n;
    int a[10000];

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::sort(a, a + n, std::greater<int>()); 

    long long tich1 = a[0] * a[1] * a[2];
    long long tich2 = a[0] * a[1] * a[n - 1];
    long long tich3 = a[0] * a[n - 1] * a[n - 2];
    long long tich4 = a[n - 1] * a[n - 2] * a[n - 3];


    long long result = std::max({tich1, tich2, tich3, tich4});

    std::cout << result;

    return 0;
}
