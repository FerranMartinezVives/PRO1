#include <iostream>
#include <vector>
using namespace std;

bool accum(const vector<int>& v, int i) {
	int sum = 0;
	int j = i + 1;
	while (sum <= v[i] and j < v.size()) {
		if (v[i] == sum) return true;
		sum += v[j];
		++j;
	}
	if (v[i] == sum) return true;
	return false;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		int count = 0;
		for (int i = 0; i < n; ++i) {
			if (accum(v, i)) ++count;
		}
		cout << count << endl;
	}
}