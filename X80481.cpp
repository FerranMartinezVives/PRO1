#include <iostream>
using namespace std;

void yes(int current, int smallest, int& count) {
	if (current != 0) {
		bool count_1 = false;
		bool count_2 = false;
		if (smallest < 0 or current < smallest) {
			smallest = current;
			count_1 = true;
		}
		int next;
		cin >> next;
		if (current < next) count_2 = true;
		if (count_1 and count_2) ++count;
		yes(next, smallest, count);
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		int smallest = -1;
		int count = 0;
		yes(x, smallest, count);
		cout << count << endl;
	}
}