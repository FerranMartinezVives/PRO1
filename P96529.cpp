#include <iostream>
#include <vector>
using namespace std;

bool is_correct(const string& s) {
	int n = s.size();
	if (s[0] == ')' or s[0] == ']') return false;
	vector<char> v;
	for (int i = 0; i < n; ++i) {
		if (s[i] == '(' or s[i] == '[') v.push_back(s[i]);
		else {
			if (v.size() == 0) return false;
			else {
				if (v[v.size() - 1] == '(' and s[i] == ')') v.pop_back();
				else if (v[v.size() - 1] == '[' and s[i] == ']') v.pop_back();
				else return false;
			}
		}
	}
	return v.size() == 0;
}

int main() {
	string s;
	while (cin >> s) {
		if (is_correct(s)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}