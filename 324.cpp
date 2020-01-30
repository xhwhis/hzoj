#include <stdio.h>
#include <stdlib.h>
#define max_n 500000

struct UnionSet {
    int fa[max_n + 5], size[max_n + 5], val[max_n + 5] = {0};
    void init(int n) {
        for (int i = 1; i <= n; i++) fa[i] = i, size[i] = 1;
    }
    int get(int x) {
        if (x == fa[x]) return x;
        int root = get(fa[x]);
        val[x] += val[fa[x]];
        return fa[x] = root;
    }
    void merge(int x, int y) {
        int a = get(x), b = get(y);
        if (a == b) return ;
        fa[a] = b;
        val[a] = size[b];
        size[b] += size[a];
        return ;
    }
};

UnionSet u;

int main() {
    int n;
    scanf ("%d", &n);
    u.init(n);
    for (int i = 0; i < n; i++) {
        char str[10];
        int a, b;
        scanf ("%s%d%d", str, &a, &b);
        switch(str[0]) {
            case 'M': {
                u.merge(a, b);
            } break;
            case 'C': {
                if (u.get(a) - u.get(b)) {
                    printf ("-1\n");
                } else {
                    printf ("%d\n", abs(u.val[a] - u.val[b]) - 1);
                }
            } break;
        }
    }
    return 0;
}
