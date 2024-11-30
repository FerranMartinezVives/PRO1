#include <iostream>
using namespace std;

int main() {
	char c;
	while (cin >> c) {
		int sum = 0;
		int aux_sum = 0;
		bool number = false;
		while (c != '.') {
			if (c <= '9' and c >= '0') {
				if (number) {
					aux_sum *= 10;
					aux_sum += int(c - '0');
				}
				else {
					number = true;
					aux_sum += int(c - '0');
				}
			}
			else if (number) {
				number = false;
				sum += aux_sum;
				aux_sum = 0;
			}
			cin >> c;
		}
		if (number) sum += aux_sum;
		cout << sum << endl;
	}
}