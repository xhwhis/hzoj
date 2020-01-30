#include <stdio.h>
#define max_n 1000

int a[max_n + 5];

int is_val(int mid, int n) {
    int num1 = 0, num2 = 0;
    for (int i = 0; i < mid; i++) {
        if (a[i] > a[mid]) num1++;
    }
    for (int i = mid + 1; i < n; i++) {
        if (a[i] > a[mid]) num2++;
    }
    return num1 == num2;
}

int main() {
    int n, ans = 0;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (is_val(i, n)) ans++;
    }
    printf ("%d", ans);
    return 0;
}
