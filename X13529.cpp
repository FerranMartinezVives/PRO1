#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		bool found = false;
		int i = 0;
		int j = n - 1;
		while (not found and i < n) {
			j = n - 1;
			while (not found and j >= 0) {
				if (v[i] == v[j] and i != j) found = true;
				else --j;
			}
			if (not found) ++i;
		}
		if (found) cout << v[i] << " " << j << endl;
		else cout << "NO" << endl;
	}
}