#include <iostream>


int defa(int x, int y) {
    int h = x - y;

    if(h < 0) {
        h = -h;
    }

    return h;
}


int main() {
    int n;std::cin >> n;
    int a[n];
    int b[n];

    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; ++i)
    {   
        if(i % 2 != 0) {
            if(i != (n -1)) {
                b[i] = a[i] + defa(a[i - 1], a[i + 1]);
            } else {
                b[i] = a[i] + defa(a[i - 1], 0);
            }
        } else {
            b[i] = a[i];
        }
    }

    for(int x : b) {
        std::cout << x << " ";
    }
    return 0;
}
