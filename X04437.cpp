#include <iostream>
#include <cmath>
using namespace std;

double modul(double x, double y) {
	return sqrt((x * x) + (y * y));
}

int main() {
	double x, y;
	cin >> x >> y;
	cout << modul(x, y) << endl;
}