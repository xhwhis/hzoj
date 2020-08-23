#include <stdio.h>

int main() {
	int n, ans = 0;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++) {
		int num;
		scanf ("%d", &num);
		if (num > ans) ans = num;
	}
	printf ("%d", ans);
	return 0;
}
