#include <iostream>

int main() {
    int a[100000];
    //nhap mang
    int n = 0;

    //print
    do
    {
        std::cin >> a[n];
        n++;
    } while (a[n - 1] != 0);  


    int ok = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] < 0)
        {
            ok = 1;
            std::cout << a[i] << " ";
        }
    }

    if (ok == 0)
    {
        std::cout << "NOT FOUND";
    }


    return 0;
}
