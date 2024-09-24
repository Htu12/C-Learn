#include <iostream>

void printUoc(int n) {
    if(n < 0) {
        n = -n;
    }

    for(int i = n; i >= 1; --i) {
        if(n % i == 0) {
            std::cout << i << " ";
        }
    }

}


int main() {
    
    int n;
    std::cin >> n;

    if(n == 0) {
        std::cout << "INF";
    } else {
        printUoc(n);
    }


    return 0;
}
