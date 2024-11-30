#include <iostream>
#include <vector>
using namespace std;

int null_triplets(const vector<int>& v) {
	int count = 0;
	for (int i = 2; i < v.size(); ++i) {
		if (v[i - 1] == v[i] + v[i - 2]) ++count;
	}
	return count;
}

int main() {
	int n;
	cin >> n;
	int total_count = 0;
	for (int k = 0; k < n; ++k) {
		int m;
		cin >> m;
		vector<int> v(m);
		for (int i = 0; i < m; ++i) cin >> v[i];
		int aux_count = null_triplets(v);
		cout << aux_count << endl;
		total_count += aux_count;
	}
	cout << "Total: " << total_count << endl;
}