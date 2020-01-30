#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=0; i < n; i++) {
        for (int j = 0; j < (n - i) * 2; j++) {
            printf("A");
        }
        printf("\n");
    }
    return 0;
}
