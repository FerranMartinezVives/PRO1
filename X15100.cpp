#include <iostream>
using namespace std;

int main() {
	int r, c;
	cin >> r >> c;
	int total_sum = 0;
	int even_sum = 0;
	char x;
	for (int i = 0; i < r; ++i) {
		for (int j = 1; j <= c; ++j) {
			cin >> x;
			total_sum = total_sum + int(x) - int('0');
			if (j % 2 == 0) even_sum = even_sum + int(x) - int('0');
		}
	}
	cout << total_sum << " " << even_sum << endl;
}