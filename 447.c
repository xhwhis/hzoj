#include <stdio.h>

int val[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 774, 747,777};

int is_val(int n) {
    for (int i = 0; val[i] <= n; i++) {
        if (n % val[i] == 0) return 1;
    }
    return 0;
}

int main() {
    int n;
    scanf ("%d", &n);
    if (is_val(n)) printf ("YES");
    else printf ("NO");
    return 0;
}
