#include <stdio.h>

int main() {
    int begin, n;
    scanf ("%d%d", &begin, &n);
    if (begin < 0) begin = 0;
    else begin += (begin & 1);
    for (int i = 0; i < n; i++) {
        printf ("%d\n", begin + 2 * i);
    }
    return 0;
}
