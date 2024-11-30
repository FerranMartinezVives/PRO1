#include <iostream>
using namespace std;

bool is_ptg(int a, int b) {
	int result = (a * a) + (b * b);
	for (int i = 0; i * i <= result; ++i) {
		if (i * i == result) return true;
	}
	return false;
}

int main() {
	int pos_count = 1;
	int a, b;
	cin >> a;
	bool found = false;
	while (not found and cin >> b) {
		if (is_ptg(a, b)) found = true;
		else {
			a = b;
			++pos_count;
		}
	}
	if (found) cout << "First pythagorean pair " << a << " " << b << " at position " << pos_count << endl;
	else cout << "No pythagorean pairs" << endl;
}