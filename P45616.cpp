#include <iostream>
using namespace std;

struct Clock {
	int h, m, s;
};

Clock midnight() {
	Clock zero;
	zero.h = 0;
	zero.m = 0;
	zero.s = 0;
	return zero;
}

void increase(Clock& r) {
	++r.s;
	if (r.s == 60) {
		++r.m;
		r.s = 0;
	}
	if (r.m == 60) {
		++r.h;
		r.m = 0;
	}
	if (r.h == 24) r.h = 0;
}

void print(const Clock& r) {
	if (r.h < 10) cout << "0" << r.h << ":";
	else cout << r.h << ":";
	if (r.m < 10) cout << "0" << r.m << ":";
	else cout << r.m << ":";
	if (r.s < 10) cout << "0" << r.s << endl;
	else cout << r.s << endl;
}