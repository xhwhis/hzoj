#include <stdio.h>

int main() {
	int n;
	scanf ("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			printf ("%d*%d=%d", i, j, i * j);
			if (j != n)
				printf ("\t");
		}
		printf ("\n");
	}
	return 0;
}
