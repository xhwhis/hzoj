#include <stdio.h>
#define max_n 100000

int a[max_n + 5] = {0};
int n;

int binary_search(int num) {
    int head = 0, tail = n - 1, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (a[mid] == num) return mid;
        else if (a[mid] > num) tail = mid - 1;
        else head = mid + 1;
    }
    return 0;
}

int is_val(int s) {
    if (a[0] + a[1] > s || a[n - 2] + a[n - 1] < s) return 0;
    for (int i = 0; i < n; i++) {
        if (binary_search(s -a[i]) && binary_search(s - a[i]) != i) return 1;
    }
    return 0;
}

int main() {
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    int s;
    scanf ("%d", &s);
    if (is_val(s)) printf ("Yes");
    else printf ("No");
    return 0;
}
