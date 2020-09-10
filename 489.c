#include <stdio.h>

int main() {
    int n, a = 8, b, c = 1, d;
    scanf ("%d", &n);
    for (int i = 1; i < n; i++) {
        b = a * 9 + c;
        d = a + c * 9;
        a = b % 12345;
        c = d % 12345;
    }
    printf ("%d\n", a);
    return 0;
}
