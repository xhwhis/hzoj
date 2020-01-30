#include <stdio.h>
#include <math.h>

double func(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += 2 * pow(0.98, i);
    }
    return sum;
}

int main() {
    double n;
    scanf ("%lf", &n);
    int cnt = 1;
    while (func(cnt) < n) {
        cnt++;
    }
    printf ("%d", cnt);
    return 0;
}
