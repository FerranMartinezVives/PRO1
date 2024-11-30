#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(2);
	string x;
	cin >> x;
	while (x != "acabar") {
		double a, b, c;
		if (x == "perimetro") {
			cin >> a >> b >> c;
			cout << a + b + c << endl;
		}
		else {
			cin >> a >> b;
			cout << (a * b) / 2 << endl;
		}
		cin >> x;
	}
}