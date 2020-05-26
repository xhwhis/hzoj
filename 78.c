#include <stdio.h>
#include <string.h>
#define max_n 100

char str1[max_n + 5], str2[max_n + 5];
int num1[max_n + 5], num2[max_n + 5];

int main() {
    scanf ("%s\n%s", str1, str2);
    num1[0] = strlen(str1);
    num2[0] = strlen(str2);
    for (int i = num1[0], j = 0; i > 0; i--, j++) {
        num1[i] = str1[j] - '0';
    }
    for (int i = num2[0], j = 0; i > 0; i--, j++) {
        num2[i] = str2[j] - '0';
    }
    int len = (num1[0] > num2[0] ? num1[0] : num2[0]);
    for (int i = 1; i <= len; i++) {
        num1[i] += num2[i];
    }
    for (int i = 1; i <= len; i++) {
        if (num1[i] < 10) break;
        num1[i + 1] += num1[i] / 10;
        num1[i] %= 10;
        len += (i == len);
    }
    for (int i = len; i > 0; i--) {
        printf ("%d", num1[i]);
    }
    return 0;
}
