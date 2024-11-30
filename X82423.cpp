#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int k = 0; k < n; ++k) {
		int true_first_pos = 1;
		int true_chain_lenght = 1;
		int aux_first_pos = 1;
		int aux_chain_lenght = 1;
		int pos_count = 0;
		bool first = true;
		int true_x, aux_x;
		cin >> aux_x;
		while (aux_x != -1) {
			++pos_count;
			if (first) {
				true_x = aux_x;
				first = false;
			}
			else {
				if (aux_x == true_x) ++aux_chain_lenght;
				else {
					if (aux_chain_lenght > true_chain_lenght) {
						true_first_pos = aux_first_pos;
						true_chain_lenght = aux_chain_lenght;
					}
					aux_first_pos = pos_count;
					aux_chain_lenght = 1;
					true_x = aux_x;
				}
			}
			cin >> aux_x;
		}
		if (aux_chain_lenght > true_chain_lenght) {
			true_first_pos = aux_first_pos;
			true_chain_lenght = aux_chain_lenght;
		}
		cout << true_first_pos << " " << true_chain_lenght << endl;
	}
}