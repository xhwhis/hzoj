#include <stdio.h>
#define max_n 1000000

int length[max_n + 5] = {0};
int n;

long long cut(int max) {
    long long res = 0;
    for (int i = 0; i < n; i++) {
        if (length[i] > max) res += length[i] - max;
    }
    return res;
}

int binary_search(int head, int tail, int need) {
    int mid;
    while (head < tail - 1) {
        mid = (head + tail) >> 1;
        if (cut(mid) < need) tail = mid;
        else head = mid;
    }
    return head;
}

int main() {
    int m, maxl = 0;
    scanf ("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &length[i]);
        if (maxl < length[i]) maxl = length[i];
    }
    printf ("%d\n", binary_search(0, maxl, m));
    return 0;
}
