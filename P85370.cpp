#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	double c, i, t;
	string int_type;
	cin >> c >> i >> t >> int_type;
	if (int_type == "simple") {
		cout << c * (1 + ((i / 100) * t)) << endl;
	}
	else if (int_type == "compound") {
		double a = 1 + (i / 100);
		for (int x = 1; x < t; x++) {
			a = a * (1 + (i / 100));
		}
		cout << c * a << endl;
	}
}