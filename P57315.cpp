#include <iostream>
using namespace std;

int main() {
	int one, two, three;
	int a = 0;
	int b = 0;
	int c = 0;
	string x;
	cin >> one >> two >> three;
	cin >> x;
	if (one <= two) {				//one <= two
		if (two <= three) {			//one <= two <= three
			a = one;
			b = two;
			c = three;
		}
		else if (one <= three) {	//one <= three <= two
			a = one;
			b = three;
			c = two;
		}
		else {						//three <= one <= two	
			a = three;
			b = one;
			c = two;
		}
	}
	else {							//two <= one
		if (one <= three) {			//two <= one <= three
			a = two;
			b = one;
			c = three;
		}
		else if (two <= three){		//two <= three <= one
			a = two;
			b = three;
			c = one;
		}
		else {						//three <= two <= one
			a = three;
			b = two;
			c = one;
		}
	}
	if (x == "ABC") cout << a << " " << b << " " << c << endl;
	else if (x == "ACB") cout << a << " " << c << " " << b << endl;
	else if (x == "BAC") cout << b << " " << a << " " << c << endl;
	else if (x == "BCA") cout << b << " " << c << " " << a << endl;
	else if (x == "CAB") cout << c << " " << a << " " << b << endl;
	else cout << c << " " << b << " " << a << endl;
}