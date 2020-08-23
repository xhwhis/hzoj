#include <stdio.h>
#define max_n 100000

long long n, m, min, max;
long long num[max_n + 5];

int check(long long mid) {
    int cnt = 0;
    long long now = 0;
    for (int i = 0; i < n; i++) {
        if (now + num[i] == mid) {
            cnt++;
            now = 0;
        } else if (now + num[i] > mid) {
            cnt++;
            now = num[i];
        } else {
            now += num[i];
        }
    }
    if (now > 0) cnt++;
    return cnt;
}

long long func() {
    long long l = min, r = max, mid;
    while (l != r) {
        mid = (l + r) >> 1;
        if (check(mid) > m) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    return l;
}

int main() {
    scanf ("%ld%ld", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf ("%ld", &num[i]);
        max += num[i];
        if (min < num[i]) min = num[i];
    }
    printf ("%ld", func());
    return 0;
}
