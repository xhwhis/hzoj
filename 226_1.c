#include <stdio.h>

long long quick_mod(long long a, long long b, long long p) {
    long long tmp = a, ans = 1;
    while (b) {
        if (b & 1) ans = ans * tmp % p;
        tmp = tmp * tmp % p;
        b = b >> 1;
    }
    return ans % p;
}

int main() {
    long long a, b, p;
    scanf ("%lld%lld%lld", &a, &b, &p);
    printf ("%lld", quick_mod(a, b, p));
    return 0;
}
