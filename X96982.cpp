#include <iostream>
#include <vector>
using namespace std;

bool find_element(const vector<int>& v, int& e) {
	int sum = 0;
	for (int i = v.size() - 1; i >= 0; --i) {
		if (v[i] == sum) {
			e = v[i];
			return true;
		}
		sum += v[i];
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	vector<int> seq(n);
	for (int i = 0; i < n; ++i) cin >> seq[i];
	int elem;
	bool found = find_element(seq, elem);
	if (found) cout << elem << endl;
	else cout << "not found" << endl;
}