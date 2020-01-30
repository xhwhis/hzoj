#include <stdio.h>

int main() {
    int n;
    scanf ("%d", &n);
    double money;
    if (n <= 240) money = n * 0.4783;
    else if (n <= 400) money = 240 * 0.4783 + (n - 240) * 0.5283;
    else money = 240 * 0.4783 + 160 * 0.5283 + (n - 400) * 0.7783;
    printf ("%.1lf", money);
    return 0;
}
