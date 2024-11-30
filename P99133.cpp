#include <iostream>
#include <vector>
using namespace std;

vector <char> reverse_chars(string a) {
	int x = a.size();
	vector <char> v(x);
	for (int i = 0; i < x; ++i) v[i] = a[i];
	for (int i = 0; i < x / 2; ++i) {
		int aux = v[i];
		v[i] = v[x - 1 - i];
		v[x - 1 - i] = aux;
	}
	return v;
}

int main() {
	int n;
	cin >> n;
	vector <vector <char>> v(n);
	for (int i = 0; i < n; ++i) {
		string a;
		cin >> a;
		v[i] = reverse_chars(a);
	}
	for (int i = 0; i < n / 2; ++i) {
		vector <char> aux = v[i];
		v[i] = v[n - 1 - i];
		v[n - 1 - i] = aux;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < v[i].size(); ++j) cout << v[i][j];
		cout << endl;
	}
}