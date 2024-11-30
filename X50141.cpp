#include <iostream>
using namespace std;

int current_max_dig(int n) {
	int i = 0;
	while (n > 0) {
		i = max(i, n % 10);
		n /= 10;
	}
	return i;
}

int fatten(int x) {
	if (x < 10) return x;
	return current_max_dig(x) + 10 * fatten(x / 10);
}

int main() {
	int n;
	while (cin >> n) cout << fatten(n) << endl;
}