#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Rectangle;

void minimal_dimensions(char c, const Rectangle& r, int& rows, int& cols) {
	rows = 1;
	cols = 1;
	int imin = 0;
	int jmin = 0;
	int imax = r.size() - 1;
	int jmax = r[0].size() - 1;
	bool found = false;
	int i = 0;
	int j = 0;
	while (not found and i < r.size()) {
		j = 0;
		while (not found and j < r[0].size()) {
			if (r[i][j] == c) {
				found = true;
				imin = i;
			}
			++j;
		}
		++i;
	}
	found = false;
	i = 0;
	j = 0;
	while (not found and j < r[0].size()) {
		i = 0;
		while (not found and i < r.size()) {
			if (r[i][j] == c) {
				found = true;
				jmin = j;
			}
			++i;
		}
		++j;
	}
	found = false;
	i = r.size() - 1;
	j = r[0].size() - 1;
	while (not found and i >= 0) {
		j = r[0].size() - 1;
		while (not found and j >= 0) {
			if (r[i][j] == c) {
				found = true;
				imax = i;
			}
			--j;
		}
		--i;
	}
	found = false;
	i = r.size() - 1;
	j = r[0].size() - 1;
	while (not found and j >= 0) {
		i = r.size() - 1;
		while (not found and i >= 0) {
			if (r[i][j] == c) {
				found = true;
				jmax = j;
			}
			--i;
		}
		--j;
	}
	rows += imax - imin;
	cols += jmax - jmin;
}

int main() {
	int rows, cols;
	char c;
	cin >> rows >> cols >> c;
	Rectangle r(rows, Row(cols));
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) cin >> r[i][j];
	}
	minimal_dimensions(c, r, rows, cols);
	cout << rows << " " << cols << endl;
}