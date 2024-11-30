#include <iostream>
using namespace std;

int main() {
	int a, b;
	char op;
	cin >> a;
	while (a >= 0) {
		cin >> op >> b;
		if (op == '+') cout << a + b << endl;
		else if (op == '-') cout << a - b << endl;
		else cout << a * b << endl;
		cin >> a;
	}
}