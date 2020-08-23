#include <stdio.h>

int func(int x) {
    if (x <= 0) return 0;
    else if (x == 1) return 1;
    else if (x & 1) return 3 * func((x + 1) >> 1) - 1;
    else return 3 * func(x >> 1) - 1;
}

int main() {
    int n;
    scanf ("%d", &n);
    printf ("%d", func(n));
    return 0;
}
