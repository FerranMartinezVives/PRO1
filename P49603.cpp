#include <iostream>
using namespace std;

int main() {
	int n;
	string a, b;
	int line = 1;
	int true_line = 0;
	while (cin >> n) {
		bool found = true;
		if (n > 0) cin >> b;
		for (int j = 1; j < n; ++j) {
			cin >> a;
			if (b > a) found = false;
			b = a;
		}
		if (found) true_line = line;
		++line;
	}
	if (true_line != 0) cout << "The last line in increasing order is " << true_line << "." << endl;
	else cout << "There is no line in increasing order." << endl;
}