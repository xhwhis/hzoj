#include <stdio.h>
#define max_m 20
#define max_n 100000

int w[max_m + 5] = {0};
int f[max_m + 5][max_n + 5];

int main() {
    int m, n;
    scanf ("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        scanf("%d", &w[i]);
    }
    for (int i = 0; i < m; i++) {
        f[i][0] = 1;
        for (int j = 1; j <= n; j++) {
            f[i][j] = 0;
            if (i - 1 >= 0) f[i][j] = f[i - 1][j] % 9973;
            if (j - w[i] >= 0) f[i][j] += f[i][j - w[i]] % 9973;
        }
    }
    printf("%d", f[m - 1][n] % 9973);
    return 0;
}
