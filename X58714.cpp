#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriz;

Matriz read_matriz(int f, int c) {
	Matriz aux(f, Fila(c));
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) cin >> aux[i][j];
	}
	return aux;
}

int sub_matriz(const Matriz& mat, int x_ini, int y_ini, int x_fin, int y_fin) {
	int suma = 0;
	for (int i = x_ini; i <= x_fin; ++i) {
		for (int j = y_ini; j <= y_fin; ++j) suma += mat[i][j];
	}
	return suma;
}

int main() {
	int f, c;
	cin >> f >> c;
	Matriz mat = read_matriz(f, c);
	int i, j;
	while (cin >> i >> j) {
		int suma_1 = sub_matriz(mat, 0, j, i, c - 1);
		int suma_2 = sub_matriz(mat, i, 0, f - 1, j);
		if (suma_1 == suma_2) cout << "si: " << suma_1 << endl;
		else cout << "no: " << suma_1 << ", " << suma_2 << endl;
	}
}