#include <stdio.h>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int n, k, id;
    scanf ("%d%d%d", &n, &k, &id);
    printf ("%d/%d", k / gcd(k, n), n / gcd(k, n));
    return 0;
}
