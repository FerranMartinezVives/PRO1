#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Client {
    string client_id;
    Date birth_date;
    bool priority;
    int total_amount;
};

//returns true when client a is older than b. Returns false otherwise
bool is_older(const Client& a, const Client& b) {
    Date x = a.birth_date;
    Date y = b.birth_date;
    if (x.year != y.year) return x.year < y.year;
    if (x.month != y.month) return x.month < y.month;
    return x.day < y.day;
}

bool cmp(const Client& a, const Client& b) {
    if (a.priority != b.priority) return a.priority;
    if (a.total_amount != b.total_amount) return a.total_amount > b.total_amount;
    if (is_older(a, b) or is_older(b, a)) return is_older(a, b);
    return a.client_id < b.client_id;
}

void get_client(Client& x) {
    int n;
    cin >> x.client_id >> x.birth_date.day >> x.birth_date.month >> x.birth_date.year >> n;
    x.total_amount = 0;
    int purchase;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        cin >> purchase;
        x.total_amount += purchase;
        if (purchase >= 1000) ++count;
    }
    if (count >= 3) x.priority = true;
    else x.priority = false;
}

//gets client info vector v 
void get_client_vector(vector<Client>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) get_client(v[i]);
}

//prints date info in format dd-mm-yyyy
void print_date(Date date) {
    if (date.day < 10) cout << 0;
    cout << date.day << '-';
    if (date.month < 10) cout << 0;
    cout << date.month << '-';
    cout << date.year;
}

//writes v on output channel
void write_client_vector(const vector<Client>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        cout << v[i].priority << ' ' << v[i].total_amount << ' ';
        print_date(v[i].birth_date);
        cout << ' ' << v[i].client_id << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<Client> v(n);
    get_client_vector(v);
    sort(v.begin(), v.end(), cmp);
    write_client_vector(v);
}