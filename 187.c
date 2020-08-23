#include <stdio.h>

long long func1(int n) {
    if (n == 1) return 1;
    return 2 * func1(n - 1) + 1;
}

long long func2(int n) {
    if (n == 1) return 1;
    return 2 * func2(n - 1) + n;
}

int main() {
    int n;
    scanf ("%d", &n);
    printf ("%lld %lld", func1(n), func2(n));
    return 0;
}
