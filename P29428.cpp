#include <iostream>
#include <vector>
using namespace std;

bool contains_word(const string& a, const string& b) { // a = building, b = in
	int n = a.size();	// n = 8
	int m = b.size();	// m = 2
	int i = 0;
	bool first_letter_found = false;
	while (i < n) {
		if (a[i] == b[0]) first_letter_found = true;
		if (first_letter_found) {
			for (int k = 0; k < m; ++k) {
				if (i + k >= n) return false;
				if (a[i + k] != b[k]) first_letter_found = false;
			}
			if (first_letter_found) return true;
		}
		++i;
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	for (int i = 0; i < n; ++i) {
		cout << v[i] << ":";
		for (int j = 0; j < n; ++j) {
			if (v[i].size() >= v[j].size()) {
				if (contains_word(v[i], v[j])) cout << " " << v[j];
			}
		}
		cout << endl;
	}
}