#include <stdio.h>

int main() {
    int n, a = 2, b = 2, c = 4, d;
    scanf ("%d", &n);
    for (int i = 1; i < n; i++) {
        d = a + b * 2;
        a = b;
        b = c;
        c = d;
    }
    printf ("%d\n", a);
    return 0;
}
