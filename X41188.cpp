#include <iostream>
using namespace std;

bool is_univariate(int n) {
	int x = n % 10;
	n /= 10;
	while (n != 0) {
		if (n % 10 != x) return false;
		n /= 10;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	bool found = false;
	int pos_count = 1;
	while (not found and n != -1) {
		if (is_univariate(n)) found = true;
		else {
			++pos_count;
			cin >> n;
		}
	}
	if (not found) cout << "0" << endl;
	else cout << pos_count << endl;
}