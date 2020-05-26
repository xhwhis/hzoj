#include <stdio.h>
#define max_n 8000000

int prime[max_n + 5] = {0};
int is_prime[max_n + 5] = {0};
int n;

void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max_n) break;
            is_prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int cnt(int n) {
    int ans = 0;
    for (int i = 2; prime[i] <= n / 2; i++) {
        if (!is_prime[n - prime[i]]) ans++;
    }
    return ans;
}

int main() {
    init();
    scanf ("%d", &n);
    printf ("%d", cnt(n));
    return 0;
}
