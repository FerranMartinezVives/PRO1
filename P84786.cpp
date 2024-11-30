#include <iostream>
#include <cmath>
using namespace std;

struct Point {
	double x, y;
};

struct Circle {
	Point center;
	double radius;
};

double dist(const Point& a, const Point& b) {
	double x_dist = b.x - a.x;
	double y_dist = b.y - a.y;
	x_dist *= x_dist;
	y_dist *= y_dist;
	double true_dist = sqrt(x_dist + y_dist);
	return true_dist;
}

void move(Point& p1, const Point& p2) {
	p1.x += p2.x;
	p1.y += p2.y;
}

void scale(Circle& c, double sca) {
	c.radius *= sca;
}

void move(Circle& c, const Point& p) {
	c.center.x += p.x;
	c.center.y += p.y;
}

bool is_inside(const Point& p, const Circle& c) {
	return dist(c.center, p) < c.radius;
}