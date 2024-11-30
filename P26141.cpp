#include <iostream>
using namespace std;

struct Rational {
	int num, den;
};

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

void simplify(Rational& r) {
	int div = gcd(r.num, r.den);
	r.num /= div;
	r.den /= div;
	if (r.den < 0) {
		r.num *= -1;
		r.den *= -1;
	}
}

void sum(Rational& r_0, Rational& r) {
	r.num = r_0.num * r.den + r.num * r_0.den;
	r.den *= r_0.den;
	simplify(r);
}

void mul(Rational& r_0, Rational& r) {
	r.num *= r_0.num;
	r.den *= r_0.den;
	simplify(r);
}

void print_rational(const Rational& r) {
	if (r.den == 1) cout << r.num << endl;
	else cout << r.num << "/" << r.den << endl;
}

int main() {
	Rational r_0, r;
	cin >> r_0.num >> r_0.den;
	simplify(r_0);
	print_rational(r_0);
	string op;
	while (cin >> op) {
		if (op == "add") {
			cin >> r.num >> r.den;
			sum(r_0, r);
		}
		else if (op == "substract") {
			cin >> r.num >> r.den;
			r.num *= -1;
			sum(r_0, r);
		}
		else if (op == "multiply") {
			cin >> r.num >> r.den;
			mul(r_0, r);
		}
		else {
			cin >> r.den >> r.num;
			mul(r_0, r);
		}
		print_rational(r);
		r_0 = r;
	}
}