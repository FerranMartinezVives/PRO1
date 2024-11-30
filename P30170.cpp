#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Word_count {
	string word;
	int count;
};

typedef vector<Word_count> Wordbank;

bool sort_words(const Word_count& a, const Word_count& b) {
	return a.count < b.count;
}

int main() {
	int n;
	while (cin >> n) {
		Wordbank w;
		bool first = true;
		for (int i = 0; i < n; ++i) {
			string s;
			cin >> s;
			if (first) {
				Word_count x;
				x.word = s;
				x.count = 1;
				w.push_back(x);
				first = false;
			}
			else {
				bool word_in_bank = false;
				int aux_count = 0;
				while (not word_in_bank and aux_count < w.size()) {
					if (w[aux_count].word == s) word_in_bank = true;
					else ++aux_count;
				}
				if (word_in_bank) ++w[aux_count].count;
				else {
					Word_count x;
					x.word = s;
					x.count = 1;
					w.push_back(x);
				}
			}
		}
		sort(w.begin(), w.end(), sort_words);
		int sum = 0;
		int current_num = 1;
		for (int i = 0; i < w.size(); ++i) {
			if (w[i].count == current_num) sum += w[i].word.size();
			else {
				cout << current_num << " : " << sum << endl;
				sum = w[i].word.size();
				while (current_num != w[i].count) ++current_num;
			}
		}
		cout << current_num << " : " << sum << endl << endl;
	}
}