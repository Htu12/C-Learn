#include <iostream>

bool search(int arr[], int n, int x) {
    for (int i = 0; i < n; ++i)
    {
        if(x == arr[i]) return true;
    }

    return false;
}



int main() {
    int n, x;
    std::cin >> n >> x; 

    int a[n];

    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    bool ok = search(a, n, x);

    if (ok)
    {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }


    return 0;
}
