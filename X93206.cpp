#include <iostream>
#include <vector>
using namespace std;

bool has_appeared(const vector<string>& name_list, const string& name, int pos) {
	for (int i = 0; i < pos; ++i) {
		if (name_list[i] == name) return true;
	}
	return false;
}

int main() {
	int n;
	while (cin >> n) {
		vector<string> name_list(n);
		for (int i = 0; i < n; ++i) cin >> name_list[i];
		for (int i = 0; i < n; ++i) {
			if (not has_appeared(name_list, name_list[i], i)) cout << name_list[i] << endl;
		}
		cout << endl;
	}
}