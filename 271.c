#include <stdio.h>
#define max_n 300000

int arr[max_n + 5], val[max_n + 5], head, tail;

int main() {
    int n, k;
    scanf ("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        while (tail - head && arr[i] < arr[val[tail - 1]]) {
            tail--;
        }
        val[tail++] = i;
        if (i + 1 < k) continue;
        if (i - val[head] == k) {
            head++;
        }
        i + 1 == k || printf (" ");
        printf ("%d", arr[val[head]]);
    }
    printf ("\n");
    for (int i = 0; i < n; i++) {
        while (tail - head && arr[i] > arr[val[tail - 1]]) {
            tail--;
        }
        val[tail++] = i;
        if (i + 1 < k) continue;
        if (i - val[head] == k) {
            head++;
        }
        i + 1 == k || printf (" ");
        printf ("%d", arr[val[head]]);
    }
    printf ("\n");
    return 0;
}
