#include <iostream>
using namespace std;

int main() {
	int n;
	bool found = false;
	string a, b;
	int line = 1;
	while (not found and cin >> n) {
		found = true;
		cin >> b;
		for (int j = 1; j < n; ++j) {
			cin >> a;
			if (b > a) found = false;
			b = a;
		}
		if (found) cout << "The first line in increasing order is " << line << "." << endl;
		++line;
	}
	if (not found) cout << "There is no line in increasing order." << endl;
}