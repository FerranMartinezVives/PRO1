#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		int prod = 1;
		for (int i = 1; i <= b; i++) {
			prod = prod * a;
		}
		cout << prod << endl;
	}
}