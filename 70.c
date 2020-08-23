#include <stdio.h>

int is_ugly(int num) {
    while (num % 2 == 0) {
        num /= 2;
    }
    while (num % 3 == 0) {
        num /= 3;
    }
    while (num % 5 == 0) {
        num /= 5;
    }
    return (num == 1);
}

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (is_ugly(i)) {
            printf ("%d\n", i);
        }
    }
    return 0;
}
