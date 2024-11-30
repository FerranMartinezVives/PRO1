#include <iostream>
using namespace std;

int main() {
	string s;
	bool catboy = false;
	bool gekko = false;
	bool owlette = false;
	bool end = false;
	while (not end and cin >> s) {
		if (not catboy and s == "Catboy") {
			cout << "Catboy" << endl;
			catboy = true;
		}
		if (not gekko and s == "Gekko") {
			cout << "Gekko" << endl;
			gekko = true;
		}
		if (not owlette and s == "Owlette") {
			cout << "Owlette" << endl;
			owlette = true;
		}
		if (catboy and gekko and owlette) end = true;
	}
}