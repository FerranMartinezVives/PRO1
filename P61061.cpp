#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int dig_prod = 1;
		int x = n;
		bool end = false;
		if (n < 10) {
			end = true;
			cout << "The product of the digits of " << n << " is " << n << "." << endl;
		}
		else {
			while (not end) {
				while (dig_prod != 0 and n > 0) {
					dig_prod = dig_prod * (n % 10);
					n = n / 10;
				}
				cout << "The product of the digits of " << x << " is " << dig_prod << "." << endl;
				if (dig_prod < 10) end = true;
				else {
					n = dig_prod;
					x = dig_prod;
					dig_prod = 1;
				}
			}
		}
		cout << "----------" << endl;
	}
}