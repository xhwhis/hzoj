#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<=n; i++) {
        for(int j=0; j<i; j++) {
            printf(" ");
        }
        for(int j=i; j<=n; j++) {
            printf("%c", 'A'+j);
        }
        for(int j=n-1; j>=i; j--) {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    for(int i=n-1; i>=0; i--) {
        for(int j=0; j<i; j++) {
            printf(" ");
        }
        for(int j=i; j<=n; j++) {
            printf("%c", 'A'+j);
        }
        for(int j=n-1; j>=i; j--) {
            printf("%c", 'A'+j);
        }
        printf("\n");
    }
    return 0;
}
