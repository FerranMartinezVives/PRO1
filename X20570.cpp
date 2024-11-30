#include <iostream>
using namespace std;

int even_digits(int n) {
	if (n < 10) {
		if (n % 2 == 0) return n;
		return 0;
	}
	if (n % 2 == 0) return even_digits(n / 10) + n % 10;
	return even_digits(n / 10);
}

int main() {
	int x;
	while (cin >> x) cout << even_digits(x) << endl;
}