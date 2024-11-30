#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int m;
	cin >> m;
	bool found = false;
	int count = 1;
	while (not found and m != -1) {
		if ((n + m) % 10 == 0) found = true;
		else {
			cin >> m;
			++count;
		}
	}
	if (found) cout << m << ": " << count << endl;
	else cout << "No existe" << endl;
}