#include <stdio.h>
#include <string.h>
#define max_n 1048576

char str[max_n + 5] = {'A'};

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 1; i < n; i++) {
        int len = strlen(str);
        for (int j = 0; j < len; j++) {
            str[2 * len - j] = str[j];
        }
        str[len] = 'A' + i;
    }
    printf ("%s", str);
    return 0;
}
