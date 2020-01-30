#include <stdio.h>

int main() {
    int matrix[30][30], n, m;
    scanf ("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf ("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        double sum = 0;
        for (int j = 0; j < m; j++) {
            sum += matrix[i][j];
        }
        printf ("%lf\n", sum / m);
    }
    return 0;
}
