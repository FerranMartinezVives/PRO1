#include <iostream>
using namespace std;

int main() {
	int b, n;
	while (cin >> b >> n) {
		int dig_count = 0;
		while (n > 0) {
			++dig_count;
			n = n / b;
		}
		cout << dig_count << endl;
	}
}