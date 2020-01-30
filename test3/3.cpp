#include <iostream>
#include <algorithm>
#include <cstdio>
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
    int get (int x) {
        if (x == fa[x]) return x;
        int root = get(fa[x]);
        val[x] += val[fa[x]];
        val[x] %= 2;
        return fa[x] = root;
    }
    bool merge(int x, int y) {
        int a = get(x), b = get(y);
        if (a == b) {
            return ((val[a] + val[b]) % 2);
        }
        fa[a] = b;
        val[a] = (val[x] - val[y] + 3) % 2;
        return true;
    }
};

struct Data {
    int i, j, c;
} a[max_m + 5];

UnionSet u;

int main() {
    int n, m;
    scanf ("%d%d", &n, &m);
    u.init(n);
    for (int i = 0; i < m; i++) {
        scanf ("%d%d%d", &a[i].i, &a[i].j, &a[i].c);
    }
    sort(a, a + n, [](const Data &a, const Data &b) {return a.c > b.c;});
    for (int i = 0; i < m; i++) {
        if (!u.merge(a[i].i, a[i].j)) {
            printf ("%d", a[i].c);
            break;
        }
    }
    return 0;
}
