#include <stdio.h>

int main() {
    int x, n;
    scanf ("%d%d", &x, &n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if ((x + i) % 7 && (x + i) % 7 != 6) sum += 2;
    }
    printf ("%d", sum);
    return 0;
}
