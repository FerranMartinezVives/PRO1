#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		int i = 0;
		int j = n - 1;
		int suma_1 = v[i];
		int suma_2 = v[j];
		bool found = false;
		while (not found and i <= j) {
			if (suma_1 == suma_2) found = true;
			else if (suma_2 > suma_1) {
				++i;
				suma_1 += v[i];
			}
			else {
				--j;
				suma_2 += v[j];
			}
		}
		if (found) cout << i << " " << j << endl;
		else cout << "no" << endl;
	}
}