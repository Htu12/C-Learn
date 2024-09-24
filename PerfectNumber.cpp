#include <iostream>
#include <math.h>

bool soHoanHao(int n) {
    int tong = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            tong += i;
            if(i != n / i){
                tong += n / i;
            }
        }
    }
    if(tong - n == n){
        return 1;
    }

    return 0;
}

int main() {
    int n;
    std::cin >> n;

   if(soHoanHao(n)) {
        std::cout << "YES";
   } else {
        std::cout << "NO";
   }
    return 0;
}
