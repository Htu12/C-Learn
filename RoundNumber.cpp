#include <iostream>
#include <math.h>

using namespace std;

double round(double x, int n) {
    x = x * pow(10, n);
    x = x + 0.5;
    x = floor(x) / pow(10, n);

    return x;
}

#include <math.h>

int main() {
	double a;
	cin >> a;
	
	cout << round(a, 0);
	return 0;
}
