#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

struct node {
    int x, y;
};

node a[100005];

bool cmp(node a, node b) {
    if (a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}

double dis(int a, int b) {
    return sqrt((p[a].x - p[b].x) * (p[a].x - p[b].x))
}

double func(int l, int r) {
    if (l = r) {
        return -1;
    }
    if (l + 1 == r) {
        return dis(l, r);
    }
    int mid = (l + r) >> 1;
    double d = min(func(l, mid), func(mid + 1, r));
    for (int i = mid; i >= 0 && p[mid].x - p[i].x < d; i--) {
        for (int j = mid + 1; j < r && p[j].x - p[mid].x < d; j++) {
            d = min(d, dis(i, j));
        }
    }
    return d;
}

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%lf%lf", &p[i].x, &p[i].y);
    }
    for ()
    sort(p, p + n, cmp);
    double ans = func(0, n - 1);
    printf ("%lf\n", ans);
    return 0;
}
