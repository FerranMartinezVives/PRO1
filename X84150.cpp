#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(2);
	string x;
	cin >> x;
	while (x != "parar") {
		if (x == "suma") {
			double a, b;
			cin >> a >> b;
			cout << a + b << endl;
		}
		else if (x == "resta") {
			double a, b;
			cin >> a >> b;
			cout << a - b << endl;
		}
		else {
			double a;
			cin >> a;
			cout << -1 * a << endl;
		}
		cin >> x;
	}
}