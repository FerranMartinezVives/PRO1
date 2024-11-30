#include <iostream>
using namespace std;

bool is_power(int n, int base) {
	int result = 1;
	while (result <= n) {
		if (result == n) return true;
		result *= base;
	}
	return false;
}

int main() {
	int a;
	while (cin >> a) {
		int count = 0;
		int b;
		cin >> b;
		while (b != 0) {
			if (a == 1 or b == 1) ++count;
			else {
				int base = 2;
				bool found = false;
				while (not found and base <= a and base <= b) {
					if (is_power(a, base) and is_power(b, base)) {
						++count;
						found = true;
					}
					else ++base;
				}
			}
			a = b;
			cin >> b;
		}
		cout << count << endl;
	}
}