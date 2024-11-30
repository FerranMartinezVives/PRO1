#include <iostream>
using namespace std;

void reverse() {
	string a;
	while (cin >> a) {
		reverse();
		cout << a << endl;
	}
}

int main() {
	reverse();
}