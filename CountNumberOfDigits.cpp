#include <iostream>
#include <string>

int main() {
    std::string s = "";

    getline(std::cin, s);

    int x = (int)s[0];


    if(!(x >= 48 && x <= 57)) {
        s = s.substr(1);
    }

    std::cout << s.size();
    return 0;
}
