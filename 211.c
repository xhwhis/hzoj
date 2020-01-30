#include <stdio.h>
#include <string.h>

char names[35][45];
char re_names[35][45];

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int p = 0, q = strlen(names[i]) - 1; p < strlen(names[i]), q >= 0; p++, q--) {
            re_names[i][p] = names[i][q];
        }
    }
    for (int i = 0; i < n; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(re_names[k], re_names[j]) > 0) k = j;
        }
        char temp[15];
        strcpy(temp, re_names[i]);
        strcpy(re_names[i], re_names[k]);
        strcpy(re_names[k], temp);
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", re_names[i]);
    }
    return 0;
}
