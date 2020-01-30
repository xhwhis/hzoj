#include <stdio.h>
#include <string.h>
#define max_n 50

int main() {
	char str[max_n];
	scanf ("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'z' || str[i] == 'Z') str[i] -= 26;
		str[i]++;
		if (str[i] < 65 || (90 < str[i] && str[i] < 97) || str[i] > 122) str[i]--;
	}
	printf ("%s", str);
	return 0;
}
