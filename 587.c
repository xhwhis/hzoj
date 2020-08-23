#include <stdio.h>

int main() {
    int n, a, b, c, d;
    scanf ("%d%d%d%d", &n, &a, &b, &c);
    if (a > b) d++;
    if (b > c) d++;
    if (c > a) d++;
    printf ("%c", d == 2 ? '0' : '1');
    return 0;
}
