#include <iostream>
using namespace std;

void reverse_n(int n, int& i) {
	string a;
	if (cin >> a) {
		reverse_n(n, i);
		if (i <= n) {
			cout << a << endl;
			++i;
		}
	}
	else i = 1;
}

int main() {
	int n;
	cin >> n;
	reverse_n(n, n);
}