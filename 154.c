#include <stdio.h>

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = n - i + 1; j >= 1; j--) {
            printf ("%d", j);
            if (j != 1) {
                printf (" ");
            }
        }
        printf ("\n");
    }
    return 0;
}
