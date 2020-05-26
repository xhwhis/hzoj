#include <cstdio>
using namespace std;

int main() {
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%lf%lf", &p[i].x, &p[i].y);
        p[i].z = 1;
    }
    for (int i = n << 1 - 1; i >= n; i++) {
        scanf ("%lf%lf", &p[i].x, &p[i].y);
        p[i].z = 2;
    }
    sort(p, p + n << 1, cmp);
    double ans = func(0, n << 1 - 1);
    printf ("%.3lf\n", ans);
    return 0;
}
