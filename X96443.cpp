#include <iostream>
#include <vector>
using namespace std;

struct Coord {
	int x, y;
};

typedef vector< vector<char> > Matrix;

Coord nextD(const Coord& p, int n) {
	Coord q;
	q.x = p.x - 1;
	q.y = p.y + 1;
	if (q.x == -1 and q.y == n) {
		q.x = n - 1;
		q.y = 1;
	}
	else if (q.x == n - 2 and q.y == n) {
		q.x = 0;
		q.y = 0;
	}
	else if (q.x == -1) {
		q.x = p.y + 1;
		q.y = 0;
	}
	else if (q.y == n) {
		q.y = q.x;
		q.x = n - 1;
	}
	return q;
}

int main() {
	int d, l, n, f, c;
	while (cin >> n >> d >> l >> f >> c) {
		Coord p;
		p.x = f;
		p.y = c;
		Matrix mat(n, vector<char>(n));
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) cin >> mat[i][j];
		}
		cout << mat[p.x][p.y];
		for (int i = 0; i < l; ++i) {
			for (int j = 0; j < d; ++j) p = nextD(p, n);
			cout << mat[p.x][p.y];
		}
		cout << endl;
	}
}