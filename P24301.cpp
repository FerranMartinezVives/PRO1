#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
	int n = v1.size();
	int m = v2.size();
	vector<int> conc(n + m);
	for (int i = 0; i < n; ++i) conc[i] = v1[i];
	for (int i = 0; i < m; ++i) conc[i + n] = v2[i];
	return conc;
}

int main() {
	int n, m;
	cin >> n;
	vector<int> v1(n);
	for (int i = 0; i < n; ++i) cin >> v1[i];
	cin >> m;
	vector<int> v2(m);
	for (int i = 0; i < m; ++i) cin >> v2[i];
	vector<int> conc = concatenation(v1, v2);
	for (int i = 0; i < n + m; ++i) cout << conc[i] << " ";
	cout << endl;
}