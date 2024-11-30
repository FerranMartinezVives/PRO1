#include <iostream>
#include <vector>
using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v) {
	double prod = 0;
	for (int i = 0; i < u.size(); ++i) {
		prod = prod + (u[i] * v[i]);
	}
	return prod;
}

int main() {
	int n;
	cin >> n;
	vector<double> u(n);
	for (int i = 0; i < n; ++i) cin >> u[i];
	vector<double> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	cout << scalar_product(u, v) << endl;
}