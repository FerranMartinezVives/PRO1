#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

Matrix read_mat(int m, int n) {
	Matrix mat(m, vector<int>(n));
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) cin >> mat[i][j];
	}
	return mat;
}

bool are_equal(const Matrix& mat, int i_1, int i_2) {
	for (int j = 0; j < mat[0].size(); ++j) {
		if (mat[i_1][j] != mat[i_2][j]) return false;
	}
	return true;
}

int main() {
	int m, n;
	while (cin >> m >> n) {
		Matrix mat = read_mat(m, n);
		int count = m;
		for (int i = 1; i < m; ++i) {
			int j = 0;
			bool found = false;
			while (not found and j < i) {
				if (are_equal(mat, i, j)) {
					--count;
					found = true;
				}
				else ++j;
			}
		}
		cout << count << endl;
	}
}