#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	int a, b, k;
	while (cin >> a >> b >> k) {
		double sum = 0;
		int i = 0;
		int den_sum = a;
		while (den_sum <= b) {
			sum = sum + (1.0 / den_sum);
			++i;
			den_sum = a + i * k;
		}
		cout << sum << endl;
	}
}