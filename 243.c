#include <stdio.h>
#define max_n 200000

typedef long long int1;

struct getin {
    int1 s, e, d;
} a[max_n + 5];

int1 posi[5];
int1 cnt[5] = {0};

int1 min(int1 a, int1 b) {
    return a < b ? a : b;
}

int1 max(int1 a, int1 b) {
    return a > b ? a : b;
}

int is_val(int1 num, int n) {
    int1 sum = 0;
    for (int i = 0; i < n; i++) {
        if (num >= a[i].s) sum += (min(a[i].e, num) - a[i].s) / a[i].d + 1;
    }
    return sum & 1;
}

int1 binary_search(int1 left, int1 right, int n) {
    while (left < right) {
        int1 mid = (left + right) >> 1;
        if (is_val(mid, n)) right = mid;
        else left = mid + 1;
    }
    return left;
}

int main() {
    int t;
    scanf ("%d", &t);
    for (int i = 0; i < t; i++) {
        int1 n, left, right;
        scanf ("%lld", &n);
        for (int j = 0; j < n; j++) {
            scanf ("%lld%lld%lld", &a[j].s, &a[j].e, &a[j].d);
            if (!j) left = a[j].s, right = a[j].e;
            else left = min(left, a[j].s), right = max(right, a[j].e);
        }
        posi[i] = binary_search(left, right, n);
        for (int j = 0; j < n; j++) {
            if (posi[i] >= a[j].s && posi[i] <= a[j].e && (posi[i] - a[j].s) % a[j].d == 0) cnt[i]++;
        }
    }
    for (int i = 0; i < t; i++) {
        if (cnt[i] & 1) printf ("%lld %lld\n", posi[i], cnt[i]);
        else printf ("Poor QIN Teng:(\n");
    }
    return 0;
}
