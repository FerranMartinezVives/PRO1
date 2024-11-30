#include <iostream>
#include<vector>
using namespace std;

int position(double x, const vector<double>& v, int left, int right) {
    if (left > right) return -1;
    int a = (left + right) / 2;
    if (x > v[a]) return position(x, v, a + 1, right);
    if (x < v[a]) return position(x, v, left, a - 1);
    return a;
}

int main() {
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) cin >> V[i];
        double x;
        int left, right;
        cin >> x >> left >> right;
        cout << position(x, V, left, right) << endl;
    }
}