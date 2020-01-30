#include <stdio.h>
#define max_n 1000000

char str[max_n + 5];

int main() {
    scanf ("%[^\n]s", str);
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') printf ("%%20");
        else printf ("%c", str[i]);
    }
    return 0;
}
