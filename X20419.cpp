#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char most_frequent_letter(const string& s) {
	char letter = s[0];
	int true_count = 0;
	for (int i = 0; i < s.size(); ++i) {
		int aux_count = 0;
		for (int j = 0; j < s.size(); ++j) {
			if (s[i] == s[j]) ++aux_count;
		}
		if (aux_count > true_count) {
			true_count = aux_count;
			letter = s[i];
		}
		else if (s[i] < letter and aux_count == true_count) letter = s[i];
	}
	return letter;
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(2);
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	double av_length = 0;
	for (int i = 0; i < n; ++i) av_length += v[i].size();
	av_length /= n;
	cout << av_length << endl;
	for (int i = 0; i < n; ++i) {
		if (v[i].size() >= av_length) {
			cout << v[i] << ": " << most_frequent_letter(v[i]) << endl;
		}
	}
}