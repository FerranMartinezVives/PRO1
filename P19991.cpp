#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		int count = 0;
		for (int j = 0; j < n; ++j) {
			++count;
			char t;
			cin >> t;
			if (count == i or count == (n + 1 - i)) sum = sum + (int(t) - int('0'));
		}
	}
	cout << sum << endl;
}