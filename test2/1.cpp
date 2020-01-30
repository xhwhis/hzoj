#include <iostream>
#define max_n  10000
using namespace std;

struct UnionSet {
    int fa[max_n + 5];
    void init(int n) {
        for (int i = 1; i <= n; i++) {
            fa[i] = i;
        }
    }
    int get(int x) {
        if (x == fa[x]) return x;
        return fa[x] = get(fa[x]);
    }
    void merge(int x, int y) {
        fa[get(x)] = get(y);
    }
};

UnionSet u;

int main() {
    int n, m;
    cin >> n >> m;
    u.init(n);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        switch (a) {
            case 1: {
                u.merge(b, c);
            } break;
            case 2: {
                cout << (u.get(b) == u.get(c) ? "Yes" : "No") << endl;
            } break;
        }
    }
    return 0;
}
