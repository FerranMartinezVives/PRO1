#include <iostream>
using namespace std;

int main() {
	int x, a;
	cin >> x;
	for (int i = 2; i <= 16; ++i) {
		a = x;
		int n = 1;
		while (a >= i) {
			n = n + 1;
			a = a / i;
		}
		cout << "Base " << i << ": " << n << " cifras." << endl;
	}
}