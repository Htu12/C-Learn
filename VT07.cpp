#include <iostream>


int main() {
    int a[11];
    for (int i = 0; i < 10; ++i)
    {
        std::cin >> a[i];
    }
    
    int x;
    std::cin >> x;

    int ok = 0;
    for (int j = 0; j < 10; ++j)
    {
        if (a[j] == x)
        {
            ok = 1;
            std::cout << j + 1 << " ";   
        }
    }

    if (ok == 0)
    {
        std::cout << -1;
    }

    return 0;
}
