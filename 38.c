#include <stdio.h>
#define max_n 1000
#define max_m 100

int f[max_n + 5][max_m + 5] = {{1, 1}, {1, 1}};

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 2; i <= n; i++) {
        f[i][0] = f[i - 1][0];
        for (int j = 1; j <= f[i][0]; j++) {
            f[i][j] = f[i - 1][j] + f[i - 2][j];
        } 
        for (int j = 1; j <= f[i][0]; j++) {
            if (f[i][j] < 10) continue;
            f[i][j + 1] += f[i][j] / 10;
            f[i][j] %= 10;
            f[i][0] += (j == f[i][0]);
        }
    }
    for (int i = f[n][0]; i > 0; i--) {
        printf ("%d", f[n][i]);
    }
    return 0;
}
