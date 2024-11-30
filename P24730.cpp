#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Teacher {
	string name;
	int sweets, carrots;
};

bool sort_by_best(const Teacher& x, const Teacher& y) {
	if (x.sweets == y.sweets) {
		if (x.carrots == y.carrots) {
			if (x.name.size() == y.name.size()) return x.name < y.name;
			return x.name.size() < y.name.size();
		}
		return x.carrots > y.carrots;
	}
	return x.sweets > y.sweets;
}

int main() {
	int n;
	cin >> n;
	for (int k = 0; k < n; ++k) {
		int x;
		cin >> x;
		vector<Teacher> list(x);
		for (int i = 0; i < x; ++i) cin >> list[i].name >> list[i].sweets >> list[i].carrots;
		sort(list.begin(), list.end(), sort_by_best);
		for (int i = 0; i < x; ++i) cout << list[i].name << endl;
		cout << endl;
	}
}