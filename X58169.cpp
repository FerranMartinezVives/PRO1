#include <iostream>
using namespace std;

void infoSequence(int& max, int& lpos) {
	int n;
	int i = 0;
	while (cin >> n and n != 0) {
		++i;
		if (n >= max) {
			max = n;
			lpos = i;
		}
	}
}

int main() {
	int max = 0;
	int lpos = 0;
	infoSequence(max, lpos);
	int n;
	bool found_max = false;
	int i = 0;
	while (not found_max and cin >> n and n != 0) {
		++i;
		if (n == max) found_max = true;
	}
	cout << max << " " << lpos << " ";
	if (found_max) cout << i << endl;
	else cout << "-" << endl;
}