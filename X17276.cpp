#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

bool search_diagonal_1(const Matrix& mat, int i, int j) {
	if (i >= mat.size() - 1 or j >= mat[0].size() - 1) return true;
	else if (mat[i][j] >= mat[i + 1][j + 1]) return false;
	else return search_diagonal_1(mat, i + 1, j + 1);
}

bool search_diagonal_2(const Matrix& mat, int i, int j) {
	if (i <= 0 or j <= 0) return true;
	else if (mat[i][j] >= mat[i - 1][j - 1]) return false;
	else return search_diagonal_2(mat, i - 1, j - 1);
}

bool search_diagonal_3(const Matrix& mat, int i, int j) {
	if (i >= mat.size() - 1 or j <= 0) return true;
	else if (mat[i][j] >= mat[i + 1][j - 1]) return false;
	else return search_diagonal_3(mat, i + 1, j - 1);
}

bool search_diagonal_4(const Matrix& mat, int i, int j) {
	if (i <= 0 or j >= mat[0].size() - 1) return true;
	else if (mat[i][j] >= mat[i - 1][j + 1]) return false;
	else return search_diagonal_4(mat, i - 1, j + 1);
}

int main() {
	int n, m;
	while (cin >> n >> m) {
		Matrix mat(n, vector<int>(m));
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) cin >> mat[i][j];
		}
		int i_0, j_0;
		cin >> i_0 >> j_0;
		if (not search_diagonal_1(mat, i_0, j_0)) cout << "no" << endl;
		else if (not search_diagonal_2(mat, i_0, j_0)) cout << "no" << endl;
		else if (not search_diagonal_3(mat, i_0, j_0)) cout << "no" << endl;
		else if (not search_diagonal_4(mat, i_0, j_0)) cout << "no" << endl;
		else cout << "yes" << endl;
	}
}