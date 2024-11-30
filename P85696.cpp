#include <iostream>
using namespace std;

struct Rational {
	int num, den;
};

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

Rational rational(int n, int d) {
	Rational r;
	if (n == 0) {
		r.num = 0;
		r.den = 1;
		return r;
	}
	int div = gcd(n, d);
	r.num = n / div;
	r.den = d / div;
	if (r.den < 0) {
		r.num *= -1;
		r.den *= -1;
	}
	return r;
}

int main() {
	int n, d;
	cin >> n >> d;
	Rational r = rational(n, d);
	cout << r.num << " " << r.den << endl;
}