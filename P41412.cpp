#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<double>& v) {
	int n = v.size();
	for(int i = 1; i < n; ++i) {
		double x = v[i];
		int j = i;
		while(j > 0 and v[j - 1] > x) {
			v[j] = v[j - 1];
			--j;
		}
		v[j] = x;
	}
}

int main() {
	int n;
	while (cin >> n) {
		vector<double> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		insertion_sort(v);
		for (int i = 0; i < n; ++i) cout << v[i] << " ";
		cout << endl;
	}
}