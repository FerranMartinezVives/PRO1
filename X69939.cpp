#include <iostream>
using namespace std;

int time_lapse(int time_1, int time_2) {
	if (time_2 > time_1) return time_2 - time_1;
	return 60 + time_2 - time_1;
}

int main() {
	int time_1, time_2;
	cin >> time_1 >> time_2;
	int true_lapse = time_lapse(time_1, time_2);
	bool ok = true;
	time_1 = time_2;
	cin >> time_2;
	while (ok and time_2 != -1) {
		if (time_lapse(time_1, time_2) != true_lapse) ok = false;
		else {
			time_1 = time_2;
			cin >> time_2;
		}
	}
	if (not ok) cout << "0" << endl;
	else cout << true_lapse << endl;
}