#include <stdio.h>
#define max_n 100000
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

long long a[max_n + 5];

int check(long long *a, long long n, long long m, long long val) {
    long long num = 0, sum = 0, pre_sum = 0;
    for (long long i = 1; i <= n; i++) {
        sum += a[i] - val;
        if (i < m) continue;
        num = MIN(num, pre_sum);
        if (sum - num >= 0) return 1;
        pre_sum += a[i - m + 1] - val;
    }
    return 0;
}

long long binary_search(long long *a, long long l, long long r, long long n, long long m) {
    if (l == r) return l;
    long long mid = (l + r + 1) >> 1;
    if (check(a, n, m, mid)) return binary_search(a, mid, r, n, m);
    return binary_search(a, l, mid - 1, n, m);
}

int main() {
    long long n, m, min_num, max_num;
    scanf ("%lld%lld", &n, &m);
    for (long long i = 1; i <= n; i++) {
        scanf ("%lld", &a[i]);
        a[i] *= 1000;
        if (i == 1) min_num = max_num = a[1];
        min_num = MIN(min_num, a[i]);
        max_num = MAX(max_num, a[i]);
    }
    printf ("%lld", binary_search(a, min_num, max_num, n, m));
    return 0;
}
