#include <iostream>

int main() {
    int n; std::cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    for (int i = 1; i < n - 1; ++i)
    {
        for (int j = 1; j < n - i - 1; ++j)
        {
            if(a[j + 1] < a[j]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(int x : a) {
        std::cout << x << " ";
    }
    return 0;
}
