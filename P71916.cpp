#include <iostream>
#include <vector>
using namespace std;

bool are_anagrams(const vector<char>& v1, const vector<char>& v2) {
	int n = v1.size();
	int m = v2.size();
	if (n != m) return false;
	for (int i = 0; i < n; ++i) {
		bool found = false;
		int j = 0;
		while (not found and j < m) {
			if (v1[i] == v2[j]) found = true;
			else ++j;
		}
		if (not found) return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		vector<char> v1, v2;
		char c;
		cin >> c;
		while (c != '.') {
			if (c >= 'A' and c <= 'Z') v1.push_back(c);
			cin >> c;
		}
		cin >> c;
		while (c != '.') {
			if (c >= 'A' and c <= 'Z') v2.push_back(c);
			cin >> c;
		}
		if (are_anagrams(v1, v2)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}