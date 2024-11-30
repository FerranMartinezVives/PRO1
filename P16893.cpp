#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Sudoku;

bool check_horizontal(const Sudoku& s, int row, int n) {
	if (n == 10) return true;
	for (int j = 0; j < 9; ++j) {
		if (s[row][j] == n) return check_horizontal(s, row, n + 1);
	}
	return false;
}

bool check_vertical(const Sudoku& s, int col, int n) {
	if (n == 10) return true;
	for (int i = 0; i < 9; ++i) {
		if (s[i][col] == n) return check_vertical(s, col, n + 1);
	}
	return false;
}

bool check_matrix(const Sudoku& s, int row, int col, int n) {
	if (n == 10) return true;
	for (int i = row; i < row + 3; ++i) {
		for (int j = col; j < col + 3; ++j) {
			if (s[i][j] == n) return check_matrix(s, row, col, n + 1);
		}
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	for (int x = 0; x < n; ++x) {
		Sudoku s(9, vector<int>(9));
		for (int i = 0; i < 9; ++i) {
			for (int j = 0; j < 9; ++j) cin >> s[i][j];
		}
		int m = 1;
		bool error_found = false;
		int count = 0;
		while (not error_found and count < 9) {
			if (not check_horizontal(s, count, m)) error_found = true;
			++count;
		}
		if (error_found) cout << "no" << endl;
		else {
			count = 0;
			while (not error_found and count < 9) {
				if (not check_vertical(s, count, m)) error_found = true;
				++count;
			}
			if (error_found) cout << "no" << endl;
			else {
				int row = 0;
				int col = 0;
				while (not error_found and row < 9) {
					if (not check_matrix(s, row, col, m)) error_found = true;
					col += 3;
					if (col == 9) {
						row += 3;
						col = 0;
					}
				}
				if (error_found) cout << "no" << endl;
				else cout << "yes" << endl;
			}
		}
	}
}