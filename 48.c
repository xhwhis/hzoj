#include <stdio.h>

int all, n, w[10005], v[10005], ans[10005];

int main() {
    scanf ("%d%d", &n, &all);
    for (int i = 1; i <= n; i++) {
        scanf ("%d%d", &w[i], &v[i]);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= all; j++) {
            if (j >= w[i] && ans[j] < v[i] + ans[j - w[i]]) {
                ans[j] = v[i] + ans[j - w[i]];
            }
        }
    }
    printf ("%d\n", ans[all]);
    return 0;
}
