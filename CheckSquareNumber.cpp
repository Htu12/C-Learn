#include <iostream>
#include <cmath>
using namespace std;

int isPerfectSquare(long long n) {
    if (n < 0) return 0; // A negative number can't be a perfect square

    long long root = static_cast<long long>(sqrt(n)); // Safely cast to long long
    return root * root == n ? 1 : 0;
}

int main() {
    long long x;
    cin >> x;

    if (isPerfectSquare(x)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
