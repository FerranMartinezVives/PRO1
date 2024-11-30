#include <iostream>
using namespace std;

int main() {
	char x;
	int oddsum = 0;
	int evensum = 0;
	bool odd = true;
	bool even = false;
	int it_num = 0;
	while (cin >> x) {
		++it_num;
		if (odd == true) oddsum = oddsum + (int(x) - int('0'));
		else evensum = evensum + (int(x) - int('0'));
		odd = not odd;
		even = not even;
	}
	int oddsum2, evensum2;
	if (it_num % 2 == 0) {
		oddsum2 = evensum;
		evensum2 = oddsum;
	}
	else {
		oddsum2 = oddsum;
		evensum2 = evensum;
	}
	cout << oddsum2 << " " << evensum2 << endl;
	if (evensum2 == 0 and oddsum2 == 0) cout << "0 = 0 * 0" << endl;
	else if (evensum2 == 0) cout << "0 = 0 * " << oddsum2 << endl;
	else if (oddsum2 == 0) cout << "0 = 0 * " << evensum2 << endl;
	else if (evensum2 % oddsum2 == 0 or oddsum2 % evensum2 == 0) {
		if (oddsum2 >= evensum2) cout << oddsum2 << " = " << oddsum2 / evensum2 << " * " << evensum2 << endl;
		else cout << evensum2 << " = " << evensum2 / oddsum2 << " * " << oddsum2 << endl;
	}
	else cout << "nothing" << endl;
} 