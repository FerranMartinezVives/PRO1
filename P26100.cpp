#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Matrix;

int adjacent_bacteria(const Matrix& mat, int i, int j) {
	int n = mat.size();
	int m = mat[0].size();
	int count = 0;
	for (int x = -1; x <= 1; ++x) {
		if (i + x >= 0 and i + x < n) {
			for (int y = -1; y <= 1; ++y) {
				if (j + y >= 0 and j + y < m and (x != 0 or y != 0)) {
					if (mat[i + x][j + y] == 'B') ++count;
				}
			}
		}
	}
	return count;
}

char next_cell(const Matrix& mat, int i, int j) {
	int adj_bact = adjacent_bacteria(mat, i, j);
	if (adj_bact == 3) return 'B';
	if (mat[i][j] == 'B' and adj_bact == 2) return 'B';
	return '.';
}

int main() {
	int n, m;
	cin >> n >> m;
	bool first = true;
	while (n != 0 and m != 0) {
		if (first) first = false;
		else cout << endl;
		Matrix mat(n, vector<char>(m));
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) cin >> mat[i][j];
		}
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j)	cout << next_cell(mat, i, j);
			cout << endl;
		}
		cin >> n >> m;
	}
}