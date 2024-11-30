#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

int main() {
	int n, m;
	cin >> n >> m;
	Matrix mat(n, vector<int>(m));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) cin >> mat[i][j];
	}
	int count = 0;
	for (int j = 0; j < m; ++j) {
		if (j % 2 == 0) {
			for (int i = 0; i < n; ++i) {
				if (mat[i][j] == 0) cout << i << " " << j << endl;
				else count += mat[i][j];
			}
		}
		else {
			for (int i = n - 1; i >= 0; --i) {
				if (mat[i][j] == 0) cout << i << " " << j << endl;
				else count += mat[i][j];
			}
		}
		cout << "Total en columna " << j << ": " << count << endl;
	}
}