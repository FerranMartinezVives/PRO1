#include <iostream>
using namespace std;

struct Time {
	int hour, minute, second;
};

void one_second(const Time& t, Time& t1, Time& t2) {
	t1 = t;
	t2 = t;
	++t1.second;
	if (t1.second == 60) {
		++t1.minute;
		t1.second = 0;
	}
	if (t1.minute == 60) {
		++t1.hour;
		t1.minute = 0;
	}
	if (t1.hour == 24) t1.hour = 0;
	--t2.second;
	if (t2.second == -1) {
		--t2.minute;
		t2.second = 59;
	}
	if (t2.minute == -1) {
		--t2.hour;
		t2.minute = 59;
	}
	if (t2.hour == -1) t2.hour = 23;
}

void print(const Time& t) {
	cout << t.hour << " " << t.minute << " " << t.second << endl;
}

int main() {
	Time t;
	while (cin >> t.hour >> t.minute >> t.second) {
		Time t1;
		Time t2;
		one_second(t, t1, t2);
		print(t1);
		print(t2);
	}
}