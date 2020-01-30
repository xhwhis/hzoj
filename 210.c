#include <stdio.h>
#include <string.h>

char words[30][15];

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }
    for (int i = 0; i < n; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(words[k], words[j]) > 0) k = j;
        }
        char temp[15];
        strcpy(temp, words[i]);
        strcpy(words[i], words[k]);
        strcpy(words[k], temp);
    }
    for (int i = 0; i < n; i++) {
        i && printf (" ");
        printf("%s", words[i]);
    }
    return 0;
}
