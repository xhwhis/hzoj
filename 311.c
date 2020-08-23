#include <stdio.h>

int prime[10000005];
long long phi[5000005] = {0, 1};

void init(int n) {
    for (int i = 2; i <= n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            if (i <= n >> 1) phi[i] = i - 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                if (i * prime[j] > n >> 1) break;
                phi[i * prime[j]] = phi[i] * prime[j];
                break;
            }
            if (i * prime[j] > n >> 1) continue;
            phi[i * prime[j]] = phi[i] * (prime[j] - 1);
        }
    }
    for (int i = 2; i <= n >> 1; i++) {
        phi[i] += phi[i - 1];
    }
    return ;
}

int main() {
    int n;
    scanf ("%d", &n);
    init(n);
    long long ans = 0;
    for (int i = 1; i <= prime[0]; i++) {
        ans += phi[n / prime[i]] * 2;
    }
    ans -= prime[0];
    printf ("%lld\n", ans);
    return 0;
}
