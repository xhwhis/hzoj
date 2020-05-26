#include <stdio.h>
#define max_n 100000

int a[max_n + 5];
int n, m;

int binary_search(int num) {
    int head = 0, tail = n - 1, mid;
    while (head < tail) {
        mid = (head + tail + 1) >> 1;
        if (a[mid] <= num) head = mid;
        else tail = mid - 1;
    }
    return a[head];
}

int main() {
    scanf ("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (int i = 0; i < m; i++) {
        int q;
        scanf ("%d", &q);
        i && printf (" ");
        printf ("%d", binary_search(q));
    }
    return 0;
}
