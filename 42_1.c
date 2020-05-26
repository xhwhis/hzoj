#include <stdio.h>
#define max_m 100
#define max_n 10000

int w[max_m + 5] = {0};
int f[max_n + 5] = {0};

int main () {
    int m, n;
    scanf ("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        scanf("%d", &w[i]);
    } 
    f[0] = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 1; j <= n; j++) {
            if (j - w[i] >= 0) f[j] += f[j - w[i]] % 9973;
        }
    }
    printf ("%d", f[n] % 9973);
    return 0;
}
