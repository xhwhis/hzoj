#include <stdio.h>

int num[31] = {4, 7};

void init() {
    for (int i = 2; i < 31; i++) {
        num[i] = num[i - 1] + num[i - 2];
    }
}

int main() {
    init();
    int n;
    scanf ("%d", &n);
    printf ("%d/%d\n", num[n - 1], num[n]);
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (double)num[i] / num[i + 1];
    }
    printf ("%.2lf", sum);
    return 0;
}
