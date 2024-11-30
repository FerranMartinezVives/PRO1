#include <iostream>
using namespace std;

int sum_min_max(int x, int y, int z) {
	int sum;
	if (x >= y) {
		if (y >= z) sum = x + z;			// x >= y >= z
		else if (x >= z) sum = x + y;		// x >= z >= y
		else sum = z + y;					// z >= x >= y
	}
	else {
		if (x >= z) sum = y + z;			// y >= x >= z
		else if (y >= z) sum = y + x;		// y >= z >= x
		else sum = z + x;					// z >= y >= x
	}
	return sum;
}

int main() {
	int x, y, z;
	cin >> x >> y >> z;
	cout << sum_min_max(x, y, z) << endl;
}