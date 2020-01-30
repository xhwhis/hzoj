#include <stdio.h>

int main() {
    int n, m;
    double matrix[30][30];
    scanf ("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf ("%lf", &matrix[i][j]);
        }
    }
    for (int j = 0; j < m; j++) {
        double sum = 0;
        for (int i = 0; i < n; i++) {
            sum += matrix[i][j];
        }
        printf ("%g\n", sum);
    }
    return 0;
}
