#include <iostream>
#include <vector>
using namespace std;

int breakeven(const vector<int>& v, int sum) {
	int aux_sum = 0;
	for (int i = 0; i < v.size(); ++i) {
		if (sum == aux_sum) return i + 1;
		sum -= v[i];
		aux_sum += v[i];
	}
	return -1;
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		sum += v[i];
	}
	cout << breakeven(v, sum) << endl;
}