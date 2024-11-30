#include <iostream>
using namespace std;

int dig_sum(int n) {
	if (n < 10) return n;
	return dig_sum(n / 10) + n % 10;
}

int main() {
	int a, b;
	int count = 0;
	cin >> a;
	while (cin >> b) {
		if (a % dig_sum(b) == 0) ++count;
		a = b;
	}
	cout << count << endl;
}