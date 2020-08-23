#include <stdio.h>

int main() {
    double m, n;
    int p;
    scanf ("%lf%lf%d", &m, &n, &p);
    printf ("%.2lf", p ? ((m + n) * 1.087 / 2) : ((m * 0.973 + n) /2));
    return 0;
}
