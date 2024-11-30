#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Flag;

Flag read_flag(int n) {
	Flag aux(n, vector<char>(n));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) cin >> aux[i][j];
	}
	return aux;
}

int column_count(const Flag& flag) {
	int n = flag.size();
	int count = 0;
	for (int j = 0; j < n; ++j) {
		int aux = 0;
		int change;
		for (int i = 1; i < n; ++i) {
			char c = flag[i - 1][j];
			if (c != flag[i][j]) {
				++aux;
				change = i;
			}
		}
		if (aux == 1 and change >= n - 1 - j) ++count;
	}
	return count;
}

int main() {
	int n;
	while (cin >> n) {
		Flag flag = read_flag(n);
		cout << column_count(flag) << endl;
	}
}