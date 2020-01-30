#include <stdio.h>
#define max_n 10000000

int prime[max_n + 5] = {0};

void init(int n) {
    for (int i = 2; i <= n; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int get_ans(int n) {
    int ans = 0;
    for (int i = 1; prime[i] <= n && i <= prime[0]; i++) {
        for (int p = 1; p <= n / prime[i]; p++) {
            for (int q = 1; q <= n / prime[i]; q++) {
                if (gcd(p, q) == 1) ans++;
            }
        }
    }
    return ans;
}

int main() {
    int n;
    scanf ("%d", &n);
    init(n);
    printf ("%d", get_ans(n));
    return 0;
}
