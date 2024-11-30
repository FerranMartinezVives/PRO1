#include <iostream>
#include <vector>
using namespace std;

int equal(int sum, vector<int>& v) {
	for (int i = 0; i < v.size(); ++i) {
		if (sum - v[i] == v[i]) return true;
	}
	return false;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		int sum = 0;
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
			sum += v[i];
		}
		if (equal(sum, v)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}