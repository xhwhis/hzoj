#include <stdio.h>
#define max_n 500000
#define max(a, b) (a > b ? a : b)

int a[max_n + 5];
int dp[max_n + 5] = {0};

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    int maxlen = 0;
    for (int i = 0; i < n; i++) {
        int len = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) len = max(len, dp[j] + 1);
        }
        dp[i] = len;
        if (dp[i] > maxlen) maxlen = dp[i];
    }
    printf ("%d", maxlen);
    return 0;
}
