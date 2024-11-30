#include <iostream>
using namespace std;

bool es_vocal(char c) {
    return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
}

void consonantes_vocales() {
    char c;
    if (cin >> c) {
        if (not es_vocal(c)) {
            cout << c;
            consonantes_vocales();
        }
        else {
            consonantes_vocales();
            cout << c;
        }
    }
}

int main() {
    consonantes_vocales();
    cout << endl;
}