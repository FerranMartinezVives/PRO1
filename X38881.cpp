#include <iostream>
#include <vector>
using namespace std;

bool prefix(const string & p, const string & pref) {
	int n = p.size();
	int m = pref.size();
	if (m > n) return false;
	for (int i = 0; i < m; ++i) {
		if (pref[i] != p[i]) return false;
	}
	return true;
}

int main() {
	int n;
	int line_count = 1;
	while (cin >> n) {
		vector<string> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		int count = 0;
		for (int i = 0; i < n; ++i) {
			if (prefix(v[0], v[i])) ++count;
		}
		cout << "Linea " << line_count << ": " << count << " - " << v[0] << endl;
		++line_count;
	}
}