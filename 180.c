#include <stdio.h>

int main() {
	int n;
	long long ans = 1;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++) {
		ans *= 2;
	}
	printf ("%lld", ans);
	return 0;
}
