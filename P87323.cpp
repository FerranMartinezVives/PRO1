#include <iostream>
using namespace std;

int main() {
	int f, c;
	cin >> f >> c;
	for (int i = 0; i < f; ++i) {
		int a = i;
		char x = '0' + a;
		while (x > '9')	x = x - '0';
		while (a > c) a = a - c;
		for (int j = 0; j < a; ++j) {
			cout << x;
			--x;
		}
		for (int j = 0; j < (c - a); ++j) {
			cout << x;
			++x;
			if (x > '9') x = '0';
		}
		cout << endl;
	}
}
// no està bé encara