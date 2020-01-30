#include <stdio.h>
#define max_n 8000000

int prime[max_n + 5] = {0};
int is_prime[max_n + 5] = {0};
int ans[max_n + 5] = {0};

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
    int l, r;
    scanf ("%d%d", &l, &r);
    for (int i = l; i <= r; i++) {
        if (!is_prime[i]) ans[++ans[0]] = i;
    }
    int sub_mix = r - l, sub_max = 0, a, b, c, d;
    for (int i = 1; i < ans[0]; i++) {
        if (ans[i + 1] - ans[i] < sub_mix) {
            sub_mix = ans[i + 1] - ans[i], a = ans[i], b = ans[i + 1];
        }
        if (ans[i + 1] - ans[i] > sub_max) {
            sub_max = ans[i + 1] - ans[i], c = ans[i], d = ans[i + 1];
        }
    }
    if (ans[0] < 2) printf ("There are no adjacent primes.");
    else printf ("%d,%d are closest, %d,%d are most distant.", a, b, c, d);
    fflush(stdin);
    return 0;
}
