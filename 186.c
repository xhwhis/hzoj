#include <stdio.h>
#define max_n 100000

int a[max_n + 5] = {0};

int main() {
    int n, val = 0, cnt = 0;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    while (val < n) {
        val += a[val];
        cnt++;
    }
    printf ("%d", cnt);
    return 0;
}
