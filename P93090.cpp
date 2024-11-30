#include <iostream>
using namespace std;

struct Fraction {
	int num, den;
};

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

void simplify(Fraction& x) {
	int div = gcd(x.num, x.den);
	x.num /= div;
	x.den /= div;
}

Fraction addition(const Fraction& x, const Fraction& y) {
	Fraction add;
	add.num = x.num * y.den + y.num * x.den;
	add.den = x.den * y.den;
	simplify(add);
	return add;
}

int main() {
	int n, d;
	char c, op;
	cin >> n >> c >> d >> op;
	Fraction sum;
	sum.num = n;
	sum.den = d;
	simplify(sum);
	while (op != '=') {
		cin >> n >> c >> d >> op;
		Fraction f;
		f.num = n;
		f.den = d;
		sum = addition(sum, f);
	}
	cout << sum.num << "/" << sum.den << endl;
}