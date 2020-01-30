#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < 2 * n + 1; i++) {
        for (int p = 0; p < n - abs(i - n); p++) {
            printf (" ");
        }
        for (int p = 0, q = 2 * abs(i - n) + 1; p < q; p++) {
            if (p == 0 || p == q - 1) printf ("%d", abs(i - n));
			else printf (" ");
        }
        printf ("\n");
    }
    return 0;
}
