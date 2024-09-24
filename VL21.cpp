#include <iostream>

//1 + 2 + 3 + ... + x <= N
int tong(int x) {
    return x * (x + 1) / 2;
}

int main() {
    int N;
    std::cin >> N;

    int x = 1;
    int sum = 0;

    while(sum <= N){
        x++;
        sum = tong(x);
    }


    std::cout << x - 1;

    
    return 0;
}
