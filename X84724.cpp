#include <iostream>
using namespace std;

void simplify_time(int& h, int& m, int& s) {
	while (s >= 60) {
		++m;
		s -= 60;
	}
	while (m >= 60) {
		++h;
		m -= 60;
	}
}

int main() {
	int n;
	cin >> n;
	int h_total = 0;
	int m_total = 0;
	int s_total = 0;
	for (int i = 0; i < n; ++i) {
		int h, m, s;
		char c;
		cin >> h >> c >> m >> c >> s;
		h_total += h;
		m_total += m;
		s_total += s;
	}
	simplify_time(h_total, m_total, s_total);
	cout << h_total << "H " << m_total << "M " << s_total << "S" << endl;
}