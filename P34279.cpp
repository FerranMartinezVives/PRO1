#include <iostream>
using namespace std;

int main() {
	int h, m, s;
	cin >> h >> m >> s;
	if (s == 59 and m == 59 and (h + 1) < 10) cout << "0" << h + 1 << ":00:00" << endl;
	else if (s == 59 and m == 59 and (h + 1) == 24) cout << "00:00:00" << endl;
	else if (s == 59 and m == 59) cout << h + 1 << ":00:00" << endl;
	else if (s == 59 and (m + 1) < 10 and h < 10) cout << "0" << h << ":0" << m + 1 << ":00" << endl;
	else if (s == 59 and (m + 1) < 10) cout << h << ":0" << m + 1 << ":00" << endl;
	else if (s == 59 and h < 10) cout << "0" << h << ":" << m + 1 << ":00" << endl;
	else if (s == 59) cout << h << ":" << m + 1 << ":00" << endl;
	else if (h < 10 and m < 10 and (s + 1) < 10) cout << "0" << h << ":0" << m << ":0" << s + 1 << endl;
	else if (h < 10 and m < 10) cout << "0" << h << ":0" << m << ":" << s + 1 << endl;
	else if (h < 10 and (s + 1) < 10) cout << "0" << h << ":" << m << ":0" << s + 1 << endl;
	else if (h < 10) cout << "0" << h << ":" << m << ":" << s + 1 << endl;
	else if (m < 10 and (s + 1) < 10) cout << h << ":0" << m << ":0" << s + 1 << endl;
	else if (m < 10) cout << h << ":0" << m << ":" << s + 1 << endl;
	else if ((s + 1) < 10) cout << h << ":" << m << ":0" << s + 1 << endl;
	else cout << h << ":" << m << ":" << s + 1 << endl;
}