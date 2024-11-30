#include <iostream>
using namespace std;

bool is_perfect(int n) {
	int sum = 1;
	for (int i = 2; i * i < n; ++i) {
		if (n % i == 0) sum += i + n / i;
	}
	if (n != 0 and n != 1) return (sum == n);
	else return false;
}

int main() {
	int n;
	while (cin >> n) cout << is_perfect(n) << endl;
}