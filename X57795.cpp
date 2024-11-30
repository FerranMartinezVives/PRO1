#include <iostream>
using namespace std;

bool divisors_odd(int x, int y) {
	if (x == 0) return true;
	if (y % (x % 10) != 0) return false;
	return divisors_odd(x / 100, y);
}

int main() {
	int x, y;
	while (cin >> x) {
		cin >> y;
		if (divisors_odd(x, y)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}