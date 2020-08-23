#include <stdio.h>
#define max_n 1000000

int arr[max_n + 5] = {0};
int n, k;

int binary_search(int num) {
    int head = 0, tail = n - 1;
    while (head <= tail) {
        int mid = (head + tail) >> 1;
        if (arr[mid] == num) return mid + 1;
        if (arr[mid] > num) tail = mid - 1;
        else head = mid + 1;
    }
    return 0;
}

int main() {
    scanf ("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
    }
    for (int i = 0; i < k; i++) {
        int num;
        scanf("%d", &num);
        i && printf (" ");
        printf ("%d", binary_search(num));
    }
    return 0;
}
