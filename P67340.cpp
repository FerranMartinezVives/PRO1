#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Chessboard;

void print_threats(const Chessboard& board, int i, int j) {
	int k = 1;
	bool found = false;
	while (not found and i + k < board.size() and j + k < board[0].size()) {	//diagonal 1: ++i, ++j
		if (board[i + k][j + k] == 'X') {
			cout << "(" << i + 1 << "," << j + 1 << ")<->(" << i + k + 1 << "," << j + k + 1 << ")" << endl;
			found = true;
		}
		++k;
	}
	k = 1;
	found = false;
	while (not found and i + k < board.size() and j - k >= 0) {	//diagonal 2: ++i, --j
		if (board[i + k][j - k] == 'X') {
			cout << "(" << i + 1 << "," << j + 1 << ")<->(" << i + k + 1 << "," << j - k + 1 << ")" << endl;
			found = true;
		}
		++k;
	}
	k = 1;
	found = false;
	while (not found and i - k >= 0 and j - k >= 0) {		//diagonal 3: --i, --j
		if (board[i - k][j - k] == 'X') {
			cout << "(" << i + 1 << "," << j + 1 << ")<->(" << i - k + 1 << "," << j - k + 1 << ")" << endl;
			found = true;
		}
		++k;
	}
	k = 1;
	found = false;
	while (not found and i - k >= 0 and j + k < board[0].size()) {	// diagonal 4: --i, ++j
		if (board[i - k][j + k] == 'X') {
			cout << "(" << i + 1 << "," << j + 1 << ")<->(" << i - k + 1 << "," << j + k + 1 << ")" << endl;
			found = true;
		}
		++k;
	}
}

int main() {
	int r, c;
	cin >> r >> c;
	Chessboard board(r, vector<char>(c));
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) cin >> board[i][j];
	}
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			if (board[i][j] == 'X') print_threats(board, i, j);
		}
	}
}