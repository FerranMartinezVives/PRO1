#include <iostream>
#include <vector>
using namespace std;

struct Player {
    string name;
    double score;
};

struct Team {
    string tname;
    Player mvp;
};

typedef vector<Team> League;

League read_data(int n) {
    League aux(n);
    for (int i = 0; i < n; ++i) cin >> aux[i].tname >> aux[i].mvp.name >> aux[i].mvp.score;
    return aux;
}

int main() {
    int n;
    cin >> n;
    League league = read_data(n);
    char c;
    double s;
    while (cin >> c) {
        cin >> s;
        cout << "-- begin query" << endl;
        for (int i = 0; i < n; ++i) {
            if (league[i].tname[0] == c and league[i].mvp.score > s) cout << league[i].mvp.name << endl;
        }
        cout << "-- end query" << endl;
    }
}