#include <iostream>
using namespace std;

int main() {
	int n;
	char c1, c2;
	cin >> n >> c1 >> c2;
	int count = 0;
	char l;
	for (int i = 0; i < n; ++i) {
		cin >> l;
		if (int(l) >= int(c1) and int(l) <= int(c2)) ++count;
	}
	cout << count << endl;
}