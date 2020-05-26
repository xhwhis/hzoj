#include <stdio.h>

int all, n, w[105], v[105], ans[10005];

int main() {
    scanf ("%d%d", &all, &n);
    for (int i = 1; i <= n; i++) {
        scanf ("%d%d", &w[i], &v[i]);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = all; j > 0; j--) {
            if (j >= w[i] && ans[j] < v[i] + ans[j - w[i]]) {
                ans[j] = v[i] + ans[j - w[i]];
            }
        }
    }
    printf ("%d\n", ans[all]);
    return 0;
}
