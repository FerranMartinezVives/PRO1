#include <iostream>
using namespace std;

int main() {
	int r, c;
	cin >> r >> c;
	int suma = 0;
	for (int i = 1; i <= r; ++i) {
		int n;
		cin >> n;
		for (int j = 1; j <= c; ++j) {
			suma = suma + n % 10;
			n = n / 10;
		}
	}
	cout << suma << endl;
}