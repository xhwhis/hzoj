#include <stdio.h>

int get_ans(int n, int m) {
    if (n == m) return 1;
    if (m == 2) return n >> 1;
    if (n < m << 1) return get_ans(n - 1, m - 1);
    return get_ans(n - 1, m - 1) + get_ans(n - m, m);
}

int main() {
    int n, m;
    scanf ("%d%d", &n, &m);
    printf ("%d\n", get_ans(n, m));
    return 0;
}
