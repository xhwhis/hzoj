#include <stdio.h>
#include <string.h>
#define max_n 100

char str1[max_n + 5], str2[max_n + 5];
int num1[max_n + 5] = {0}, num2[max_n + 5] = {0};
int ans[max_n * 2 + 5] = {0};

int main() {
    scanf ("%s%s", str1, str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i < len1; i++) {
        num1[len1 - i - 1] = str1[i] - '0';
    }
    for (int i = 0; i < len2; i++) {
        num2[len2 - i - 1] = str2[i] - '0';
    }
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            ans[i + j] += num1[i] * num2[j];
            if (ans[i + j] < 10) continue;
            ans[i + j + 1] += ans[i + j] / 10;
            ans[i + j] %= 10;
        }
    }
    int len = len1 + len2;
    while (!ans[len]) {
        len--;
    }
    for (int i = len; i >= 0; i--) {
        printf ("%d", ans[i]);
    }
    return 0;
}
