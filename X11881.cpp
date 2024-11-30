#include <iostream>
#include <vector>
using namespace std;

int main() {
	int m;
	int true_count = 0;
	while (cin >> m) {
		int aux_count = 0;
		vector<int> v(m);
		for (int i = 0; i < m; ++i) cin >> v[i];
		for (int i = 2; i < m; ++i) {
			if (v[i - 2] % v[i - 1] == v[i]) ++aux_count;
		}
		cout << aux_count << endl;
		true_count += aux_count;
	}
	cout << "Total: " << true_count << endl;
}