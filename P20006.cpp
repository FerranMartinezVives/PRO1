#include <iostream>
using namespace std;

int calculator() {
	char c;
	cin >> c;
	if (c == '+') return calculator() + calculator();
	else if (c == '-') return calculator() - calculator();
	else if (c == '*') return calculator() * calculator();
	else return c - '0';
}

int main() {
	cout << calculator() << endl;
}