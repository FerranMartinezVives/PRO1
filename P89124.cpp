#include <iostream>
#include <vector>
using namespace std;

const int maximum = 1000000;

vector<bool> sieve(int n) {
	vector<bool> aux(n + 1, true);
	for (int i = 2; i <= n; ++i) {
		for (int j = 2 * i; j <= n; j += i) {
			aux[j] = false;
		}
	}
	return aux;
}

int main() {
	vector<bool> v = sieve(maximum);
	int n;
	while (cin >> n) {
		if (n == 0 or n == 1) cout << n << " is not prime" << endl;
		else if (v[n]) cout << n << " is prime" << endl;
		else cout << n << " is not prime" << endl;
	}
}