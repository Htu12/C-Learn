#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int tong = 0;

    int i = a;
    while(i <= b) {
        if(i % 2 == 0) {
            tong += i;
        }
        i++;
    }

    std::cout << tong;
    return 0;
}
