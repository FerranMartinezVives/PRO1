#include <iostream>
using namespace std;

int main() {
	int r, c;
	cin >> r >> c;
	int total_sum = 0;
	int odd_sum = 0;
	char x;
	for (int i = 1; i <= r; ++i) {
		for (int j = 0; j < c; ++j) {
			cin >> x;
			total_sum = total_sum + int(x) - int('0');
			if (i % 2 != 0) odd_sum = odd_sum + int(x) - int('0');
		}
	}
	cout << total_sum << " " << odd_sum << endl;
}