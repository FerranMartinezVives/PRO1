#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a = 2 * n - 3;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < i; ++j) cout << " ";
		cout << "V";
		if (a > 0) {
			for (int j = 0; j < a; ++j) cout << " ";
			cout << "V" << endl;
		}
		else cout << endl;
		a = a - 2;
	}
}