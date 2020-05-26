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
        int l = 0, r = m - 1, mid, flag = 0;
        while (l <= r) {
            mid = (l + r) >> 1;
            if (x[mid].val == y) {
                cout << x[mid].num << endl;
                flag = 1;
                break;
            } else if (x[mid].val < y) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if(!flag) cout << 0 << endl;
    }
    return 0;
}
