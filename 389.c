#include <stdio.h>
#define max_m 100000

int num[max_m + 5] = {0};

int main() {
    int m, n;
    scanf ("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        scanf ("%d", &num[i]);
    }
    return 0;
}
