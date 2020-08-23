#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf ("%[^\n]s", str);
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z')) a++;
        else if ('0' <= str[i] && str[i] <= '9') b++;
        else if (str[i] == ' ') c++;
        else d++;
    }
    printf ("%d %d %d %d", a, b, c, d);
    return 0;
}
