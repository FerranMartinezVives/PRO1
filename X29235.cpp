#include <iostream>
#include <vector>
using namespace std;


typedef vector<int> Fila;
typedef vector<Fila> Tablero;

bool valid(int m, int n, int i, int j) {
    return i >= 0 and i < m and j >= 0 and j < n;
}

void square_update(Tablero& tab, int k, bool& testigo, int x, int y) {
    int m = tab.size();
    int n = tab[0].size();
    for (int i = x - 2; i <= x + 2; ++i) {
        if (i == x - 2 or i == x + 2) {
            if (valid(m, n, i, y - 1) and tab[i][y - 1] == 0) {
                tab[i][y - 1] = k + 1;
                testigo = true;
            }
            if (valid(m, n, i, y + 1) and tab[i][y + 1] == 0) {
                tab[i][y + 1] = k + 1;
                testigo = true;
            }
        }
        if (i == x - 1 or i == x + 1) {
            if (valid(m, n, i, y - 2) and tab[i][y - 2] == 0) {
                tab[i][y - 2] = k + 1;
                testigo = true;
            }
            if (valid(m, n, i, y + 2) and tab[i][y + 2] == 0) {
                tab[i][y + 2] = k + 1;
                testigo = true;
            }
        }
    }
}

void move_update(Tablero& tab, int k, bool& testigo) {
    int m = tab.size();
    int n = tab[0].size();
    testigo = false;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (tab[i][j] == k) square_update(tab, k, testigo, i, j);
        }
    }
}

void escribir_tablero(const Tablero& tab) {
    int m = tab.size();
    int n = tab[0].size();
    for (int i = 0; i < m; ++i) {
        cout << tab[i][0];
        for (int j = 1; j < n; ++j) cout << ' ' << tab[i][j];
        cout << endl;
    }
}


//inicializa el tablero tab a cero
void set_zero(Tablero& tab) {
    int m = tab.size();
    int n = tab[0].size();
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            tab[i][j] = 0;
}


int main() {
    int m;
    while (cin >> m) {
        int n;
        cin >> n;
        Tablero tab(m, Fila(n));
        set_zero(tab);
        int i, j;
        cin >> i >> j;
        tab[i][j] = 1;
        bool testigo = true;
        int k = 1;
        while (testigo) {
            move_update(tab, k, testigo);
            ++k;
        }
        escribir_tablero(tab);
        cout << endl;
    }
}   