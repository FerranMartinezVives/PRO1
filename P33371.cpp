#include <iostream>
using namespace std;

char encoded(char c, int k) {
	k = k % 26;
	if (c >= 'a' and c <= 'z') {
		if (int(c) + k > int('z')) return char(int(c) + k - 26 - int('a') + int('A'));
		else return char(int(c) + k - int('a') + int('A'));
	}
	else if (c == '_') return ' ';
	else return c;
}

int main() {
	int k;
	while (cin >> k) {
		char c;
		while (cin >> c and c != '.') cout << encoded(c, k);
		cout << endl;
	}
}