#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	bool first = true;
	for (int i = 0; i < n; ++i) {
		if (first) {
			for (int j = 0; j < n; ++j) cout << "*";
			cout << endl;
		}
		else {
			for (int j = 0; j < i; ++j) cout << " ";
			cout << "*";
			for (int j = 0; j < (n - i - 2); ++j) cout << " ";
			if ((n - i - 2) >= 0) cout << "*" << endl;
			else cout << endl;
		}
		first = false;
	}
}