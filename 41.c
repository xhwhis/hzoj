#include <stdio.h>
#define max_n 1000

int f[max_n + 5][max_n + 5] = {{1, 1}};

int main() {
    int n, k;
    scanf ("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) {
        f[i][0] = f[i - 1][0];
        for (int j = 1; j <= f[i][0]; j++) {
            f[i][j] = f[i - 1][j] * (k - 1);
        }
        for (int j = 1; j <= f[i][0]; j++) {
            if (f[i][j] < 10) continue;
            f[i][j + 1] += f[i][j] / 10;
            f[i][j] %= 10;
            f[i][0] += (j == f[i][0]);
        }
    }
    if (n & 1) {
        f[n][1] -= k - 1;
        if (f[n][1] < 0) {
            f[n][1] += 10;
            f[n][2]--;
        }
    } else {
        f[n][1] += k - 1;
        if (f[n][1] >= 10) {
            f[n][1] -= 10;
            f[n][2] ++;
        }
    }
    for (int i = f[n][0]; i > 0; i--) {
        printf ("%d", f[n][i]);
    }
    return 0;
}
