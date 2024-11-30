#include <iostream>
#include <vector>
using namespace std;

int effi_search(const vector<string>& v, const string& s) {
    int n = 0;
    int m = v.size() - 1;
    while (n <= m) {
        int x = (m + n) / 2;
        if (v[x].size() > s.size()) m = x - 1;
        else if (v[x].size() < s.size()) n = x + 1;
        else {
            if (v[x] > s) m = x - 1;
            else if (v[x] < s) n = x + 1;
            else return x;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    string s;
    while (cin >> s) cout << effi_search(v, s) << endl;
}