#include <stdio.h>
#include <string.h>
#define max_n 500
#define max_m 1200
#define max_t 600

int f[max_n + 5][max_m + 5] = {{1, 1}};
int ans[max_m + 5][max_m + 5];

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
    }
    return ;
}

int main() {
    init_f();
    int x;
    while (~scanf ("%d", &x)) {
        memset(ans, 0, sizeof(ans));
        ans[0][0] = ans[0][1] = 1;
        for (int i = 1; i <= f[x][0]; i++) {
            ans[i][0] = ans[i - 1][0];
            if (!f[x][i]) {
                for (int j = 1; j <= ans[i][0]; j++) {
                    ans[i][j] = ans[i - 1][j];
                }
                continue;
            }
            for (int j = 1; j <= ans[i][0]; j++) {
                ans[i][j] = ans[i - 1][j] * f[x][i];
            }
            for (int j = 1; j <= ans[i][0]; j++) {
                if (ans[i][j] < 10) continue;
                ans[i][j + 1] += ans[i][j] / 10;
                ans[i][j] %= 10;
                ans[i][0] += (j == ans[i][0]);
            }
        }
        for (int i = ans[f[x][0]][0]; i >= 1; i--) {
            printf ("%d", ans[f[x][0]][i]);
        }
        printf ("\n");
    }
    return 0;
}
