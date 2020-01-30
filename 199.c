#include <stdio.h>
#define max_n 100000

int f[max_n + 5] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int a[10];

int func(int x) {
    int y = 0;
    if (x < 10) return x;
    else {
        for (int i = 0; i < 10; i++) {
            if (a[i]) y += f[x - i - 2];
        }
    }
    return y;
}

int main() {
    int k, m;
    scanf ("%d%d", &k, &m);
    for (int i = 0; i < 10; i++) {
        scanf ("%d", &a[i]);
    }
    for (int i = 0; i < k; i++) {
        f[i] = func(i + 1) % m;
    }
    printf ("%d", f[k - 1]);
    return 0;
}
