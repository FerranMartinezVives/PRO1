#include <iostream>
using namespace std;

bool magic_triplet(int x, int y, int z) {
	if (y % 2 == 0) {
		if (x % 2 != 0 and z % 2 != 0) return true;
	}
	if (y % 2 != 0) {
		if (x % 2 == 0 and z % 2 == 0) return true;
	}
	return false;
}

int main() {
	int seq_count = 0;
	int x, y, z;
	bool found = false;
	while (not found and cin >> x) {
		++seq_count;
		int triplet_count = 0;
		cin >> y >> z;
		while (not found and z != 0) {
			if (magic_triplet(x, y, z)) ++triplet_count;
			x = y;
			y = z;
			cin >> z;
			if (triplet_count == 3) found = true;
		}
	}
	if (found) cout << seq_count << endl;
	else cout << "none" << endl;
}