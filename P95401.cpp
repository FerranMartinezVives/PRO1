#include <iostream>
using namespace std;

bool leap(int n) {
	if (n % 100 == 0) {
		n = n / 100;
		if (n % 4 == 0) return true;
		else return false;
	}
	else if (n % 4 == 0) return true;
	else return false;
}

int main() {
	int n;
	cin >> n;
	cout << leap(n) << endl;
}