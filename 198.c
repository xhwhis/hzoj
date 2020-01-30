#include <stdio.h>
#define max_n 100000
#define div 1000000007

int num[max_n + 5] = {0, 1};

int main() {
    int  n;
    scanf ("%d", &n);
    for (int i = 2; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2];
        num[i] %= div;
    }
    printf ("%d", num[n]);
    return 0;
}
