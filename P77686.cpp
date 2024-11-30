#include <iostream>
using namespace std;

bool is_palindromic(int n) {
	int n1 = n;
	int n0 = 0;
	int num = 0;
	while (n != 0) {
		num = n % 10;
		n = n / 10;
		n0 = num + (n0 * 10);
	}
	if (n1 == n0) return true;
	else return false;
}

int main() {
	int n;
	cin >> n;
	cout << is_palindromic(n) << endl;
}