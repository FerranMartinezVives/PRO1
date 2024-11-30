#include <iostream>
using namespace std;

void reverse() {
	string a;
	cin >> a;
	if (a != "end") {
		reverse();
		cout << a << endl;
	}
}

int main() {
	reverse();
}