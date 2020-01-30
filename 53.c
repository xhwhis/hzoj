#include <stdio.h>
#define max_n 1000000

int prime[max_n + 5] = {0};
int f[max_n + 5], sum[max_n + 5];

int main() {
    sum[1] = 1;
    int ans = 1;
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = i;
            sum[i] = i + 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                f[i * prime[j]] = f[i] * prime[j];
                sum[i * prime[j]] = sum[i] / (f[i * prime[j]] - 1) * (f[i * prime[j]] * prime[j] - 1);
                break;
            }
            f[i * prime[j]] = prime[j];
            sum[i * prime[j]] = sum[i] * (prime[j] + 1);
        }
        if (ans < sum[i]) ans = sum[i];
    }
    printf ("%d", ans);
    return 0;
}
