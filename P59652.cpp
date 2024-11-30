#include <iostream>
using namespace std;

int mcd(int a, int b) {
	while (b != 0) {
		int aux = b;
		b = a % b;
		a = aux;
	}
	return a;
}

void read_rational(int& num, int& den) {
	char c;
	cin >> num >> c >> den;
	int a, b;
	if (den > num) {
		a = den;
		b = num;
	}
	else {
		a = num;
		b = den;
	}
	num = num / mcd(a, b);
	den = den / mcd(a, b);
}

int main() {
	int num, den;
	read_rational(num, den);
	cout << num << " " << den << endl;
}