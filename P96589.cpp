#include <iostream>
using namespace std;

int main() {
	char x;
	cin >> x;
	if ((int(x) >= int('A') and int(x) <= int('Z')) or (int(x) >= int('a') and int(x) <= int('z'))) cout << "lletra" << endl;
	else if (int(x) >= int('0') and int(x) <= int('9')) cout << "digit" << endl;
	else cout << "res" << endl;
}