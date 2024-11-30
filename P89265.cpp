#include <iostream>
using namespace std;

int main() {
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	if (a1 == a2 and b1 == b2) cout << "= , [" << a1 << "," << b1 << "]" << endl;
	else if (a1 >= a2 and b1 <= b2) cout << "1 , [" << a1 << "," << b1 << "]" << endl;
	else if (a1 <= a2 and b1 >= b2) cout << "2 , [" << a2 << "," << b2 << "]" << endl;
	else if (a1 >= a2 and b1 > b2) {
        if (a1 > b2) cout << "? , []" << endl;
        else cout << "? , [" << a1 << "," << b2 << "]" << endl;
    }
    else if (a1 < a2 and b1 <= b2) {
        if (a2 > b1) cout << "? , []" << endl;
        else cout << "? , [" << a2 << "," << b1 << "]" << endl;
    }
    else cout << "? , []" << endl;
}