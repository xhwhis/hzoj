#include <iostream>
#include <algorithm>
#define max_n 20000
#define max_m 100000
using namespace std;

struct UnionSet {
    int fa[max_n + 5], val[max_n + 5] = {0};
    void init(int n) {
        for (int i = 1; i <= n; i++) {
            fa[i] = i;
        }
    }
    int get(int x) {
        if (x == fa[x]) return x;
        int root = get(fa[x]);
        val[x] += val[fa[x]];
        val[x] %= 2;
        return fa[x] = root;
    }
    bool merge(int x, int y) {
        int a = get(x), b = get(y);
        if (a == b) {
            return ((val[x] + val[y]) % 2);
        }
        fa[a] = b;
        val[a] = (val[y] - val[x] + 3) % 2;
        return true;
    }
};

struct Data {
    int i, j, c;
} a[max_m + 5];

UnionSet u;

int main() {
    int n, m;
    cin >> n >> m;
    u.init(n);
    for (int i = 0; i < m; i++) {
        cin >> a[i].i >> a[i].j >> a[i].c;
    }
    sort(a, a + m, [](const Data &a, const Data &b) {return a.c > b.c;});
    int ans = 0;
    for (int i = 0; i < m; i++) {
        if (!u.merge(a[i].i, a[i].j)) {
            ans = a[i].c;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
