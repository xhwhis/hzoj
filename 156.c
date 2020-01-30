#include <stdio.h>
#include <math.h>

int is_prime(int n) {
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) return 0;
	return 1;
}

int is_square(int n) {
	int m = floor(sqrt(n) + 0.5);
	return m * m == n;
}

int main() {
	int a, b, flag=0, count = 0;
	scanf ("%d%d", &a, &b);
	for (int i=a; i<=b; i++) {
		if (is_square(i / 100) && is_square(i % 100) && is_prime(i)) {
			flag && printf (" ");
			printf ("%d", i);
			flag = 1;
			count++;
		}
	}
	printf ("\n%d", count);
	return 0;
}
