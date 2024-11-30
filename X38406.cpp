#include <iostream>
#include <vector>
using namespace std;

bool find_element(const vector<double>& v, double x, double& e) {
	for (int i = v.size() - 1; i >= 0; --i) {
		if (v[i] >= x * 2 or v[i] <= x / 2) {
			e = v[i];
			return true;
		}
	}
	return false;
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(2);
	int n;
	cin >> n;
	vector<double> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	double mean = 0;
	for (int i = 0; i < n; ++i) mean += v[i];
	mean /= n;
	double elem;
	bool found = find_element(v, mean, elem);
	if (found) cout << elem << endl;
	else cout << "not found" << endl;
}