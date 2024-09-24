#include <iostream>

static bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int month, year;
    std::cin >> month >> year;

    int days = 31;

    if (month < 1 || month > 12 || year <= 0 || year > 100000000) {
        std::cout << "INVALID";
    }
    else {
        switch (month) {
            case 4: case 6: case 9: case 11:
                days = 30;
                break;
            case 2:
                days = isLeapYear(year) ? 29 : 28;
                break;
        }

        std::cout << days << std::endl;
    }

    return 0;
}
