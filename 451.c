#include <stdio.h>
#define max_n 100000

int a[max_n + 5];

void quick_sort(int *a, int left, int right) {
    if (left >= right) return ;
    int i = left, j = right, key = a[left];
    while (i < j) {
        while (i < j && key <= a[j]) j--;
        a[i] = a[j];
        while (i < j && key >= a[i]) i++;
        a[j] = a[i];
    }
    a[i] = key;
    quick_sort(a, left, i - 1);
    quick_sort(a, i + 1, right);
}

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    quick_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf ("%d\n", a[i]);
    }
    return 0;
}
