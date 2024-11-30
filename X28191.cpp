#include <iostream>
using namespace std;

int time_lapse(int time_1, int time_2) {
	if (time_2 <= time_1) return 60 + time_2 - time_1;
	return time_2 - time_1;
}

int main() {
	int limit, time_1, time_2;
	cin >> limit >> time_1 >> time_2;
	int pos_count = 1;
	int total_time = 0;
	bool found = false;
	while (not found and time_2 != -1) {
		++pos_count;
		total_time += time_lapse(time_1, time_2);
		if (total_time > limit) found = true;
		time_1 = time_2;
		cin >> time_2;
	}
	if (not found) cout << "0" << endl;
	else cout << pos_count << endl;
}