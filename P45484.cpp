#include <iostream>
#include <vector>
using namespace std;

bool check_horizontal(const vector <vector<int> >& t, int true_sum) {
	int n = t.size();
	for (int i = 1; i < n; ++i) {
		int aux_sum = 0;
		for (int j = 0; j < n; ++j) aux_sum += t[i][j];
		if (aux_sum != true_sum) return false;
	}
	return true;
}

bool check_vertical(const vector< vector<int> >& t, int true_sum) {
	int n = t.size();
	for (int j = 0; j < n; ++j) {
		int aux_sum = 0;
		for (int i = 0; i < n; ++i) aux_sum += t[i][j];
		if (aux_sum != true_sum) return false;
	}
	return true;
}

bool check_diagonal(const vector< vector<int> >& t, int true_sum) {
	int n = t.size();
	int aux_sum = 0;
	for (int i = 0; i < n; ++i) aux_sum += t[i][i];
	if (aux_sum != true_sum) return false;
	aux_sum = 0;
	for (int i = 0; i < n; ++i) aux_sum += t[i][n - 1 - i];
	if (aux_sum != true_sum) return false;
	return true;
}

bool magic_square(const vector <vector<int> >& t) {
	int n = t.size();
	int true_sum = 0;
	for (int j = 0; j < n; ++j) true_sum += t[0][j];
	if (not check_horizontal(t, true_sum) or not check_vertical(t, true_sum) or not check_diagonal(t, true_sum)) return false;
	for (int k = 1; k <= n * n; ++k) {
		int i = 0;
		bool found = false;
		while (not found and i < n) {
			int j = 0;
			while (not found and j < n) {
				if (k == t[i][j]) found = true;
				++j;
			}
			++i;
		}
		if (not found) return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	vector < vector<int> > square(n, vector<int>(n));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) cin >> square[i][j];
	}
	if (magic_square(square)) cout << "true" << endl;
	else cout << "false" << endl;
}