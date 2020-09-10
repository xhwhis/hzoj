#include <stdio.h>

int dp(int n) {
    int dp[n];
    dp[0] = 2, dp[1] = 2, dp[2] = 4;
    for (int i = 3; i < n; i++) {
        dp[i] = dp[i - 2] * 2 + dp[i - 3];
    }
    return dp[n - 1];
}

int main() {
    int n;
    scanf ("%d", &n);
    printf ("%d\n", dp(n));
    return 0;
}
