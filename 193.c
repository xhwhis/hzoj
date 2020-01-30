#include <stdio.h>
#define max_n 100000

int a[max_n + 5] = {0};
int n;

int binary_search(int num) {
    int head = 0, tail = n - 1, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (a[mid] == num) return 1;
        else if (a[mid] > num) tail = mid - 1;
        else head = mid + 1;
    }
    return 0;
}

int main() {
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    int k, s;
    scanf ("%d%d", &k, &s);
    if (binary_search(s - k)) printf ("Yes");
    else printf ("No");
    return 0;
}
