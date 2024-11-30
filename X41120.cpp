#include<iostream>
#include <vector>
using namespace std;

vector<int> obtain_peaks(const vector<int>& v) {
	vector<int> peaks;
	for (int i = 1; i < v.size() - 1; ++i) {
		if (v[i] > v[i - 1] and v[i] > v[i + 1]) peaks.push_back(v[i]);
	}
	return peaks;
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	vector<int> peaks = obtain_peaks(v);
	int peak_num = peaks.size();
	cout << peak_num << ":";
	for (int i = 0; i < peak_num; ++i) cout << " " << peaks[i];
	cout << endl;
	bool any_writing = false;
	bool first = true;
	for (int i = 0; i < peak_num - 1; ++i) {
		if (peaks[i] > peaks[peak_num - 1]) {
			any_writing = true;
			if (first) {
				cout << peaks[i];
				first = false;
			}
			else cout << " " << peaks[i];
		}
	}
	if (not any_writing) cout << "-" << endl;
	else cout << endl;
}