#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int a[n];

    //nhap mang
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    if (n == 1)
    {
        std::cout << 0;
    }else {
        //max = mang vi tri dau tien
        int max = a[0];
        
        for (int i = 1; i < n; ++i)
        {
            if(a[i] > max) max = a[i];
        }

        for (int z = n - 1; z >=0; --z)
        {
            if (max == a[z])
            {
                std::cout << z;
                break;
            }
        }
    }


    return 0;
}
