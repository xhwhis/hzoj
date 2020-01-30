#include <stdio.h>
#define max_n 500000

int a[max_n + 5];
int dp[max_n + 5] = {0};

int binary_search(int head, int tail, int num) {
    while (head <= tail) {
        int mid = (head + tail) >> 1;
        if (dp[mid] == num) return mid;
        else if (dp[mid] < num) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    int len = 0;
    for (int i = 0; i < n; i++) {
        int index = binary_search(0, len, a[i]);
        if (index < 0) index = -(index + 1);
        dp[index] = a[i];
        if (index == len) len++;
    }
    printf ("%d", len);
    return 0;
}
