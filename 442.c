#include <stdio.h>

int main() {
    int n;
    scanf ("%d", &n);
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        c = a + b;
        i && printf (" ");
        printf ("%d", c);
        a = b;
        b = c;
        c = a;
    }
    return 0;
}
