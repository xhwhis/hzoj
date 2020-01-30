#include <stdio.h>
#define max_n 50000000
#define max_m 672

int prime[max_n + 5] = {0};

void prime_init(int a) {
    for (int i = 2; i <= a; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > a) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int p[max_m + 5] = {0}, c[max_m + 5] = {0};

void get_pc(int a) {
    for (int i = 1; prime[i] <= a && i <= prime[0]; i++) {
        if (a % prime[i] == 0) {
            p[++p[0]] = prime[i];
            while (a % prime[i] == 0) {
                a /= prime[i];
                c[p[0]]++;
            }
        }
    }
    return ;
}

int quick_mod(int a, int b, int p) {
    int tmp = a, ans = 1;
    while (b) {
        if (b & 1) ans = ans * tmp % p;
        tmp = tmp * tmp % p;
        b >>= 1;
    }
    return ans % p;
}

int sum_mod(int a, int b, int p) {
    if (a == 0) return 0;
    if (b == 0) return 1;

}

int get_ans(int a, int b) {
    if (a == 0) return 0;
    if (a == 1 || b == 0) return 1;
    int ans = 1;
    for (int i = 1; i <= p[0]; i++) {
        ans = ans * sum_mod(p[i], c[i] * b, 9901) % 9901;
    }
    return ans;
}

int main() {
    int a, b;
    scanf ("%d%d", &a, &b);
    prime_init(a);
    get_pc(a);
    printf ("%d", get_ans(a, b));
    return 0;
}
