#include <iostream>
#include <iomanip>

using namespace std;

double PI = 3.14;

int main() {

	double R;
	cin >> R;

	cout << fixed << setprecision(3) << 2 * PI *R << " " << PI * R * R;


	return 0;
}
