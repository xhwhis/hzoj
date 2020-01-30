#include <cstdio>
#include <cmath>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d %d", &p, &q);
    printf("%.4lf\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
	double head = -20, tail = 20, mid;
	while (fabs(tail - head) > EPSILON) {
		mid = (head + tail) / 2;
		if (func(p, q, head) * func(p, q, mid) > 0) head = mid;
		else tail = mid;
	}
	return head;
}

double f(int p, int q, double x) {
    return p * x + q;
}
