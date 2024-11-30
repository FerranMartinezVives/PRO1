#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int n) {
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) return false;
	}
	return true;
}

bool some_sum_is_prime(const vector<int>& v) {
	for (int i = 0; i < v.size(); ++i) {
		for (int j = i + 1; j < v.size(); ++j) {
			int sum = v[i] + v[j];
			if (is_prime(sum)) return true;
		}
	}
	return false;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		if (some_sum_is_prime(v)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}