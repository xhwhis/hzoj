#include <stdio.h>
#define max_n 100000

int a[max_n + 5];

int get_ans(int n, int m) {
    int ans = 0;
    for (int i = 0; i < n - m + 1; i++) {
        int sum = 0;
        for (int j = i; j <= i + m - 1; j++) {
            sum += a[j];
        }
        if (ans < sum) ans = sum;
    }
    return ans * 1000 / m;
}

int main() {
    int n, m;
    scanf ("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    printf ("%d", get_ans(n, m));
    return 0;
}
