#include <stdio.h>

int is_val(int n) {
	return ((n % 4 == 0 && n % 100) || n % 400 == 0);
}

int main() {
	int x, y, cnt = 0;
	scanf ("%d%d", &x, &y);
	for (int i = x; i <= y; i++) {
		if (is_val(i)) cnt++;
	}
	printf ("%d", cnt);
	return 0;
}
