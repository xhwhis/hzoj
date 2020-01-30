#include <stdio.h>
#include <math.h>
#define mix_n 1e-5

double func(double x) {
    return x * exp(x);
}

double binary_search(double a) {
    double head = 0, tail = 18, mid;
    while (tail - head > mix_n) {
        mid = (head + tail) / 2;
        if ((func(mid) - a) * (func(head) - a) > 0) head = mid;
        else tail = mid;
    }
    return head;
}

int main() {
    double a;
    scanf ("%lf", &a);
    printf ("%.4lf", binary_search(a));
    return 0;
}
