#include <stdio.h>

long long quick_mul(long long a, long long b, long long p) {
    long long tmp = a, ans = 0;
    while (b) {
        if (b & 1) ans = (ans + tmp) % p;
        tmp = tmp * 2 % p;
        b >>= 1;
    }
    return ans;
}

int main() {
    long long a, b, p;
    scanf ("%lld%lld%lld", &a, &b, &p);
    printf ("%lld", quick_mul(a, b, p));
    return 0;
}
