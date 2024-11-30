#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
	string name;
	int right;
	int wrong;
};

bool cmp(const Student& a, const Student& b) {
	int nota_a = a.right * 2 - a.wrong;
	int nota_b = b.right * 2 - b.wrong;
	if (nota_a == nota_b) {
		if (a.wrong == b.wrong) return a.name < b.name;
		return a.wrong < b.wrong;
	}
	return nota_a > nota_b;
}

vector<int> read_right_answers(int m) {
	vector<int> v(m);
	for (int i = 0; i < m; ++i) cin >> v[i];
	return v;
}

vector<Student> get_info_test(vector<int> answer, int n) {
	int m = answer.size();
	vector<Student> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i].name;
		int correct = 0;
		int incorrect = 0;
		for (int j = 0; j < m; ++j) {
			int x;
			cin >> x;
			if (x == answer[j]) ++correct;
			else if (x != 0) ++incorrect;
		}
		v[i].right = correct;
		v[i].wrong = incorrect;
	}
	return v;
}

void write_results(const vector<Student>& v) {
	int n = v.size();
	for (int i = 0; i < n; ++i) cout << v[i].name << " " << v[i].right << " " << v[i].wrong << endl;
}

int main() {
	int m;
	cin >> m;
	vector<int> answer = read_right_answers(m);
	int n;
	cin >> n;
	vector<Student> v = get_info_test(answer, n);
	sort(v.begin(), v.end(), cmp);
	write_results(v);
}