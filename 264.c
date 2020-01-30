#include <stdio.h>
#define max_n 100000

#define MAX(a, b) ((a) > (b) ? (a) : (b))

long long h[max_n + 5];
int l[max_n + 5], r[max_n + 5], s[max_n + 5], top = -1;

int main() {
    int n;
    scanf ("%d", &n);
    s[0] = s[n + 1] = -1;
    for (int i = 1; i <= n; i++) {
        scanf ("%lld", &h[i]);
    }
    s[++top] = 0;
    for (int i = 1; i <= n; i++) {
        while (h[i] <= h[s[top]]) {
            --top;
        }
        l[i] = s[top];
        s[++top] = i;
    }
    top = -1;
    s[++top] = n + 1;
    for (int i = n; i >= 1; i--) {
        while (h[i] <= h[s[top]]) {
            --top;
        }
        r[i] = s[top];
        s[++top] = i;
    }
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = MAX(ans, h[i] * (r[i] - l[i] -1));
    }
    printf ("%lld", ans);
    return 0;
}
