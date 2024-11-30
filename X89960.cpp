#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Tren {
    string id_tren;
    string destino;
    string hora;
};

struct InfDest {
    string destino;
    string primer_id;
    int freq;
};

bool cmp_tren(const Tren& a, const Tren& b) {
    if (a.destino != b.destino) return a.destino < b.destino;
    if (a.hora != b.hora) return a.hora < b.hora;
    return a.id_tren < b.id_tren;
}

bool cmp_inf_dest(const InfDest& a, const InfDest& b) {
    if (a.freq != b.freq) return a.freq > b.freq;
    return a.destino < b.destino;
}

vector<InfDest> crea_v_inf_dest(const vector<Tren>& v, int m) {
    vector<InfDest> aux(m);
    int i = 0;
    int j = 0;
    while (i < m) {
        aux[i].destino = v[j].destino;
        aux[i].primer_id = v[j].id_tren;
        int count = 0;
        while (j < v.size() and aux[i].destino == v[j].destino) {
            ++count;
            ++j;
        }
        aux[i].freq = count;
        ++i;
    }
    return aux;
}

vector<Tren> lee_info_trenes(int n) {
    vector<Tren> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i].id_tren >> v[i].destino >> v[i].hora;
    return v;
}

void escribir_resultados(const vector<InfDest>& v) {
    int m = v.size();
    for (int i = 0; i < m; ++i) cout << v[i].destino << " " << v[i].freq << " " << v[i].primer_id << endl;
}

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<Tren> v_tren = lee_info_trenes(n);
    sort(v_tren.begin(), v_tren.end(), cmp_tren);
    vector<InfDest> v_inf_dest = crea_v_inf_dest(v_tren, m);
    sort(v_inf_dest.begin(), v_inf_dest.end(), cmp_inf_dest);
    escribir_resultados(v_inf_dest);
}