#include <stdio.h>
#include <math.h>

int main() {
	long long a, b, c, ans = 0;
	scanf("%lld", &c);
	for (a = 1; a * a * 2 <= c * c; a++) {
		b = sqrt(c * c - a * a);
		if (a * a + b * b == c * c) ans++;
	}
	printf ("%lld", ans);
	return 0;
}
