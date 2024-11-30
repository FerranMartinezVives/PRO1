#include <iostream>
using namespace std;

int main() {
	char x;
	cin >> x;
	bool found = false;
	while (not found and x != '.') {
		if (x == 'h') {
			cin >> x;
			if (x == 'e') {
				cin >> x;
				if (x == 'l') {
					cin >> x;
					if (x == 'l') {
						cin >> x;
						if (x == 'o') found = true;
					}
				}
			}
		}
		else cin >> x;
	}
	if (found) cout << "hello" << endl;
	else cout << "bye" << endl;
}