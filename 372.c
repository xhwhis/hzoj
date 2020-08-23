#include <stdio.h>
#define max_n 500000

int a[max_n + 5], b[max_n + 5];

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf ("%d", &b[i]);
    }
    int p = 1, top1 = 0, top2 = 0;
    while (p < n) {
        while (top1 != -1 && a[p] <= a[top1]) {
            --top1;
        }
        while (top2 != -1 && b[p] <= b[top2]) {
            --top2;
        }
        if (top1 - top2) break;
        a[++top1] = a[p];
        b[++top2] = b[p];
        p++;
    }
    printf ("%d", p);
    return 0;
}
