#include <stdio.h>
#include <math.h>

int main() {
	double n, m;
	scanf ("%lf%lf", &n, &m);
	printf ("%.lf", ceil(n / m));
	return 0;
}
