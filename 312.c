#include <stdio.h>
#define max_n 20000000

int prime[max_n + 5] = {0};
int cnt[max_n + 5], f[max_n + 5];

void init(int n) {
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            cnt[i] = 1;
            f[i] = 2;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                cnt[i * prime[j]] = cnt[i] + 1;
                f[i * prime[j]] = f[i] / (cnt[i] + 1) * (cnt[i] + 2);
                break;
            }
            cnt[i * prime[j]] = 1;
            f[i * prime[j]] = f[i] << 1;
        }
    }
    return ;
}

int main() {
    int n, ans, max = 0;
    scanf ("%d", &n);
    init(n);
    for (int i = 1; i <= n; i++) {
        if (max < f[i]) {
            max = f[i];
            ans = i;
        }
    }
    printf ("%d", ans);
    return 0;
}
