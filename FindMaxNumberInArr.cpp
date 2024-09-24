#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    int max = a[0];

    for (int j = 1; j < n; ++j)
    {
        if(a[j] > max) max = a[j];
    }

    std::cout << max;

    
    return 0;
}
