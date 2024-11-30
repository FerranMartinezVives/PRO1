#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(6);
	int n;
	while (cin >> n) {
		double m = n;
		cout << n * n << " " << sqrt(m) << endl;
	}
}