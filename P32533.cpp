#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = n; j > i; --j) cout << "+";
		cout << "/";
		for (int h = 1; h < i and h < n; ++h) cout << "*";
		cout << endl;
	}
}