#include <stdio.h>

int main() {
    char ch;
    scanf ("%c", &ch);
    for (int i = 0; i < ch - 'A' + 1; i++) {
        for (int j = 0; j < i; j++) {
            printf (" ");
        }
        for (int j = ch - 'A' - i; j >= 0; j--) {
			printf ("%c", j + 'A');
        }
        for (int j = 0; j < ch - 'A' - i; j++) {
			printf ("%c", j + 'A');
        }
        printf ("\n");
    }
    return 0;
}
