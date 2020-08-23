#include <stdio.h>
#define max_n 1000000

int prime[max_n + 5] = {0};
int is_prime[max_n + 5] = {0};

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

int main() {
    init();
    int n, m;
    scanf ("%d%d", &n, &m);
    for (int i = m; i <= n; i++) {
        if(!is_prime[i]) printf ("%d\n", i);
    }
    return 0;
}
