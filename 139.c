#include <stdio.h>

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf (" ");
        }
        for (int j = 0; j < 2 * i; j++) {
            printf ("A");
        }
        printf ("\n");
    }
    for (int i = n-1; i > 0; i--) {
        for (int j = 0; j < n - i; j++) {
            printf (" ");
        }
        for (int j = 0; j < 2 * i; j++) {
            printf ("A");
        }
        printf ("\n");
    }
    return 0;
}
