#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
	string artist, title, genre;
	int year;
};

bool comp(const Track& a, const Track& b) {
	if (a.genre == b.genre) {
		if (a.artist == b.artist) {
			if (a.year == b.year) return a.title < b.title;
			return a.year < b.year;
		}
		return a.artist < b.artist;
	}
	return a.genre < b.genre;
}

vector<Track> read_tracks(int n) {
	vector<Track> aux(n);
	for (int i = 0; i < n; ++i) cin >> aux[i].artist >> aux[i].title >> aux[i].genre >> aux[i].year;
	return aux;
}

void print_track(const Track& t) {
	cout << t.artist;
	cout << " (" << t.year;
	cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
	int n;
	cin >> n;
	vector<Track> track_list = read_tracks(n);
	sort(track_list.begin(), track_list.end(), comp);
	string genre;
	while (cin >> genre) {
		for (int i = 0; i < n; ++i) {
			if (track_list[i].genre == genre) print_track(track_list[i]);
		}
	}
}