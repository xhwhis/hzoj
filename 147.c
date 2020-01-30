#include <stdio.h>
#include <string.h>
#define max_n 10000

int main() {
	char num[max_n];
	scanf ("%s", num);
	int a = strlen(num);
	if (num[a - 1] & 1) {
		printf ("NO");
	} else {
		printf ("YES");
	}
	return 0;
}
