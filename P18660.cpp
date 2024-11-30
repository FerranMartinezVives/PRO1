#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Matrix;

bool horizontal_found(const string& s, const Matrix& wordsearch, int i, int j) {
    int m = s.size();
    int stop = wordsearch[0].size();
    for (int n = 0; n < m; ++n) {
        if (j == stop) return false;
        if (wordsearch[i][j] != s[n] and wordsearch[i][j] != s[n] - 'a' + 'A') return false;
        ++j;
    }
    return true;
}

bool vertical_found(const string& s, const Matrix& wordsearch, int i, int j) {
    int m = s.size();
    int stop = wordsearch.size();
    for (int n = 0; n < m; ++n) {
        if (i == stop) return false;
        if (wordsearch[i][j] != s[n] and wordsearch[i][j] != s[n] - 'a' + 'A') return false;
        ++i;
    }
    return true;
}

bool diagonal_found(const string& s, const Matrix& wordsearch, int i, int j) {
    int m = s.size();
    int stop_horizontal = wordsearch[0].size();
    int stop_vertical = wordsearch.size();
    for (int n = 0; n < m; ++n) {
        if (j == stop_horizontal or i == stop_vertical) return false;
        if (wordsearch[i][j] != s[n] and wordsearch[i][j] != s[n] - 'a' + 'A') return false;
        ++j;
        ++i;
    }
    return true;
}

void horizontal(Matrix& wordsearch, const string& s, int i, int j) {
    int n = s.size();
    for (int k = 0; k < n; ++k) {
        if (wordsearch[i][j] >= 'a' and wordsearch[i][j] <= 'z') wordsearch[i][j] = wordsearch[i][j] - 'a' + 'A';
        ++j;
    }
}

void vertical(Matrix& wordsearch, const string& s, int i, int j) {
    int n = s.size();
    for (int k = 0; k < n; ++k) {
        if (wordsearch[i][j] >= 'a' and wordsearch[i][j] <= 'z') wordsearch[i][j] = wordsearch[i][j] - 'a' + 'A';
        ++i;
    }
}

void diagonal(Matrix& wordsearch, const string& s, int i, int j) {
    int n = s.size();
    for (int k = 0; k < n; ++k) {
        if (wordsearch[i][j] >= 'a' and wordsearch[i][j] <= 'z') wordsearch[i][j] = wordsearch[i][j] - 'a' + 'A';
        ++i;
        ++j;
    }
}

int main() {
    int x, m, n;
    bool first = true;
    while (cin >> x >> m >> n) {
        if (not first) cout << endl;
        first = false;
        vector<string> word_list(x);
        for (int i = 0; i < x; ++i) cin >> word_list[i];
        Matrix wordsearch(m, vector<char>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) cin >> wordsearch[i][j];
        }
        for (int k = 0; k < x; ++k) {
            int i = 0;
            int j = 0;
            bool end = false;
            while (not end) {
                if (horizontal_found(word_list[k], wordsearch, i, j)) {
                    horizontal(wordsearch, word_list[k], i, j);
                }
                if (vertical_found(word_list[k], wordsearch, i, j)) {
                    vertical(wordsearch, word_list[k], i, j);
                }
                if (diagonal_found(word_list[k], wordsearch, i, j)) {
                    diagonal(wordsearch, word_list[k], i, j);
                }
                ++j;
                if (j == n) {
                    j = 0;
                    ++i;
                }
                if (i == m) end = true;
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n - 1; ++j) cout << wordsearch[i][j] << " ";
            cout << wordsearch[i][n - 1] << endl;
        }
    }
}