#include <stdio.h>

int win(char a, char b) {
    if (a == b) {
        return -1;
    } else if ((a == 'H' && b == 'O') || (a == 'O' && b == 'Y') || (a == 'Y' && b == 'H')) {
        return 1;
    }
    return 0;
}

int main() {
    char ming_l, ming_r, hua_l, hua_r;
    scanf ("%c %c\n%c %c", &ming_l, &ming_r, &hua_l, &hua_r);
    if (win(ming_l, hua_l) == 1) {
        if (win(ming_l, hua_r)) {
            printf ("MING");
        } else {
            if (win(ming_r, hua_r) == 1) {
                printf ("MING");
            } else {
                printf ("LIHUA");
            }
        }
    } else if (win(ming_l, hua_l) == -1) {
        if (win(ming_r, hua_r) == 1) {
            printf ("MING");
        } else if (win(ming_r, hua_r)) {
            printf ("TIE");
        } else {
            printf ("LIHUA");
        }
    } else {
        if (win(ming_r, hua_l) != 1) {
            printf ("LIHUA");
        } else {
            if (win(ming_r, hua_r)) {
                printf ("MING");
            } else {
                printf ("LIHUA");
            }
        }
    }
    return 0;
}
