#include <iostream>
using namespace std;

struct Rectangle {
	int x_left, x_right, y_down, y_up;
};

void read(Rectangle& r) {
	cin >> r.x_left >> r.x_right >> r.y_down >> r.y_up;
}

int relationship(const Rectangle& r1, const Rectangle& r2) {
	if (r1.x_left == r2.x_left and r1.x_right == r2.x_right and r1.y_down == r2.y_down and r1.y_up == r2.y_up) return 4;
	if (r1.x_left >= r2.x_left and r1.x_right <= r2.x_right and r1.y_down >= r2.y_down and r1.y_up <= r2.y_up) return 1;
	if (r2.x_left >= r1.x_left and r2.x_right <= r1.x_right and r2.y_down >= r1.y_down and r2.y_up <= r1.y_up) return 2;
	if (r1.x_right <= r2.x_left or r2.x_right <= r1.x_left or r1.y_up <= r2.y_down or r2.y_up <= r1.y_down) return 0;
	return 3;
}

int main() {
	int n;
	while (cin >> n and n != 0) {
		Rectangle r1, r2;
		int rel = -1;
		read(r1);
		--n;
		while (rel != 0 and n != 0) {
			read(r2);
			rel = relationship(r1, r2);
			if (rel == 2) r1 = r2;
			if (rel == 3) {
				if (r2.x_left > r1.x_left) r1.x_left = r2.x_left;
				if (r2.x_right < r1.x_right) r1.x_right = r2.x_right;
				if (r2.y_down > r1.y_down) r1.y_down = r2.y_down;
				if (r2.y_up < r1.y_up) r1.y_up = r2.y_up;
			}
			--n;
		}
		if (rel == 0) {
			while (n != 0) {
				read(r2);
				--n;
			}
			cout << "empty intersection" << endl;
		}
		else cout << "bottom left point = (" << r1.x_left << ", " << r1.y_down << "); top right point = (" << r1.x_right << ", " << r1.y_up << ")" << endl;
	}
}