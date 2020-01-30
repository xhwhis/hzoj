#include <iostream>
#define max_n 10000
using namespace std;

struct unionSet {
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
        val[x] %= 3;
        return fa[x] = root;
    }
    void merge(int a, int b) {
        int _a = get(a), _b = get(b);
        if (_a == _b) return ;
        fa[_a] = _b;
        val[_a] = (val[b] - val[a] + 5) % 3;
        return ;
    }
};

unionSet u;

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
                if (u.get(b) != u.get(c)) {
                    cout << "Unknown" << endl;
                } else {
                    switch ((u.val[b] - u.val[c] + 3) % 3) {
                        case 0: {
                            cout << "Tie" << endl;
                        } break;
                        case 1: {
                            cout << "Loss" << endl;
                        } break;
                        case 2: {
                            cout << "Win" << endl;
                        } break;
                    }
                }
            } break;
        }
    }
    return 0;
}
