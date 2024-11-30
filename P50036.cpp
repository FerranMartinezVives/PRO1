#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int evaluate(const vector<int>& p, int x) {
	int sum = 0;
	for (int i = 0; i < p.size(); ++i) sum += p[i] * pow(x, i);
	return sum;
}

int main() {
	int n;
	cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; ++i) cin >> p[i];
	int x;
	cin >> x;
	cout << evaluate(p, x) << endl;
}