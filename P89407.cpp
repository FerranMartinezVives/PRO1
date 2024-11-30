#include <iostream>
#include <vector>
using namespace std;

void print(int n, int b) {
	if (n != 0) {
		print(n / b, b);
		if (n % b < 10) cout << n % b;
		else cout << char('A' + n % b - 10);
	}
}

bool same_digits(int x, int y, int b) {
	vector<int> v(b, 0);
	int size = v.size();
	int prod = x * y;
	while (prod > 0) {
		if (x > 0) ++v[x % b];
		if (y > 0) ++v[y % b];
		--v[prod % b];
		x /= b;
		y /= b;
		prod /= b;
	}
	for (int i = 0; i < size; ++i) {
		if (v[i] != 0) return false;
	}
	return true;
}

int main() {
	int x, y;
	while (cin >> x >> y) {
		cout << "solutions for " << x << " and " << y << endl;
		bool any_result = false;
		for (int i = 2; i <= 16; ++i) {
			if (same_digits(x, y, i)) {
				any_result = true;
				print(x, i);
				cout << " * ";
				print(y, i);
				cout << " = ";
				print(x * y, i);
				cout << " (base " << i << ")" << endl;
			}
		}
		if (not any_result) cout << "none of them" << endl;
		cout << endl;
	}
}