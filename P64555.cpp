#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
	int x, y, dist;
};

int distance(const Point& a, const Point& b) {
	int x_dist = a.x - b.x;
	if (x_dist < 0) x_dist *= -1;
	int y_dist = a.y - b.y;
	if (y_dist < 0) y_dist *= -1;
	return x_dist + y_dist;
}

bool sorting(const Point& a, const Point& b) {
	if (a.dist == b.dist) {
		if (a.x == b.x) return a.y < b.y;
		return a.x < b.x;
	}
	return a.dist < b.dist;
}

int main() {
	Point main;
	cin >> main.x >> main.y;
	int n;
	cin >> n;
	vector<Point> list(n);
	for (int i = 0; i < n; ++i) {
		cin >> list[i].x >> list[i].y;
		list[i].dist = distance(main, list[i]);
	}
	if (n != 0) {
		sort(list.begin(), list.end(), sorting);
		int current_dist = list[0].dist;
		cout << "points at distance " << current_dist << endl;
		for (int i = 0; i < n; ++i) {
			int aux_dist = list[i].dist;
			if (aux_dist == current_dist) cout << list[i].x << " " << list[i].y << endl;
			else {
				current_dist = aux_dist;
				cout << "points at distance " << current_dist << endl << list[i].x << " " << list[i].y << endl;
			}
		}
	}
}