#include <stdio.h>

typedef long long ll;

ll func(ll a, ll b, ll p) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res % p) * (a % p) % p;
        a = (a * a) % p;
        b /= 2;
    }
    return res % p;
}

int main() {
    ll a, b, p;
    scanf ("%lld%lld%lld", &a, &b, &p);
    printf ("%lld", func(a, b, p));
    return 0;
}
