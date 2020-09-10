#include <stdio.h>

int main() {
    int n, m;
    scanf ("%d%d", &n, &m);
    long long dp[n + 1];
    dp[0] = 1, dp[1] = 2;
    for (int i = 2; i <= n; i++) {
        if (i < m) {
            dp[i] = dp[i - 1] * 2;
        } else if (i == m) {
            dp[i] = dp[i - 1] * 2 - 1;
        } else {
            dp[i] = dp[i - 1] * 2 - dp[i - m - 1];
        }
    }
    printf ("%lld\n", dp[n]);
    return 0;
}
