#include <stdio.h>
#define max_n 30

int main() {
    int matrix[max_n][max_n], n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf ("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        printf ("%d\n", matrix[i][i]);
    }
    return 0;
}
