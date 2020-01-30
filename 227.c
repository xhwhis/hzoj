#include <stdio.h>

typedef long long ll;

ll func(ll a, ll b, ll p) {
    ll res = 0;
    while (b) {
        if (b & 1) res = (res + a) % p;
        a = a * 2 % p;
        b >>= 1;
    }
    return res % p;
}

int main() {
    ll a, b, p;
    scanf ("%lld%lld%lld", &a, &b, &p);
    printf ("%lld", func(a, b, p));
    return 0;
}
