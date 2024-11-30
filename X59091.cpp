#include <iostream>
using namespace std;

int main() {
    int n, m;
    bool first = true;
    while (cin >> n >> m) {
        if (not first) cout << endl;
        int number = 9;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (number < 0) number = 9;
                cout << number;
                --number;
            }
            cout << endl;
        }
       first = false;
    }
}