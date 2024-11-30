#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a = n;
	int b = n;
	bool tall_peak = false;
	while (not tall_peak and n != 0) {
		if (b > a and b > n) {
			if (b > 3143) tall_peak = true;
		}
		a = b;
		b = n;
		cin >> n;
	}
	if (tall_peak) cout << "YES" << endl;
	else cout << "NO" << endl;
}