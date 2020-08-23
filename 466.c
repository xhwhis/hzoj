#include <stdio.h>

int is_hui(int n) {
	int num1 = n, num2 = 0;
	while (n) {
		num2 = num2 *10 + n % 10;
		n /= 10;
	}
	return num1 == num2;
}

int main() {
	int n, count = 0;
	scanf ("%d", &n);
	for (int i = 1; i <= n; i++) {
		if(is_hui(i)) count++;
	}
	printf("%d", count);
	return 0;
}
