#include <iostream>
using namespace std;

bool pairwise_sum(int x, int y) {
	if (x == 0) return true;
	int a = x % 10;
	x /= 10;
	int b = x % 10;
	x /= 10;
	if (a + b != y) return false;
	return pairwise_sum(x, y);
}

int main() {
	int x, y;
	while (cin >> x >> y) {
		if (pairwise_sum(x, y)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}