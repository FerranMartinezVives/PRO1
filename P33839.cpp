#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int x = n;
		int y = 0;
		while (x > 0) {
			y = y + (x % 10);
			x = x / 10;
		}
		cout << "The sum of the digits of " << n << " is " << y << "." << endl;
	}
}