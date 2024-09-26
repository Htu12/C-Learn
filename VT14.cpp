#include <iostream>


int main() {
    int n; std::cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (a[j] < a[j + 1])        
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    int head = a[0] * a[1];
    int end = a[n - 1] * a[n - 2];

    int result = (head > end) ? head : end;

    std::cout << result;

    return 0;
}
