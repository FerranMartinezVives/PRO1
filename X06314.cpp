#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last) {
	int n;
	while (cin >> n and n != 0) {
		sum += n;
		last = n;
	}
}

int main() {
	int n;
	cin >> n;
	bool first = true;
	int first_sum = n;
	int first_last = n;
	int similars = 1;
	while (n != 0) {
		if (first) info_sequence(first_sum, first_last);
		else {
			int sum = n;
			int last = n;
			info_sequence(sum, last);
			if (sum == first_sum and last == first_last) ++similars;
		}
		first = false;
		cin >> n;
	}
	cout << similars << endl;
}