#include <stdio.h>
#include <math.h>
#define pi 3.14

int main() {
    double r, h;
    scanf ("%lf%lf", &r, &h);
    printf ("%.2lf", r * r * (pi + 4) + r * h * (pi + 2 + 2 * sqrt(2)));
    return 0;
}
