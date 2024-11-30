#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a = n;
	int x = 1;
	while (9 < n) {
		n = n / 10;
		x = x + 1;
	}
	cout << "The number of digits of " << a << " is " << x << "." << endl;
}