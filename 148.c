#include <stdio.h>
#include <string.h>
#define max_n 50

int main() {
    char str[max_n + 5], ans[max_n + 5];
    scanf ("%s", str);
    int a = strlen(str);
    for (int i = 0, j = a - 1; i < a, j >= 0; i++, j--) {
        ans[i] = str[j]; 
    }
    for (int i = 0; i < a; i++) {
        printf ("%c", ans[i]);
    }
    return 0;
}
