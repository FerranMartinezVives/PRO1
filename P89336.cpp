#include <iostream>
using namespace std;

void half_reverse(int& n) {
	string a;
	if (cin >> a) {
		++n;
		half_reverse(n);
		if (n <= 0) cout << a << endl;
		n -= 2;
	}
}

int main() {
	int n = 0;
	half_reverse(n);
}