#include <iostream>
#include <vector>
using namespace std;

string exit(int p, vector<int>& v) {
	int n = v.size();
	vector<bool> aux(n, false);
	while (not aux[p]) {
		aux[p] = true;
		p += v[p];
		if (p >= n) return "right";
		if (p < 0) return "left";
	}
	return "never";
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		int p;
		cin >> p;
		cout << exit(p, v) << endl;
	}
}