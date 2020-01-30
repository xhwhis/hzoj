#include <stdio.h>

int func(int n) {
    return (n == 1 ? 3 : func(n - 1) + (n - 1) * 2);
}

int main() {
    int n;
    scanf ("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        printf ("%d\n", func(i));
        sum += func(i);
    }
    printf ("%d", sum);
    return 0;
}
