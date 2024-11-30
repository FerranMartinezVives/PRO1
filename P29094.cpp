#include <iostream>
#include <vector>
using namespace std;

int position_maximum(const vector<double>& v, int m) {
	double max = v[0];
	int pos_max = 0;
	for (int i = 1; i <= m; ++i) {
		if (v[i] > max) {
			max = v[i];
			pos_max = i;
		}
	}
	return pos_max;
}

int main() {
	int n;
	while (cin >> n) {
		vector<double> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		int m;
		cin >> m;
		cout << position_maximum(v, m) << endl;
	}
}