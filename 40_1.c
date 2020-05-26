#include <stdio.h>
#define max_n 500
#define max_m 60

int f[max_n + 5][max_m + 5] = {{1, 0}, {1, 1}, {1, 1}};

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 3; i < n; i++) {
        f[i][0] = f[i - 2][0];
        for (int j = 1; j <= f[i][0]; j++) {
            f[i][j] = f[i - 2][j] + f[i - 3][j];
        } 
        for (int j = 1; j <= f[i][0]; j++) {
            if (f[i][j] < 10) continue;
            f[i][j + 1] += f[i][j] / 10;
            f[i][j] %= 10;
            f[i][0] += (j == f[i][0]);
        }
    }
    for (int i = f[n - 1][0]; i > 0; i--) {
        printf ("%d", f[n - 1][i]);
    }
    return 0;
}
