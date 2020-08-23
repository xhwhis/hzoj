#include <cstdio>
#include <iostream>
#include <string>
#include <set>
using namespace std;

struct Data {
    Data (int t, int id, int p) : t(t), p(p), id(id) {}
    int t, id, p;
    bool operator<(const Data &a) const {
        if (t - a.t) return t < a.t;
        return id < a.id;
    }
};

set<Data> s;

int main() {
    string op;
    int id, p, k;
    while (cin >> op) {
        if (op == "#") break;
        cin >> id >> p;
        s.insert(Data(p, id, p));
    }
    cin >> k;
    for (int i = 0; i < k; i++) {
        int t = s.begin()->t;
        int id = s.begin()->id;
        int p = s.begin()->p;
        s.erase(s.begin());
        cout << id << endl;
        s.insert(Data(t + p, id, p));
    }
    return 0;
}
