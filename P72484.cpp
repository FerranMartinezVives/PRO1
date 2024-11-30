#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int star_num = 1;
	int blank_num = n - 1;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < blank_num; ++j) cout << " ";
		for (int j = 0; j < star_num; ++j) cout << "*";
		star_num = star_num + 2;
		--blank_num;
		cout << endl;
	}
	star_num = star_num - 2;
	++blank_num;
	for (int i = n - 1; i > 0; --i) {
		star_num = star_num - 2;
		++blank_num;
		for (int j = 0; j < blank_num; ++j) cout << " ";
		for (int j = 0; j < star_num; ++j) cout << "*";
		cout << endl;
	}
}