#include <stdio.h>

int fib(int n) {
    if (n == 1) return 0;
    if (n == 2 || n == 3) return 1;
    return fib(n - 3) + fib(n - 2);
}

int main() {
    int n;
    scanf ("%d", &n);
    printf ("%d", fib(n));
    return 0;
}
