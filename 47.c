#include <stdio.h>

int all, n, w[105], v[105], ans[105][10005];

int main() {
    scanf ("%d%d", &all, &n);
    for (int i = 1; i <= n; i++) {
        scanf ("%d%d", &w[i], &v[i]);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= all; j++) {
            if (j < w[i]) {
                ans[i][j] = ans[i - 1][j];
            } else {
                ans[i][j] = ans[i - 1][j] > v[i] + ans[i - 1][j - w[i]] ? ans[i - 1][j] : v[i] + ans[i - 1][j - w[i]];
            }
        }
    }
    printf ("%d", ans[n][all]);
    return 0;
}
