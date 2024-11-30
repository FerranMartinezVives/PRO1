#include <iostream>
#include <vector>
using namespace std;

void interchange(double& a, double& b) {
	double aux = a;
	a = b;
	b = aux;
}

void insert(vector<double>& v) {
	int n = v.size() - 1;
	bool end = false;
	int i = n - 1;
	while (not end and i >= 0) {
		if (v[i + 1] < v[i]) interchange(v[i + 1], v[i]);
		else end = true;
		--i;
	}
}

int main() {
	int n;
	while (cin >> n) {
		vector<double> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		insert(v);
		for (int i = 0; i < n; ++i) cout << v[i] << " ";
		cout << endl;
	}
}