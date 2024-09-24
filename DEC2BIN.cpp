#include <iostream>
#include <string>
#include <algorithm> 

int main() {
    int tc;
    std::cin >> tc;

    while (tc--) {
        long long x;
        std::cin >> x;

        std::string binaryRepresentation = "";

        while (x > 0) {
            binaryRepresentation += (x % 2) + '0';
            x /= 2;
        }

        //reverse
        std::reverse(binaryRepresentation.begin(), binaryRepresentation.end());

        std::cout << binaryRepresentation << "\n";
    }
    return 0;
}
