#include <iostream>
using namespace std;

int main() {
	string x, y;
	cin >> x >> y;
	if (x > y) cout << x << " > " << y << endl;
	else if (x < y) cout << x << " < " << y << endl;
	else cout << x << " = " << y << endl;
}