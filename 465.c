#include <stdio.h>
#include <math.h>

int digit(long long n, int k) {
    return n % (int)pow(10, k) / pow(10, k - 1);
}

int main() {
    long long n;
    int k;
    scanf ("%lld%d", &n, &k);
    printf ("%d", digit(n, k));
    return 0;
}
