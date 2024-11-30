#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int m;
		cin >> m;
		bool first = true;
		double min = 0;
		double max = 0;
		double av = 0;
		for (int j = 0; j < m; ++j) {
			double x;
			cin >> x;
			if (first) {
				min = x;
				max = x;
				av = x / m;
			}
			else {
				if (x < min) min = x;
				if (x > max) max = x;
				av = av + (x / m);
			}
			first = false;
		}
		cout << min << " " << max << " " << av << endl;
	}
}