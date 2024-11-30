#include <iostream>
#include <vector>
using namespace std;

/*int effi_last_pos(const vector<int>& v, int z) {
    for (int i = v.size() - 1; i > 0; --i) {
        if (v[i] <= z) return i;
    }
    return 0;
}*/

int effi_last_pos(const vector<int>& v, int z) {
    int m = (v.size() - 1) / 2;
    if (v[m] <= z) {
        for (int i = v.size() - 1; i >= m; --i) {
            if (v[i] <= z) return i;
        }
    }
    for (int i = m; i > 0; --i) {
        if (v[i] <= z) return i;
    }
    return 0;
}

void read_vector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) cin >> v[i];
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    read_vector(v);
    int z;
    while (cin >> z)
        cout << effi_last_pos(v, z) << endl;
}