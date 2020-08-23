#include <stdio.h>

int n, m, num[100005], max;

int func(int len) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += num[i] / len;
    }
    return cnt;
}

int main() {
    scanf ("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &num[i]);
        if (max < num[i]) max = num[i];
    }
    int l = 0, r = max, mid;
    while (l != r) {
        mid = (l + r + 1) >> 1;
        if(func(mid) >= m) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    printf ("%d\n", l);
    return 0;
}
