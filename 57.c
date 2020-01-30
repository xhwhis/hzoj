#include <stdio.h>
#include <math.h>

int digits(int n) {
    return floor(log10(n));
}

int get_d(int n) {

}

int main() {
    int x, y, z;
    scanf ("%d%d%d", &x, &y, &z);
    printf ("%d", get_d(x) * get_d(y) * get_d(z));
    return 0;
}
