#include <stdio.h>

int n, k;
double num[10005], max;

int check(int mid) {
    int cnt = 1, now = 0;
    for (int i = 1; i < n; i++) {
        if (num[i] - num[now] >= mid) {
            cnt++;
            now = i;
        }
    }
    return cnt;
}

int func() {
    double l = 0, r = max, mid;
    while (r - l > 0.01) {
        mid = (l + r) / 2;
        if (check(mid) >= k) {
            l = mid;
        } else {
            r = mid;
        }
    }
    return l;
}

int main() {
    scanf ("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf ("%lf", &num[i]);
        if (max < num[i]) max = num[i];
    }
    printf ("%d\n", func());
    return 0;
}
