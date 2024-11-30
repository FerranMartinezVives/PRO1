#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(1);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string x;
		double t;
		cin >> x >> t;
		if (x == "C") cout << "F " << 1.8 * t + 32 << endl;
		else cout << "C " << (t - 32) / 1.8 << endl;
	}
}