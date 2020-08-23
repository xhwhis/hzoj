#include <stdio.h>

int main() {
    int n, ans = 1;
    scanf ("%d", &n);
    for (int i = 0; i < n - 1; i++) {
        ans = (ans + 1) * 2;
    }
    printf ("%d", ans);
    return 0;
}
