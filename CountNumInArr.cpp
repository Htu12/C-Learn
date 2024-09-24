#include <iostream>

int main() {
    int n, x;
    std::cin >> n >> x;

    int a[n];

    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    int count = 0;

    for (int i = 0; i < n; ++i)
    {
         if(x == a[i]) count++;
    } 

    std::cout << count;
    return 0;
}
