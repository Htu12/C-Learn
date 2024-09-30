#include <iostream>
#include <iomanip>

double determinant(double a[2][2]) {
    return a[0][0] * a[1][1] - a[0][1] * a[1][0];
}

int main() {
    double coefficients[6];

    for (int i = 0; i < 6; ++i) {
        std::cin >> coefficients[i];
    }

    double coeffMatrix[2][2] = {{coefficients[0], coefficients[1]}, {coefficients[3], coefficients[4]}};
    double DxMatrix[2][2] = {{coefficients[2], coefficients[1]}, {coefficients[5], coefficients[4]}};
    double DyMatrix[2][2] = {{coefficients[0], coefficients[2]}, {coefficients[3], coefficients[5]}};

    double D = determinant(coeffMatrix);
    double Dx = determinant(DxMatrix);
    double Dy = determinant(DyMatrix);

    if (D != 0) {
        std::cout << std::fixed << std::setprecision(2) << Dx / D << " " << Dy / D;
    } else {
        if (Dx == 0 && Dy == 0) {
            std::cout << "VOSONGHIEM";
        } else {
            std::cout << "VONGHIEM";
        }
    }

    return 0;
}
