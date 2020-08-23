#include <iostream>
#include <algorithm>
using namespace std;

int m, n;

struct data {
    int val, num;
} x[100005];

int y[100005];

bool cmp(data a, data b) {
    return a.val < b.val;
}

int main() {
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> x[i].val;
        x[i].num = i + 1;
    }
    sort(x, x + m, cmp);
    for (int i = 0; i < n; i++) {
        int y;
        cin >> y;
        if (y > x[m - 1].val) {
            cout << 0 << endl;
            continue;
        }
        int l = 0, r = m - 1, mid;
        while (l != r) {
            mid = (l + r) >> 1;
            if (x[mid].val >= y) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        cout << x[l].num << endl;
    }
    return 0;
}
