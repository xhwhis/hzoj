#include <stdio.h>
#define max_n 1000000

int prime[max_n + 5] = {0};

void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    init();
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= prime[0] && prime[i] <= n; i++) {
        int cnt = 0;
        for (long long j = prime[i]; j <= n; j *= prime[i]) {
            cnt += n / j;
        }
        printf ("%d %d\n", prime[i], cnt);
    }
    return 0;
}
