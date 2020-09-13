#include <stdio.h>

int main() {
    int m, grade, cnt[105] = {0}, n, ans, max_cnt = 0;
    scanf ("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf ("%d", &grade);
        cnt[grade]++;
    }
    scanf ("%d", &n);
    for (int i = 100; i >= 0; i--) {
        if (cnt[i] == 0) continue;
        if (cnt[i] < n) {
            if (max_cnt < cnt[i]) {
                ans = cnt[i];
                max_cnt = cnt[i];
            }
        } else {
            ans = cnt[i];
            break;
        }
    }
    printf ("%d\n", ans);
    return 0;
}
