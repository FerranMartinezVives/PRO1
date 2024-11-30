#include <iostream>
using namespace std;

int sum_of_digits(int n) {
	if (n < 10) return n;
	return sum_of_digits(n / 10) + n % 10;
}

int encounter_of_rivers(int n) {
	int river_1 = 1;
	int river_3 = 3;
	int river_9 = 9;
	while (river_1 != n and river_3 != n and river_9 != n) {
		while (river_1 < n) river_1 += sum_of_digits(river_1);
		if (river_1 != n) {
			while (river_3 < n) river_3 += sum_of_digits(river_3);
			if (river_3 != n) {
				while (river_9 < n) river_9 += sum_of_digits(river_9);
			}
		}
		if (river_1 != n and river_3 != n and river_9 != n) n += sum_of_digits(n);
	}
	return n;
}

int main() {
	int n;
	while (cin >> n) cout << encounter_of_rivers(n) << endl;
}