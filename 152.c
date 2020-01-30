#include <stdio.h>

char dates[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main() {
	int n;
	scanf ("%d", &n);
	printf ("%s", dates[(n + 2) % 7]);
	return 0;
}
