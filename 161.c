#include <stdio.h>

int main() {
    int x, n;
    scanf ("%d%d", &x, &n);
    double ans = x;
    for (int i = 0; i < n; i++) {
        ans *= 1.06;
    }
    printf ("%lf", ans);
    return 0;
}
