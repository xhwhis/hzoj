#include <stdio.h>
#include <math.h>

int main() {
    double a, b, angle;
    scanf ("%lf%lf%lf", &a, &b, &angle);
    double c = sqrt(a * a + b * b - 2 * a * b * cos(angle * acos(-1) / 180));
    printf("%.6f", c);
    return 0;
}
