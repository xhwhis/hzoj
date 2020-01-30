#include <stdio.h>

int get_num(int n, int x) {
    int cnt = 0;
    while (n) {
        if (n % 10 == x) cnt++;
        n /= 10;
    }
    return cnt;
}

int main() {
    int n, x, ans = 0;
    scanf ("%d%d", &n, &x);
    for (int i = 1; i <= n; i++) {
        ans += get_num(i, x);
    }
    printf ("%d", ans);
    return 0;
}
