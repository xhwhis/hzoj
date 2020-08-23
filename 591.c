#include <stdio.h>

int main() {
    int n, m, mid;
    scanf ("%d%d", &n, &m);
    if (n & 1 == 0) {
        mid = n >> 1;
        if (m <= mid) printf ("%d\n", m + 1);
        else printf ("%d\n", m - 1);
    } else {
        int mid = (n + 1) >> 1;
        if (mid > m) printf ("%d\n", m + 1);
        else printf ("%d\n", m - 1);
    }
    return 0;
}
