#include <stdio.h>
#define max_n 100

int a[max_n + 5];

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    int num;
    scanf ("%d", &num);
    for (int i = 0; i < n; i++) {
        if (a[i] == num) {
            printf ("%d", i + 1);
            break;
        }
    }
    return 0;
}
