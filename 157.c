#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0, j = 2 * n - 1; i < j; i++) {
        for (int p = 0, q = n - abs(i - n + 1) - 1; p < q; p++) {
            printf (" ");
        }
        for (int p = n - abs(i - n + 1) - 1, q = 0; q < 2 * abs(i - n + 1) + 1; p++, q++) {
            printf ("%c", 'A' + n - abs(p - n + 1) - 1);
        }
        printf ("\n");
    }
    return 0;
}
