#include <stdio.h>
#define max_n 10000000

int prime[max_n + 5] = {0};
int is_prime[max_n + 5] = {1, 1};

void init(int n) {
    for (int i = 2; i <= n; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > n) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}

int main() {
    int a, b;
    scanf ("%d%d", &a, &b);
    init(b);
    for (int i = a; i <= b; i++) {
        if (!is_prime[i]) printf ("%d\n", i);
    }
    return 0;
}
