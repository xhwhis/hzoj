#include <stdio.h>
#include <string.h>

int main() {
    char names[10][25];
    for (int i = 0; i < 10; i++) {
        scanf("%s", names[i]);
    }
    for (int i = 0; i < 10; i++) {
        int k = i;
        for (int j = i + 1; j < 10; j++) {
            if (strcmp(names[k], names[j]) > 0) k = j;
        }
        char temp[25];
        strcpy(temp, names[i]);
        strcpy(names[i], names[k]);
        strcpy(names[k], temp);
    }
    for (int i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
