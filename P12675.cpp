#include <iostream>
#include <vector>
using namespace std;

int common_elements(const vector<int>& X, const vector<int>& Y) {
	int a = 0;
	int n = X.size();
	int m = Y.size();
	int i = 0;
	int j = 0;
	while (i < n and j < m) {
		if (X[i] == Y[j]) {
			++a;
			++i;
			++j;
		}
		else if (X[i] > Y[j]) ++j;
		else ++i;
	}
	return a;
}

int main() {
	int n, m;
	cin >> n;
	vector<int> X(n);
	for (int i = 0; i < n; ++i) cin >> X[i];
	cin >> m;
	vector<int> Y(m);
	for (int i = 0; i < m; ++i) cin >> Y[i];
	cout << common_elements(X, Y) << endl;
}