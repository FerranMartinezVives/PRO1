#include <iostream>
using namespace std;

void factor(int n, int& f, int& q) {
	int f1 = 2;
	int q1 = 0;
	q = 0;
	f = 0;
	while (f1 * f1 <= n) {
		q1 = 0;
		while (n % f1 == 0) {
			++q1;
			n /= f1;
			if (q1 > q) {
				f = f1;
				q = q1;
			}
		}
		++f1;
	}
	if (q == 0) {
		f = n;
		q = 1;
	}
}

int main() {
	int n, f, q;
	while (cin >> n) {
		factor(n, f, q);
		cout << f << " " << q << endl;
	}
}