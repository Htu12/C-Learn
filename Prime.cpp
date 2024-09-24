#include <iostream>
#include <math.h>

bool isPrime(long long n) {

    for(int i = 2; i <= sqrt(n); ++i) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    long long x;
    std::cin >> x;

    bool check = isPrime(x);

    if(check && x > 1)
    {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}
