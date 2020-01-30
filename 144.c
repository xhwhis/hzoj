#include <stdio.h>
#include <string.h>
#define max_n 100

int main() {
	char str[max_n + 5];
	scanf ("%s", str);
	int ans = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'A') ans++;
	}
	printf ("%d", ans);
	return 0;
}
