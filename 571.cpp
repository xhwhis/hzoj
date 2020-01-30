#include <iostream>
#include <set>
#define max_n 100
using namespace std;

int a[max_n + 5][max_n + 5];

struct Data {
    int x, y, cnt;
    Data(int a, int b, int c) {
        x = a, y = b, cnt = c;
    }
};

struct DataCompare {
    bool operator()(const Data &a, const Data &b) const {
        if (a.cnt - b.cnt) return a.cnt < b.cnt;
        if (a.x - b.x) return a.x < b.x;
        return a.y < b.y;
    }
};

set<Data, DataCompare> s;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                s.insert(Data(i, j, 1));
            }
        }
    }
    while (s.size()) {
        int x = s.begin()->x;
        int y = s.begin()->y;
        int cnt = s.begin()->cnt;
        s.erase(s.begin());
        for (int i = 1; i <= n; i++) {
            if (a[y][i] != 1) continue;
            if (a[x][i]) continue;
            a[x][i] = cnt + 1;
            a[y][i] = cnt + 1;
        }
    }
    cout << a[x][y];
    return 0;
}
