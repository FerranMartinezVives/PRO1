#include <iostream>
using namespace std;

int main() {
	int b;
	cin >> b;
	int n;
	while (cin >> n) {
		int dig_sum = 0;
		int x = n;
		while (x > 0) {
			dig_sum = dig_sum + (x % b);
			x = x / b;
		}
		cout << n << ": " << dig_sum << endl;
	}
}