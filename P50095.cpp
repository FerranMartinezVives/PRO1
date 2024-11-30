#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	while (prime(n)) {
		bool next_prime = false;
		while (not next_prime) {
			++n;
			if (prime(n)) next_prime = true;
		}
		cout << n << endl;
		cin >> n;
	}
}