#include <iostream>
using namespace std;

bool triplet_number(int n) {
	if (n == 0) return true;
	int a = n % 10;
	n /= 10;
	if (n % 10 != a) return false;
	n /= 10;
	if (n % 10 != a) return false;
	return triplet_number(n / 10);
}

int main() {
	int n;
	while (cin >> n) {
		if (triplet_number(n)) cout << "TRUE" << endl;
		else cout << "FALSE" << endl;
	}
}