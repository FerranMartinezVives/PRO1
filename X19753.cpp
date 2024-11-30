#include <iostream>
using namespace std;

bool is_power_2(int n) {
	if (n == 0) return false;
	if (n == 1) return true;
	if (n % 2 == 0) return is_power_2(n / 2);
	return false;
}

int main() {
	int n;
	cin >> n;
	int pos_count = 1;
	bool found = false;
	while (not found and n != -1) {
		if (is_power_2(n)) found = true;
		else {
			++pos_count;
			cin >> n;
		}
	}
	if (found) cout << pos_count << endl;
	else cout << "0" << endl;
}