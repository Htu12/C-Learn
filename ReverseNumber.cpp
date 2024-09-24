#include <iostream>
#include <string>

int main()
{
    std::string str = "";
    std::string nestr = "";

    std::getline(std::cin, str);

    int length = str.length();

    for (int i = length - 1; i >= 0; --i) {
        int x = (int)str.at(i);
        if (x >= 48 && x <=57) {
            nestr += str.at(i);
        }
    }

    while (nestr[0] == '0') {
        nestr.erase(0, 1);
    }

    std::cout << nestr;
    return 0;
}
