#include <stdio.h>
#define max_n 100

int a[max_n + 5];

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            if (a[j] < a[j - 1]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        i && printf (" ");
        printf ("%d", a[i]);
    }
    return 0;
}
