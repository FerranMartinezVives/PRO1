#include <iostream>
#include <vector>
using namespace std;

vector<bool> ramps_pos(const vector<int>& V) {
	int n = V.size();
	vector<bool> ramps(n, false);
	for (int i = 0; i < n - 2; ++i) {
		if (V[i] < V[i + 1] and V[i + 1] < V[i + 2]) ramps[i] = true;
		else if (V[i] > V[i + 1] and V[i + 1] > V[i + 2]) ramps[i] = true;
	}
	return ramps;
}

int pot_conflictive(const vector<bool>& B) {
	int count = 0;
	int n = B.size();
	for (int i = 0; i < n - 2; ++i) {
		if (B[i] and B[i + 1]) ++count;
		if (B[i] and B[i + 2]) ++count;
	}
	return count;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		cout << "positions with a ramp:";
		vector<bool> ramps = ramps_pos(v);
		for (int i = 0; i < n; ++i) {
			if (ramps[i]) cout << " " << i;
		}
		cout << endl << "potentially conflictive: " << pot_conflictive(ramps) << endl << "---" << endl;
	}
}