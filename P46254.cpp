#include <iostream>
#include <cmath>
using namespace std;

struct Point {
	double x, y;
};

double dist(const Point& a, const Point& b) {
	double x_dist = b.x - a.x;
	double y_dist = b.y - a.y;
	x_dist *= x_dist;
	y_dist *= y_dist;
	double true_dist = sqrt(x_dist + y_dist);
	return true_dist;
}

int main() {
	Point a;
	Point b;
	cin >> a.x >> a.y >> b.x >> b.y;
	double distance = dist(a, b);
	cout << distance << endl;
}