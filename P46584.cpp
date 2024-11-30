#include <iostream>
#include <vector>
using namespace std;

vector<double> difference(const vector<double>& v1, const vector<double>& v2) {
	int size_1 = v1.size();
	int size_2 = v2.size();
	vector<double> aux(size_1);
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < size_1 and j < size_2) {
		if (v1[i] == v2[j]) ++i;
		else if (v1[i] > v2[j]) ++j;
		else {
			if (k == 0 or v1[i] != aux[k - 1]) {
				aux[k] = v1[i];
				++k;
			}
			++i;
		}
	}
	while (i < size_1) {
		if (k == 0 or v1[i] != aux[k - 1]) {
			aux[k] = v1[i];
			++k;
		}
		++i;
	}
	vector<double> result(k);
	for (int l = 0; l < k; ++l) result[l] = aux[l];
	return result;
}

int main() {
	int n;
	while (cin >> n) {
		vector<double> v1(n);
		for (int i = 0; i < n; ++i) cin >> v1[i];
		int m;
		cin >> m;
		vector<double> v2(m);
		for (int i = 0; i < m; ++i) cin >> v2[i];
		vector<double> result = difference(v1, v2);
		for (int i = 0; i < result.size(); ++i) cout << result[i] << " ";
		cout << endl;
	}
}