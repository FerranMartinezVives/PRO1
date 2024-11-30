#include <iostream>
#include <vector>
using namespace std;

int last_position_of(const vector<int>& v, double x) {
	for (int i = v.size() - 1; i >= 0; --i) {
		if (v[i] < x) return i;
	}
	return -1;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		double even_avg = 0;
		int even_count = 0;
		for (int i = 0; i < n; ++i) {
			if (v[i] % 2 == 0) {
				even_avg += v[i];
				++even_count;
			}
		}
		even_avg /= even_count;
		cout << last_position_of(v, even_avg) << endl;
	}
}