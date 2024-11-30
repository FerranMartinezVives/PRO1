#include <iostream>
#include <vector>
using namespace std;

struct Asignatura {
    int id;
    double creditos;
    double nota;
};

struct Alumno {
    int dni;
    vector <Asignatura> asigs;
};

typedef vector <Alumno> Alumnos;

double media_ponderada(const Alumno& a) {
    int m = a.asigs.size();
    int media = 0;
    int credit_sum = 0;
    for (int i = 0; i < m; ++i) {
        credit_sum += a.asigs[i].creditos;
        media += a.asigs[i].creditos * a.asigs[i].nota;
    }
    if (credit_sum == 0) return 0;
    return media / credit_sum;
}

int supera_alfa(const Alumnos& alus) {
    int count = 0;
    int n = alus.size();
    for (int i = 0; i < n; ++i) {
        if (media_ponderada(alus[i]) >= 5) ++count;
    }
    return count;
}

vector <Asignatura> lee_asignaturas(int m) {
    vector<Asignatura> aux(m);
    for (int i = 0; i < m; ++i) {
        cin >> aux[i].id >> aux[i].creditos >> aux[i].nota;
    }
    return aux;
}

int main() {
    int n;
    cin >> n;
    Alumnos a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].dni;
        int m;
        cin >> m;
        a[i].asigs = lee_asignaturas(m);
    }
    cout << supera_alfa(a) << endl;
}