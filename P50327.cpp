#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 10; n / i > 0; i = 10 * i) {
		cout << n % i;
	}
	cout << endl;
}