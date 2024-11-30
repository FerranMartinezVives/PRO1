#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<bool> > Board;

void ship_placement(Board& b) {
	char i, c;
	int j, x;
	cin >> i >> j >> x >> c;
	int row = int(i - 'a');
	int col = j - 1;
	if (c == 'v') {
		for (int k = 0; k < x; ++k) b[row + k][col] = true;
	}
	else {
		for (int k = 0; k < x; ++k) b[row][col + k] = true;
	}
}

int distance_to_ship(const Board& b, int i, int j, int index) {
	for (int k = -index; k <= index; ++k) {
		if (i + k < 10 and i + k >= 0 and j + index < 10 and b[i + k][j + index]) return index;
		if (i + k < 10 and i + k >= 0 and j - index >= 0 and b[i + k][j - index]) return index;
		if (i + index < 10 and j + k < 10 and j + k >= 0 and b[i + index][j + k]) return index;
		if (i - index >= 0 and j + k < 10 and j + k >= 0 and b[i - index][j + k]) return index;
	}
	return distance_to_ship(b, i, j, index + 1);
	
}

int main() {
	Board b(10, vector<bool>(10, false));
	for (int i = 0; i < 10; ++i) ship_placement(b);
	cout << "  ";
	for (int i = 1; i <= 10; ++i) cout << i;
	cout << endl;
	for (int i = 0; i < 10; ++i) {
		cout << char('a' + i) << " ";
		for (int j = 0; j < 10; ++j) {
			if (b[i][j]) cout << 'X';
			else cout << '.';
		}
		cout << endl;
	}
	cout << endl;
	char i;
	int j;
	while (cin >> i >> j) {
		int row = int(i - 'a');
		int col = j - 1;
		if (b[row][col]) cout << i << j << " touched!" << endl;
		else {
			int k = 1;
			cout << i << j << " water! closest ship at distance " << distance_to_ship(b, row, col, k) << endl;
		}
	}
}