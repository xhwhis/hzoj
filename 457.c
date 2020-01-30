#include <stdio.h>
#include <stdlib.h>
#define max_n 1000

int a[max_n + 5];
int val[max_n + 5];

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

int is_val(int *a, int left, int right) {
    while (left <= right) {
        if (a[left] != left + 1 || a[right] != right + 1) return 0;
        left++;
        right--;
    }
    return 1;
}

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        val[i] = abs(a[i] - a[i + 1]);
    }
    quick_sort(val, 0, n - 2);
    if (is_val(val, 0, n - 2)) printf ("Jolly");
    else printf ("Not jolly");
    return 0;
}
