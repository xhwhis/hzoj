#include <stdio.h>
#include <math.h>
#define max_n 1000000

int f[max_n + 5] = {0};
int prime[max_n + 5] = {0};
int cnt[max_n + 5] = {0};
int fac[max_n + 5] = {0};

void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = 2;
            fac[i] = i + 1;
            cnt[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max_n) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) {
                fac[prime[j] * i] = fac[i] / (pow(prime[j], cnt[i] + 1) - 1) * (pow(prime[j], cnt[i] + 2) - 1);
                f[prime[j] * i] = f[i] / (cnt[i] + 1) * (cnt[i] + 2);
                cnt[prime[j] * i] = cnt[i] + 1;
                break;
            } else {
                fac[prime[j] * i] = fac[prime[j]] * fac[i];
                f[prime[j] * i] = f[prime[j]] * f[i];
                cnt[prime[j] * i] = 1;
            }
        }
    }
}

int main() {
    init();
    int ans = 0;
    for (int i = 1; i <= max_n; i++) {
        if (ans < f[i]) ans = f[i];
    }
    printf ("%d", ans);
    return 0;
}
