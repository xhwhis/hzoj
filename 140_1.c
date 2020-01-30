#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0, j = 2 * n - 1; i < j; i++) {
        for (int p = 0, q = abs(i - n + 1); p < q; p++) {
            printf (" ");
        }
        for (int p = 0, q = 2 * n - 2 * abs(i - n + 1) - 1; p < q; p++) {
            printf ("%c", 'A' + n - 1 - abs(i - n + 1));
        }
        printf ("\n");
    }
    return 0;
}
