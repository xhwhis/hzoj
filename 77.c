#include <stdio.h>
#define max_n 100

int a[max_n + 5] = {1, 1};

int main() {
    int n, k;
    scanf ("%d%d", &n, &k);
    for (int i = 0; i < k ; i++) {
        for (int j = 1; j <= a[0]; j++) {
            a[j] *= n;
        }
        for (int j = 1; j <= a[0]; j++) {
            if (a[j] < 10) continue;
            a[j + 1] += a[j] / 10;
            a[j] %= 10;
            a[0] += (j== a[0]);
        }
    }
    for (int i = a[0]; i > 0; i--) {
        printf ("%d", a[i]);
    }
    return 0;
}
