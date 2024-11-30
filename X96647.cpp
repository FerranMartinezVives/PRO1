#include <iostream>
#include <vector>
using namespace std;

struct Point {
	double x, y;
};

bool barycenter(const vector<Point>& v, Point& b) {
	double b_x = 0;
	double b_y = 0;
	for (int i = 0; i < v.size(); ++i) {
		b_x += v[i].x;
		b_y += v[i].y;
	}
	b.x = b_x / v.size();
	b.y = b_y / v.size();
	for (int i = 0; i < v.size(); ++i) {
		if (v[i].x == b.x and v[i].y == b.y) return true;
	}
	return false;
}

bool two_elements(const vector<Point>& v) {
	Point b = v[0];
	for (int i = 1; i < v.size(); ++i) {
		if (v[i].x != b.x or v[i].y != b.y) return true;
	}
	return false;
}

bool same_sum(const vector<Point>& v) {
	double sum_x = 0;
	double sum_y = 0;
	for (int i = 0; i < v.size(); ++i) {
		sum_x += v[i].x;
		sum_y += v[i].y;
	}
	return sum_x == sum_y;
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(2);
	int n;
	while (cin >> n) {
		vector<Point> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i].x >> v[i].y;
		Point b;
		bool found = barycenter(v, b);
		cout << "barycenter: (" << b.x << "," << b.y << ")" << endl;
		if (not two_elements(v)) cout << "property 1 does not hold" << endl;
		else if (not same_sum(v)) cout << "property 2 does not hold" << endl;
		else if (found) cout << "property 3 does not hold" << endl;
		else cout << "normalized vector" << endl;
	}
}