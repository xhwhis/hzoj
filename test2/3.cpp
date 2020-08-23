#include <iostream>
#define max_n 1000000
using namespace std;

struct UnionSet {
    int fa[max_n + 5];
    void init(int n) {
        for (int i = 0; i <= n; i++) {
            fa[i] = i;
        }
    }
    int get(int x) {
        if (x == fa[x]) return x;
        return fa[x] = get(fa[x]);
    }
    void merge(int x, int y) {
        int a = get(x), b = get(y);
        
    }
}

int ind(int i, int j) {
    return i * m + j + 1;
}

UnionSet u;


int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }
    u.init(n * m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] - 'O') continue;
            if (j - 1 >= 0 && g[i][j - 1] == 'O') {
                u.merge(i, j);
            }
        }
    }
    return 0;
}
