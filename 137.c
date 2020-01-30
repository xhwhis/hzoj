#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char a = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
