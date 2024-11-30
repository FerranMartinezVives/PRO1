#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

void min_max(const Matrix& mat, int& minimum, int& maximum) {
	bool first = true;
	for (int i = 0; i < mat.size(); ++i) {
		for (int j = 0; j < mat[0].size(); ++j) {
			if (first) {
				minimum = mat[i][j];
				maximum = mat[i][j];
				first = false;
			}	
			else {
				if (mat[i][j] < minimum) minimum = mat[i][j];
				if (mat[i][j] > maximum) maximum = mat[i][j];
			}
		}
	}
}

int main() {
	int n, m;
	int dif = 0;
	bool first = true;
	int mat_num = 1;
	int mat_count = 0;
	while (cin >> n >> m) {
		++mat_count;
		Matrix mat(n, vector<int>(m));
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) cin >> mat[i][j];
		}
		int minimum = 0;
		int maximum = 0;
		min_max(mat, minimum, maximum);
		if (first) {
			dif = maximum - minimum;
			first = false;
		}
		else if (dif < maximum - minimum) {
			dif = maximum - minimum;
			mat_num = mat_count;
		}
	}
	cout << "la diferencia maxima es " << dif << endl << "la primera matriu amb aquesta diferencia es la " << mat_num << endl;
}