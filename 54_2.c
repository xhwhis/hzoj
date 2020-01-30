#include <stdio.h>
#include <string.h>
#define max_n 500
#define max_m 1200
#define max_t 600

int f[max_n + 5][max_m + 5] = {{1, 1}};
int ans[max_n + 5][max_t + 5];

void init_f() {
    for (int i = 1; i <= max_n; i++) {
        f[i][0] = f[i - 1][0];
        for (int j = 1; j <= f[i][0]; j++) {
            f[i][j] = f[i - 1][j] * i;
        }
        for (int j = 1; j <= f[i][0]; j++) {
            if (f[i][j] < 10) continue;
            f[i][j + 1] += f[i][j] / 10;
            f[i][j] %= 10;
            f[i][0] += (j == f[i][0]);
        }
        ans[i][0] = ans[i][1] = 1;
        for (int j = 1; j <= f[i][0]; j++) {
            if (!f[i][j]) continue;
            for (int k = 1; k <= ans[i][0]; k++) {
                ans[i][k] *= f[i][j];
            }
            for (int k = 1; k <= ans[i][0]; k++) {
                if (ans[i][k] < 10) continue;
                ans[i][k + 1] += ans[i][k] / 10;
                ans[i][k] %= 10;
                ans[i][0] += (k == ans[i][0]);
            }
        }
    }
}

int main() {
    init_f();
    int x;
    while (~scanf ("%d", &x)) {
        for (int i = ans[x][0]; i >= 1; i--) {
            printf ("%d", ans[x][i]);
        }
        printf ("\n");
    }
    return 0;
}
