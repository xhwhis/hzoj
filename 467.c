#include <stdio.h>
#include <inttypes.h>

int main() {
	int n;
	int64_t ans = 1;
	scanf ("%d", &n);
	for (int i = 1; i <= n; i++) {
		ans *= i;
	}
	printf("%" PRId64, ans);
	return 0;
}
