#include <stdio.h>
#include <string.h>

int main() {
    char str1[1005], str2[1005];
    gets(str1);
    gets(str2);
    int ans = 0;
    int len1 = strlen(str1), len2 = strlen(str2);
    for (int i = 0; i <= len1 - len2; i++) {
        if (strncmp(&str1[i], str2, len2) == 0) ans++;
    }
    printf ("%d", ans);
    return 0;
}
