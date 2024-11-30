#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Submission {
	string idn, exer, res;
	int time;
};

struct Results {
	string idn;
	int count;
};

typedef vector<Submission> History;

bool sort_subs(const Submission& a, const Submission& b) {
	if (a.idn == b.idn) return a.exer < b.exer;
	return a.idn < b.idn;
}

Results idn_of_most_green_subs(const History& h) {
	Submission s = h[0];
	int n = h.size();
	int true_count = 0;
	int aux_count = 0;
	for (int i = 0; i < n; ++i) {
		if (h[i].idn == s.idn and h[i].res == "green") {
			++aux_count;
			s.exer = h[i].exer;
		}
		else {
			if (aux_count > true_count) {
				true_count = aux_count;
				s = h[i - 1];
			}
			if (h[i].res == "green") aux_count = 1;
			else aux_count = 0;
		}
	}
	if (aux_count > true_count) {
		s = h[n - 1];
		true_count = aux_count;
	}
	Results r;
	r.idn = s.idn;
	r.count = true_count;
	return r;
}

Results idn_of_most_green(const History& h) {
	Submission s = h[0];
	int n = h.size();
	int true_count = 0;
	int aux_count = 0;
	for (int i = 0; i < n; ++i) {
		if (h[i].idn == s.idn and h[i].res == "green" and h[i].exer != s.exer) {
			++aux_count;
			s.exer = h[i].exer;
		}
		else {
			if (aux_count > true_count) {
				true_count = aux_count;
				s = h[i - 1];
			}
			if (h[i].res == "green") aux_count = 1;
			else aux_count = 0;
		}
	}
	if (aux_count > true_count) {
		s = h[n - 1];
		true_count = aux_count;
	}
	Results r;
	r.idn = s.idn;
	r.count = true_count;
	return r;
}

Results idn_of_most_red(const History& h) {
	Submission s = h[0];
	int n = h.size();
	int true_count = 0;
	int aux_count = 0;
	for (int i = 0; i < n; ++i) {
		if (h[i].idn == s.idn and h[i].res == "red" and h[i].exer != s.exer) {
			++aux_count;
			s.exer = h[i].exer;
		}
		else {
			if (aux_count > true_count) {
				true_count = aux_count;
				s = h[i - 1];
			}
			if (h[i].res == "red") aux_count = 1;
			else aux_count = 0;
		}
	}
	if (aux_count > true_count) {
		s = h[n - 1];
		true_count = aux_count;
	}
	Results r;
	r.idn = s.idn;
	r.count = true_count;
	return r;
}

Results idn_of_most_tries(const History& h) {
	Submission s = h[0];
	int n = h.size();
	int true_count = 0;
	int aux_count = 0;
	for (int i = 0; i < n; ++i) {
		if (h[i].idn == s.idn) ++aux_count;
		else {
			if (aux_count > true_count) {
				s = h[i - 1];
				true_count = aux_count;
			}
			aux_count = 1;
		}
	}
	if (aux_count > true_count) {
		s = h[n - 1];
		true_count = aux_count;
	}
	Results r;
	r.idn = s.idn;
	r.count = true_count;
	return r;
}

string idn_of_last_sub(const History& h) {
	Submission s = h[0];
	int n = h.size();
	for (int i = 0; i < n; ++i) {
		if (h[i].time > s.time) s = h[i];
	}
	return s.idn;
}

void print_results(const History& h) {
	Results r = idn_of_most_green_subs(h);
	cout << "student with more green solutions:       " << r.idn << " (" << r.count << ")" << endl;
	r = idn_of_most_green(h);
	cout << "student with more green exercices:         " << r.idn << " (" << r.count << ")" << endl;
	r = idn_of_most_red(h);
	cout << "student with more red exercices:           " << r.idn << " (" << r.count << ")" << endl;
	r = idn_of_most_tries(h);
	cout << "student with more tried exercices:         " << r.idn << " (" << r.count << ")" << endl;
	string s = idn_of_last_sub(h);
	cout << "student who has done the last submission:  " << s << endl;
}

int main() {
	int n;
	cin >> n;
	History h(n);
	for (int i = 0; i < n; ++i) cin >> h[i].idn >> h[i].exer >> h[i].time >> h[i].res;
	sort(h.begin(), h.end(), sort_subs);
	print_results(h);
}