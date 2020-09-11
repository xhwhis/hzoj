#include <stdio.h>

int main() {
    int k, a = 0, b;
    scanf ("%d", &k);
    for (int i = 0; i < k - 1; i += 2) {
        b = a * 2 + 1;
        a = b;
    }
    printf ("%d\n", a);
    return 0;
}
