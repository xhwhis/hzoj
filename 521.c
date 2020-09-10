#include <stdio.h>

int prime[3000000] = {1, 1}, n, r, nums[35], ans;

void init(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (!prime[i]) {
            for (int j = 2; i * j <= n; j++) {
                prime[i * j] = 1;
            }
        }
    }
}

void dp(int s, int sum, int deep) {
    if (deep == r) {
        if (!prime[sum]) ans++;
        return ;
    }
    for (int i = s; i <= n - r + deep; i++) {
        sum += nums[i];
        dp(i + 1, sum, deep + 1);
        sum -= nums[i];
    }
}

int main() {
    scanf ("%d%d", &n, &r);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &nums[i]);
    }
    init(r * 100000);
    dp(0, 0, 0);
    printf ("%d\n", ans);
    return 0;
}
