#include <iostream>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	if (a == "A" and b == "A") cout << "-" << endl;
	else if (a == "A" and b == "P") cout << "1" << endl;
	else if (a == "A" and b == "V") cout << "2" << endl;
	else if (a == "P" and b == "A") cout << "2" << endl;
	else if (a == "P" and b == "P") cout << "-" << endl;
	else if (a == "P" and b == "V") cout << "1" << endl;
	else if (a == "V" and b == "A") cout << "1" << endl;
	else if (a == "V" and b == "P") cout << "2" << endl;
	else if (a == "V" and b == "V") cout << "-" << endl;
}