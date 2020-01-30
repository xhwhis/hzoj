#include <stdio.h>
#include <string.h>

int main() {
    char str[30];
    scanf ("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        printf ("%s\n", str);
        char ch1 = str[len - 2], ch2 = str[len - 1];
        for (int j = len - 1; j >= 2; j--) {
            str[j] = str[j - 2];
        }
        str[0] = ch1;
        str[1] = ch2;
    }
    return 0;
}
