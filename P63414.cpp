#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		v[i] -= 1000000000;
	}
	sort(v.begin(), v.end());
	int count = 0;
	int current = v[0];
	for (int i = 0; i < n; ++i) {
		if (v[i] != current) {
			cout << current + 1000000000 << " : " << count << endl;
			current = v[i];
			count = 1;
		}
		else ++count;
	}
	cout << current + 1000000000 << " : " << count << endl;
}