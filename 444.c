#include <stdio.h>
#define max_n 100

int a[max_n + 5] = {0};

int main() {
    int n, x;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    scanf ("%d", &x);
    int temp = a[x - 1];
    a[x - 1] = a[n - 1];
    for (int i = n - 1; i > x; i--) {
        a[i] = a[i - 1];
    }
    a[x] = temp;
    for (int i = 0; i < n; i++) {
        i && printf (" ");
        printf ("%d", a[i]);
    }
    return 0;
}
